#include "..\..\script_macros.hpp"
/*
 file: fn_hasOrgan.sqf
 author: [midgetgrimm] - A Grimm Life | Altis Life • Index page?

 */
 private["_organThief"];
 _organThief = [_this,0,Objnull,[Objnull]] call BIS_fnc_param;
 if(isNull _organThief) exitWith {}; //if not the thief get bent

 [1,"STR_NOTF_Robbed",true,[_organThief GVAR ["realname",name _organThief] remoteExecCall ["life_fnc_broadcast",RCLIENT];//lets people know you are stealing kidneys
 [_organThief,"kidney",1] call life_fnc_handleInv;//put stolen kidney into inventory of thief
 [getPlayerUID _organThief,_organThief GVAR ["realname",name _organThief],"919"] remoteExecCall ["life_fnc_wantedAdd",RSERV];//add to wanted list
 sleep 300;//no more organ theft for at least 5 minutes, so they cant just do it over and over, can do whatever time you want
 _organThief SVAR["hasOrgan",false,true];//allow them to be able to take organs again- setting a variable 