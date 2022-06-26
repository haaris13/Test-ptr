life_papiers_list = profileNamespace getVariable ["papiers_p2_profile_list", []];

_titre = "Carte";
_text = "<t size='3'>Titre</t><br/><t size='1'>Content</t><br/>";
_signature = "La Pomme Dorée";

for "_i" from 0 to 50 do {
	life_papiers_list pushBack [_titre, _text, _signature, (getPlayerUID player)];
};

profileNamespace setVariable ["papiers_p2_profile_list", life_papiers_list];
saveProfileNamespace;