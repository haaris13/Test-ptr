class ASN_BlackjackBet {
    idd = 8999216;
    name= "ASN_BlackjackBet";
    movingEnable = 0;
    enableSimulation = 1;

    class ControlsBackground {
        class Header: ASN_ctrlStaticHeader {
            text = "Blackjack Bet";
            x    = (((getResolution select 2) * 0.5 * pixelW) - (130 * 0.5) * (pixelW * pixelGrid * 0.50));
            y    = (0.415 - (40 * 0.5 - 5) * (pixelH * pixelGrid * 0.50));
            w    = 130 * (pixelW * pixelGrid * 0.50);
            h    = 5 * (pixelH * pixelGrid * 0.50);
        };
        class Background: ASN_ctrlStaticBackground {
            x = (((getResolution select 2) * 0.5 * pixelW) - (130 * 0.5) * (pixelW * pixelGrid * 0.50));
            y = (0.415 - (40 * 0.5 - 5) * (pixelH * pixelGrid * 0.50)) + (5 * (pixelH * pixelGrid * 0.50));
            w = 130 * (pixelW * pixelGrid * 0.50);
            h = (40 * (pixelH * pixelGrid * 0.50)) - (5 * (pixelH * pixelGrid * 0.50)) - ((5 + 2) * (pixelH * pixelGrid * 0.50));
        };
        class TitleWelcome: ASN_ctrlStatic {
            idc = 122;
            text = "";
            x    = ((((getResolution select 2) * 0.5 * pixelW) - (130 * 0.5) * (pixelW * pixelGrid * 0.50)) + (1.5 * (pixelW * pixelGrid * 0.50)));
            y    = ((0.43 - (40 * 0.5 - 5) * (pixelH * pixelGrid * 0.50)) + (5 * (pixelH * pixelGrid * 0.50)) + (1.5 * (pixelH * pixelGrid * 0.50)));
            w    = 130 * (pixelW * pixelGrid * 0.50);
            h    = (5 * (pixelH * pixelGrid * 0.50)) * 2;
            sizeEx = "0.015 * safezoneH";
            style = ST_MULTI + ST_NO_RECT;
        };
        class AmmountToBetText: TitleWelcome {
            text = "Amount to Bet:";
            y    = ((0.46 - (40 * 0.5 - 5) * (pixelH * pixelGrid * 0.50)) + (5 * (pixelH * pixelGrid * 0.50)) + (1.5 * (pixelH * pixelGrid * 0.50))) + (5 * (pixelH * pixelGrid * 0.50)) + (pixelH * pixelGrid * 0.50);
            w    = 25 * (pixelW * pixelGrid * 0.50);
        };
    };
    
    class Controls {
        class AmmountToBet: ASN_ctrlEdit {
            idc  = 123;
            x    = ((((getResolution select 2) * 0.5 * pixelW) - (130 * 0.5) * (pixelW * pixelGrid * 0.50)) + (1.5 * (pixelW * pixelGrid * 0.50)));
            y    = ((0.415 - (40 * 0.5 - 5) * (pixelH * pixelGrid * 0.50)) + (5 * (pixelH * pixelGrid * 0.50)) + (1.5 * (pixelH * pixelGrid * 0.50))) + (((5 * (pixelH * pixelGrid * 0.50)) + (pixelH * pixelGrid * 0.50)) * 2) + (5 * (pixelH * pixelGrid * 0.50)) + (pixelH * pixelGrid * 0.50);
            w    = (130 * (pixelW * pixelGrid * 0.50)) - ((1.5 * (pixelW * pixelGrid * 0.50)) * 2);
            h    = 5 * (pixelH * pixelGrid * 0.50);
            text = "1";
        };
        class FooterGroup: ASN_ctrlControlsGroupNoScrollbars {
            idc = 124;
            x   = (((getResolution select 2) * 0.5 * pixelW) - (130 * 0.5) * (pixelW * pixelGrid * 0.50));
            y   = (0.415 - (40 * 0.5 - 5) * (pixelH * pixelGrid * 0.50))  + (40 * (pixelH * pixelGrid * 0.50)) - ((5 + 2) * (pixelH * pixelGrid * 0.50));
            w   = 130 * (pixelW * pixelGrid * 0.50);
            h   = (5 + 2) * (pixelH * pixelGrid * 0.50);
            class Controls {
                class Background: ASN_ctrlStaticFooter {
                    x = 0;
                    y = 0;
                    w = 130 * (pixelW * pixelGrid * 0.50);
                    h = (5 + 2) * (pixelH * pixelGrid * 0.50);
                };
                class ButtonStart: ASN_ctrlDefaultButton {
                    idc  = 125;
                    text = "START GAME";
                    x    = (pixelW * pixelGrid * 0.50);
                    y    = (pixelH * pixelGrid * 0.50);
                    w    = (130 * (pixelW * pixelGrid * 0.50)) * 0.2;
                    h    = 5 * (pixelH * pixelGrid * 0.50);
                    onButtonClick = "";
                };
            };
        };
        class ButtonCancel: ASN_ctrlButtonClose {
            x = (((getResolution select 2) * 0.5 * pixelW) - (130 * 0.5) * (pixelW * pixelGrid * 0.50)) + (130 * (pixelW * pixelGrid * 0.50)) - (5 * (pixelW * pixelGrid * 0.50));
            y = (0.415 - (40 * 0.5 - 5) * (pixelH * pixelGrid * 0.50));
            w = 5 * (pixelW * pixelGrid * 0.50);
            h = 5 * (pixelH * pixelGrid * 0.50);
            onButtonClick = "closeDialog 0;";
        };
    };
};

class ASN_Blackjack {
    idd = 158513;
    name= "ASN_Blackjack";
    movingEnable = 0;
    enableSimulation = 1;

    class controlsBackground {
        class Header: ASN_ctrlStaticHeader {
            idc = 32;
            text = "Blackjack";
            x    = (((getResolution select 2) * 0.5 * pixelW) - (160 * 0.5) * (pixelW * pixelGrid * 0.50));
            y    = (0.440 - (100 * 0.5 - 5) * (pixelH * pixelGrid * 0.50));
            w    = 160 * (pixelW * pixelGrid * 0.50);
            h    = 5 * (pixelH * pixelGrid * 0.50);
        };
        class Background: ASN_ctrlStaticBackground {
            x = (((getResolution select 2) * 0.5 * pixelW) - (160 * 0.5) * (pixelW * pixelGrid * 0.50));
            y = (0.440 - (100 * 0.5 - 5) * (pixelH * pixelGrid * 0.50)) + (5 * (pixelH * pixelGrid * 0.50));
            w = 160 * (pixelW * pixelGrid * 0.50);
            h = (100 * (pixelH * pixelGrid * 0.50)) - (5 * (pixelH * pixelGrid * 0.50));
        };
        class MyHandTopBackground: ASN_ctrlStatic {
            x                 = ((((getResolution select 2) * 0.5 * pixelW) - (155 * 0.5) * (pixelW * pixelGrid * 0.50)) + (1.5 * (pixelW * pixelGrid * 0.50)));
            y                 = ((0.415 - (100 * 0.5 - 5) * (pixelH * pixelGrid * 0.50)) + (5 * (pixelH * pixelGrid * 0.50)) + (1.5 * (pixelH * pixelGrid * 0.50))) + (5 * (pixelH * pixelGrid * 0.50)) + (2 * (pixelH * pixelGrid * 0.50 / 2));
            w                 = ((160 / 2.18) * (pixelW * pixelGrid * 0.50));
            h                 = 5 * (pixelH * pixelGrid * 0.50);
            colorBackground[] = {0, 0, 0, 1};
        };
        class MyHandLabel: ASN_ctrlStatic {
            idc  = 232321 + 1;
            text = "My Hand";
            x    = ((((getResolution select 2) * 0.5 * pixelW) - (155 * 0.5) * (pixelW * pixelGrid * 0.50)) + (1.5 * (pixelW * pixelGrid * 0.50)));
            y    = ((0.456 - (100 * 0.5 - 5) * (pixelH * pixelGrid * 0.50)) + (5 * (pixelH * pixelGrid * 0.50)) + (1.5 * (pixelH * pixelGrid * 0.50)));
            w    = ((160 / 2.18) * (pixelW * pixelGrid * 0.50));
            h    = 5 * (pixelH * pixelGrid * 0.50);
        };
        class MyHandAmm: ASN_ctrlStatic {
            idc  = 13;
            text = "0";
            x    = ((((getResolution select 2) * 0.5 * pixelW) - (20 * 0.5) * (pixelW * pixelGrid * 0.50)) + (1.5 * (pixelW * pixelGrid * 0.50)));
            y    = ((0.456 - (100 * 0.5 - 5) * (pixelH * pixelGrid * 0.50)) + (5 * (pixelH * pixelGrid * 0.50)) + (1.5 * (pixelH * pixelGrid * 0.50)));
            w    = ((160 / 2.18) * (pixelW * pixelGrid * 0.50));
            h    = 5 * (pixelH * pixelGrid * 0.50);
        };

        class MyHandBackground: ASN_ctrlStatic {
            idc = 25;
            x   = ((((getResolution select 2) * 0.5 * pixelW) - (155 * 0.5) * (pixelW * pixelGrid * 0.50)) + (1.5 * (pixelW * pixelGrid * 0.50)));
            y   = ((0.376 - (100 * 0.5 - 5) * (pixelH * pixelGrid * 0.50)) + (5 * (pixelH * pixelGrid * 0.50)) + (1.5 * (pixelH * pixelGrid * 0.50))) + ((5 * (pixelH * pixelGrid * 0.50)) * 3) + (2 * (pixelH * pixelGrid * 0.50));
            w   = ((160 / 2.18) * (pixelW * pixelGrid * 0.50));
            h   = (100 / 1.34) * (pixelH * pixelGrid * 0.50);
            colorBackground[] = {0,0,0,0.5};
        };

        class DealerHandTopBackground: ASN_ctrlStatic {
            x                 = ((((getResolution select 2) * 0.5 * pixelW) - (0 * 0.5) * (pixelW * pixelGrid * 0.50)) + (1.5 * (pixelW * pixelGrid * 0.50)));
            y                 = ((0.415 - (100 * 0.5 - 5) * (pixelH * pixelGrid * 0.50)) + (5 * (pixelH * pixelGrid * 0.50)) + (1.5 * (pixelH * pixelGrid * 0.50))) + (5 * (pixelH * pixelGrid * 0.50)) + (2 * (pixelH * pixelGrid * 0.50 / 2));
            w                 = ((160 / 2.18) * (pixelW * pixelGrid * 0.50));
            h                 = 5 * (pixelH * pixelGrid * 0.50);
            colorBackground[] = {0, 0, 0, 1};
        };
        class DealerHandLabel: ASN_ctrlStatic {
            idc  = 232324 + 1;
            text = "Dealer Hand";
            x    = ((((getResolution select 2) * 0.5 * pixelW) - (0 * 0.5) * (pixelW * pixelGrid * 0.50)) + (1.5 * (pixelW * pixelGrid * 0.50)));
            y    = ((0.456 - (100 * 0.5 - 5) * (pixelH * pixelGrid * 0.50)) + (5 * (pixelH * pixelGrid * 0.50)) + (1.5 * (pixelH * pixelGrid * 0.50)));
            w    = ((160 / 2.18) * (pixelW * pixelGrid * 0.50));
            h    = 5 * (pixelH * pixelGrid * 0.50);
        };

        class DealerHandAmm: ASN_ctrlStatic {
            idc  = 14;
            text = "0";
            x    = ((((getResolution select 2) * 0.5 * pixelW) - (-135 * 0.5) * (pixelW * pixelGrid * 0.50)) + (1.5 * (pixelW * pixelGrid * 0.50)));
            y    = ((0.456 - (100 * 0.5 - 5) * (pixelH * pixelGrid * 0.50)) + (5 * (pixelH * pixelGrid * 0.50)) + (1.5 * (pixelH * pixelGrid * 0.50)));
            w    = ((160 / 2.18) * (pixelW * pixelGrid * 0.50));
            h    = 5 * (pixelH * pixelGrid * 0.50);
        };

        class DealerHandBackground: ASN_ctrlStatic {
            idc = 26;
            x   = ((((getResolution select 2) * 0.5 * pixelW) - (0 * 0.5) * (pixelW * pixelGrid * 0.50)) + (1.5 * (pixelW * pixelGrid * 0.50)));
            y   = ((0.376 - (100 * 0.5 - 5) * (pixelH * pixelGrid * 0.50)) + (5 * (pixelH * pixelGrid * 0.50)) + (1.5 * (pixelH * pixelGrid * 0.50))) + ((5 * (pixelH * pixelGrid * 0.50)) * 3) + (2 * (pixelH * pixelGrid * 0.50));
            w   = ((160 / 2.18) * (pixelW * pixelGrid * 0.50));
            h   = (100 / 1.34) * (pixelH * pixelGrid * 0.50);
            colorBackground[] = {0,0,0,0.5};
        };
    };
    class controls {
        class MyHandCard1: ASN_ctrlStaticPictureKeepAspect {
            idc = 1;
            x   = ((((getResolution select 2) * 0.5 * pixelW) - (158.5 * 0.5) * (pixelW * pixelGrid * 0.50)) + (1.5 * (pixelW * pixelGrid * 0.50)));
            y   = ((0.36 - (100 * 0.5 - 5) * (pixelH * pixelGrid * 0.50)) + (5 * (pixelH * pixelGrid * 0.50)) + (1.5 * (pixelH * pixelGrid * 0.50))) + ((5 * (pixelH * pixelGrid * 0.50)) * 3) + (2 * (pixelH * pixelGrid * 0.50));
            w   = ((60 / 2.18) * (pixelW * pixelGrid * 0.50));
            h   = (60 / 1.34) * (pixelH * pixelGrid * 0.50);
            text = "";
        };

        class MyHandCard2: MyHandCard1 {
            idc = 2;
            x   = ((((getResolution select 2) * 0.5 * pixelW) - (109 * 0.5) * (pixelW * pixelGrid * 0.50)) + (1.5 * (pixelW * pixelGrid * 0.50)));
        };

        class MyHandCard3: MyHandCard2 {
            idc = 3;
            x   = ((((getResolution select 2) * 0.5 * pixelW) - (60 * 0.5) * (pixelW * pixelGrid * 0.50)) + (1.5 * (pixelW * pixelGrid * 0.50)));
        };

        class MyHandCard4: MyHandCard1 {
            idc = 4;
            x   = ((((getResolution select 2) * 0.5 * pixelW) - (158.5 * 0.5) * (pixelW * pixelGrid * 0.50)) + (1.5 * (pixelW * pixelGrid * 0.50)));
            y   = ((0.58 - (100 * 0.5 - 5) * (pixelH * pixelGrid * 0.50)) + (5 * (pixelH * pixelGrid * 0.50)) + (1.5 * (pixelH * pixelGrid * 0.50))) + ((5 * (pixelH * pixelGrid * 0.50)) * 3) + (2 * (pixelH * pixelGrid * 0.50));
        };

        class MyHandCard5: MyHandCard4 {
            idc = 5;
            x   = ((((getResolution select 2) * 0.5 * pixelW) - (109 * 0.5) * (pixelW * pixelGrid * 0.50)) + (1.5 * (pixelW * pixelGrid * 0.50)));
        };

        class MyHandCard6: MyHandCard5 {
            idc = 6;
            x   = ((((getResolution select 2) * 0.5 * pixelW) - (60 * 0.5) * (pixelW * pixelGrid * 0.50)) + (1.5 * (pixelW * pixelGrid * 0.50)));
        };

        class DealerHandCard1: ASN_ctrlStaticPictureKeepAspect {
            idc = 7;
            x   = ((((getResolution select 2) * 0.5 * pixelW) - (3.5 * 0.5) * (pixelW * pixelGrid * 0.50)) + (1.5 * (pixelW * pixelGrid * 0.50)));
            y   = ((0.36 - (100 * 0.5 - 5) * (pixelH * pixelGrid * 0.50)) + (5 * (pixelH * pixelGrid * 0.50)) + (1.5 * (pixelH * pixelGrid * 0.50))) + ((5 * (pixelH * pixelGrid * 0.50)) * 3) + (2 * (pixelH * pixelGrid * 0.50));
            w   = ((60 / 2.18) * (pixelW * pixelGrid * 0.50));
            h   = (60 / 1.34) * (pixelH * pixelGrid * 0.50);
            text = "";
        };

        class DealerHandCard2: DealerHandCard1 {
            idc = 8;
            x   = ((((getResolution select 2) * 0.5 * pixelW) - (-46 * 0.5) * (pixelW * pixelGrid * 0.50)) + (1.5 * (pixelW * pixelGrid * 0.50)));
        };

        class DealerHandCard3: DealerHandCard2 {
            idc = 9;
            x   = ((((getResolution select 2) * 0.5 * pixelW) - (-95 * 0.5) * (pixelW * pixelGrid * 0.50)) + (1.5 * (pixelW * pixelGrid * 0.50)));
        };

        class DealerHandCard4: DealerHandCard1 {
            idc = 10;
            x   = ((((getResolution select 2) * 0.5 * pixelW) - (3.5 * 0.5) * (pixelW * pixelGrid * 0.50)) + (1.5 * (pixelW * pixelGrid * 0.50)));
            y   = ((0.58 - (100 * 0.5 - 5) * (pixelH * pixelGrid * 0.50)) + (5 * (pixelH * pixelGrid * 0.50)) + (1.5 * (pixelH * pixelGrid * 0.50))) + ((5 * (pixelH * pixelGrid * 0.50)) * 3) + (2 * (pixelH * pixelGrid * 0.50));
        };

        class DealerHandCard5: DealerHandCard4 {
            idc = 11;
            x   = ((((getResolution select 2) * 0.5 * pixelW) - (-46 * 0.5) * (pixelW * pixelGrid * 0.50)) + (1.5 * (pixelW * pixelGrid * 0.50)));
        };

        class DealerHandCard6: DealerHandCard5 {
            idc = 12;
            x   = ((((getResolution select 2) * 0.5 * pixelW) - (-95 * 0.5) * (pixelW * pixelGrid * 0.50)) + (1.5 * (pixelW * pixelGrid * 0.50)));
        };


        class Footer: ASN_ctrlControlsGroupNoScrollbars {
            idc = 46;
            x   = (((getResolution select 2) * 0.5 * pixelW) - (160 * 0.5) * (pixelW * pixelGrid * 0.50));
            y   = (0.4 - (100 * 0.5 - 5) * (pixelH * pixelGrid * 0.50)) + ((100 * (pixelH * pixelGrid * 0.50)) - (5 * (pixelH * pixelGrid * 0.50))) + (5 * (pixelH * pixelGrid * 0.50));
            w   = 160 * (pixelW * pixelGrid * 0.50);
            h   = (5 + 2) * (pixelH * pixelGrid * 0.50);
            class controls {
                 class Background: ASN_ctrlStaticFooter {
                    x = 0;
                    y = 0;
                    w = 160 * (pixelW * pixelGrid * 0.50);
                    h = (5 + 2) * (pixelH * pixelGrid * 0.50);
                };
                class ButtonHit: ASN_ctrlDefaultButton {
                    idc  = 125;
                    text = "HIT";
                    x    = (pixelW * pixelGrid * 0.50);
                    y    = (pixelH * pixelGrid * 0.50);
                    w    = (130 * (pixelW * pixelGrid * 0.50)) * 0.2;
                    h    = 5 * (pixelH * pixelGrid * 0.50);
                    onButtonClick = "";
                };
                class ButtonStand: ASN_ctrlDefaultButton {
                    idc  = 126;
                    text = "STAND";
                    x    = (pixelW * pixelGrid * 0.50) + ((((130 * (pixelW * pixelGrid * 0.50)) * 0.2) + (pixelW * pixelGrid * 0.50)) * 1);
                    y    = (pixelH * pixelGrid * 0.50);
                    w    = (130 * (pixelW * pixelGrid * 0.50)) * 0.2;
                    h    = 5 * (pixelH * pixelGrid * 0.50);
                    onButtonClick = "";
                };
                class Button2xDown: ASN_ctrlDefaultButton {
                    idc  = 127;
                    text = "2X DOWN";
                    x    = (pixelW * pixelGrid * 0.50) + ((((130 * (pixelW * pixelGrid * 0.50)) * 0.2) + (pixelW * pixelGrid * 0.50)) * 2);
                    y    = (pixelH * pixelGrid * 0.50);
                    w    = (130 * (pixelW * pixelGrid * 0.50)) * 0.2;
                    h    = 5 * (pixelH * pixelGrid * 0.50);
                    onButtonClick = "";
                };
            };
        };
    };
};