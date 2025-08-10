/*
    author: @aebian
    description: Make unit take less damage than usual
    returns: nothing
	created: 2025-07-16
	updated: -
    // [(_this select 0), 0.01] execVM "itsAebian\NH_healthModifier.sqf";
 */

params["_protectee", "_modifier"];

if (isClass (configFile >> "CfgPatches" >> "ace_medical")) then 
{

_protectee addEventHandler ["handleDamage", {
    params ["_unit", "_selection", "_damage", "_source", "_projectile", "_index"];
    
    _scaled = _damage * _modifier;
    _scaled = 0 max _scaled;
    
    // Replace with new damage
    _unit setHit [_selection, (_unit getHit _selection) + _scaled - _damage];
    
    _damage = _scaled;
    _unit call ace_medical_fnc_woundReceived;
    true
}];
}
else 
{
	(_protectee) addEventHandler ["HandleDamage", {_modifier}];
}