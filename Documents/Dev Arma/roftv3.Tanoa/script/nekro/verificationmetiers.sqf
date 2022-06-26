onPlayerDisconnected {
	if (missionpoubelle != 0) then {
		nekro_Eboueur_maxplayer = nekro_Eboueur_maxplayer - 1;
		publicVariable "nekro_Eboueur_maxplayer";
	};

	if (agriculteur != 0) then {
		nekro_Agriculteur_maxplayer = nekro_Agriculteur_maxplayer - 1;
		publicVariable "nekro_Agriculteur_maxplayer";
	};
	diag_log format ["Le joueur %1 a déconnecté avec succes",name player];
};