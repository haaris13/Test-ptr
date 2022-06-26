commandePuttyON = false;
radar = 0;

private _diplomate = ["76561198162124881","76561198144583758"];

if (getPlayerUID player in _diplomate) then
{
	player addAction
	[
		"Présenter sa carte diplomatique",
		{
			params ["_target", "_caller", "_actionId", "_arguments"];
			[] remoteExec ["LIDCLIENT_fnc_afficheCarteDiplomatique",cursorObject];
		},
		nil,
		1.5,
		true,
		true,
		"",
		"getPlayerUID player in ['76561198162124881','76561198144583758'] and cursorTarget isKindOf 'Man';",
		4
	];
};