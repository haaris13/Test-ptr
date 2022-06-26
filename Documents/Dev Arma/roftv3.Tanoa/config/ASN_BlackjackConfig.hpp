/*
    File: ASN_Blackjack.hpp
    Author: Travis Butts
    Description: Master config for ASN_Blackjack.hpp
*/
#include "..\dialog\ASN_Controls.hpp"
#include "..\dialog\ASN_Blackjack.hpp"

class ASN_Blackjack_Config {
	version = 5; // version 3.x -> 3 | 4.0 - 4.3 -> 4 | version 4.4+ -> 5
	CashVariable = "life_cash"; // Cash Variable to give/remove the players money

	//Location Settings
	ImageFilesLocation = "images\blackjack"; //Location of where the coin images are

	//Playing Cards
	//To add cards, make sure to drag the card in the image files folder and follow the template below
	//Image Name, Value of Card
	ASN_BJ_FaceCards[] = {
		{"AC", 1},
		{"2C", 2},
		{"3C", 3},
		{"4C", 4},
		{"5C", 5},
		{"6C", 6},
		{"7C", 7},
		{"8C", 8},
		{"9C", 9},
		{"10C", 10},
		{"JC", 10},
		{"QC", 10},
		{"KC", 10}
	};

	//Bet Settings
	MinimumBet = 100; //Minimum bet players are allowed to bet at the table
	MaximumBet = 20000; //Maximum bet players are allowed to bet at the table
};