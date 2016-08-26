waitUntil {!(isNull (findDisplay 46))};
/*
File: fn_statusBar.sqf
Author: Some French Guy named Osef I presume, given the variable on the status bar
Edited by: [midgetgrimm]
Description: Puts a small bar in the bottom right of screen to display in-game information
*/
4 cutRsc ["osefStatusBar","PLAIN"];

[] spawn {
	sleep 5;
	_counter = 360;
	_timeSinceLastUpdate = 0;
	Server_Session = 21600;

	while {true} do
	{
		TimeTillRestart = Server_Session - ServerTime;
		sleep 1;
		if(isNull ((uiNamespace getVariable "osefStatusBar")displayCtrl 1000)) then
		{
			diag_log "Statusbar Loaded";
			disableSerialization;
			_rscLayer = "osefStatusBar" call BIS_fnc_rscLayer;
			_rscLayer cutRsc["osefStatusBar","PLAIN"];
		};
		_counter = _counter - 1;
			((uiNamespace getVariable "osefStatusBar")displayCtrl 1000)ctrlSetStructuredText parseText format["<t size='1px'> %1 Minutes</t> | <img size='1' image='icons\icop.paa'/><t size='1px'> %2</t> | <img size='1' image='icons\civ.paa'/><t size='1px'> %3</t> | <img size='1' image='icons\iems.paa'/><t size='1px'> %4</t> | <img size='1' image='icons\icash.paa'/><t size='1px'> %5</t> | <img size='1' image='icons\iatm.paa'/><t size='1px'> %6</t>",[TimeTillRestart, "HH:MM:SS"] call BIS_fnc_secondsToString, west countSide playableUnits, civilian countSide playableUnits, independent countSide playableUnits,[life_cash] call life_fnc_numberText,[life_atmbank] call life_fnc_numberText, round diag_fps];
	};
};
