/*
    author: @aebian
    description: Mk41 VLS Launch Script for B_Ship_MRLS_01_F
    returns: damage on the target
    created: 2025-08-31
    updated: 2025-09-03
	 // [VALOR_VLS, [3751.79,3897.56,54.7498], 1] execVM "itsAebian\NH_vlsLaunch.sqf";
 */

params [
    ["_vls", objNull, [objNull]],
    ["_targetPosASL", [0,0,0], [[]], [3]], 
    ["_missiles", 1, [0]],
    ["_radius", 50, [0]]
];

if (isNull _vls) exitWith { diag_log "[vlsLaunch] No VLS specified, cannot continue."; };
if !(typeOf _vls == "B_Ship_MRLS_01_F") exitWith { diag_log "[vlsLaunch] Invalid VLS type, cannot continue."; };

private _muzzle = currentMuzzle gunner _vls;
private _currentAmmo = _vls ammo _muzzle;
if (_currentAmmo <= 0) exitWith { diag_log format ["[vlsLaunch] VLS: %1 is out of ammo, cannot fire!", vehicleVarName _vls]};

private _vlsCapacity = _vls getVariable ["VLS_Capacity", _currentAmmo];
if (_missiles > _vlsCapacity) exitWith { diag_log format ["[vlsLaunch] VLS: %1 cannot fire %2 missiles, current launch capacity is %3", vehicleVarName _vls, _missiles, _vlsCapacity]; };

_vlsCapacity = (_vlsCapacity - _missiles) max 0;
_vls setVariable ["VLS_Capacity", _vlsCapacity];
diag_log format ["[vlsLaunch] VLS: %1 has a launch capacity of %2 remaining.", vehicleVarName _vls, _vlsCapacity];

_targetPosAGL = ASLtoAGL _targetPosASL;

private _objTarget = nearestObjects [_targetPosAGL, ["AllVehicles", "StaticWeapon", "House"], _radius];
private _laserTarget = createVehicle ["laserTargetC", _targetPosAGL, [], 0, "CAN_COLLIDE"];

_laserTarget setPosASL _targetPosASL;
private _targetName = format ["VLS_laserTarget_%1", round(random 999999)];

_laserTarget setVehicleVarName _targetName;
_laserTarget attachTo [(_objTarget select 0)];

west reportRemoteTarget[ _laserTarget, 20080];

_vls setVariable [format ["%1_MCount", _targetName], _missiles];
_vls setVariable [format ["%1_Target", _targetName], _laserTarget];

[_vls, ["Fired", {
    params ["_unit", "", "", "", "", "", "_projectile"];

    [_projectile, _unit] spawn 
    {
        params ["_proj", "_vls"];
    
        private _missileTarget = missileTarget _proj;
        private _targetName = vehicleVarName _missileTarget;
    
        waitUntil {!alive _proj};
        
        private _currentCount = _vls getVariable [format ["%1_MCount", _targetName], 0];
        private _newCount = _currentCount - 1;
        _vls setVariable [format ["%1_MCount", _targetName], _newCount];
        
        if (_newCount <= 0) then 
        {
            detach _missileTarget;
            deleteVehicle _missileTarget;
        };
    };
}]] remoteExecCall ["addEventHandler", 0, _vls];

for "_i" from 1 to _missiles do 
{
    waitUntil {_vls weaponReloadingTime [gunner _vls, _muzzle] == 0};
    _vls fireAtTarget [_laserTarget, _muzzle];
    sleep 4;
};