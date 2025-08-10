/*
	author: @aebian
	description: Script to place a carpet of mines based on a trigger for easier layer.
	returns: Mines, lots of mines!
	created: 2025-07-09
	updated: -
	// [NH_MineField_01, west, ["APERSMine"], 1, true] execVM "itsAebian\NH_mineLayer.sqf"; 
*/

params [
	"_trigger",
	"_placedBy",
	"_mineClasses",
	["_spacing", 1],
	["_markMap", false]
];

private _center = getPosATL _trigger;
triggerArea _trigger params ["_a", "_b", "_angle", "_isRect", "_z"];

private _pos = getPosWorld _trigger;
private _dir = [sin _angle, cos _angle, 0];
private _signSpacing = _spacing * 8;



for "_mineDispense" from -_b to _b step _spacing do {
	
	private _flatPos = _pos vectorAdd (_dir vectorMultiply _mineDispense);
	private _terrainZ = getTerrainHeightASL _flatPos;

	private _spawnPos = [_flatPos select 0, _flatPos select 1, _terrainZ];

	private _mine = createMine [selectRandom _mineClasses, _spawnPos, [], 0];
	_placedBy revealMine _mine;

	_mine setPosWorld _spawnPos;
	_mine setVectorUp (surfaceNormal _spawnPos);

	diag_log format ["[MineLayer] Placed mine #%1 at %2", _mineDispense, _spawnPos];
};

for "_signs" from -_b to _b step _signSpacing do {

	private _flatPos = _pos vectorAdd (_dir vectorMultiply _signs);
	private _terrainZ = getTerrainHeightASL _flatPos;

	private _spawnPos = [_flatPos select 0, _flatPos select 1, _terrainZ];
	private _dangermarker = createVehicle ["FlagMarker_01_F", _spawnPos, [], 0];
	_dangermarker setObjectTexture [0,"#(argb,8,8,3)color(0.5,0.1,0.12,1,co)"];

	_dangermarker setPosWorld _spawnPos;
	_dangermarker setVectorUp (surfaceNormal _spawnPos);

};

if (_markMap) then {
	private _mName = format ["minefield_%1", diag_tickTime];
	private _m = createMarker [_mName, _center];
	_m setMarkerShape (if (_isRect) then {"RECTANGLE"} else {"ELLIPSE"});
	_m setMarkerSize [_a, _b];
	_m setMarkerDir _angle;
	_m setMarkerColor "ColorRed";
	_m setMarkerAlpha 0.5;
	_m setMarkerText "Minefield";
};