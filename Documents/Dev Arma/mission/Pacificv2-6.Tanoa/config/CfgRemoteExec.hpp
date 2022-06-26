#define F(NAME,TARGET) class NAME { \
    allowedTargets = TARGET; \
};

#define ANYONE 0
#define CLIENT 1
#define SERVER 2

class CfgRemoteExec {
    class Functions {
        mode = 1;
        jip = 0;

        /* Client only functions */
        F(life_fnc_jail,CLIENT)
        F(life_fnc_moveIn,CLIENT)
        F(life_fnc_restrain,CLIENT)
        F(life_fnc_restrain2,CLIENT)
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
        F(TON_fnc_clientGetKey,CLIENT)
        F(life_fnc_soundDevice,CLIENT)
        F(life_fnc_wireTransfer,CLIENT)
        F(life_fnc_pickupMoney,CLIENT)
        F(life_fnc_pickupItem,CLIENT)
        F(life_fnc_gangCreated,CLIENT)
        F(life_fnc_gangDisbanded,CLIENT)
        //F(life_fnc_jailMe,CLIENT)
        F(SOCK_fnc_dataQuery,CLIENT)
        F(SOCK_fnc_insertPlayerInfo,CLIENT)
        F(SOCK_fnc_requestReceived,CLIENT)
        F(SOCK_fnc_requestReceivedCiv,CLIENT)
        F(SOCK_fnc_requestReceivedCop,CLIENT)
        F(SOCK_fnc_requestReceivedMed,CLIENT)
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
        F(life_fnc_tradeMenuOpen,CLIENT)
        F(life_fnc_tradeMenuAccept,CLIENT)
        F(life_fnc_tradeMenuClose,CLIENT)
        F(life_fnc_tradeMenuMakeOffer,CLIENT)
        F(life_fnc_tradeMenuReceiveData,CLIENT)
        F(life_fnc_tradeMenuReset,CLIENT)
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
        F(life_fnc_chargeTimerBankSimple,CLIENT)
        F(life_fnc_playSound3D,CLIENT)
        F(life_fnc_playSound3D2,CLIENT)
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
        F(life_fnc_showPredefinedNotification, CLIENT)

        
        
        F(life_fnc_lacrymoLaunchReceive, CLIENT)

        //Ent
        F(life_fnc_entrepriseInvoicePaid, CLIENT)   
        F(life_fnc_entrepriseInvoicePrompt, CLIENT)    

        //Phone
        F(life_fnc_phoneReceive, CLIENT)
        F(life_fnc_phoneContactCreateReceive, CLIENT)
        F(life_fnc_phoneLoad, CLIENT)
        F(life_fnc_phoneLoadStats, CLIENT)
        F(life_fnc_phoneLoadContact, CLIENT)
        F(life_fnc_phoneMessageOpenMenu, CLIENT)
        F(life_fnc_phoneMessageReceive, CLIENT)
        F(life_fnc_phoneMessageReceiveCreate, CLIENT)

        //Ent
        F(life_fnc_contratEntreprise, CLIENT)

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
        F(life_fnc_fireworksLaunch, CLIENT)
        F(life_fnc_receiveFront, CLIENT)

        //Target
        F(life_fnc_targetTrainingOpenScores, CLIENT)
        F(life_fnc_targetTrainingProfileCreated, CLIENT)
        F(life_fnc_targetTrainingProfileReceive, CLIENT)
        F(life_fnc_targetTrainingSuccessMessage, CLIENT)
        F(life_fnc_targetTrainingStatsReceive, CLIENT)

        //Caches
        F(life_fnc_cachesSearchResult, CLIENT)

        //Insurge
        F(life_fnc_insurgeOpenClanStats, CLIENT)
        F(life_fnc_insurgeZoneMsg, CLIENT)

        F(life_fnc_narcosOpenClanStats, CLIENT)
        F(life_fnc_narcosZoneMsg, CLIENT)

        F(life_fnc_radioSystemSecurReceivePos, CLIENT)

        F(life_fnc_fourriereVehiclesReceive, CLIENT)
        F(life_fnc_fourrierePayOutVehicleGood, CLIENT)

        F(life_fnc_transfertVehValidReceive, CLIENT)
        F(life_fnc_transfertVehValidReceiveTo, CLIENT)

        F(life_fnc_garageCommonReceive, CLIENT)

        F(life_fnc_keyRemove, CLIENT)

        F(life_fnc_morphine, CLIENT)

        F(life_fnc_atoutsReceive, CLIENT)
        F(life_fnc_atoutsEnd, CLIENT)

        F(life_fnc_playerUnlockReceive, CLIENT)
        F(life_fnc_playerUnlockAdd, CLIENT)

        F(life_fnc_depanBaliseEnd, CLIENT)
        F(life_fnc_depanBaliseReceive, CLIENT)
        F(life_fnc_depanServiceReceive, CLIENT)
        F(life_fnc_depanBaliseAccepted, CLIENT)


        /* Server only functions */
        F(bis_fnc_execvm,SERVER)
        F(life_fnc_wantedBounty,SERVER)
        F(TON_fnc_getID,SERVER)
        //F(life_fnc_jailSys,SERVER)
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
        F(TON_fnc_insertCaseMoneyLog, SERVER)
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
        F(TON_fnc_fourriereVehStore, SERVER)
        F(TON_fnc_fourriereVehGet, SERVER)


        F(TON_fnc_copIllegalMarkers, SERVER)

        // TARGET
        F(TON_fnc_trainingTargetCreateProfile,SERVER)
        F(TON_fnc_trainingTargetLaunch,SERVER)
        F(TON_fnc_trainingTargetRetreiveProfile,SERVER)
        F(TON_fnc_trainingTargetRetrieveScores,SERVER)
        F(TON_fnc_trainingTargetSaveScore,SERVER)
        F(TON_fnc_trainingTargetStop,SERVER)
        F(TON_fnc_trainingTargetRetreiveStats,SERVER)
        F(TON_fnc_trainingTargetSaveStats,SERVER)

        //Phone
        F(TON_fnc_phoneCreateContact,SERVER)
        F(TON_fnc_phoneDeleteContact,SERVER)
        F(TON_fnc_phoneDeleteMessage,SERVER)
        F(TON_fnc_phoneSendMessage,SERVER)
        F(TON_fnc_phoneLoadMessages,SERVER)
        F(TON_fnc_phoneCreate,SERVER)
        F(TON_fnc_phoneDelete,SERVER)
        F(TON_fnc_phoneLoad,SERVER)
        F(TON_fnc_phoneLoadContact,SERVER)
        F(TON_fnc_phoneReadMessage,SERVER)

        //Cache
        F(TON_fnc_cachesExit,SERVER)
        F(TON_fnc_cachesFind,SERVER)
        F(TON_fnc_cachesUpdate,SERVER)

        //Insurge
        F(TON_fnc_insurgeFindClanStats,SERVER)
        F(TON_fnc_insurgeDeposeCash,SERVER)

        F(TON_fnc_narcosFindClanStats,SERVER)
        F(TON_fnc_narcosDeposeCash,SERVER)


        F(TON_fnc_insertSellLogs, SERVER)
        F(TON_fnc_insertBraquagesLogs, SERVER)

                
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
        F(TON_fnc_fireworksLaunch, SERVER)

        F(TON_fnc_fourriereGetVehicle, SERVER)
        F(TON_fnc_fourriereListVehicle, SERVER)
        F(TON_fnc_fourriereStoreVehicle, SERVER)
        F(TON_fnc_fourrierePayOutVehicle, SERVER)

        F(TON_fnc_vehicleTransfAction, SERVER)

        F(TON_fnc_garageCommonGetVehicle, SERVER)
        F(TON_fnc_garageCommonListVehicles, SERVER)
        F(TON_fnc_garageCommonRemoveVehicle, SERVER)
        F(TON_fnc_garageCommonStoreVehicle, SERVER)

        F(TON_fnc_insertPlayerReport, SERVER)

        F(TON_fnc_atoutsStart, SERVER)
        F(TON_fnc_atoutsStop, SERVER)

        F(TON_fnc_playerUnlockAdd, SERVER)
        F(TON_fnc_playerUnlockRemove, SERVER)

        F(TON_fnc_depanAcceptBalise, SERVER)
        F(TON_fnc_depanRefuseBalise, SERVER)
        F(TON_fnc_depanLaunchBalise, SERVER)
        F(TON_fnc_depanLeftService, SERVER)
        F(TON_fnc_depanTakeService, SERVER)
        F(TON_fnc_depanEndBalise, SERVER)



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
        F(life_fnc_immatriculeVehSet, ANYONE)

        F(SAN_fnc_ToggleHeadlamp, ANYONE)
        F(SAN_fnc_sendJIPinfo, ANYONE)

        F(life_fnc_deleteVehicleAction, ANYONE)

      

    };

    class Commands {
        mode = 1;
        jip = 0;

        F(say3D,ANYONE)
        F(setFuel,ANYONE)
        F(addWeapon,ANYONE)
        F(addMagazine,ANYONE)
        F(addPrimaryWeaponItem,ANYONE)
        F(addHandgunItem,ANYONE)
    };
};
