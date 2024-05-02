#include "..\script_component.hpp"
params ["_unit", "_array"];
private ["_arrayCount", "_currentItem"];

if (_array isEqualTo [""]) exitWith {};

_arrayCount = count _array;
for "_i" from 0 to (_arrayCount - 1) do {
    _currentItem = _array select _i;

    if ((_i + 1 < _arrayCount) && {(_array select (_i + 1)) isEqualType 0}) then {
        for "_j" from 1 to (_array select (_i + 1)) do {
            switch (true) do {
                case (_unit canAddItemToBackpack _currentItem): { _unit addItemToBackpack _currentItem };
            };
        };
        _i = _i + 1;
    } else {
        if (_currentItem isKindOf ["ItemRadio", configFile >> "CfgWeapons"]) then {
            [_unit, _currentItem] call FUNC(replaceRadio);
        } else {
            switch (true) do {
                case (_unit canAddItemToBackpack _currentItem): { _unit addItemToBackpack _currentItem };
            };
        };
    };
};
