class CfgFunctions {
	#include "LID\fonctions.hpp"

	class Socket_Reciever
	{
		tag = "SOCK";
		class SQL_Socket
		{
			file = "core\session";
			class requestReceived {};
			class dataQuery {};
			class insertPlayerInfo {};
			class updateRequest {};
			class syncData {};
			class updatePartial {};
			class playerParamsReceived {};
		};
	};

	class Life_Client_Core
	{
		tag = "life";

		class DynMarket
	    {
	        file = "core\DynMarket";
	        class bought {};
	        class update {};
	        class DisplayPrices {};
	        class LoadIntoListbox {};
	        class ForcePrice {};
	        class DYNMARKET_getPrice {};
	    };
		
		class argentsale {
        	file = "script\nekro\argentsal\fonctions";
        	class creategroundMoney {};
        	class initargentsal {};
        	class checkmoney {};
       		class deterre {};
        	class transformargent {};
	    };
	    
		  class nekroJobs{ // ADD BY NEKRO
		        file = "script\nekro\pole_emploi\menu\functions";
		        class ModificationMenujobs {};
		        class VerificationMetiers {};
		    };

	   	class Casino
		{
			file = "core\casino";
			class slotOpen {};
			class slotPlay {};
			class slotReward {};
		};

		class Master_Directory
		{
			file = "core";
			class setupActions {};
			class setupEVH {};
			class initCiv {};
			class initCop {};
			class initMedic {};
			class welcomeNotification {};
			class survival {};
			class welcome {};
			class initRadio {};
		};

		class LittleBank {
			file = "core\littlebank";

			class breakChestBank {};
			class breakDoorBank {};
			class breakDoor2Bank {};
			class chargeTimerBank {};
			class fixChestBank {};
			class fixDoorBank {};
			class initLocalBank {};
			class bankopenChest {};
			class bankTakeItem {};
			class openVault {};
			class bankNear {};
		};

		class Logs {
			file = "core\logs";
			class insertFarmLog {};
			class saveFarms {};
			class checkRetourZone {};
			class antiCamp {};
			class ATMLogs {};
			class transfersMoneyLog {};
		};

		class SOS {
			file = "core\sos";
			class serviceSos {};
		};

		class Radio {
			file = "core\radio";
			class radioGlobalOpenDiag {};
			class radioActionProfile {};
		};

		class Radio_Profile {
			file = "core\radio\profile";
			class radioProfileOpenDiag {};
			class radioProfileAjouterV {};
			class radioProfileAjouter {};
			class radioProfileModifier {};
			class radioProfileModifierV {};
			class radioProfileSuppr {};
		};
/*
		class Fourriere {
			file = "core\fourriere";
			class fourriereInit {};
			class fourriereNbPlayers {};
		};

		class Fourriere_Veh {
			file = "core\fourriere\Vehicle";
			class fourriereVehGet {};
			class fourriereVehStore {};
		};
*/
		class System {
			file = "core\system";
			class initfatigue {};
			class initAtouts {};
			class initSystem {};
			class checkAtouts {};
			class launchAtouts {};
			class hasAtouts {};
			class reloadBackpack {};
			class timerLaunch {};
			class realTimeToStr {};
		}; 

		//système de tir alharis
	class WeaponSystem {
			file = "core\system\weapons";
			class weaponFindCategory {};
		};

		class Onu {
			file = "core\system\onu";
			class onuDoorGetState {};
			class onuFrontActionAlert {};
			class onuFrontActionDoor {};
			class onuFrontMenuChange {};
			class onuFrontMenuComboChange {};
			class onuFrontOpenMenu {};
			class receiveFront {};
			class checkFront {};
		};

	

		class TargetTraining {
			file = "core\system\targets";
			class launchTargetTraining {};
			class targetTrainingAction {};
			class cancelTargetTraining {};
			class targetTrainingInit {};
			class targetTrainingCalcPrecision {};
			class targetTrainingLaunchTimer {};
			class targetTrainingSuccessMessage {};
		};

		class TargetTrainingStats {
			file = "core\system\targets\stats";
			class targetTrainingStatsReceive {};
			class targetTrainingStatsSave {};
			class targetTrainingStatsOpenMenu {};
			class targetTrainingStatsSystem {};
			class targetTrainingStatsFindByCategory {};
			class targetTrainingStatsCalcCoef {};
			class targetTrainingStatsFindWeaponConfig {};
			class targetTrainingStatsIncrease {};
			class targetTrainingStatsUncrease {};
		};

		class TargetTrainingLine {
			file = "core\system\targets\line";
			class execTargetTrainingLine {};
			class launchTargetTrainingLine {};
		};

		class TargetTrainingRandom {
			file = "core\system\targets\random";
			class targetTrainingRandomExecTarget {};
			class targetTrainingRandomLaunch {};
		};

		class TargetTrainingMenu {
			file = "core\system\targets\menu";
			class targetTrainingCreateProfileAction {};
			class targetTrainingCreateProfileMenu {};
			class targetTrainingOpenIntMenu {};
			class targetTrainingOpenScores {};
			class targetTrainingProfileCreated {};
			class targetTrainingProfileReceive {};
			class targetTrainingScoresfilterDo {};
			class targetTrainingScoresInfoFilter {};
			class targetTrainingScoresSearch {};
			class targetTrainingScoresSearchAction {};
		};
		class Object {
			file = "core\system\object";
			class objectCreate {};
			class objectGetPropety {};
			class objectSetPropety {};
		};

		class Map {
			file = "core\system\map";
			class mapUpdate {};
			class mapCreateMenu {};
			class mapSelectAll {};
		};

		class Atouts {
			file = "core\system\Atouts";
			class reductFatigue {};
			class morphine {};
		};

		class Achievement {
			file = "core\system\achievement";
			class achievementLearn {};
			class achievementCheck {};
			class achievementGet {};
			class achievementHas {};
			class achievementOpenDiag {};
		};

		class Notif {
			file = "core\system\notif";
			class showNotification {};
			class showPredefinedNotification {};
		};

		class Gendarmerie_ATM {
			file = "core\system\gendarmerie";
			class genBankDepose {};
			class genBankDeposit {};
			class genBankOpen {};
			class genBankTake {};
			class genBankWithdraw {};
		};

		class Gouvernement {
			file = "core\system\gouvernement";
			class gouvGestionDeposeGen {};
			class gouvGestionDeposeGouv {};
			class gouvGestionTake {};
			class gouvLoisCreate {};
			class gouvLoisDelete {};
			class gouvLoisLbCiv {};
			class gouvLoisLbMod {};
			class gouvOpenGestion {};
			class gouvOpenLogs {};
			class gouvOpenLoisCiv {};
			class gouvOpenLoisCreate {};
			class gouvOpenLoisGouv {};
			class gouvOpenMenu {};
			class gouvOpenTaxesCiv {};
			class gouvOpenTaxesGouv {};
			class gouvTaxesAction {};
			class gouvTaxesCalc {};
			class gouvTaxesGet {};
			class gouvTaxesLb {};
			class gouvTaxesModLb {};
			class gouvTaxesPay {};
			class gouvTaxesTake {};
		};

		class Depann {
			file = "core\system\depanneur";
			class depanCheckBalise {};
			class depanLaunchBalise {};
			class depanReceiveBalise {};
		};

		class Vote {
			file = "core\system\Vote";
			class voteAction {};
			class voteOpenMenu {};
		};

		class Papier {
			file = "core\system\papier";
			class papierInit {};
			class papierMenuCreateAction {};
			class papierMenuCreateOpen {};
			class papierMenuGiveAction {};
			class papierMenuGiveOpen {};
			class papierMenuListDelete {};
			class papierMenuListLb {};
			class papierMenuListOpen {};
			class papierReceive {};
			class papierSave {};
		};

		class Syndikat {
			file = "core\system\syndikat";
			class syndikatClient {};
			class syndikat {};
		};
/*
		class Fireworks
		{
			file = "core\system\fireworks";
			class fireworksLaunch {};
		};
*/
		class Help {
			file = "core\help";
			class showHelp {};
			class checkHelp {};
		};

		class Torture {
			file = "core\torture";
			class tortureVictimAction {};
			class tortureVictimClient {};
			class tortureVictimPlace {};
			class tortureVictimPlaceClient {};
			class tortureVictimUnPlace {};
		};

		class Medical_System
		{
			file = "core\medical";
	        class urgence {};
	        class medicMission {};
			class unconcious {};
			class onPlayerKilled {};
			class onPlayerRespawn {};
			class respawned {};
			class revivePlayer {};
			class revived {};
			class medicMarkers {};
			class requestMedic {};
			class medicRequest {};
			class deathScreen {};
			class medicLoadout {};
			class medicSirenLights {};
			class medicLights {};
			class medicSiren {};
			class medInteractionMenu {};
			class aceCheckIsUnconscious {};
		};

		class Bank_System
		{
			file = "core\bank";
			class buything {};
			class checkposBank {};
			class crackBank {};
			class openBank {};
			class useChestBank {};
			class fixBank {};
		};

		class Main_Menu
		{
			file = "core\mainmenu";
			class initMainMenu {};
			class exitLobby {};
			class displayStats {};
		};

		class Actions
		{
			file = "core\actions";
			class buyLicense {};
			class animMenu {};
			class healHospital {};
			class pushVehicle {};
			class repairTruck {};
			class serviceChopper {};
			class catchFish {};
			class catchTurtle {};
			class dropFishingNet {};
			class postBail {};
			class processAction {};
			class arrestAction {};
			class escortAction {};
			class impoundAction {};
			class pulloutAction {};
			class putInCar {};
			class stopEscorting {};
			class restrainAction {};
			class searchAction {};
			class searchVehAction {};
			class unrestrain {};
			class surrender {};
			class pickupItem {};
			class pickupMoney {};
			class ticketAction {};
			class packupSpikes {};
			class packupItemRoft {};
			class storeVehicle {};
			class robAction {};
			class gather {};
			class mine {};
			class axe {};
			class cut {};
			class filet {};
			class shovel {};
			class removeContainer {};
			class sonar {};
			class detecteur {};
			class fouille {};
			class fouilleClient {};
			class returnFouille {};
			class arracherClef {};
			class arracherClefClient {};
			class removeCagoule {};
			class removeCagouleClient {};
			class putCagoule {};
			class putCagouleClient {};
			class retirerCom {};
			class retirerComClient {};
			class whiteListValid {};
			class whiteListTeam {};
			class storeAir {};
			class eatItemResto {};
		};

		class Chair
		{
			file = "core\actions\chair";
			class sitDown {};
			class standUp {};
		};

		class VolcanTelecom
		{
			file = "core\VolcanTelecom";
			class brakPub {};
			class payPub {};
			class pub {};
			class pub_send {};
			class pubFilterContacts {};
		};

		class Housing
		{
			file = "core\housing";
			class buyHouse {};
			class getBuildingPositions {};
			class houseMenu {};
			class lightHouse {};
			class lightHouseAction {};
			class sellHouse {};
			class initHouses {};
			class copBreakDoor {};
			class raidHouse {};
			class lockupHouse {};
			class copHouseOwner {};
			class lockHouse {};
			class garageRefund {};
			class placeContainer {};
			class PlayerInBuilding {};
			class containerMenu {};
			class openNearDoor {};
		};

		class House
		{
			file = "core\house";
			class houseBuy {};
			class houseCopBreakDoor {};
			class houseGetOwner {};
			class houseInit {};
			class houseInteractionMenu {};
			class houseInventory {};
			class houseInvMenuLBChange {};
			class houseInvStoreItem {};
			class houseInvTakeItem {};
			class houseInvUpdate {};
			class houseLight {};
			class houseLightAction {};
			class houseLockAll {};
			class houseOpenInventory {};
			class houseOpenNearDoor {};
			class houseSell {};
			class houseUpgradeLbChange {};
			class houseUpgradeMenu {};
			class houseUpgradeValid {};
			class houseVehicle {};
			class houseVehicleMenu {};
			class houseVehicleMenuLbChange {};
			class houseVehicleMenuValid {};
		};

		// CLAN

		class Clan
		{
			file = "core\clan";
			class clanAddXp {};
			class clanBankAction {};
			class clanCheckTaxe {};
			class clanCheckZone {};
			class clanCreate {};
			class clanCreated {};
			class clanDelete {};
			class clanDeletePlayers {};
			class clanGetLevelByXp {};
			class clanGetRank {};
			class clanGetUpgrade {};
			class clanHouseInteraction {};
			class clanInit {};
			class clanInvite {};
			class clanInvitePlayer {};
			class clanLeave {};
			class clanMarkers {};
			class clanMenu {};
			class clanMenuLbChange {};
			class clanMenuList {};
			class clanMenuUpgrade {};
			class clanMenuUpgradeAction {};
			class clanMenuUpgradeLbChange {};
			class clanPromote {};
			class clanPromoteAction {};
			class clanPromoteLbChange {};
			class clanTaxeModify {};
			class clanKick {};
			class clanCompleted {};
			class clanCanDo {};
		};

		class Clan_House
		{
			file = "core\clan\house";
			class clanHouseBuy {};
			class clanHouseSell {};
			class clanHouseUpdate {};
		};

		class Clan_House_Inv
		{
			file = "core\clan\house\inventory";
			class clanHouseInv {};
			class clanHouseInvMenuLBChange {};
			class clanHouseInvStoreItem {};
			class clanHouseInvTakeItem {};
			class clanHouseOpenInv {};
		};

		class Clan_Veh
		{
			file = "core\clan\vehicle";
			class clanVehicleStoreMenu {};
			class clanVehicleStoreMenuAction {};
			class clanVehicleStoreMenuLb {};
			class clanVehicleTakeMenu {};
			class clanVehicleTakeMenuAction {};
			class clanVehicleTakeMenuLb {};
			class clanVehicleTakeMenuOpen {};
		};


		// Entreprise :
/*
		class Entreprise
		{
			file = "core\entreprise";
			class buildingEntrepriseMenu {};
			class initEntreprise {};
			class placeContainerEnt {};
			class placestorageBigEnt {};
			class storageEntreprise {};
			class openEntreprise {};
			class alarmEnt {};
			class contratEntreprise {};
		};

		class Transform
		{
			file = "core\entreprise\transform";
			class transformAction {};
			class transformlbchange {};
			class transformopendiag {};
		};*/

		class Config
		{
			file = "core\config";
			class itemWeight {};
			class taxRate {};
			class vehicleAnimate {};
			class vehicleWeightCfg {};
			class vehicleAssuranceCfg {};
			class houseConfig {};
		};

		class Player_Menu
		{
			file = "core\pmenu";
			class wantedList {};
			class wantedInfo {};
			class wantedMenu {};
			class wantedAddP {};
			class pardon {};
			class giveItem {};
			class giveMoney {};
			class giveMoney1 {};
			class p_openTablet {};
			class p_openMenu {};
			class p_updateMenu {};
			class p_playerInventory {};
			class p_inventoryLBChange {}; 
			class p_licenceslbchange {};
			class removeItem {};
			class removeLicense {};
			class useItem {};
			class cellphone {};
			//class cellphone_send {};
			//class cellphone_inboxLBChange {};
			//class cellphone_inbox {};
			//class cellphoneFilterContacts {};
			class keyMenu {};
			class keyGive {};
			class keyDrop {};
			class s_onSliderChange {};
			class updateViewDistance {};
			class settingsMenu {};
			class s_onChar {};
			class s_onCheckedChange {};
			class showLicenses {};
			class player_licenses {};
			class keyAdminMarker {};
			
		};

		class Functions
		{
			file = "core\functions";
			class radArea {};
	        class boostNitro {};
			class AAN {};
			class firstView {};//rajout alharis première personne
			class infoStorageCompany {}; //rajout système entreprise disolution par la gendarmerie 01.12.2021
			class forceDisbandCompany {};//rajout système entreprise disolution par la gendarmerie 01.12.2021
			class calWeightDiff {};
			class fetchCfgDetails {};
			class handleInv {};
			class hudSetup {};
			class hudUpdate {};
			class tazeSound {};
			class animSync {};
			class simDisable {};
			class keyHandler {};
			class dropItems {};
			class handleDamage {};
			class numberText {};
			class handleItem {};
			class accType {};
			class receiveItem {};
			class giveDiff {};
			class receiveMoney {};
			class receiveMoney1 {};
			class playerTags {};
			class clearVehicleAmmo {};
			class vehAddPack {};
			class pullOutVeh {};
			class nearUnits {};
			class actionKeyHandler {};
			class playerCount {};
			class fetchDeadGear {};
			class loadDeadGear {};
			class isnumeric {};
			class escInterupt {};
			class onTakeItem {};
			class fetchVehInfo {};
			class pushObject {};
			class onFired {};
			class revealObjects {};
			class nearestDoor {};
			class inventoryClosed {};
			class inventoryOpened {};
			class isUIDActive {};
			class saveGear {};
			class loadGear {};
			class stripDownPlayer {};
			class nearATM {};
			class playerSkins {};
			class nearestObjects {};
			class mapMarker {};
			class updateClothing {};
			class clearVehicleCargo {};
			class hint {};
			class playerIDtoObject {};
			class vdmed {};
			class setupNPC{};
			class robPetrolStation {};
			class receivedItemsUI{};
			class paycheck {};
			class nearestZone {};
			class dropWeaponsMagazines {};
			class speaking {};
			class dynamicText {};
			class initanticheat {};
			class isInconnue {};
			class reloadWeapons {};
			class playSound3D {};
			class medicDamage {};
			class animChanged {};
			class getNearLocation {};
			class checkPlayerName {};
			class playSound3DNear {};
		};

		class Network
		{
			file = "core\functions\network";
			class broadcast {};
			class MP {};
			class MPexec {};
			class corpse {};
			class jumpFnc {};
			class soundDevice {};
			class setFuel {};
			class say3D {};
			class earthquake {};
			class soundDem {};
		};

		class Civilian
		{
			file = "core\civilian";
			class jailMe {};
			class civMarkers {};
			class jail {};
			class tazed {};
			class tazedAdmin {};
			class tazedPump {};
			class knockedOut {};
			class knockoutAction {};
			class robReceive {};
			class robPerson {};
			class removeLicenses {};
			class demoChargeTimer {};
			class civLoadout {};
			class freezePlayer {};
			class civInteractionMenu {};
			class IdentityCiv {};
			class civIdentity {};
		};

		class Vehicle
		{
			file = "core\vehicle";
			class colorVehicle {};
			class openInventory {};
			class lockVehicle {};
			class vehicleOwners {};
			class vehStoreItem {};
			class vehTakeItem {};
			class vehInventory {};
			class vInteractionMenu {};
			class vehicleWeight {};
			class deviceMine {};
			class addVehicle2Chain {};
			class FuelRefuelcar {};
			class emergencyEject {};
			class vehAddKit {};
			class spawnIndicator {};
			class assureVeh {};
			class trunkMenuLBChange {};
			class IEMHeli {};
			class saboterVeh {};
			class vehPlaceTraceur {};
		};

		class Immatriculation
		{
			file = "core\vehicle\Immatriculation";
			class vehicleTags {};
			class retirerImmatriculation {};
		};

		class Custom
		{
			file = "core\vehicle\Custom";
			class getAnimationsVeh {};
			class initMenuCustom {};
			class initViewCustomVeh {};
			class lbAnimateCustom {};
			class lbchangeMenuCustom {};
			class lbchangeNearCustom {};
			class lbcolorMenuCustom {};
			class openMenuNearVehicle {};
			class updatePriceCustom {};
			class updateViewCustomVeh {};
			class validMenuCustom {};
			class validNearMenu {};
		};

		class Caches
		{
			file = "core\vehicle\Caches";
			class lbchangeDemanteler {};
			class vehicleCacheDialog {};
			class vehicleCacheInv {};
			class vehicleCacheStore {};
			class vehicleCacheTake {};
			class vehicleDemantelerAction {};
			class vehicleDemantelerList {};
			class vehicleGetCache {};
			class vehicleOpenCache {};
			class vehicleScannerUse {};
			class vehicleSetCache {};
			class vInteractionCachesMenu {};
		};

		class Gendarmerie
		{
			file = "core\vehicle\Immatriculation\Gendarmerie";
			class checkImmatricule {};
			class checkImmatriculeReturn {};
			class openComputerCheck {};
		};

		class AddImmatricule
		{
			file = "core\vehicle\Immatriculation\AddImmatricule";
			class addImmatricule {};
			class immatriculeVehMenu {};
			class immatriculeVehSelection {};
			class initImmatricule {};
			class returnAddImmatricule {};
		};

		class removeImmatricule
		{
			file = "core\vehicle\Immatriculation\removeImmatricule";
			class receleurRemoveAction {};
			class receleurRemoveMenu {};
			class receleurVehSelection {};
		};

		class Fluid
		{
			file = "core\vehicle\Fluid";
			class fluidGetHasCargo {};
			class fluidRefuelStation {};
			class fluidRefuelVehAction {};
			class fluidVehConvertFtoL {};
			class fluidVehConvertLtoF {};
			class fluidVehEmpty {};
			class fluidVehGetCargoBase {};
			class fluidVehOpenInv {};
		};

		class Cop
		{
			file = "core\cop";
			class copMarkers {};
			class copLights {};
			class vehInvSearch {};
			class copSearch {};
			class bountyReceive {};
			class searchClient {};
			class restrain {};
			class ticketGive {};
			class ticketPay {};
			class ticketPrompt {};
			class copSiren {};
			class spikeStripEffect {};
			class radar {};
			class questionDealer {};
			class copInteractionMenu {};
			class sirenLights {};
			class licenseCheck {};
			class licensesRead {};
			class repairDoor {};
			class doorAnimate {};
			class fedCamDisplay {};
			class ticketPaid {};
			class containerInvSearch {};
			class wantedGrab {};
			class monterCop {};
			class arsenalCop {};
			class copLoadout {};
			class copRequestFunds {};
			class miscItems {};
			class seizeWeapons {};
			class seizeObjects {};
			class uniformCop {};
			class showMessage {};
			class copLaunchIem {};
			class whiteListCop {};
			class qgCamDisplay {};
			class camModifyPos {};
			class placeMouchard {};
			class clientMouchard {};
			class camKeyHandler {};
			//rajouté par alharis porte gendarmerie
		};

		class Furnace
		{
			file = "core\process\furnace";
			class furnaceActionDrop {};
			class furnaceActionTake {};
			class furnaceActionTemp {};
			class furnaceInit {};
			class furnaceSetDiag {};
			class furnaceSetupDiag {};
			class furnaceSystem {};
			class furnaceSound {};
			class furnaceTransform {};
		};

		class Ice
		{
			file = "core\process\chimie\ice";
			class iceActionBurn {};
			class iceActionButtonTransf {};
			class iceActionFusion {};
			class iceActionRecupFiole {};
			class iceActionVideFiole {};
			class iceCheckFiole {};
			class iceGetCheckFiole {};
			class iceInitGlobal {};
			class iceInitList {};
			class icelbChangeLeft {};
			class iceOpenDiag {};
			class iceServerFioleAdd {};
			class iceServerFioleFusion {};
			class iceUpdateDiag {};
			class iceUpdateFioleGlobal {};
			class iceUpdateFiolePart {};
			class iceSaveGlobalVar {};
			class iceActionAzote {};
			class iceEffect {};
			class iceHasCombi {};
			class iceActionRecupGlobal {};
		};

		class IceContainer
		{
			file = "core\process\chimie\ice\container";
			class iceContainerDiag {};
			class iceContainerDrop {};
			class iceContainerOpen {};
			class iceContainerTake {};
		};

		class ZoneGang
		{
			file = "core\ZoneGang";
			class setupZoneGang {};
			class captureZoneGang {};
		}

		class Shops
		{
			file = "core\shops";
			class atmMenu {};
			class changeClothes {};
			class clothingMenu {};
			class clothingBuySell {};
			class clothingFilterShop {};
			class clothingRefreshInventory {};
			class getInfoGear {};

			class initInfoGear {};
			class initInfoWeapons {};
			
			class updateInfoClothing {};
			class vehicleShopMenu {};
			class vehicleShopLBChange {};
			class vehicleShopBuy {};
			class vehicleShopLBColorChange {};
			class vehicleViewUpdate {};
			class weaponShopRefreshInventory {};
			class weaponShopFilterShop {};
			class weaponShopMenu {};
			class weaponShopSelection {};
			class weaponShopBuy {};
			class weaponShopSell {};
			class getInfoWeapons {};
			class virt_buy {};
			class virt_menu {};
			class virt_update {};
			class virt_sell {};
			class chopShopMenu {};
			class chopShopSelection {};
			class chopShopSell {};
			class virtLBChange {};
		};

		class FuelStation {
			file = "core\FuelStation";
			class FuelStatOpen {};
			class FuelLBchange {};
			class fuelGetStationNear {};
			class fuelStationInit {};
			class fuelStoreVehMenu {};
			class fuelStoreVehMenuLb {};
			class fuelStoreVeh {};
			class fuelStatMarkers {};
			class fuelGetPrice {};
		};

		class shell {
			file = "core\shell";
			class shellCheckFileExist {};
			class shellEnter {};
			class shellGetCfgShow {};
			class shellGetDir {};
			class shellGetNextDir {};
			class shellGetNextFiles {};
			class shellGetParentDir {};
			class shellGetPath {};
			class shellGetRCfg {};
			class shellGetUser {};
			class shellInitDiag {};
			class shellPrint {};
			class shellProgressMessage {};
			class shellRunCan {};
			class shellRunExec {};
			class shellSend {};
			class shellWaitVar {};
		};

		class ShellCreate {
			file = "core\shell\create";
			class shellCreatePersonal {};
			class shellCreateSend {};
		};

		class ShellDB {
			file = "core\shell\db";
			class shellCreateDb {};
			class shellGestionDir {};
			class shellGestionFile {};
			class shellInitComp {};
			class shellReturnComp {};
			class shellReturnDir {};
		};

		class ShellDir {
			file = "core\shell\dir";
			class shellDirCreate {};
			class shellDirDelete {};
			class shellDirRename {};
		};

		class scripts {
			file = "core\shell\scripts";
			class shellcd {};
			class shellClear {};
			class shellDate {};
			class shellEcho {};
			class shellExit {};
			class shellHelp {};
			class shellls {};
			class shellmDir {};
			class shellMkDir {};
			class shellresetVar {};
			class shellrmDir {};
			class shellRun {};
			class shellShutDown {};
		};

		class receive {
			file = "core\shell\programs\receive";
			class shellreturnCImma {};
		};

		class send {
			file = "core\shell\programs\send";
			class shellCheckImma {};
		};

		class Items
		{
			file = "core\items";
			class boltcutter {};
    	    class nos {};
			class lockpick {};
			class crowbar {};
			class spikeStrip {};
			class jerryRefuel {};
			class jerryDefuel {};
			class flashbang {};
			class blastingCharge {};
			class blastingChargeCop {};
			class defuseKit {};
			class storageBoxBig {};
			class storageBoxSmall {};
			class placestorageBig {};
			class placestorageSmall {};
			class placedefinestorage {};
			class weed {};
			class extracteurUse {};
			class placeObject {};
			class placeObjectRoft {};
			class removeObject {};
			class drogueUse {};
			class droguePlayer {};
			class placeTraceur {};
			class detecteurTraceur {};
			class showTracers {};
			class jerryBurnPlayer {};
			class jerryBurnTarget {};
			class zippo {};
			class brouilleur {};
			class alcotest {};
			class alcoolUse {};
			class alcotestClient {};
			class returnAlcoTest {};
		};

		class Progression
		{
			file = "core\progression";
			class changeRep{};
			class priceRepCalc{};
			class addXP{};
			class checkXP{};
			class createMarker{};
			class updateMarkers {};
			class eventFeed {};
			class hasPerk {};
			class eventCopsNear{};
			class subxp {};
			class prorataXPPerks {};
		};

		class Perks
		{
			file = "core\progression\perks";
			class perkSelectPerk{};
			class perkRemovePerk{};
			class perkFilterTier{};
			class perkDialogOpen{};
			class perkAvailableLBChange{};
		};

		class Professions
		{
			file = "core\professions";
			class levelProfession {};
			class fetchProfessionInfo {};
			class professionMenuOpen {};
			class professionMenuInfo {};
			class getLevelByRessource {};
		};

		class Crafting
		{
			file = "core\professions\crafting";
			class craftingMenuOpen {};
			class craftingMenuCraft {};
			class craftingMenuFilter {};
			class craftingSubMenuFilter {};
			class craftingMenuLBChange {};
			class requiresCampfire {};
			class requiresWorkBench {};
		};


		class Trading
		{
			file = "core\trading";
			class trademenuopen {};
			class trademenuaccept {};
			class trademenuclose {};
			class trademenumakeoffer {};
			class trademenureceivedata {};
			class trademenumoveitem {};
			class trademenumovemoney {};
			class trademenucomplete {};
			class trademenureset {};
		};
			

		class TreasureHunting
			{
			file ="core\jobs\treasure_hunting";
			class openContainer {};
			class SearchWreck {};
			class wreckTakeItem {};
		};

		class Delivery
		{
			file ="core\jobs\delivery";
			class dpFinish {};
			class getDPMission {};
		};	

		class Dialog_Controls
		{
			file = "dialog\function";
			class setMapPosition {};
			class displayHandler {};
			class spawnConfirm {};
			class spawnMenu {};
			class spawnPointCfg {};
			class spawnPointSelected {};
			class progressBar {};
			class impoundMenu {};
			class unimpound {};
			class sellGarage {};
			class bankDeposit {};
			class bankWithdraw {};
			class bankTransfer {};
			class garageLBChange {};
			class safeInventory {};
			class safeOpen {};
			class safeTake {};
			class safeFix {};
			class vehicleGarage {};
			class gangDeposit {};
			class wireTransfer {};
			class licenseShopOpen {};
			class licenseShopUpdate {};
			class processingLBChange {};
			class processingOpenDiag {};
			class resourceInfoFilter {};
			class resourceInfoOpen {};
			class resourceinfofilterDo {};
		};

		class Dialog_Locker
		{
			file = "dialog\function\locker";
			class lockerFilter {};
			class lockerOpen {};
			class lockerSetup {};
			class lockerStore {};
			class lockerTake {};
		};

		class Heal
		{
			file = "core\heal";
			class checkDamageClient {};
			class checkDamageMedic {};
			class checkDamageReturn {};
			class getCalibresByAmmo {};
			class healMedic {};
			class useBandage {};
			class bledout {};
			class operation {};
			class actionHeal {};
			class useMorphine {};
		};

		class Share
		{
			file = "core\progression\share";
			class initMenuSendMarkers {};
			class sendMarkers {};
			class lbChangeSendMarkers {};
			class receiveMarkers {};
			class copReceiveIllegalServ {};
			class copReceiveMarkers {};
			class initCopShareMarkers {};
		};
	};


	class Debug_Client_Core
	{
		tag = "debug";

		class Function
		{
			file = "debug\function";
			class  drawLocation {};
			class  fixUniform {};
			class unlockAllSucess {};
		};
	};

	class Admin_Client_Core
	{
		tag = "admin";

		class Admin
		{
			file = "core\admin";
			class admininfo {};
			class adminid {};
			class admingetID {};
			class adminMenu {};
			class adminQuery {};
			class adminSpectate {};
			class adminTeleport {};
			class adminTpHere {};
			class adminDebugCon {};
			class adminCompensate {};
			class adminGodMode {};
			class adminFreeze {};
			class adminMarkers {};
			class logAdmin {};
			class adminReceiveLog {};
			class AlertAdmin {};
			class hideGlobal {};
			class adminVInteractionMenu {};
			class adminCIVInteractionMenu {};
			class adminStoreVeh {};
			class adminOwnerVeh {};
			class zeusStoreVehicle {};
			class adminUniform {};
			class adminUnrestrain {};
			class adminHealPlayer {};
			class adminRevivePlayer {};
			class adminFilter {};
			class adminShowBullet {};
			class adminShowBulletZone {};
			class adminShowBulletPlayer {};
			class adminTraceBullet {};
			class adminStopAction {};
			class admindebugExec {};
			class adminShowDebugInfo {};
		};
	};

	
	class ROFT
    {
		tag = "ROFT";
		class ROFT_Barrier_Menu
		{
			file = "ROFT\Scripts";
				class spawnbarrier {};
				class barriergui {};
				class cleanupbarrier {};
		};
	};
};