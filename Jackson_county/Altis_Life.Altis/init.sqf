/*
	File: init.sqf
	Author:

	Description:

*/
StartProgress = false;

[] execVM "briefing.sqf"; //Load Briefing
[] execVM "KRON_Strings.sqf";

StartProgress = true;

introSpawn = nil;
[] spawn life_fnc_autoMessages;

//Scripts Folder
[] execVM "server\intro.sqf";
[] execVM "server\statusBar.sqf";
[] execVM "server\nosidechat.sqf";