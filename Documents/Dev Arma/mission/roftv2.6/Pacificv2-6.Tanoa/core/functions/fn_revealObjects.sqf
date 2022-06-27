/*
	Author: Bryan "Tonic" Boardwine
	
	Description:
	Reveals nearest objects within 15 automatically to help with picking
	up various static objects on the ground such as money, water, etc.
	
	Can be taxing on low-end systems or AMD CPU users.
*/
private "_objects";
_objects = nearestObjects[visiblePositionASL player, [
	"Land_ChairWood_F",
	"Land_OfficeChair_01_F",
	"Land_CargoBox_V1_F",
	"Land_WaterBottle_01_full_F", // Bouteille d'eau
	"Land_TacticalBacon_F", // Conserve Bacon Tactique
	"Land_BakedBeans_F", // Conserve de Fayots
	"Land_CerealsBox_F", // Boîte de cérérales
	"Land_RiceBox_F", // Rice
	"Land_Can_V3_F", // Boisson RedGull
	"Land_Can_V2_F", // Boisson Franta
	"Land_Can_V1_F", // Boisson Spirit
	"Land_Shovel_F", // pelle
	"Land_Axe_F", // Hache
	//"Land_Crowbar_01_F", // Pied de biche
	"AluminiumFoil_01_F", // Aluminium
	"Land_BottlePlastic_V1_F", // Chimie ingrédients
	"Land_GasCanister_F", // Azote
	"Land_CanisterPlastic_F", // Javel
	"Land_DisinfectantSpray_F", // Ammoniac
	"Land_HumanSkull_F", // Ossements
	"Land_CanisterFuel_F", // Bidon d'essence
	"Land_Money_F", // Money
	"Land_Suitcase_F", // Everything else
	"Man"
	], 15];
{
	player reveal _x;
	(group player) reveal _x;
} foreach _objects;