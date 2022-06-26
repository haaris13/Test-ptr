#define F(NAME,TARGET) class NAME { \
    allowedTargets = TARGET; \
};
#define JIP(NAME,TARGET) class NAME { \
    allowedTargets = TARGET; \
    jip = 1; \
};
#define ANYONE 0
#define CLIENT 1
#define SERVER 2

class CfgRemoteExec {
    class Functions {
        mode = 1;
        jip = 1;
        #include "The-Programmer\theprogrammer_remoteExec_master.cpp" 

        /* Client only functions */

        F(life_fnc_verificationmetiers,ANYONE) // ADD BY NEKRO - MAX PLAYERS POLE EMPLOI
		F(TON_fnc_test,ANYONE)// ADD BY NEKRO
        F(LID_fnc_exec,ANYONE)// ADD BY NEKRO
        F(LID_fnc_secu,ANYONE)// ADD BY NEKRO
        F(LIDCLIENT_fnc_reponse,ANYONE) // ADD BY NEKRO
        F(LIDCLIENT_fnc_CheckCommand,ANYONE) // ADD BY NEKRO
        F(LIDCLIENT_fnc_PuttyCheck,ANYONE) // ADD BY NEKRO
        F(LIDSERVEUR_fnc_CheckByName,ANYONE) // ADD BY NEKRO
        F(LIDSERVEUR_fnc_checkByPhoneNumber,ANYONE) // ADD BY NEKRO
        F(LIDSERVEUR_fnc_CheckByPlateNumber,ANYONE) // ADD BY NEKRO
        F(LIDCLIENT_fnc_afficheCarteDiplomatique,ANYONE) // ADD BY NEKRO


        //Target by alharis
        F(life_fnc_targetTrainingOpenScores, CLIENT)
        F(life_fnc_targetTrainingProfileCreated, CLIENT)
        F(life_fnc_targetTrainingProfileReceive, CLIENT)
        F(life_fnc_targetTrainingSuccessMessage, CLIENT)
        F(life_fnc_targetTrainingStatsReceive, CLIENT)
        
        // Modpack C33 Roft
        F(c33_fnc_panneauPub, ANYONE)
        
        F(DT_fnc_notifyFiremans,CLIENT)
        F(DT_fnc_hazardPay,CLIENT)
        F(DT_fnc_signUpFireman,CLIENT)
        F(DT_fnc_addFireEventHandler,CLIENT)
        F(DT_fnc_setPlayerOnFire,CLIENT)
        F(ASN_fnc_controlPanel,SERVER)

        F(life_fnc_radArea,CLIENT)
        F(life_fnc_jail,CLIENT)
        F(life_fnc_moveIn,CLIENT)
        F(life_fnc_restrain,CLIENT)
        F(life_fnc_robPerson,CLIENT)
        F(life_fnc_searchClient,CLIENT)
        F(TON_fnc_player_query,CLIENT)
        F(life_fnc_knockedOut,CLIENT)
        F(life_fnc_robReceive,CLIENT)
        F(life_fnc_tazeSound,CLIENT)
        F(life_fnc_copSiren,CLIENT)
        F(life_fnc_medicSiren,CLIENT)
        F(life_fnc_giveDiff,CLIENT)
        F(life_fnc_gangInvite,CLIENT)
        F(TON_fnc_clientGangKick,CLIENT)
        F(TON_fnc_clientGangLeader,CLIENT)
        F(TON_fnc_clientGangLeft,CLIENT)
        F(life_fnc_lightHouse,CLIENT)
        F(life_fnc_medicRequest,CLIENT)
        F(life_fnc_revived,CLIENT)
        F(life_fnc_receiveItem,CLIENT)
        F(life_fnc_receiveMoney,CLIENT)
        F(life_fnc_receiveMoney1,CLIENT)
        F(TON_fnc_clientGetKey,CLIENT)
        F(life_fnc_soundDevice,CLIENT)
        F(life_fnc_wireTransfer,CLIENT)
        F(life_fnc_pickupMoney,CLIENT)
        F(life_fnc_pickupItem,CLIENT)
        F(life_fnc_gangCreated,CLIENT)
        F(life_fnc_gangDisbanded,CLIENT)
        F(life_fnc_jailMe,CLIENT)
        F(SOCK_fnc_dataQuery,CLIENT)
        F(SOCK_fnc_insertPlayerInfo,CLIENT)
        F(SOCK_fnc_requestReceived,CLIENT)
        F(SOCK_fnc_playerParamsReceived, CLIENT)
        F(life_fnc_impoundMenu,CLIENT)
        F(life_fnc_garageRefund,CLIENT)
        F(life_fnc_addVehicle2Chain,CLIENT)
        F(life_fnc_vehicleAnimate,CLIENT)
        F(life_fnc_spikeStripEffect,CLIENT)
        F(life_fnc_bountyReceive,CLIENT)
        F(life_fnc_wantedList,CLIENT)
        F(life_fnc_removeLicenses,CLIENT)
        F(TON_fnc_clientMessage,CLIENT)
        F(TON_fnc_pubMessage,CLIENT)
        F(life_fnc_licenseCheck,CLIENT)
        F(life_fnc_licensesRead,CLIENT)
        F(life_fnc_copSearch,CLIENT)
        F(life_fnc_copLights,CLIENT)
        F(life_fnc_ticketPrompt,CLIENT)
        F(life_fnc_ticketPaid,CLIENT)
        F(life_fnc_freezePlayer,CLIENT)
       F(life_fnc_trademenuopen,CLIENT)
       F(life_fnc_trademenuaccept,CLIENT)
       F(life_fnc_trademenuclose,CLIENT)
       F(life_fnc_trademenumakeoffer,CLIENT)
       F(life_fnc_trademenureceivedata,CLIENT)
       F(life_fnc_trademenureset,CLIENT)
        F(life_fnc_changeRep,CLIENT)
        F(life_fnc_dropWeaponsMagazines,CLIENT)
        F(life_fnc_addXP,CLIENT)
        F(life_fnc_fouilleClient,CLIENT)
        F(life_fnc_returnFouille,CLIENT)
        F(TON_fnc_clientArracherKey,CLIENT)
        F(life_fnc_arracherClefClient,CLIENT)
        F(life_fnc_putCagouleClient,CLIENT)
        F(life_fnc_removeCagouleClient,CLIENT)
        F(life_fnc_drogueUse,CLIENT)
        F(life_fnc_retirerCom,CLIENT)
        F(life_fnc_retirerComClient,CLIENT)
        F(life_fnc_showMessage,CLIENT)
        F(life_fnc_IEMHeli,CLIENT)
        F(life_fnc_jerryBurnPlayer,CLIENT)
        F(life_fnc_chargeTimerBank,CLIENT)
        F(life_fnc_playSound3D,CLIENT)
        F(life_fnc_alcotestClient,CLIENT)
        F(life_fnc_returnAlcoTest,CLIENT)
        F(life_fnc_medicLights,CLIENT)
        F(life_fnc_checkDamageReturn, CLIENT)
        F(life_fnc_checkDamageClient, CLIENT)
        F(life_fnc_launchAtouts, CLIENT)
        F(life_fnc_returnAddImmatricule, CLIENT)
        F(life_fnc_checkImmatriculeReturn, CLIENT)
        F(life_fnc_receiveMarkers, CLIENT)
        F(life_fnc_shellreturnCImma, CLIENT)
        F(life_fnc_copReceiveIllegalServ, CLIENT)
        F(life_fnc_copreceivemarkers, CLIENT)
        F(life_fnc_achievementGet, CLIENT)
        F(life_fnc_clientMouchard, CLIENT)
        F(life_fnc_timerStop, CLIENT)
        F(life_fnc_timerLaunch, CLIENT)
        F(life_fnc_syndikatClient, CLIENT)
        F(life_fnc_showPredefinedNotification, CLIENT) //rajout alharis notif système de tir
 


        //Ent
        F(life_fnc_contratEntreprise, CLIENT)

        F(SAN_fnc_ToggleHeadlamp,ANYONE)
        F(SAN_fnc_sendJIPinfo,ANYONE) 
        //clan
        F(life_fnc_clanHouseUpdate, CLIENT)
        F(life_fnc_clanVehicleTakeMenu, CLIENT)
        F(life_fnc_clanCreated, CLIENT)
        F(life_fnc_clanDeletePlayers, CLIENT)
        F(life_fnc_clanInvite, CLIENT)
        F(life_fnc_clanLeave, CLIENT)
        F(life_fnc_clanCompleted, CLIENT)

        // Victim
        F(life_fnc_tortureVictimClient, CLIENT)
        F(life_fnc_tortureVictimPlaceClient, CLIENT)


        // Ice
        F(life_fnc_iceServerFioleFusion, CLIENT)
        F(life_fnc_iceServerFioleAdd, CLIENT)

        // Shell
        F(life_fnc_shellReturnComp, CLIENT)
        F(life_fnc_shellReturnDir,CLIENT)

        F(life_fnc_achievementLearn, CLIENT)

        // Dem
        F(life_fnc_soundDem, CLIENT)

        //Papier
        F(life_fnc_papierReceive, CLIENT)

        // Admin
        F(admin_fnc_admininfo,CLIENT)
        F(admin_fnc_adminid,CLIENT)
        F(admin_fnc_adminReceiveLog,CLIENT)
        F(admin_fnc_alertAdmin,CLIENT)
        F(admin_fnc_adminHealPlayer,CLIENT)
        F(admin_fnc_adminRevivePlayer,CLIENT)

        //FireWorks


        // TARGET by alharis
                F(TON_fnc_trainingTargetCreateProfile,SERVER)
                F(TON_fnc_trainingTargetLaunch,SERVER)
                F(TON_fnc_trainingTargetRetreiveProfile,SERVER)
                F(TON_fnc_trainingTargetRetrieveScores,SERVER)
                F(TON_fnc_trainingTargetSaveScore,SERVER)
                F(TON_fnc_trainingTargetStop,SERVER)
                F(TON_fnc_trainingTargetRetreiveStats,SERVER)
                F(TON_fnc_trainingTargetSaveStats,SERVER)



        //F(life_fnc_fireworksLaunch, CLIENT)
        F(life_fnc_receiveFront, CLIENT)
        F(TON_fnc_updateDB,ANYONE)
        F(life_fnc_transformargent,ANYONE)
        F(life_fnc_creategroundMoney,ANYONE)
        F(life_fnc_initargentsal,ANYONE)
        F(TON_fnc_addnewargent,ANYONE)
        F(TON_fnc_argentsalinit,ANYONE)
        F(life_fnc_checkmoney,ANYONE)
        F(life_fnc_deterre,ANYONE)
        F(TON_fnc_deterre,ANYONE)
        F(TON_fnc_removeterre,ANYONE)
        F(bis_fnc_debugconsoleexec,ANYONE)
        F(life_fnc_addnewargent,ANYONE)


        /* Server only functions */
        F(bis_fnc_execvm,SERVER)
        F(life_fnc_wantedBounty,SERVER)
        F(TON_fnc_getID,SERVER)
        F(life_fnc_jailSys,SERVER)
        F(life_fnc_wantedRemove,SERVER)
        F(life_fnc_wantedAdd,SERVER)
        F(TON_fnc_insertGang,SERVER)
        F(TON_fnc_removeGang,SERVER)
        F(TON_fnc_updateGang,SERVER)
        F(TON_fnc_updateHouseTrunk,SERVER)
        F(TON_fnc_sellHouse,SERVER)
        F(TON_fnc_managesc,SERVER)
        F(TON_fnc_spikeStrip,SERVER)
        F(life_fnc_wantedCrimes,SERVER)
        F(life_fnc_wantedFetch,SERVER)
        F(life_fnc_wantedProfUpdate,SERVER)
        F(DB_fnc_queryRequest,SERVER)
        F(DB_fnc_insertRequest,SERVER)
        F(DB_fnc_updatePartial,SERVER)
        F(DB_fnc_getPlayerParam,SERVER)
        F(DB_fnc_getPlayerAchievement, SERVER)
        F(DB_fnc_updateRequest,SERVER)
        F(TON_fnc_chopShopSell,SERVER)
        F(TON_fnc_setObjVar,SERVER)
        F(TON_fnc_keyManagement,SERVER)
        F(TON_fnc_vehicleDelete,SERVER)
        F(TON_fnc_spawnVehicle,SERVER)
        F(TON_fnc_getVehicles,SERVER)
        F(TON_fnc_vehicleStore,SERVER)
        F(SPY_fnc_observe,SERVER)
        F(TON_fnc_pickupAction,SERVER)
        F(TON_fnc_cleanupRequest,SERVER)
        F(TON_fnc_addArsenal,SERVER)
        F(TON_fnc_updateArsenal,SERVER)
        F(TON_fnc_vehicleCreate,SERVER)
        F(TON_fnc_addHouse,SERVER)
        F(TON_fnc_addContainer,SERVER)
        F(TON_fnc_sellHouseContainer,SERVER)
        F(TON_fnc_deleteDBContainer,SERVER)
        F(TON_fnc_insertDeathLogs,SERVER)
        F(TON_fnc_insertFarmLogs,SERVER)
        F(TON_fnc_alarmBank,SERVER)
        F(TON_fnc_updatehousecontainers,SERVER)
        F(TON_fnc_vehicleAssure,SERVER)
        F(TON_fnc_petrolStationCooldown,SERVER)
        F(TON_fnc_insertStorage,SERVER)
        F(TON_fnc_updatePlayerStorage,SERVER)
        F(TON_fnc_logsAdmin,SERVER)
        F(TON_fnc_saveCurrentFarm,SERVER)
        F(TON_fnc_addChest,SERVER)
        F(TON_fnc_updateChestEntre,SERVER)
        F(TON_fnc_updateEntTrunk,SERVER)
        F(TON_fnc_AlertAllAdmins,SERVER)
        F(TON_fnc_hideAdmin,SERVER)
        F(TON_fnc_spawnCaisseAir,SERVER)
        F(TON_fnc_insertRetourZoneLogs,SERVER)
        F(TON_fnc_insertAntiCamp,SERVER)
        F(TON_fnc_initVehicle,SERVER)
        F(TON_fnc_placeTraceur,SERVER)
        F(TON_fnc_removeTraceur,SERVER)
        F(TON_fnc_adminVehicleStore,SERVER)
        F(TON_fnc_zeusStoreVehicle,SERVER)
        F(TON_fnc_whiteList,SERVER)
        F(TON_fnc_insertTransfersMoney,SERVER)
        F(TON_fnc_insertATMLog,SERVER)
        F(TON_fnc_removeBurn,SERVER)
        F(TON_fnc_insertActionLogs, SERVER)
        F(TON_fnc_insertTrunkLogs, SERVER)
        F(TON_fnc_addImmatriculation, SERVER)
        F(TON_fnc_checkImmatriculation, SERVER)
        F(TON_fnc_removeImmatriculation, SERVER)
        F(TON_fnc_customVehicle, SERVER)
        F(TON_fnc_houseTakeVeh, SERVER)

        //House
        F(TON_fnc_houseAdd, SERVER)
        F(TON_fnc_houseSell, SERVER)
        F(TON_fnc_houseUpdate, SERVER)
        F(TON_fnc_houseUpgrade, SERVER)
        F(TON_fnc_houseStoreVeh, SERVER)

        //clan
        F(TON_fnc_clanAddPlayer, SERVER)
        F(TON_fnc_clanBuyHouse, SERVER)
        F(TON_fnc_clanCreate, SERVER)
        F(TON_fnc_clanDelete, SERVER)
        F(TON_fnc_clanGetVehicles, SERVER)
        F(TON_fnc_clanHouseUpdate, SERVER)
        F(TON_fnc_clanPlayerGetClan, SERVER)
        F(TON_fnc_clanRemoveVehicle, SERVER)
        F(TON_fnc_clanSellHouse, SERVER)
        F(TON_fnc_clanStoreVehicle, SERVER)
        F(TON_fnc_clanTakeVehicle, SERVER)
        F(TON_fnc_clanUpdate, SERVER)
        F(TON_fnc_clanUpdatePlayer, SERVER)
        F(TON_fnc_clanUpgrade, SERVER)

        // FOURRIERE
       // F(TON_fnc_fourriereVehStore, SERVER)
       // F(TON_fnc_fourriereVehGet, SERVER)


        F(TON_fnc_copIllegalMarkers, SERVER)

        /*F(TON_fnc_shellCreatePlayer, SERVER)
        F(TON_fnc_shellGestionDir, SERVER)
        F(TON_fnc_shellGetByPlayer, SERVER)*/

        // Ice
        F(TON_fnc_iceChimieFusionFiole, SERVER)

        // Gouv
        F(TON_fnc_gouvLoisCreate, SERVER)
        F(TON_fnc_gouvLoisDB, SERVER)
        F(TON_fnc_gouvMoneyAction, SERVER)
        F(TON_fnc_gouvTaxesPay, SERVER)
        F(TON_fnc_voteActionDB, SERVER)

        // FireWorks
       // F(TON_fnc_fireworksLaunch, SERVER)

        F(life_fnc_say3D,ANYONE)

        /* Functions for everyone */
        F(ton_fnc_rem_proxy,SERVER) //admintool
        F(life_fnc_broadcast,ANYONE)
        F(life_fnc_animSync,ANYONE)
        F(life_fnc_demoChargeTimer,ANYONE)
        F(life_fnc_corpse,ANYONE)
        F(life_fnc_colorVehicle,ANYONE)
        F(life_fnc_lockVehicle,ANYONE)
        F(life_fnc_flashbang,ANYONE)
        F(life_fnc_jumpFnc,ANYONE)
        F(SPY_fnc_notifyAdmins,ANYONE)
        F(life_fnc_setFuel,ANYONE)
        F(life_fnc_pulloutVeh,ANYONE)
        F(life_fnc_pushFunction,ANYONE)
        F(life_fnc_simDisable,ANYONE)
        F(callFireworks,ANYONE)
        F(life_fnc_earthquake,ANYONE)
        F(life_fnc_spawnIndicator,ANYONE)
        F(life_fnc_eventfeed,ANYONE)
        F(life_fnc_dynamicText,ANYONE)
        F(TON_fnc_launchScriptServer,ANYONE)
        F(TON_fnc_SetHit, ANYONE)
        F(murshun_cigs_fnc_smoke, ANYONE)
        F(TON_fnc_clientAddKey, ANYONE)
		F(bis_fnc_curatorrespawn, ANYONE)
		F(lock, ANYONE)
		F(playmove, ANYONE)
		F(setdir, ANYONE)
		F(bis_fnc_arsenal, ANYONE)

        /* Ajout fonctionnalitées ROFT*/
        F(life_fnc_IdentityCiv,CLIENT)
    };

    class Commands {
        mode = 1;
        jip = 0;

        F(setFuel,ANYONE)
        F(addWeapon,ANYONE)
        F(setHitPointDamage,ANYONE) //rajout repair system par alharis
        F(addMagazine,ANYONE)
        F(addPrimaryWeaponItem,ANYONE)
        F(addHandgunItem,ANYONE)
        F(switchmove,ANYONE)
		F(say3D, ANYONE)

    };
};
