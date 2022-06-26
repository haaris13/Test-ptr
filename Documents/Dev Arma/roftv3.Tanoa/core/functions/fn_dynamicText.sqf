/*
	File: fn_dynamicText.txt

	Description:
	Dynamic opening credits

	Parameter(s):
	_this select 0: Text
	_this select 1: (Optional) X coordinates
	_this select 2: (Optional) Y coordinates
	_this select 3: (Optional) Duration
	_this select 4: (Optional) Fadein time
	_this select 5: (Optional) Delta Y
	_this select 6: (Optional) Resource layer

*/
_text = [_this,0,"",[""]] call BIS_fnc_param;
_param1 = [_this,1,-1,[-1]] call BIS_fnc_param;
_param2 = [_this,2,-1,[-1]] call BIS_fnc_param;
_param3 = [_this,3,4,[4]] call BIS_fnc_param;
_param4 = [_this,4,1,[1]] call BIS_fnc_param;
_param5 = [_this,5,0,[0]] call BIS_fnc_param;
_param6 = [_this,6,789,[789]] call BIS_fnc_param;

[_text,_param1,_param2,_param3,_param4,_param5,_param6] spawn BIS_fnc_dynamicText;

//["<t color='#ff0000' size = '.8'>Warning!<br />Stop doing what you are doing</t>",-1,-1,4,1,0,789] spawn BIS_fnc_dynamicText;