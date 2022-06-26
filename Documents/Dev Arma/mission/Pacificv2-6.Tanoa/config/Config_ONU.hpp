/**
    Config For ONU

    Autor: IronBlade
*/

class CfgOnu {
    class Gates {
        allGates[] = {
                        "onu_gate_main_1",
                        "onu_gate_main_2",
                        "onu_gate_main_3",
                        "onu_gate_main_4",
                        "onu_gate_main_5",
                        
                        "onu_gate_lit_1",
                        "onu_gate_lit_2",
                        "onu_gate_lit_3",
                        "onu_gate_lit_4",
                        "onu_gate_lit_5",
                        "onu_gate_lit_6",
                        "onu_gate_lit_7",
                        "onu_gate_lit_8",
                        "onu_gate_lit_9",
                        
                        "onu_gate_front_1",
                        "onu_gate_front_2"
                     };

        class Land_GateB {
            anim = "GateDoor_3";
            etatOpen = -1.6;
            etatFerme = 0;
        };
                     
        class Land_Gate_C {
            anim = "GateDoor_3";
            etatOpen = 5;
            etatFerme = 0;
        };

        class Land_BarGate_F {
            anim = "Door_1_rot";
            etatOpen = 1;
            etatFerme = 0;
        };
    };

    class Front {
        allMarkFront[] = {};
    };

    class Dialog {
        class Category {
            class MainDoor {
                displayName = "Grandes Portes";

                class Doors {
                    class onu_gate_main_1 {
                        displayName = "Porte Sud";
                        door = "onu_gate_main_1";
                    };

                    class onu_gate_main_2 {
                        displayName = "Porte Nord";
                        door = "onu_gate_main_2";
                    };

                    class onu_gate_main_3 {
                        displayName = "Porte Ouest";
                        door = "onu_gate_main_3";
                    };

                    class onu_gate_main_4 {
                        displayName = "Porte Est";
                        door = "onu_gate_main_4";
                    };

                    class onu_gate_main_5 {
                        displayName = "Porte Est Interne";
                        door = "onu_gate_main_5";
                    };
                };
            };

            class Front {
                displayName = "Barriéres";

                class Doors {
                    class onu_gate_front_1 {
                        displayName = "Barriére Nord";
                        door = "onu_gate_front_1";
                    };

                    class onu_gate_front_2 {
                        displayName = "Barriére Sud";
                        door = "onu_gate_front_2";
                    };
                };
            };

            class Little {
                displayName = "Petites Portes";

                class Doors {
                    class onu_gate_lit_1 {
                        displayName = "Nord Route";
                        door = "onu_gate_lit_1";
                    };

                    class onu_gate_lit_2 {
                        displayName = "Sud Route";
                        door = "onu_gate_lit_2";
                    };

                    class onu_gate_lit_3 {
                        displayName = "Passage Nord 1";
                        door = "onu_gate_lit_3";
                    };

                    class onu_gate_lit_4 {
                        displayName = "Passage Nord 2";
                        door = "onu_gate_lit_4";
                    };

                    class onu_gate_lit_5 {
                        displayName = "Passage Sud 1";
                        door = "onu_gate_lit_5";
                    };

                    class onu_gate_lit_6 {
                        displayName = "Passage Sud 2";
                        door = "onu_gate_lit_6";
                    };

                    class onu_gate_lit_7 {
                        displayName = "Passage Port 1";
                        door = "onu_gate_lit_7";
                    };

                    class onu_gate_lit_8 {
                        displayName = "Passage Port 2";
                        door = "onu_gate_lit_8";
                    };

                    class onu_gate_lit_9 {
                        displayName = "Passage Tour Port";
                        door = "onu_gate_lit_9";
                    };
                };
            };
        };
    };
};