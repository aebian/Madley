/*
    author: @aebian
    description: Automation for Darter-Like drones
    returns: Automation
    created: 2025-10-06
    updated: 2025-10-06
	 // [UAV_01, "laseTarget", TARGE01] execVM "itsAebian\NH_uavAutomation.sqf";
 */


params[ "_uav", "_action", "_target"];

 switch (_action) do 
{

    case "laseTarget": // Enable DEFENSE
    {
		(gunner _uav) doWatch _target; 
		(gunner _uav) doTarget _target; 
		_uav fireAtTarget [_target, (_uav weaponsTurret [0]) select 0];

	}
}