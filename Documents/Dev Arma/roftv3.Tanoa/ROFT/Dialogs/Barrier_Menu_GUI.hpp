class ROFT_GUI_BarrierGUI 
{
idd = 1705;
style = 32;
name = "ROFT_GUI_BarrierGUI";
movingEnable = 0;
onload = "[] spawn ROFT_fnc_BarrierGUI";

class controlsbackground 
    {
        class ROFT_GUI_BarrierBack: IGUIBack
        {
            idc = -1;
            x = 0 * GUI_GRID_W + GUI_GRID_X;
            y = 0 * GUI_GRID_H + GUI_GRID_Y;
            w = 40 * GUI_GRID_W;
            h = 25 * GUI_GRID_H;
            colorBackground[] = {0,0,0,0.4};
        };
    };
    
class controls 
    {

        class ROFT_GUI_BarrierTitle: RscText
        {
            idc = -1;
            text = "Pacific Island Menu Balisage"; //--- ToDo: Localize;
            x = 0 * GUI_GRID_W + GUI_GRID_X;
            y = -1 * GUI_GRID_H + GUI_GRID_Y;
            w = 40 * GUI_GRID_W;
            h = 1 * GUI_GRID_H;
            colorBackground[] = {1,0.475,0,1};
        };
        class ROFT_GUI_BarrierX: RscButtonMenuCancel
        {
            text = "X"; //--- ToDo: Localize;
            x = 38.5 * GUI_GRID_W + GUI_GRID_X;
            y = -1 * GUI_GRID_H + GUI_GRID_Y;
            w = 1.5 * GUI_GRID_W;
            h = 1 * GUI_GRID_H;
            tooltip = "Fermer Menu"; //--- ToDo: Localize;
            action = "(finddisplay 1705) closedisplay 0";
        };
        class ROFT_GUI_Barrierlistbox: RscListbox
        {
            idc = 2686;
            x = 2 * GUI_GRID_W + GUI_GRID_X;
            y = 2 * GUI_GRID_H + GUI_GRID_Y;
            w = 18 * GUI_GRID_W;
            h = 21 * GUI_GRID_H;
            tooltip = "Sélectionnez le balisage que vous souhaitez poser"; //--- ToDo: Localize;
        };
        class ROFT_GUI_Barrierspawn: RscButton
        {
            idc = 1600;
            text = "Déployer le balisage sélectionné"; //--- ToDo: Localize;
            x = 22 * GUI_GRID_W + GUI_GRID_X;
            y = 4 * GUI_GRID_H + GUI_GRID_Y;
            w = 16 * GUI_GRID_W;
            h = 1 * GUI_GRID_H;
            tooltip = "Déployer le balisage sélectionné"; //--- ToDo: Localize;
            action = "[lbtext[2686,(lbCurSel 2686)]] call ROFT_fnc_spawnbarrier";
        };
        class ROFT_GUI_BarrierCleanup: RscButton
        {
            idc = 1601;
            text = "Supprimer le type de balisage sélectionné"; //--- ToDo: Localize;
            x = 22 * GUI_GRID_W + GUI_GRID_X;
            y = 8 * GUI_GRID_H + GUI_GRID_Y;
            w = 16 * GUI_GRID_W;
            h = 1 * GUI_GRID_H;
            tooltip = "Supprime tous les balisages près de vous du type sélectionné"; //--- ToDo: Localize;
            action = "[lbtext[2686,(lbCurSel 2686)],1] call ROFT_fnc_cleanupbarrier";
        };
        class ROFT_GUI_BarrierCleanupButton: RscButton
        {
            idc = 1602;
            text = "Supprimer tous les balisages (10 mètres)"; //--- ToDo: Localize;
            x = 22 * GUI_GRID_W + GUI_GRID_X;
            y = 12 * GUI_GRID_H + GUI_GRID_Y;
            w = 16 * GUI_GRID_W;
            h = 1 * GUI_GRID_H;
            tooltip = "Supprime tous les balisages près de vous de TOUS TYPES"; //--- ToDo: Localize;
            action = "[0,2] call ROFT_fnc_cleanupbarrier";
        };
    };
};