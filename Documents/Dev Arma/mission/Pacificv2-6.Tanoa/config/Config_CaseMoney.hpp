/*
	Config for Case

	Autor: IronBlade

	Items:

	1000$ -> 1/1
	10000$ -> 3/2
	100000$ -> 20/10

	Blanchiement:
	1000$ -> 500$
	10000$ -> 6000$
	100000$ -> 75000$
*/

class CfgCaseMoney {

	class Cases {
		class BagSmallDefault {
			maxMoney = 1000;
		};

		class BagSmall : BagSmallDefault {
			isEmpty = 0;
			emptyClass = "BagSmallEmpty";
		};

		class BagSmallEmpty : BagSmallDefault {
			isEmpty = 1;
			fullClass = "BagSmall";
		};



		class BagBigDefault {
			maxMoney = 10000;
		};

		class BagBig : BagBigDefault {
			isEmpty = 0;
			emptyClass = "BagBigEmpty";
		};

		class BagBigEmpty : BagBigDefault {
			isEmpty = 1;
			fullClass = "BagBig";
		};

		

		class CaseBigDefault {
			maxMoney = 100000;
		};

		class CaseBig : CaseBigDefault {
			isEmpty = 0;
			emptyClass = "CaseBigEmpty";
		};

		class CaseBigEmpty : CaseBigDefault {
			isEmpty = 1;
			fullClass = "CaseBig";
		};
	};	
};