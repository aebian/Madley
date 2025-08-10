 /*
    author: @aebian
    description: Teleport Action
    returns: New Horizons
    created: 2025-07-23
    updated: 2025-07-27
    // [this, "Sergeant", ["Acess SGC Science Division","SGC","Secret Laboratory","Classified"],[382.311,16238.2,527.99],358.556] execVM "itsAebian\NH_teleportAction.sqf";
*/

params ["_object", "_rank", "_text", "_tpos", "_tdir"];
_text params ["_line0", "_line1", "_line2", "_line3"];

[     
 _object,                
 _line0,               
 "\a3\ui_f_oldman\Data\IGUI\Cfg\holdactions\map_ca.paa",      
 "\a3\ui_f_oldman\Data\IGUI\Cfg\holdactions\map_ca.paa",    
 "_this distance _target < 3",           
 "_caller distance _target < 3",           
 {},                  
 {},                  
 { 

_this params ["_target", "_caller", "_actionId", "_arguments"];
_arguments params ["_rank", "_text", "_tpos", "_tdir"];
_text params ["_line0", "_line1", "_line2", "_line3"];

 _fnc_rankNameToId = {
    params ["_rankName"];
    
    switch (toLower _rankName) do 
    {
        case "private": { 0 };
        case "corporal": { 1 };
        case "sergeant": { 2 };
        case "lieutenant": { 3 };
        case "captain": { 4 };
        case "major": { 5 };
        case "colonel": { 6 };
        default { 0 };
    };
};

_requiredRankId = [_rank] call _fnc_rankNameToId;

if (rankId _caller >= _requiredRankId ) then
{
	sleep 3;
    titleCut ["", "BLACK OUT", 2];
    [
    [_line1,"font = 'PuristaSemiBold'"],
    ["","<br/>"],
    [_line2,"font = 'PuristaMedium'"],
    ["","<br/>"],
    [_line3,"font = 'PuristaLight'"]
    ]  execVM "\a3\missions_f_bootcamp\Campaign\Functions\GUI\fn_SITREP.sqf";

    sleep 3;
    "dynamicBlur" ppEffectEnable true;
    "dynamicBlur" ppEffectAdjust [6];
    "dynamicBlur" ppEffectCommit 0;
    "dynamicBlur" ppEffectAdjust [0.0];
    "dynamicBlur" ppEffectCommit 5;
    titleCut ["", "BLACK IN", 5];

    if (vehicle _caller != _caller && driver (vehicle _caller) == _caller) then 
    {
        
        (vehicle _caller) setPosASL _tpos;
        (vehicle _caller) setVectorUp [0,0,1];
        (vehicle _caller) setDir _tdir;
    } 
    else 
    {    
        _caller setPosASL _tpos;
        _caller setFormDir _tdir;
    };
};    
    
},         
 {},                  
 [_rank, _text, _tpos, _tdir],                  
 1,                  
 0,                  
 false,     
 false                 
] remoteExec ["BIS_fnc_holdActionAdd", 0, _object];