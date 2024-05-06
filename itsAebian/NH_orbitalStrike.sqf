/*
	author: @Aebian
	description: Orbital Strike
	returns: Orbital Strike on position looked at
// [this, "Laserdesignator_03"] execVM "itsAebian\NH_OrbitalStrike.sqf"
*/

params["_caller", "_device"];
	
if (cameraOn == _caller && cameraView == "GUNNER" && (currentWeapon _caller) == _device) then
{

	 _lasertgt = laserTarget  _caller;
	_strikePos = getPosASL _lasertgt;

	_weap = "RHS_ammo_23mm_AA";
	_amount = 120;


	for "_i" from 1 to 4 do 
	{
		for [{_x = 0}, {_x <= _amount}, {_x = _x + 1}]

			do
				{
				_orbitalstrike = createVehicle [_weap  , _strikePos, [], 20, "CAN_COLLIDE"];
				_orbitalstrike setPosASL [position _orbitalstrike select 0, position _orbitalstrike select 1, 4200];

				_orbitalstrike setVelocity [0,0,-2000];
				};

		sleep 0.5;
	};

};