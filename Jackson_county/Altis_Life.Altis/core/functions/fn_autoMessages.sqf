#include "..\..\script_macros.hpp"
/*
    File: fn_autoMessages.sqf
    Author: BenjaminSansNom

    Description:
    Auto messages in game every X seconds
*/
	[] spawn
	{
		// Add a line in this array to add a message
		_messages =
		[
			"The server costs money, you can contribute to it by making a donation:<br/> <t color='#22dc17' size='1.5'>Get Acess To VIP Shops</t>",
			"Make More Money Every Paycheck, Get Acess To The VIP Shops:<br/><t color='#22dc17' size='1.5'>Donate Today</t>",
			"Help Support Our Server, Get Acess To The VIP Shops:<br/><t color='#22dc17' size='1.5'>Donate Today</t>",
			"VIP1:$10, VIP2:$20, VIP3:$30, VIP4:$40, VIP5:$50, VIP6:$200, See owner for more details :<br/><t color='#22dc17' size='1.5'>Donate Today</t>"
		];

		_refreshTime = 1800; // Time between each message (in seconds)

		_i = 0;
		while {true} do
		{
			_count = count _messages;
			_message = _messages select _i;
			hint parseText format
			[
				"<t color='#dc1717' size='2'>Donate</t><t color='#22dc17' size='2'>Today</t><br/><br/><img shadow='false' size='6' image='textures\Bills+Intro\Donate.jpg'/><br/><br/>%1", _message
			];
			sleep _refreshTime;
			if (_i == (_count - 1)) then
			{
				_i = 0;
			}
				else
			{
				_i = _i + 1;
			};
		};
};
