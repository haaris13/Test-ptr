
//Dialog:
#define DialogIce 22000

// List : 
#define Listleft 22001
#define ListRight 22002

// List Recup : 
#define ButtonRecup1 22011
#define ButtonRecup2 22012

//------------------- Fioles :
// --------- 1:
#define Tile1ProgressBar 22021
#define Tile1ProgressBarText 22022
#define TextTitle1 22023
#define TextTitleTemp1 22024
#define ButtonRecup3 22041

// --------- 2:
#define Tile2ProgressBar 22031
#define Tile2ProgressBarText 22032
#define TextTitle2 22033
#define TextTitleTemp2 22034
#define ButtonRecup4 22042


// Vider:
#define ButtonVider1 22051
#define ButtonVider2 22052

// Transf
#define ButtonTransf 22061
#define QtyEdit 22062
#define TextQtyMl 22063
#define ButtonCombiner 22064

// Check
#define FioleCheck1 22071
#define FioleCheck2 22072


#define ctrlSelData(ctrl) (lbData[##ctrl,(lbCurSel ##ctrl)])
#define ctrlSelValue(ctrl) (lbValue[##ctrl,(lbCurSel ##ctrl)])

#define Chimie_Empty [0,["empty",100],20, [0,0,0,1]]