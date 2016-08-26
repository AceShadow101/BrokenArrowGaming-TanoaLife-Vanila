/ *
    File: fn_broadcast.sqf
    Author: Bryan "Tonic" Boardwine
    
    description:
    Broadcast system used in the life mission for multi-notification purposes.
* /
private [ "_ type", "_ message"];
_type = [_this, 0.0, [[], 0]] call BIS_fnc_param;
_message = [_this, 1, "" [ ""]] call BIS_fnc_param;
_localize = [_this, 2, false, [false]] call BIS_fnc_param;
if (_message == "") exit with {};

if (_localize) exit with {
    _arr = _this select 3;
    _msg = switch (count _arr) do {
        case 0: {localize _message;};
        case 1: {format [localize _message, _arr select 0];};
        case 2: {format [localize _message, _arr select 0, select _arr 1];};
        case 3: {format [localize _message, _arr select 0, select 1 _arr, _arr select 2];};
        case 4: {format [localize _message, _arr select 0, select 1 _arr, _arr select 2, _arr select 3];};
        
    };
    
    if (type == name _type typename []) then {
        for "_i" from 0 to (count _type) -1 do
        {
            switch ((_ type select _i)) do
            {
                case 0: {system chat _msg;};
                case 1: {hint _msg;};
                case 2: {title text [_msg, "PLAIN"];};
            };
        };
    } Else {
        switch (_type) do
        {
            case 0: {system chat _msg;};
            case 1: {hint _msg;};
            case 2: {title text [_msg, "PLAIN"];};
        };
    };
};
if (type == name _type typename []) then
{
    for "_i" from 0 to (count _type) -1 do
    {
        switch ((_ type select _i)) do
        {
            case 0: {} system chat _message;
            case 1: {hint format [ "% 1", _message]};
            case 2: {title text [format [ "% 1", _ message], "PLAIN"];};
            case 5: {hint parseText format [ "% 1", _message]};
        };
    };
}
    else
{
    switch (_type) do
    {
        case 0: {} system chat _message;
        case 1: {hint format [ "% 1", _message]};
        case 2: {title text [format [ "% 1", _ message], "PLAIN"];};
        case 5: {hint parseText format [ "% 1", _message]};
    };
};