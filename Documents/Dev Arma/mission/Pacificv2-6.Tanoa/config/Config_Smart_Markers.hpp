/*



*/

class CfgSmartMarkers {

	class ConfigMarkers {

		class VolcanTelecomType {

			scales[] = {0, 1};

			class Sections {
				class MarkerIconBackground {
					sufix = "back";
					type[] = {"loc_Transmitter", "loc_Transmitter", "loc_Transmitter"};
					size[] = {{1, 1}, {1, 1}, {0.7, 0.7}};
					color[] = {"ColorWhite"};
					alpha[] = {1};
				};

				class MarkerText {
					sufix = "text";
					text = "Volcan télécom";
					type[] = {"mil_box"};
					size[] = {{0, 0}};
					color[] = {"ColorWhite"};
					alpha[] = {1};
				};
			};

			class MarkerTooltip {
				color[] = {0.475, 0.098, 0.647, 0.6};
				title = "Volcan télécom";
				description = "La grande antenne de Tanoa.";
				img = "";
			};
		};

		class RaffinerieType {

			scales[] = {0, 1};

			class Sections {
				class MarkerIconBackground {
					sufix = "back";
					type[] = {"n_unknown", "n_unknown", "n_unknown"};
					size[] = {{1, 1}, {1, 1}, {0.7, 0.7}};
					color[] = {"ColorCiv"};
					alpha[] = {1};
				};

				class MarkerIcon {
					sufix = "icon";
					type[] = {"loc_refuel", "loc_refuel", "loc_refuel"};
					size[] = {{1, 1}, {1, 1}, {0.7, 0.7}};
					color[] = {"ColorWhite"};
					alpha[] = {1};
				};

				class MarkerText {
					sufix = "text";
					text = "Raffinerie Tanoil";
					type[] = {"mil_box"};
					size[] = {{0, 0}};
					color[] = {"ColorWhite"};
					alpha[] = {1};
				};
			};

			class MarkerTooltip {
				color[] = {0.475, 0.098, 0.647, 0.6};
				title = "Raffinerie Tanoil";
				description = "La grande raffinerie de Tanoa. Parfait pour remplir un camion citerne.";
				img = "";
			};
		};

		class CivCarShopType {

			scales[] = {0, 1};

			class Sections {
				class MarkerIconBackground {
					sufix = "back";
					type[] = {"n_unknown", "n_unknown", "n_unknown"};
					size[] = {{1, 1}, {1, 1}, {0.7, 0.7}};
					color[] = {"ColorCiv"};
					alpha[] = {1};
				};

				class MarkerIcon {
					sufix = "icon";
					type[] = {"loc_car", "loc_car", "loc_car"};
					size[] = {{1, 1}, {1, 1}, {0.7, 0.7}};
					color[] = {"ColorWhite"};
					alpha[] = {1};
				};

				class MarkerText {
					sufix = "text";
					text = "Concessionnaire de voiture";
					type[] = {"mil_box"};
					size[] = {{0, 0}};
					color[] = {"ColorWhite"};
					alpha[] = {1};
				};
			};

			class MarkerTooltip {
				color[] = {0.475, 0.098, 0.647, 0.6};
				title = "Concessionnaire de voiture";
				description = "Ici vous pouvez acheter des véhicules légers.";
				img = "";
			};
		};

		class CivTruckShopType {

			scales[] = {0, 1};

			class Sections {
				class MarkerIconBackground {
					sufix = "back";
					type[] = {"n_unknown", "n_unknown", "n_unknown"};
					size[] = {{1, 1}, {1, 1}, {0.7, 0.7}};
					color[] = {"ColorCiv"};
					alpha[] = {1};
				};

				class MarkerIcon {
					sufix = "icon";
					type[] = {"loc_Truck", "loc_Truck", "loc_Truck"};
					size[] = {{1, 1}, {1, 1}, {0.7, 0.7}};
					color[] = {"ColorWhite"};
					alpha[] = {1};
				};

				class MarkerText {
					sufix = "text";
					text = "Concessionnaire de camion";
					type[] = {"mil_box"};
					size[] = {{0, 0}};
					color[] = {"ColorWhite"};
					alpha[] = {1};
				};
			};

			class MarkerTooltip {
				color[] = {0.475, 0.098, 0.647, 0.6};
				title = "Concessionnaire de camion";
				description = "Ici vous pouvez acheter des camions.";
				img = "";
			};
		};

		class CivShipShopType {

			scales[] = {0, 1};

			class Sections {
				class MarkerIconBackground {
					sufix = "back";
					type[] = {"n_unknown", "n_unknown", "n_unknown"};
					size[] = {{1, 1}, {1, 1}, {0.7, 0.7}};
					color[] = {"ColorCiv"};
					alpha[] = {1};
				};

				class MarkerIcon {
					sufix = "icon";
					type[] = {"loc_boat", "loc_boat", "loc_boat"};
					size[] = {{1, 1}, {1, 1}, {0.7, 0.7}};
					color[] = {"ColorWhite"};
					alpha[] = {1};
				};

				class MarkerText {
					sufix = "text";
					text = "Concessionnaire de bateau";
					type[] = {"mil_box"};
					size[] = {{0, 0}};
					color[] = {"ColorWhite"};
					alpha[] = {1};
				};
			};

			class MarkerTooltip {
				color[] = {0.475, 0.098, 0.647, 0.6};
				title = "Concessionnaire de bateau";
				description = "Ici vous pouvez acheter des bateaux.";
				img = "";
			};
		};

		class CivPlaneShopType {

			scales[] = {0, 1};

			class Sections {
				class MarkerIconBackground {
					sufix = "back";
					type[] = {"n_unknown", "n_unknown", "n_unknown"};
					size[] = {{1, 1}, {1, 1}, {0.7, 0.7}};
					color[] = {"ColorCiv"};
					alpha[] = {1};
				};

				class MarkerIcon {
					sufix = "icon";
					type[] = {"loc_plane", "loc_plane", "loc_plane"};
					size[] = {{1, 1}, {1, 1}, {0.7, 0.7}};
					color[] = {"ColorWhite"};
					alpha[] = {1};
				};

				class MarkerText {
					sufix = "text";
					text = "Concessionnaire aérien";
					type[] = {"mil_box"};
					size[] = {{0, 0}};
					color[] = {"ColorWhite"};
					alpha[] = {1};
				};
			};

			class MarkerTooltip {
				color[] = {0.475, 0.098, 0.647, 0.6};
				title = "Concessionnaire aérien";
				description = "Ici vous pouvez acheter des véhicules aériens.";
				img = "";
			};
		};

		class GaragePlaneType {

			scales[] = {0, 1};

			class Sections {
				class MarkerIconBackground {
					sufix = "back";
					type[] = {"n_unknown", "n_unknown", "n_unknown"};
					size[] = {{1, 1}, {1, 1}, {0.7, 0.7}};
					color[] = {"ColorCiv"};
					alpha[] = {1};
				};

				class MarkerIcon {
					sufix = "icon";
					type[] = {"loc_plane", "loc_plane", "loc_plane"};
					size[] = {{1, 1}, {1, 1}, {0.7, 0.7}};
					color[] = {"ColorWhite"};
					alpha[] = {1};
				};

				class MarkerText {
					sufix = "text";
					text = "Garage aérien";
					type[] = {"mil_box"};
					size[] = {{0, 0}};
					color[] = {"ColorWhite"};
					alpha[] = {1};
				};
			};

			class MarkerTooltip {
				color[] = {0.475, 0.098, 0.647, 0.6};
				title = "Garage aérien";
				description = "Ici vous pouvez sortir vos véhicules aériens.";
				img = "";
			};
		};

		class GarageHeliType {

			scales[] = {0, 1};

			class Sections {
				class MarkerIconBackground {
					sufix = "back";
					type[] = {"n_unknown", "n_unknown", "n_unknown"};
					size[] = {{1, 1}, {1, 1}, {0.7, 0.7}};
					color[] = {"ColorCiv"};
					alpha[] = {1};
				};

				class MarkerIcon {
					sufix = "icon";
					type[] = {"loc_heli", "loc_heli", "loc_heli"};
					size[] = {{1, 1}, {1, 1}, {0.7, 0.7}};
					color[] = {"ColorWhite"};
					alpha[] = {1};
				};

				class MarkerText {
					sufix = "text";
					text = "Garage aérien";
					type[] = {"mil_box"};
					size[] = {{0, 0}};
					color[] = {"ColorWhite"};
					alpha[] = {1};
				};
			};

			class MarkerTooltip {
				color[] = {0.475, 0.098, 0.647, 0.6};
				title = "Garage aérien";
				description = "Ici vous pouvez sortir vos véhicules aériens.";
				img = "";
			};
		};

		class GarageShipType {

			scales[] = {0, 1};

			class Sections {
				class MarkerIconBackground {
					sufix = "back";
					type[] = {"n_unknown", "n_unknown", "n_unknown"};
					size[] = {{1, 1}, {1, 1}, {0.7, 0.7}};
					color[] = {"ColorCiv"};
					alpha[] = {1};
				};

				class MarkerIcon {
					sufix = "icon";
					type[] = {"loc_boat", "loc_boat", "loc_boat"};
					size[] = {{1, 1}, {1, 1}, {0.7, 0.7}};
					color[] = {"ColorWhite"};
					alpha[] = {1};
				};

				class MarkerText {
					sufix = "text";
					text = "Garage à bateau";
					type[] = {"mil_box"};
					size[] = {{0, 0}};
					color[] = {"ColorWhite"};
					alpha[] = {1};
				};
			};

			class MarkerTooltip {
				color[] = {0.475, 0.098, 0.647, 0.6};
				title = "Garage à bateau";
				description = "Ici vous pouvez récupérer vos bateaux.";
				img = "";
			};
		};

		class CasseShopType {

			scales[] = {0, 1};

			class Sections {
				class MarkerIconBackground {
					sufix = "back";
					type[] = {"n_unknown", "n_unknown", "n_unknown"};
					size[] = {{1, 1}, {1, 1}, {0.7, 0.7}};
					color[] = {"ColorCiv"};
					alpha[] = {1};
				};

				class MarkerIcon {
					sufix = "icon";
					type[] = {"loc_LetterC", "loc_LetterC", "loc_LetterC"};
					size[] = {{1, 1}, {1, 1}, {0.7, 0.7}};
					color[] = {"ColorWhite"};
					alpha[] = {1};
				};
			};

			class MarkerTooltip {
				color[] = {0.475, 0.098, 0.647, 0.6};
				title = "Casse";
				description = "Une simple casse de véhicules.";
				img = "";
			};
		};

		class GeneralStoreType {

			scales[] = {0, 1};

			class Sections {
				class MarkerIconBackground {
					sufix = "back";
					type[] = {"n_unknown", "n_unknown", "n_unknown"};
					size[] = {{1, 1}, {1, 1}, {0.7, 0.7}};
					color[] = {"ColorCiv"};
					alpha[] = {1};
				};

				class MarkerIcon {
					sufix = "icon";
					type[] = {"loc_help", "loc_help", "loc_help"};
					size[] = {{1, 1}, {1, 1}, {0.7, 0.7}};
					color[] = {"ColorWhite"};
					alpha[] = {1};
				};

				class MarkerText {
					sufix = "text";
					text = "Magasin Général";
					type[] = {"mil_box"};
					size[] = {{0, 0}};
					color[] = {"ColorWhite"};
					alpha[] = {1};
				};
			};

			class MarkerTooltip {
				color[] = {0.475, 0.098, 0.647, 0.6};
				title = "Magasin Général";
				description = "Ici vous pouvez acheter toutes sortes de choses.";
				img = "";
			};
		};

		class MarketStoreType {

			scales[] = {0, 1};

			class Sections {
				class MarkerIconBackground {
					sufix = "back";
					type[] = {"n_unknown", "n_unknown", "n_unknown"};
					size[] = {{1, 1}, {1, 1}, {0.7, 0.7}};
					color[] = {"ColorCiv"};
					alpha[] = {1};
				};

				class MarkerIcon {
					sufix = "icon";
					type[] = {"loc_help", "loc_help", "loc_help"};
					size[] = {{1, 1}, {1, 1}, {0.7, 0.7}};
					color[] = {"ColorWhite"};
					alpha[] = {1};
				};

				class MarkerText {
					sufix = "text";
					text = "Marché";
					type[] = {"mil_box"};
					size[] = {{0, 0}};
					color[] = {"ColorWhite"};
					alpha[] = {1};
				};
			};

			class MarkerTooltip {
				color[] = {0.475, 0.098, 0.647, 0.6};
				title = "Marché";
				description = "Ici vous pouvez acheter de la nourriture et des outils.";
				img = "";
			};
		};

		class BijouxType {

			scales[] = {0, 1};

			class Sections {
				class MarkerIconBackground {
					sufix = "back";
					type[] = {"n_unknown", "n_unknown", "n_unknown"};
					size[] = {{1, 1}, {1, 1}, {0.7, 0.7}};
					color[] = {"ColorCiv"};
					alpha[] = {1};
				};

				class MarkerIcon {
					sufix = "icon";
					type[] = {"loc_ViewTower", "loc_ViewTower", "loc_ViewTower"};
					size[] = {{1, 1}, {1, 1}, {0.7, 0.7}};
					color[] = {"ColorWhite"};
					alpha[] = {1};
				};

				class MarkerText {
					sufix = "text";
					text = "Bijoutier";
					type[] = {"mil_box"};
					size[] = {{0, 0}};
					color[] = {"ColorWhite"};
					alpha[] = {1};
				};
			};

			class MarkerTooltip {
				color[] = {0.475, 0.098, 0.647, 0.6};
				title = "Bijoutier";
				description = "Reprend les bijoux qui ont un peu de valeur.";
				img = "";
			};
		};

		class ResellerType {

			scales[] = {0, 1};

			class Sections {
				class MarkerIconBackground {
					sufix = "back";
					type[] = {"n_unknown", "n_unknown", "n_unknown"};
					size[] = {{1, 1}, {1, 1}, {0.7, 0.7}};
					color[] = {"ColorEAST"};
					alpha[] = {1};
				};

				class MarkerIcon {
					sufix = "icon";
					type[] = {"loc_talk", "loc_talk", "loc_talk"};
					size[] = {{1, 1}, {1, 1}, {0.7, 0.7}};
					color[] = {"ColorWhite"};
					alpha[] = {1};
				};

				class MarkerText {
					sufix = "text";
					text = "Receleur";
					type[] = {"mil_box"};
					size[] = {{0, 0}};
					color[] = {"ColorWhite"};
					alpha[] = {1};
				};
			};

			class MarkerTooltip {
				color[] = {0.855,0.824,0.094, 0.6};
				title = "Receleur";
				description = "Ici vous pouvez vendre toutes sortes de choses.";
				img = "";
			};
		};

		class AtmType {

			scales[] = {0, 1};

			class Sections {
				class MarkerIconBackground {
					sufix = "back";
					type[] = {"n_unknown", "n_unknown", "n_unknown"};
					size[] = {{1, 1}, {1, 1}, {0.7, 0.7}};
					color[] = {"ColorWhite"};
					alpha[] = {1};
				};

				class MarkerIcon {
					sufix = "icon";
					type[] = {"loc_Tourism", "loc_Tourism", "loc_Tourism"};
					size[] = {{1, 1}, {1, 1}, {0.7, 0.7}};
					color[] = {"ColorBlack"};
					alpha[] = {1};
				};
			};

			class MarkerTooltip {
				color[] = {0.31,0.31,0.31, 0.6};
				title = "Distributeur de billet";
				description = "Ici vous pouvez retirer de l'argent.";
				img = "";
			};
		};

		class GarageCarType {

			scales[] = {0, 1};

			class Sections {
				class MarkerIconBackground {
					sufix = "back";
					type[] = {"n_unknown", "n_unknown", "n_unknown"};
					size[] = {{1, 1}, {1, 1}, {0.7, 0.7}};
					color[] = {"ColorCiv"};
					alpha[] = {1};
				};

				class MarkerIcon {
					sufix = "icon";
					type[] = {"loc_car", "loc_car", "loc_car"};
					size[] = {{1, 1}, {1, 1}, {0.7, 0.7}};
					color[] = {"ColorWhite"};
					alpha[] = {1};
				};

				class MarkerText {
					sufix = "text";
					text = "Garage";
					type[] = {"mil_box"};
					size[] = {{0, 0}};
					color[] = {"ColorWhite"};
					alpha[] = {1};
				};
			};

			class MarkerTooltip {
				color[] = {0.475, 0.098, 0.647, 0.6};
				title = "Garage";
				description = "Ici vous pouvez récupérer votre véhicule.";
				img = "";
			};
		};

		class CustomType {

			scales[] = {0, 1};

			class Sections {
				class MarkerIconBackground {
					sufix = "back";
					type[] = {"n_unknown", "n_unknown", "n_unknown"};
					size[] = {{1, 1}, {1, 1}, {0.7, 0.7}};
					color[] = {"ColorCiv"};
					alpha[] = {1};
				};

				class MarkerIcon {
					sufix = "icon";
					type[] = {"loc_custom", "loc_custom", "loc_custom"};
					size[] = {{1, 1}, {1, 1}, {0.7, 0.7}};
					color[] = {"ColorWhite"};
					alpha[] = {1};
				};

				class MarkerText {
					sufix = "text";
					text = "Custom";
					type[] = {"mil_box"};
					size[] = {{0, 0}};
					color[] = {"ColorWhite"};
					alpha[] = {1};
				};
			};

			class MarkerTooltip {
				color[] = {0.475, 0.098, 0.647, 0.6};
				title = "Custom";
				description = "Ici vous pouvez modifier votre véhicule.";
				img = "";
			};
		};

		class CivClotheStoreType {

			scales[] = {0, 1};

			class Sections {
				class MarkerIconBackground {
					sufix = "back";
					type[] = {"n_unknown", "n_unknown", "n_unknown"};
					size[] = {{1, 1}, {1, 1}, {0.7, 0.7}};
					color[] = {"ColorCiv"};
					alpha[] = {1};
				};

				class MarkerIcon {
					sufix = "icon";
					type[] = {"loc_backPack", "loc_backPack", "loc_backPack"};
					size[] = {{1, 1}, {1, 1}, {0.7, 0.7}};
					color[] = {"ColorWhite"};
					alpha[] = {1};
				};

				class MarkerText {
					sufix = "text";
					text = "Magasin de vêtements";
					type[] = {"mil_box"};
					size[] = {{0, 0}};
					color[] = {"ColorWhite"};
					alpha[] = {1};
				};
			};

			class MarkerTooltip {
				color[] = {0.475, 0.098, 0.647, 0.6};
				title = "Magasin de vêtements";
				description = "Ici vous pouvez acheter des vêtements.";
				img = "";
			};
		};

		class CivDiveStoreType {

			scales[] = {0, 1};

			class Sections {
				class MarkerIconBackground {
					sufix = "back";
					type[] = {"n_unknown", "n_unknown", "n_unknown"};
					size[] = {{1, 1}, {1, 1}, {0.7, 0.7}};
					color[] = {"ColorCiv"};
					alpha[] = {1};
				};

				class MarkerIcon {
					sufix = "icon";
					type[] = {"loc_shipwreck", "loc_shipwreck", "loc_shipwreck"};
					size[] = {{1, 1}, {1, 1}, {0.7, 0.7}};
					color[] = {"ColorWhite"};
					alpha[] = {1};
				};

				class MarkerText {
					sufix = "text";
					text = "Magasin de plongé";
					type[] = {"mil_box"};
					size[] = {{0, 0}};
					color[] = {"ColorWhite"};
					alpha[] = {1};
				};
			};

			class MarkerTooltip {
				color[] = {0.475, 0.098, 0.647, 0.6};
				title = "Magasin de plongé";
				description = "Ici vous pouvez acheter du matériel de plongé.";
				img = "";
			};
		};

		class CivLicenseStoreType {

			scales[] = {0, 1};

			class Sections {
				class MarkerIconBackground {
					sufix = "back";
					type[] = {"n_unknown", "n_unknown", "n_unknown"};
					size[] = {{1, 1}, {1, 1}, {0.7, 0.7}};
					color[] = {"ColorBlue"};
					alpha[] = {1};
				};

				class MarkerIcon {
					sufix = "icon";
					type[] = {"loc_document", "loc_document", "loc_document"};
					size[] = {{1, 1}, {1, 1}, {0.7, 0.7}};
					color[] = {"ColorWhite"};
					alpha[] = {1};
				};

				class MarkerText {
					sufix = "text";
					text = "Préfecture";
					type[] = {"mil_box"};
					size[] = {{0, 0}};
					color[] = {"ColorWhite"};
					alpha[] = {1};
				};
			};

			class MarkerTooltip {
				color[] = {0.094,0.376,0.855, 0.6};
				title = "Préfécture";
				description = "Une préfecture vous proposer d'acheter des licenses.";
				img = "";
			};
		};

		class CivLicenseAirStoreType {

			scales[] = {0, 1};

			class Sections {
				class MarkerIconBackground {
					sufix = "back";
					type[] = {"n_unknown", "n_unknown", "n_unknown"};
					size[] = {{1, 1}, {1, 1}, {0.7, 0.7}};
					color[] = {"ColorBlue"};
					alpha[] = {1};
				};

				class MarkerIcon {
					sufix = "icon";
					type[] = {"loc_document", "loc_document", "loc_document"};
					size[] = {{1, 1}, {1, 1}, {0.7, 0.7}};
					color[] = {"ColorWhite"};
					alpha[] = {1};
				};

				class MarkerText {
					sufix = "text";
					text = "Préfecture Aérienne";
					type[] = {"mil_box"};
					size[] = {{0, 0}};
					color[] = {"ColorWhite"};
					alpha[] = {1};
				};
			};

			class MarkerTooltip {
				color[] = {0.094,0.376,0.855, 0.6};
				title = "Préfécture Aérienne";
				description = "Ici vous pouvez transférer les papiers des véhicules aériens";
				img = "";
			};
		};

		class FuelStationType {

			scales[] = {0, 1};

			class Sections {
				class MarkerIconBackground {
					sufix = "back";
					type[] = {"loc_fuelStation", "loc_fuelStation", "loc_fuelStation"};
					size[] = {{1, 1}, {1, 1}, {0.7, 0.7}};
					color[] = {"ColorWhite"};
					alpha[] = {1};
				};
			};

			class MarkerTooltip {
				color[] = {0.475, 0.098, 0.647, 0.6};
				title = "Station service";
				description = "Une station service vous permet de remplir en carburant votre véhicule.";
				img = "";
			};
		};

		class CopBaseType {

			scales[] = {0, 1};

			class Sections {
				class MarkerIconBackground {
					sufix = "back";
					type[] = {"o_recon", "o_recon", "o_recon"};
					size[] = {{1, 1}, {1, 1}, {0.7, 0.7}};
					color[] = {"ColorWEST"};
					alpha[] = {1};
				};

				class MarkerText {
					sufix = "text";
					text = "QG Gendarmerie";
					type[] = {"mil_box"};
					size[] = {{0, 0}};
					color[] = {"ColorWhite"};
					alpha[] = {1};
				};
			};

			class MarkerTooltip {
				color[] = {0.969, 0.98, 0.89, 0.6};
				title = "QG Gendarmerie";
				description = "Caserne de la Gendarmerie de Tanoa.";
				img = "";
			};
		};

		class PresidentHouseType {
			scales[] = {0, 1};

			class Sections {
				class MarkerIconBackground {
					sufix = "back";
					type[] = {"flag_Tanoa", "flag_Tanoa", "flag_Tanoa"};
					size[] = {{0.7, 0.7}, {0.7, 0.7}, {0.7, 0.7}};
					color[] = {"ColorWhite"};
					alpha[] = {1};
				};

				class MarkerText {
					sufix = "text";
					text = "Gouvernement";
					type[] = {"mil_box"};
					size[] = {{0, 0}};
					color[] = {"ColorWhite"};
					alpha[] = {1};
				};
			};

			class MarkerTooltip {
				color[] = {0.969, 0.98, 0.89, 0.6};
				title = "Gouvernement";
				description = "Maison du président.";
				img = "";
			};
		};

		class FieldSugarType {

			scales[] = {0, 1};

			class Sections {
				class MarkerIconBackground {
					sufix = "back";
					type[] = {"n_unknown", "n_unknown", "n_unknown"};
					size[] = {{1, 1}, {1, 1}, {0.7, 0.7}};
					color[] = {"ColorKhaki"};
					alpha[] = {1};
				};

				class MarkerIcon {
					sufix = "icon";
					type[] = {"loc_Pick", "loc_Pick", "loc_Pick"};
					size[] = {{1, 1}, {1, 1}, {0.7, 0.7}};
					color[] = {"ColorWhite"};
					alpha[] = {1};
				};

				class MarkerText {
					sufix = "text";
					text = "Canne à sucre";
					type[] = {"mil_box"};
					size[] = {{0, 0}};
					color[] = {"ColorWhite"};
					alpha[] = {1};
				};
			};

			class MarkerTooltip {
				color[] = {0.427,0.631,0.392, 0.6};
				title = "Champs de canne à sucre";
				description = "Un champ de canne à sucre cultivable.";
				img = "";
			};
		};

		class FieldCacaoType {

			scales[] = {0, 1};

			class Sections {
				class MarkerIconBackground {
					sufix = "back";
					type[] = {"n_unknown", "n_unknown", "n_unknown"};
					size[] = {{1, 1}, {1, 1}, {0.7, 0.7}};
					color[] = {"ColorKhaki"};
					alpha[] = {1};
				};

				class MarkerIcon {
					sufix = "icon";
					type[] = {"loc_Pick", "loc_Pick", "loc_Pick"};
					size[] = {{1, 1}, {1, 1}, {0.7, 0.7}};
					color[] = {"ColorWhite"};
					alpha[] = {1};
				};

				class MarkerText {
					sufix = "text";
					text = "Champ de cacao";
					type[] = {"mil_box"};
					size[] = {{0, 0}};
					color[] = {"ColorWhite"};
					alpha[] = {1};
				};
			};

			class MarkerTooltip {
				color[] = {0.427,0.631,0.392, 0.6};
				title = "Champs de cacao";
				description = "Un champ de du cacao cultivable.";
				img = "";
			};
		};

		class FieldBananaType {

			scales[] = {0, 1};

			class Sections {
				class MarkerIconBackground {
					sufix = "back";
					type[] = {"n_unknown", "n_unknown", "n_unknown"};
					size[] = {{1, 1}, {1, 1}, {0.7, 0.7}};
					color[] = {"ColorKhaki"};
					alpha[] = {1};
				};

				class MarkerIcon {
					sufix = "icon";
					type[] = {"loc_Pick", "loc_Pick", "loc_Pick"};
					size[] = {{1, 1}, {1, 1}, {0.7, 0.7}};
					color[] = {"ColorWhite"};
					alpha[] = {1};
				};

				class MarkerText {
					sufix = "text";
					text = "Champ de bananiers";
					type[] = {"mil_box"};
					size[] = {{0, 0}};
					color[] = {"ColorWhite"};
					alpha[] = {1};
				};
			};

			class MarkerTooltip {
				color[] = {0.427,0.631,0.392, 0.6};
				title = "Champs de bananiers";
				description = "Pour y ramasser des bananes.";
				img = "";
			};
		};

		class ArcheologueType {

			scales[] = {0, 1};

			class Sections {
				class MarkerIconBackground {
					sufix = "back";
					type[] = {"n_unknown", "n_unknown", "n_unknown"};
					size[] = {{1, 1}, {1, 1}, {0.7, 0.7}};
					color[] = {"ColorCiv"};
					alpha[] = {1};
				};

				class MarkerIcon {
					sufix = "icon";
					type[] = {"loc_navigate", "loc_navigate", "loc_navigate"};
					size[] = {{1, 1}, {1, 1}, {0.7, 0.7}};
					color[] = {"ColorWhite"};
					alpha[] = {1};
				};

				class MarkerText {
					sufix = "text";
					text = "Archéologue";
					type[] = {"mil_box"};
					size[] = {{0, 0}};
					color[] = {"ColorWhite"};
					alpha[] = {1};
				};
			};

			class MarkerTooltip {
				color[] = {0.475, 0.098, 0.647, 0.6};
				title = "Archéologue";
				description = "Vous pouvez y vendre des objets rares et anciens à ce collectionneur.";
				img = "";
			};
		};

		class HospitalType {

			scales[] = {0, 1};

			class Sections {
				class MarkerIconBackground {
					sufix = "back";
					type[] = {"n_unknown", "n_unknown", "n_unknown"};
					size[] = {{1, 1}, {1, 1}, {0.7, 0.7}};
					color[] = {"ColorRed"};
					alpha[] = {1};
				};

				class MarkerIcon {
					sufix = "icon";
					type[] = {"loc_heal", "loc_heal", "loc_heal"};
					size[] = {{1, 1}, {1, 1}, {0.7, 0.7}};
					color[] = {"ColorWhite"};
					alpha[] = {1};
				};

				class MarkerText {
					sufix = "text";
					text = "Hopital";
					type[] = {"mil_box"};
					size[] = {{0, 0}};
					color[] = {"ColorWhite"};
					alpha[] = {1};
				};
			};

			class MarkerTooltip {
				color[] = {0.957,0.012,0.012, 0.6};
				title = "Hopital";
				description = "Un Hôpital financé par vos impots pour soigner vos petits bobos.";
				img = "";
			};
		};

		class BankType {

			scales[] = {0, 1};

			class Sections {
				class MarkerIconBackground {
					sufix = "back";
					type[] = {"n_unknown", "n_unknown", "n_unknown"};
					size[] = {{1, 1}, {1, 1}, {0.7, 0.7}};
					color[] = {"ColorBlue"};
					alpha[] = {1};
				};

				class MarkerIcon {
					sufix = "icon";
					type[] = {"loc_meet", "loc_meet", "loc_meet"};
					size[] = {{1, 1}, {1, 1}, {0.7, 0.7}};
					color[] = {"ColorWhite"};
					alpha[] = {1};
				};

				class MarkerText {
					sufix = "text";
					text = "Banque";
					type[] = {"mil_box"};
					size[] = {{0, 0}};
					color[] = {"ColorWhite"};
					alpha[] = {1};
				};
			};

			class MarkerTooltip {
				color[] = {0.094,0.376,0.855, 0.6};
				title = "Banque";
				description = "La Banque principale de l'archipel de Tanoa, vous pouvez y retirer et y déposer de l'argent.";
				img = "";
			};
		};

		class CivGunStoreType {

			scales[] = {0, 1};

			class Sections {
				class MarkerIconBackground {
					sufix = "back";
					type[] = {"n_unknown", "n_unknown", "n_unknown"};
					size[] = {{1, 1}, {1, 1}, {0.7, 0.7}};
					color[] = {"ColorCiv"};
					alpha[] = {1};
				};

				class MarkerIcon {
					sufix = "icon";
					type[] = {"loc_armor", "loc_armor", "loc_armor"};
					size[] = {{1, 1}, {1, 1}, {0.7, 0.7}};
					color[] = {"ColorWhite"};
					alpha[] = {1};
				};

				class MarkerText {
					sufix = "text";
					text = "Armurerie";
					type[] = {"mil_box"};
					size[] = {{0, 0}};
					color[] = {"ColorWhite"};
					alpha[] = {1};
				};
			};

			class MarkerTooltip {
				color[] = {0.475, 0.098, 0.647, 0.6};
				title = "Armurerie";
				description = "Armurerie civil de Tanoa, vous pouvez y acheter des armes et de l'équipement. Des stands d'entrainement sont disponnibles à proximité.";
				img = "";
			};
		};

		class TanoaNewsType {

			scales[] = {0, 1};

			class Sections {
				class MarkerIconBackground {
					sufix = "back";
					type[] = {"flag_Tanoa", "flag_Tanoa", "flag_Tanoa"};
					size[] = {{1, 1}, {1, 1}, {0.7, 0.7}};
					color[] = {"ColorWhite"};
					alpha[] = {1};
				};

				class MarkerText {
					sufix = "text";
					text = "Tanoa News";
					type[] = {"mil_box"};
					size[] = {{0, 0}};
					color[] = {"ColorWhite"};
					alpha[] = {1};
				};
			};

			class MarkerTooltip {
				color[] = {0.475, 0.098, 0.647, 0.6};
				title = "Tanoa News";
				description = "Tanoa News est la presse locale de Tanoa, si vous avez un message à faire passer, ce sera eux votre meilleur solution.";
				img = "";
			};
		};

		class DepanageType {

			scales[] = {0, 1};

			class Sections {
				class MarkerIconBackground {
					sufix = "back";
					type[] = {"n_unknown", "n_unknown", "n_unknown"};
					size[] = {{1, 1}, {1, 1}, {0.7, 0.7}};
					color[] = {"ColorOrange"};
					alpha[] = {1};
				};

				class MarkerIcon {
					sufix = "icon";
					type[] = {"loc_repair", "loc_repair", "loc_repair"};
					size[] = {{1, 1}, {1, 1}, {0.7, 0.7}};
					color[] = {"ColorWhite"};
					alpha[] = {1};
				};

				class MarkerText {
					sufix = "text";
					text = "Dépanneur";
					type[] = {"mil_box"};
					size[] = {{0, 0}};
					color[] = {"ColorWhite"};
					alpha[] = {1};
				};
			};

			class MarkerTooltip {
				color[] = {0.957,0.459,0.043, 0.6};
				title = "Dépanneur";
				description = "La seul Société de dépanage de Tanoa.";
				img = "";
			};
		};

		class OcasType {

			scales[] = {0, 1};

			class Sections {
				class MarkerIconBackground {
					sufix = "back";
					type[] = {"n_unknown", "n_unknown", "n_unknown"};
					size[] = {{1, 1}, {1, 1}, {0.7, 0.7}};
					color[] = {"ColorCiv"};
					alpha[] = {1};
				};

				class MarkerIcon {
					sufix = "icon";
					type[] = {"loc_car", "loc_car", "loc_car"};
					size[] = {{1, 1}, {1, 1}, {0.7, 0.7}};
					color[] = {"ColorWhite"};
					alpha[] = {1};
				};

				class MarkerText {
					sufix = "text";
					text = "Occasion dépôt";
					type[] = {"mil_box"};
					size[] = {{0, 0}};
					color[] = {"ColorWhite"};
					alpha[] = {1};
				};
			};
		};

		class BarType {

			scales[] = {0, 1};

			class Sections {
				class MarkerIconBackground {
					sufix = "back";
					type[] = {"n_unknown", "n_unknown", "n_unknown"};
					size[] = {{1, 1}, {1, 1}, {0.7, 0.7}};
					color[] = {"ColorCiv"};
					alpha[] = {1};
				};

				class MarkerIcon {
					sufix = "icon";
					type[] = {"loc_talk", "loc_talk", "loc_talk"};
					size[] = {{1, 1}, {1, 1}, {0.7, 0.7}};
					color[] = {"ColorWhite"};
					alpha[] = {1};
				};

				class MarkerText {
					sufix = "text";
					text = "La Pomme dorée";
					type[] = {"mil_box"};
					size[] = {{0, 0}};
					color[] = {"ColorWhite"};
					alpha[] = {1};
				};
			};

			class MarkerTooltip {
				color[] = {0.475, 0.098, 0.647, 0.6};
				title = "La Pomme dorée";
				description = "Le bar convivial de Tanoa.";
				img = "";
			};
		};

		class JohnsonType {

			scales[] = {0, 1};

			class Sections {
				class MarkerIconBackground {
					sufix = "back";
					type[] = {"n_unknown", "n_unknown", "n_unknown"};
					size[] = {{1, 1}, {1, 1}, {0.7, 0.7}};
					color[] = {"ColorCiv"};
					alpha[] = {1};
				};

				class MarkerIcon {
					sufix = "icon";
					type[] = {"loc_backPack", "loc_backPack", "loc_backPack"};
					size[] = {{1, 1}, {1, 1}, {0.7, 0.7}};
					color[] = {"ColorWhite"};
					alpha[] = {1};
				};

				class MarkerText {
					sufix = "text";
					text = "Johnson & Co";
					type[] = {"mil_box"};
					size[] = {{0, 0}};
					color[] = {"ColorWhite"};
					alpha[] = {1};
				};
			};

			class MarkerTooltip {
				color[] = {0.475, 0.098, 0.647, 0.6};
				title = "Johnson & Co";
				description = "Pour des vétements de qualité c'est ici !";
				img = "";
			};
		};

		class GangGarageType {

			scales[] = {0, 1};

			class Sections {
				class MarkerIconBackground {
					sufix = "back";
					type[] = {"n_unknown", "n_unknown", "n_unknown"};
					size[] = {{1, 1}, {1, 1}, {0.7, 0.7}};
					color[] = {"ColorGUER"};
					alpha[] = {1};
				};

				class MarkerIcon {
					sufix = "icon";
					type[] = {"loc_car", "loc_car", "loc_car"};
					size[] = {{1, 1}, {1, 1}, {0.7, 0.7}};
					color[] = {"ColorWhite"};
					alpha[] = {1};
				};

				class MarkerText {
					sufix = "text";
					text = "Garage";
					type[] = {"mil_box"};
					size[] = {{0, 0}};
					color[] = {"ColorWhite"};
					alpha[] = {1};
				};
			};

			class MarkerTooltip {
				color[] = {0.063,0.604,0.071, 0.6};
				title = "Garage";
				description = "Ici vous pouvez récupérer votre véhicule auprès d'un garagiste à condition qu'il ne soit pas en grève.";
				img = "";
			};
		};

		class GangGarageHeliType {

			scales[] = {0, 1};

			class Sections {
				class MarkerIconBackground {
					sufix = "back";
					type[] = {"n_unknown", "n_unknown", "n_unknown"};
					size[] = {{1, 1}, {1, 1}, {0.7, 0.7}};
					color[] = {"ColorGUER"};
					alpha[] = {1};
				};

				class MarkerIcon {
					sufix = "icon";
					type[] = {"loc_heli", "loc_heli", "loc_heli"};
					size[] = {{1, 1}, {1, 1}, {0.7, 0.7}};
					color[] = {"ColorWhite"};
					alpha[] = {1};
				};

				class MarkerText {
					sufix = "text";
					text = "Garage Aérien";
					type[] = {"mil_box"};
					size[] = {{0, 0}};
					color[] = {"ColorWhite"};
					alpha[] = {1};
				};
			};

			class MarkerTooltip {
				color[] = {0.063,0.604,0.071, 0.6};
				title = "Garage Aérien";
				description = "Ici vous pouvez récupérer des véhicules aériens dans ce hangar.";
				img = "";
			};
		};

		class GangCarShopType {

			scales[] = {0, 1};

			class Sections {
				class MarkerIconBackground {
					sufix = "back";
					type[] = {"n_unknown", "n_unknown", "n_unknown"};
					size[] = {{1, 1}, {1, 1}, {0.7, 0.7}};
					color[] = {"ColorGUER"};
					alpha[] = {1};
				};

				class MarkerIcon {
					sufix = "icon";
					type[] = {"loc_car", "loc_car", "loc_car"};
					size[] = {{1, 1}, {1, 1}, {0.7, 0.7}};
					color[] = {"ColorWhite"};
					alpha[] = {1};
				};

				class MarkerText {
					sufix = "text";
					text = "Concessionnaire Mafieux";
					type[] = {"mil_box"};
					size[] = {{0, 0}};
					color[] = {"ColorWhite"};
					alpha[] = {1};
				};
			};

			class MarkerTooltip {
				color[] = {0.063,0.604,0.071, 0.6};
				title = "Concessionnaire Mafieux";
				description = "Vous pouvez acheter des véhicules que les Mafieux vous proposeront.";
				img = "";
			};
		};

		class GangGunShopType {

			scales[] = {0, 1};

			class Sections {
				class MarkerIconBackground {
					sufix = "back";
					type[] = {"n_unknown", "n_unknown", "n_unknown"};
					size[] = {{1, 1}, {1, 1}, {0.7, 0.7}};
					color[] = {"ColorGUER"};
					alpha[] = {1};
				};

				class MarkerIcon {
					sufix = "icon";
					type[] = {"loc_Rifle", "loc_Rifle", "loc_Rifle"};
					size[] = {{1, 1}, {1, 1}, {0.7, 0.7}};
					color[] = {"ColorWhite"};
					alpha[] = {1};
				};

				class MarkerText {
					sufix = "text";
					text = "Armurerie Mafieux";
					type[] = {"mil_box"};
					size[] = {{0, 0}};
					color[] = {"ColorWhite"};
					alpha[] = {1};
				};
			};

			class MarkerTooltip {
				color[] = {0.063,0.604,0.071, 0.6};
				title = "Armurerie Mafieux";
				description = "Ici vous pouvez acheter de l'équipement que vos les Mafieux ont à vendre.";
				img = "";
			};
		};

		class GangImmatriculeType {

			scales[] = {0, 1};

			class Sections {
				class MarkerIconBackground {
					sufix = "back";
					type[] = {"n_unknown", "n_unknown", "n_unknown"};
					size[] = {{1, 1}, {1, 1}, {0.7, 0.7}};
					color[] = {"ColorGUER"};
					alpha[] = {1};
				};

				class MarkerIcon {
					sufix = "icon";
					type[] = {"loc_custom", "loc_custom", "loc_custom"};
					size[] = {{1, 1}, {1, 1}, {0.7, 0.7}};
					color[] = {"ColorWhite"};
					alpha[] = {1};
				};

				class MarkerText {
					sufix = "text";
					text = "Receleur d'immatriculation";
					type[] = {"mil_box"};
					size[] = {{0, 0}};
					color[] = {"ColorWhite"};
					alpha[] = {1};
				};
			};

			class MarkerTooltip {
				color[] = {0.063,0.604,0.071, 0.6};
				title = "Receleur d'immatriculation";
				description = "Ici vous pouvez trafiquer l'imatriculation de vos véhicules.";
				img = "";
			};
		};

		class InsurgeGarageType {

			scales[] = {0, 1};

			class Sections {
				class MarkerIconBackground {
					sufix = "back";
					type[] = {"n_unknown", "n_unknown", "n_unknown"};
					size[] = {{1, 1}, {1, 1}, {0.7, 0.7}};
					color[] = {"ColorGUER"};
					alpha[] = {1};
				};

				class MarkerIcon {
					sufix = "icon";
					type[] = {"loc_car", "loc_car", "loc_car"};
					size[] = {{1, 1}, {1, 1}, {0.7, 0.7}};
					color[] = {"ColorWhite"};
					alpha[] = {1};
				};

				class MarkerText {
					sufix = "text";
					text = "Garage";
					type[] = {"mil_box"};
					size[] = {{0, 0}};
					color[] = {"ColorWhite"};
					alpha[] = {1};
				};
			};

			class MarkerTooltip {
				color[] = {0.063,0.604,0.071, 0.6};
				title = "Garage";
				description = "Ici vous pouvez récupérer votre véhicule auprès du garagiste.";
				img = "";
			};
		};

		class InsurgeCarShopType {
			scales[] = {0, 1};

			class Sections {
				class MarkerIconBackground {
					sufix = "back";
					type[] = {"n_unknown", "n_unknown", "n_unknown"};
					size[] = {{1, 1}, {1, 1}, {0.7, 0.7}};
					color[] = {"ColorGUER"};
					alpha[] = {1};
				};

				class MarkerIcon {
					sufix = "icon";
					type[] = {"loc_car", "loc_car", "loc_car"};
					size[] = {{1, 1}, {1, 1}, {0.7, 0.7}};
					color[] = {"ColorWhite"};
					alpha[] = {1};
				};

				class MarkerText {
					sufix = "text";
					text = "Concessionnaire Terrestre Narcos";
					type[] = {"mil_box"};
					size[] = {{0, 0}};
					color[] = {"ColorWhite"};
					alpha[] = {1};
				};
			};

			class MarkerTooltip {
				color[] = {0.063,0.604,0.071, 0.6};
				title = "Concessionnaire Terrestre Narcos";
				description = "Ici vous pouvez acheter des véhicules terrestre narcos.";
				img = "";
			};
		};

		class InsurgeGunShopType {

			scales[] = {0, 1};

			class Sections {
				class MarkerIconBackground {
					sufix = "back";
					type[] = {"n_unknown", "n_unknown", "n_unknown"};
					size[] = {{1, 1}, {1, 1}, {0.7, 0.7}};
					color[] = {"ColorGUER"};
					alpha[] = {1};
				};

				class MarkerIcon {
					sufix = "icon";
					type[] = {"loc_Rifle", "loc_Rifle", "loc_Rifle"};
					size[] = {{1, 1}, {1, 1}, {0.7, 0.7}};
					color[] = {"ColorWhite"};
					alpha[] = {1};
				};

				class MarkerText {
					sufix = "text";
					text = "Armurerie Narcos";
					type[] = {"mil_box"};
					size[] = {{0, 0}};
					color[] = {"ColorWhite"};
					alpha[] = {1};
				};
			};

			class MarkerTooltip {
				color[] = {0.063,0.604,0.071, 0.6};
				title = "Armurerie Narcos";
				description = "Ici vous pouvez acheter de l'équipement narcos.";
				img = "";
			};
		};

		class HackerType {
			scales[] = {0, 1};

			class Sections {
				class MarkerIconBackground {
					sufix = "back";
					type[] = {"n_unknown", "n_unknown", "n_unknown"};
					size[] = {{1, 1}, {1, 1}, {0.7, 0.7}};
					color[] = {"ColorGUER"};
					alpha[] = {1};
				};

				class MarkerIcon {
					sufix = "icon";
					type[] = {"loc_intel", "loc_intel", "loc_intel"};
					size[] = {{1, 1}, {1, 1}, {0.7, 0.7}};
					color[] = {"ColorWhite"};
					alpha[] = {1};
				};

				class MarkerText {
					sufix = "text";
					text = "Hacker";
					type[] = {"mil_box"};
					size[] = {{0, 0}};
					color[] = {"ColorWhite"};
					alpha[] = {1};
				};
			};

			class MarkerTooltip {
				color[] = {0.063,0.604,0.071, 0.6};
				title = "Hacker";
				description = "Receleur de composants informatique qui peuvent bien servir selon les situations.";
				img = "";
			};
		};

		class ContrebandShopType {
			scales[] = {0, 1};

			class Sections {
				class MarkerIconBackground {
					sufix = "back";
					type[] = {"n_unknown", "n_unknown", "n_unknown"};
					size[] = {{1, 1}, {1, 1}, {0.7, 0.7}};
					color[] = {"ColorGUER"};
					alpha[] = {1};
				};

				class MarkerIcon {
					sufix = "icon";
					type[] = {"loc_help", "loc_help", "loc_help"};
					size[] = {{1, 1}, {1, 1}, {0.7, 0.7}};
					color[] = {"ColorWhite"};
					alpha[] = {1};
				};

				class MarkerText {
					sufix = "text";
					text = "Contrebandier";
					type[] = {"mil_box"};
					size[] = {{0, 0}};
					color[] = {"ColorWhite"};
					alpha[] = {1};
				};
			};

			class MarkerTooltip {
				color[] = {0.063,0.604,0.071, 0.6};
				title = "Contrebandier";
				description = "Receleur de en tout genre.";
				img = "";
			};
		};

		class MineType {
			scales[] = {0, 1};

			class Sections {
				class MarkerIconBackground {
					sufix = "back";
					type[] = {"n_unknown", "n_unknown", "n_unknown"};
					size[] = {{1, 1}, {1, 1}, {0.7, 0.7}};
					color[] = {"ColorYellow"};
					alpha[] = {1};
				};

				class MarkerIcon {
					sufix = "icon";
					type[] = {"loc_destroy", "loc_destroy", "loc_destroy"};
					size[] = {{1, 1}, {1, 1}, {0.7, 0.7}};
					color[] = {"ColorWhite"};
					alpha[] = {1};
				};

				class MarkerText {
					sufix = "text";
					text = "Mine";
					type[] = {"mil_box"};
					size[] = {{0, 0}};
					color[] = {"ColorWhite"};
					alpha[] = {1};
				};
			};

			class MarkerTooltip {
				color[] = {0.8,0.769,0.059, 0.6};
				title = "Mine";
				description = "Cette Zone est un secteur de récupération de minerais.";
				img = "";
			};
		};

		class FurnaceType {
			scales[] = {0, 1};

			class Sections {
				class MarkerIconBackground {
					sufix = "back";
					type[] = {"n_unknown", "n_unknown", "n_unknown"};
					size[] = {{1, 1}, {1, 1}, {0.7, 0.7}};
					color[] = {"ColorYellow"};
					alpha[] = {1};
				};

				class MarkerIcon {
					sufix = "icon";
					type[] = {"loc_mine", "loc_mine", "loc_mine"};
					size[] = {{1, 1}, {1, 1}, {0.7, 0.7}};
					color[] = {"ColorWhite"};
					alpha[] = {1};
				};

				class MarkerText {
					sufix = "text";
					text = "Fonderie DaltGreen";
					type[] = {"mil_box"};
					size[] = {{0, 0}};
					color[] = {"ColorWhite"};
					alpha[] = {1};
				};
			};

			class MarkerTooltip {
				color[] = {0.8,0.769,0.059, 0.6};
				title = "Fonderie DaltGreen";
				description = "L'endroit parfait pour fondre du minerais.... Et le seul.";
				img = "";
			};
		};

		class MineSellType {
			scales[] = {0, 1};

			class Sections {
				class MarkerIconBackground {
					sufix = "back";
					type[] = {"n_unknown", "n_unknown", "n_unknown"};
					size[] = {{1, 1}, {1, 1}, {0.7, 0.7}};
					color[] = {"ColorYellow"};
					alpha[] = {1};
				};

				class MarkerIcon {
					sufix = "icon";
					type[] = {"loc_talk", "loc_talk", "loc_talk"};
					size[] = {{1, 1}, {1, 1}, {0.7, 0.7}};
					color[] = {"ColorWhite"};
					alpha[] = {1};
				};

				class MarkerText {
					sufix = "text";
					text = "DaltGreen Minerais";
					type[] = {"mil_box"};
					size[] = {{0, 0}};
					color[] = {"ColorWhite"};
					alpha[] = {1};
				};
			};

			class MarkerTooltip {
				color[] = {0.8,0.769,0.059, 0.6};
				title = "DaltGreen Minerais";
				description = "L'endroit parfait pour vendre du minerais à une multinationale absolument pas suspecte.";
				img = "";
			};
		};

		class GemsSellType {
			scales[] = {0, 1};

			class Sections {
				class MarkerIconBackground {
					sufix = "back";
					type[] = {"n_unknown", "n_unknown", "n_unknown"};
					size[] = {{1, 1}, {1, 1}, {0.7, 0.7}};
					color[] = {"ColorYellow"};
					alpha[] = {1};
				};

				class MarkerIcon {
					sufix = "icon";
					type[] = {"loc_talk", "loc_talk", "loc_talk"};
					size[] = {{1, 1}, {1, 1}, {0.7, 0.7}};
					color[] = {"ColorWhite"};
					alpha[] = {1};
				};

				class MarkerText {
					sufix = "text";
					text = "DaltGreen Gemmes";
					type[] = {"mil_box"};
					size[] = {{0, 0}};
					color[] = {"ColorWhite"};
					alpha[] = {1};
				};
			};

			class MarkerTooltip {
				color[] = {0.8,0.769,0.059, 0.6};
				title = "DaltGreen Gemmes";
				description = "L'endroit parfait pour vendre vos pierres précieuses à quelqu'un qui saura quoi en faire.";
				img = "";
			};
		};

		class MedBuyType {

			scales[] = {0, 1};

			class Sections {
				class MarkerIconBackground {
					sufix = "back";
					type[] = {"n_unknown", "n_unknown", "n_unknown"};
					size[] = {{1, 1}, {1, 1}, {0.7, 0.7}};
					color[] = {"ColorKhaki"};
					alpha[] = {1};
				};

				class MarkerIcon {
					sufix = "icon";
					type[] = {"loc_Box", "loc_Box", "loc_Box"};
					size[] = {{1, 1}, {1, 1}, {0.7, 0.7}};
					color[] = {"ColorWhite"};
					alpha[] = {1};
				};

				class MarkerText {
					sufix = "text";
					text = "Importation de médicaments";
					type[] = {"mil_box"};
					size[] = {{0, 0}};
					color[] = {"ColorWhite"};
					alpha[] = {1};
				};
			};

			class MarkerTooltip {
				color[] = {0.427,0.631,0.392, 0.6};
				title = "Importation de médicaments";
				description = "Pour investir dans les médicaments, c'est ici qu'il faut aller.";
				img = "";
			};
		};

		class MedProcessType {

			scales[] = {0, 1};

			class Sections {
				class MarkerIconBackground {
					sufix = "back";
					type[] = {"n_unknown", "n_unknown", "n_unknown"};
					size[] = {{1, 1}, {1, 1}, {0.7, 0.7}};
					color[] = {"ColorKhaki"};
					alpha[] = {1};
				};

				class MarkerIcon {
					sufix = "icon";
					type[] = {"loc_use", "loc_use", "loc_use"};
					size[] = {{1, 1}, {1, 1}, {0.7, 0.7}};
					color[] = {"ColorWhite"};
					alpha[] = {1};
				};

				class MarkerText {
					sufix = "text";
					text = "Enregistrement médicaments";
					type[] = {"mil_box"};
					size[] = {{0, 0}};
					color[] = {"ColorWhite"};
					alpha[] = {1};
				};
			};

			class MarkerTooltip {
				color[] = {0.427,0.631,0.392, 0.6};
				title = "Enregistrement médicaments";
				description = "Traitement 1/2, C'est ici que l'on enregistre les médicaments pour pouvoir ensuite les valider à la rochelle.";
				img = "";
			};
		};

		class MedSellType {

			scales[] = {0, 1};

			class Sections {
				class MarkerIconBackground {
					sufix = "back";
					type[] = {"n_unknown", "n_unknown", "n_unknown"};
					size[] = {{1, 1}, {1, 1}, {0.7, 0.7}};
					color[] = {"ColorKhaki"};
					alpha[] = {1};
				};

				class MarkerIcon {
					sufix = "icon";
					type[] = {"loc_use", "loc_use", "loc_use"};
					size[] = {{1, 1}, {1, 1}, {0.7, 0.7}};
					color[] = {"ColorWhite"};
					alpha[] = {1};
				};

				class MarkerText {
					sufix = "text";
					text = "Validation médicaments";
					type[] = {"mil_box"};
					size[] = {{0, 0}};
					color[] = {"ColorWhite"};
					alpha[] = {1};
				};
			};

			class MarkerTooltip {
				color[] = {0.427,0.631,0.392, 0.6};
				title = "Validation médicaments";
				description = "Traitement 2/2, C'est ici que l'on valide les médicaments enregistré.";
				img = "";
			};
		};

		class WeaponsFarmShopType {
			scales[] = {0, 1};

			class Sections {
				class MarkerIconBackground {
					sufix = "back";
					type[] = {"n_unknown", "n_unknown", "n_unknown"};
					size[] = {{1, 1}, {1, 1}, {0.7, 0.7}};
					color[] = {"ColorRed"};
					alpha[] = {1};
				};

				class MarkerIcon {
					sufix = "icon";
					type[] = {"loc_talk", "loc_talk", "loc_talk"};
					size[] = {{1, 1}, {1, 1}, {0.7, 0.7}};
					color[] = {"ColorWhite"};
					alpha[] = {1};
				};

				class MarkerText {
					sufix = "text";
					text = "Importation d'armes";
					type[] = {"mil_box"};
					size[] = {{0, 0}};
					color[] = {"ColorWhite"};
					alpha[] = {1};
				};
			};

			class MarkerTooltip {
				color[] = {0.427,0.631,0.392, 0.6};
				title = "Importation d'armes";
				description = "Pour acheter des caisses d'armes.";
				img = "";
			};
		};

		class WeaponsFarmProcess1Type {
			scales[] = {0, 1};

			class Sections {
				class MarkerIconBackground {
					sufix = "back";
					type[] = {"n_unknown", "n_unknown", "n_unknown"};
					size[] = {{1, 1}, {1, 1}, {0.7, 0.7}};
					color[] = {"ColorRed"};
					alpha[] = {1};
				};

				class MarkerIcon {
					sufix = "icon";
					type[] = {"loc_use", "loc_use", "loc_use"};
					size[] = {{1, 1}, {1, 1}, {0.7, 0.7}};
					color[] = {"ColorWhite"};
					alpha[] = {1};
				};

				class MarkerText {
					sufix = "text";
					text = "Falsification d'armes";
					type[] = {"mil_box"};
					size[] = {{0, 0}};
					color[] = {"ColorWhite"};
					alpha[] = {1};
				};
			};

			class MarkerTooltip {
				color[] = {0.831,0,0, 0.6};
				title = "Falsification d'armes";
				description = "Traitement 1/2, C'est ici que l'on falsifie les armes.";
				img = "";
			};
		};

		class WeaponsFarmProcess2Type {
			scales[] = {0, 1};

			class Sections {
				class MarkerIconBackground {
					sufix = "back";
					type[] = {"n_unknown", "n_unknown", "n_unknown"};
					size[] = {{1, 1}, {1, 1}, {0.7, 0.7}};
					color[] = {"ColorRed"};
					alpha[] = {1};
				};

				class MarkerIcon {
					sufix = "icon";
					type[] = {"loc_use", "loc_use", "loc_use"};
					size[] = {{1, 1}, {1, 1}, {0.7, 0.7}};
					color[] = {"ColorWhite"};
					alpha[] = {1};
				};

				class MarkerText {
					sufix = "text";
					text = "Anonymisation des armes";
					type[] = {"mil_box"};
					size[] = {{0, 0}};
					color[] = {"ColorWhite"};
					alpha[] = {1};
				};
			};

			class MarkerTooltip {
				color[] = {0.831,0,0, 0.6};
				title = "Anonymisation des armes";
				description = "Traitement 2/2, C'est ici que l'on efface le matricule des armes.";
				img = "";
			};
		};

		class WeaponsFarmSellType {
			scales[] = {0, 1};

			class Sections {
				class MarkerIconBackground {
					sufix = "back";
					type[] = {"n_unknown", "n_unknown", "n_unknown"};
					size[] = {{1, 1}, {1, 1}, {0.7, 0.7}};
					color[] = {"ColorRed"};
					alpha[] = {1};
				};

				class MarkerIcon {
					sufix = "icon";
					type[] = {"loc_talk", "loc_talk", "loc_talk"};
					size[] = {{1, 1}, {1, 1}, {0.7, 0.7}};
					color[] = {"ColorWhite"};
					alpha[] = {1};
				};

				class MarkerText {
					sufix = "text";
					text = "Contrebandier d'armes";
					type[] = {"mil_box"};
					size[] = {{0, 0}};
					color[] = {"ColorWhite"};
					alpha[] = {1};
				};
			};

			class MarkerTooltip {
				color[] = {0.831,0,0, 0.6};
				title = "Contrebandier d'armes";
				description = "C'est ici que l'on vent les armes.";
				img = "";
			};
		};		

		class SugarProcessType {

			scales[] = {0, 1};

			class Sections {
				class MarkerIconBackground {
					sufix = "back";
					type[] = {"n_unknown", "n_unknown", "n_unknown"};
					size[] = {{1, 1}, {1, 1}, {0.7, 0.7}};
					color[] = {"ColorKhaki"};
					alpha[] = {1};
				};

				class MarkerIcon {
					sufix = "icon";
					type[] = {"loc_use", "loc_use", "loc_use"};
					size[] = {{1, 1}, {1, 1}, {0.7, 0.7}};
					color[] = {"ColorWhite"};
					alpha[] = {1};
				};

				class MarkerText {
					sufix = "text";
					text = "Raffinerie de sucre";
					type[] = {"mil_box"};
					size[] = {{0, 0}};
					color[] = {"ColorWhite"};
					alpha[] = {1};
				};
			};

			class MarkerTooltip {
				color[] = {0.427,0.631,0.392, 0.6};
				title = "Raffinerie de sucre";
				description = "Lieu idéal pour faire du sucre.";
				img = "";
			};
		};

		class SugarSellType {

			scales[] = {0, 1};

			class Sections {
				class MarkerIconBackground {
					sufix = "back";
					type[] = {"n_unknown", "n_unknown", "n_unknown"};
					size[] = {{1, 1}, {1, 1}, {0.7, 0.7}};
					color[] = {"ColorKhaki"};
					alpha[] = {1};
				};

				class MarkerIcon {
					sufix = "icon";
					type[] = {"loc_talk", "loc_talk", "loc_talk"};
					size[] = {{1, 1}, {1, 1}, {0.7, 0.7}};
					color[] = {"ColorWhite"};
					alpha[] = {1};
				};

				class MarkerText {
					sufix = "text";
					text = "Exportation agroalimentaire";
					type[] = {"mil_box"};
					size[] = {{0, 0}};
					color[] = {"ColorWhite"};
					alpha[] = {1};
				};
			};

			class MarkerTooltip {
				color[] = {0.427,0.631,0.392, 0.6};
				title = "Exportation agroalimentaire";
				description = "Lieu idéal pour faire vendre du sucre.";
				img = "";
			};
		};

		class MoneyLaunderingType {

			scales[] = {0, 1};

			class Sections {
				class MarkerIconBackground {
					sufix = "back";
					type[] = {"n_unknown", "n_unknown", "n_unknown"};
					size[] = {{1, 1}, {1, 1}, {0.7, 0.7}};
					color[] = {"ColorRed"};
					alpha[] = {1};
				};

				class MarkerIcon {
					sufix = "icon";
					type[] = {"loc_talk", "loc_talk", "loc_talk"};
					size[] = {{1, 1}, {1, 1}, {0.7, 0.7}};
					color[] = {"ColorWhite"};
					alpha[] = {1};
				};

				class MarkerText {
					sufix = "text";
					text = "Blanchisserie";
					type[] = {"mil_box"};
					size[] = {{0, 0}};
					color[] = {"ColorWhite"};
					alpha[] = {1};
				};
			};

			class MarkerTooltip {
				color[] = {0.831,0,0, 0.6};
				title = "Blanchisserie";
				description = "Pour blanchir son linge voyons. (Ouvert de 22h à 6h).";
				img = "";
			};
		};

		class ArcheTerreType {

			scales[] = {0, 1};

			class Sections {
				class MarkerIconBackground {
					sufix = "back";
					type[] = {"n_unknown", "n_unknown", "n_unknown"};
					size[] = {{1, 1}, {1, 1}, {0.7, 0.7}};
					color[] = {"ColorKhaki"};
					alpha[] = {1};
				};

				class MarkerIcon {
					sufix = "icon";
					type[] = {"loc_Ruin", "loc_Ruin", "loc_Ruin"};
					size[] = {{1, 1}, {1, 1}, {0.7, 0.7}};
					color[] = {"ColorWhite"};
					alpha[] = {1};
				};

				class MarkerText {
					sufix = "text";
					text = "Ruines";
					type[] = {"mil_box"};
					size[] = {{0, 0}};
					color[] = {"ColorWhite"};
					alpha[] = {1};
				};
			};

			class MarkerTooltip {
				color[] = {0.427,0.631,0.392, 0.6};
				title = "Ruines";
				description = "Des ruines d'une guerre, peut-être que l'on peut trouver des choses intéressantes avec une pelle..";
				img = "";
			};
		};

		class ArcheSousType {

			scales[] = {0, 1};

			class Sections {
				class MarkerIconBackground {
					sufix = "back";
					type[] = {"n_unknown", "n_unknown", "n_unknown"};
					size[] = {{1, 1}, {1, 1}, {0.7, 0.7}};
					color[] = {"ColorKhaki"};
					alpha[] = {1};
				};

				class MarkerIcon {
					sufix = "icon";
					type[] = {"loc_shipwreck", "loc_shipwreck", "loc_shipwreck"};
					size[] = {{1, 1}, {1, 1}, {0.7, 0.7}};
					color[] = {"ColorWhite"};
					alpha[] = {1};
				};

				class MarkerText {
					sufix = "text";
					text = "Epave Sous-Marine";
					type[] = {"mil_box"};
					size[] = {{0, 0}};
					color[] = {"ColorWhite"};
					alpha[] = {1};
				};
			};

			class MarkerTooltip {
				color[] = {0.427,0.631,0.392, 0.6};
				title = "Epave Sous-Marine";
				description = "Un bateau aurai eu un problème ici pendant une tempête..";
				img = "";
			};
		};

		class WoodType {
			scales[] = {0, 1};

			class Sections {
				class MarkerIconBackground {
					sufix = "back";
					type[] = {"n_unknown", "n_unknown", "n_unknown"};
					size[] = {{1, 1}, {1, 1}, {0.7, 0.7}};
					color[] = {"ColorKhaki"};
					alpha[] = {1};
				};

				class MarkerIcon {
					sufix = "icon";
					type[] = {"loc_tree1", "loc_tree1", "loc_tree1"};
					size[] = {{1, 1}, {1, 1}, {0.7, 0.7}};
					color[] = {"ColorWhite"};
					alpha[] = {1};
				};

				class MarkerText {
					sufix = "text";
					text = "Forêt de bois";
					type[] = {"mil_box"};
					size[] = {{0, 0}};
					color[] = {"ColorWhite"};
					alpha[] = {1};
				};
			};

			class MarkerTooltip {
				color[] = {0.427,0.631,0.392, 0.6};
				title = "Forêt de bois";
				description = "L'endroit parfait pour couper du bois pour se faire un peu d'argent et suer.";
				img = "";
			};
		};

		class WoodIllegalType {
			scales[] = {0, 1};

			class Sections {
				class MarkerIconBackground {
					sufix = "back";
					type[] = {"n_unknown", "n_unknown", "n_unknown"};
					size[] = {{1, 1}, {1, 1}, {0.7, 0.7}};
					color[] = {"ColorRed"};
					alpha[] = {1};
				};

				class MarkerIcon {
					sufix = "icon";
					type[] = {"loc_tree2", "loc_tree2", "loc_tree2"};
					size[] = {{1, 1}, {1, 1}, {0.7, 0.7}};
					color[] = {"ColorWhite"};
					alpha[] = {1};
				};

				class MarkerText {
					sufix = "text";
					text = "Forêt de bois";
					type[] = {"mil_box"};
					size[] = {{0, 0}};
					color[] = {"ColorWhite"};
					alpha[] = {1};
				};
			};

			class MarkerTooltip {
				color[] = {0.427,0.631,0.392, 0.6};
				title = "Forêt de bois";
				description = "L'endroit parfait pour couper du bois pour se faire un peu d'argent et suer.";
				img = "";
			};
		};

		class WoodProcessType {
			scales[] = {0, 1};

			class Sections {
				class MarkerIconBackground {
					sufix = "back";
					type[] = {"n_unknown", "n_unknown", "n_unknown"};
					size[] = {{1, 1}, {1, 1}, {0.7, 0.7}};
					color[] = {"ColorKhaki"};
					alpha[] = {1};
				};

				class MarkerIcon {
					sufix = "icon";
					type[] = {"loc_use", "loc_use", "loc_use"};
					size[] = {{1, 1}, {1, 1}, {0.7, 0.7}};
					color[] = {"ColorWhite"};
					alpha[] = {1};
				};

				class MarkerText {
					sufix = "text";
					text = "Scierie";
					type[] = {"mil_box"};
					size[] = {{0, 0}};
					color[] = {"ColorWhite"};
					alpha[] = {1};
				};
			};

			class MarkerTooltip {
				color[] = {0.427,0.631,0.392, 0.6};
				title = "Scierie";
				description = "L'endroit parfait pour traiter du bois et le découper pour le préparer à l'exportation.";
				img = "";
			};
		};

		class WoodSellType {
			scales[] = {0, 1};

			class Sections {
				class MarkerIconBackground {
					sufix = "back";
					type[] = {"n_unknown", "n_unknown", "n_unknown"};
					size[] = {{1, 1}, {1, 1}, {0.7, 0.7}};
					color[] = {"ColorKhaki"};
					alpha[] = {1};
				};

				class MarkerIcon {
					sufix = "icon";
					type[] = {"loc_talk", "loc_talk", "loc_talk"};
					size[] = {{1, 1}, {1, 1}, {0.7, 0.7}};
					color[] = {"ColorWhite"};
					alpha[] = {1};
				};

				class MarkerText {
					sufix = "text";
					text = "Exportation de bois";
					type[] = {"mil_box"};
					size[] = {{0, 0}};
					color[] = {"ColorWhite"};
					alpha[] = {1};
				};
			};

			class MarkerTooltip {
				color[] = {0.427,0.631,0.392, 0.6};
				title = "Exportation de bois";
				description = "L'endroit parfait pour vendre du bois.";
				img = "";
			};
		};

		class SnakeType {
			scales[] = {0, 1};

			class Sections {
				class MarkerIconBackground {
					sufix = "back";
					type[] = {"n_unknown", "n_unknown", "n_unknown"};
					size[] = {{1, 1}, {1, 1}, {0.7, 0.7}};
					color[] = {"ColorRed"};
					alpha[] = {1};
				};

				class MarkerIcon {
					sufix = "icon";
					type[] = {"loc_Pick", "loc_Pick", "loc_Pick"};
					size[] = {{1, 1}, {1, 1}, {0.7, 0.7}};
					color[] = {"ColorWhite"};
					alpha[] = {1};
				};

				class MarkerText {
					sufix = "text";
					text = "Île aux serpents";
					type[] = {"mil_box"};
					size[] = {{0, 0}};
					color[] = {"ColorWhite"};
					alpha[] = {1};
				};
			};

			class MarkerTooltip {
				color[] = {0.831,0,0, 0.6};
				title = "Île aux serpents";
				description = "Une île remplie de serpents protégé.";
				img = "";
			};
		};

		class SnakeProcessType {
			scales[] = {0, 1};

			class Sections {
				class MarkerIconBackground {
					sufix = "back";
					type[] = {"n_unknown", "n_unknown", "n_unknown"};
					size[] = {{1, 1}, {1, 1}, {0.7, 0.7}};
					color[] = {"ColorRed"};
					alpha[] = {1};
				};

				class MarkerIcon {
					sufix = "icon";
					type[] = {"loc_use", "loc_use", "loc_use"};
					size[] = {{1, 1}, {1, 1}, {0.7, 0.7}};
					color[] = {"ColorWhite"};
					alpha[] = {1};
				};

				class MarkerText {
					sufix = "text";
					text = "Dépeçage de serpent";
					type[] = {"mil_box"};
					size[] = {{0, 0}};
					color[] = {"ColorWhite"};
					alpha[] = {1};
				};
			};

			class MarkerTooltip {
				color[] = {0.831,0,0, 0.6};
				title = "Dépeçage de serpent";
				description = "Une Cabane aux activités louche...";
				img = "";
			};
		};

		class SnakeSellType {
			scales[] = {0, 1};

			class Sections {
				class MarkerIconBackground {
					sufix = "back";
					type[] = {"n_unknown", "n_unknown", "n_unknown"};
					size[] = {{1, 1}, {1, 1}, {0.7, 0.7}};
					color[] = {"ColorRed"};
					alpha[] = {1};
				};

				class MarkerIcon {
					sufix = "icon";
					type[] = {"loc_talk", "loc_talk", "loc_talk"};
					size[] = {{1, 1}, {1, 1}, {0.7, 0.7}};
					color[] = {"ColorWhite"};
					alpha[] = {1};
				};

				class MarkerText {
					sufix = "text";
					text = "Tanneur";
					type[] = {"mil_box"};
					size[] = {{0, 0}};
					color[] = {"ColorWhite"};
					alpha[] = {1};
				};
			};

			class MarkerTooltip {
				color[] = {0.831,0,0, 0.6};
				title = "Tanneur";
				description = "Une autre cabane aux activités louche. On dit qu'on y achèterait de la peau de serpent.";
				img = "";
			};
		};

		class DrugFieldType {
			scales[] = {0, 1};

			class Sections {
				class MarkerIconBackground {
					sufix = "back";
					type[] = {"n_unknown", "n_unknown", "n_unknown"};
					size[] = {{1, 1}, {1, 1}, {0.7, 0.7}};
					color[] = {"ColorRed"};
					alpha[] = {1};
				};

				class MarkerIcon {
					sufix = "icon";
					type[] = {"loc_Pick", "loc_Pick", "loc_Pick"};
					size[] = {{1, 1}, {1, 1}, {0.7, 0.7}};
					color[] = {"ColorWhite"};
					alpha[] = {1};
				};

				class MarkerText {
					sufix = "text";
					text = "Champ de drogue";
					type[] = {"mil_box"};
					size[] = {{0, 0}};
					color[] = {"ColorWhite"};
					alpha[] = {1};
				};
			};

			class MarkerTooltip {
				color[] = {0.831,0,0, 0.6};
				title = "Champ de drogue";
				description = "Champ de drogue.";
				img = "";
			};
		};

		class DrugProcessType {
			scales[] = {0, 1};

			class Sections {
				class MarkerIconBackground {
					sufix = "back";
					type[] = {"n_unknown", "n_unknown", "n_unknown"};
					size[] = {{1, 1}, {1, 1}, {0.7, 0.7}};
					color[] = {"ColorRed"};
					alpha[] = {1};
				};

				class MarkerIcon {
					sufix = "icon";
					type[] = {"loc_use", "loc_use", "loc_use"};
					size[] = {{1, 1}, {1, 1}, {0.7, 0.7}};
					color[] = {"ColorWhite"};
					alpha[] = {1};
				};

				class MarkerText {
					sufix = "text";
					text = "Traitement de Drogue";
					type[] = {"mil_box"};
					size[] = {{0, 0}};
					color[] = {"ColorWhite"};
					alpha[] = {1};
				};
			};

			class MarkerTooltip {
				color[] = {0.831,0,0, 0.6};
				title = "Traitement de Drogue";
				description = "L'un des seuls endroit où les flics ne fouillera pas pour traiter de drogue... Espérons...";
				img = "";
			};
		};

		class DrugDealerType {
			scales[] = {0, 1};

			class Sections {
				class MarkerIconBackground {
					sufix = "back";
					type[] = {"n_unknown", "n_unknown", "n_unknown"};
					size[] = {{1, 1}, {1, 1}, {0.7, 0.7}};
					color[] = {"ColorRed"};
					alpha[] = {1};
				};

				class MarkerIcon {
					sufix = "icon";
					type[] = {"loc_talk", "loc_talk", "loc_talk"};
					size[] = {{1, 1}, {1, 1}, {0.7, 0.7}};
					color[] = {"ColorWhite"};
					alpha[] = {1};
				};

				class MarkerText {
					sufix = "text";
					text = "Dealer";
					type[] = {"mil_box"};
					size[] = {{0, 0}};
					color[] = {"ColorWhite"};
					alpha[] = {1};
				};
			};

			class MarkerTooltip {
				color[] = {0.831,0,0, 0.6};
				title = "Dealer";
				description = "Le fournisseur en drogue des environs, il serait peut être intérressé par une petite cargaison ?";
				img = "";
			};
		};

		// Areas

		class GeorgeTownType {
			class Sections {
				class MarkerIconBackground {
					sufix = "back";
					type[] = {"n_unknown", "n_unknown", "n_unknown"};
					size[] = {{1, 1}, {1, 1}, {0.7, 0.7}};
					color[] = {"ColorBlack"};
					alpha[] = {1};
				};

				class MarkerIcon {
					sufix = "icon";
					type[] = {"loc_move", "loc_move", "loc_move"};
					size[] = {{1, 1}, {1, 1}, {0.7, 0.7}};
					color[] = {"ColorWhite"};
					alpha[] = {1};
				};

				class MarkerText {
					sufix = "text";
					text = "Georgetown";
					type[] = {"mil_box"};
					size[] = {{0, 0}};
					color[] = {"ColorWhite"};
					alpha[] = {1};
				};
			};

			class MarkerTooltip {
				color[] = {0.345,0.345,0.345, 0.6};
				title = "Georgetown";
				description = "La capitalle de Tanoa.";
				img = "";
			};
		};

		class TanoukaType {
			class Sections {
				class MarkerIconBackground {
					sufix = "back";
					type[] = {"n_unknown", "n_unknown", "n_unknown"};
					size[] = {{1, 1}, {1, 1}, {0.7, 0.7}};
					color[] = {"ColorBlack"};
					alpha[] = {1};
				};

				class MarkerIcon {
					sufix = "icon";
					type[] = {"loc_move", "loc_move", "loc_move"};
					size[] = {{1, 1}, {1, 1}, {0.7, 0.7}};
					color[] = {"ColorWhite"};
					alpha[] = {1};
				};

				class MarkerText {
					sufix = "text";
					text = "Tanouka";
					type[] = {"mil_box"};
					size[] = {{0, 0}};
					color[] = {"ColorWhite"};
					alpha[] = {1};
				};
			};

			class MarkerTooltip {
				color[] = {0.345,0.345,0.345, 0.6};
				title = "Tanouka";
				description = "La où tout passe et doit passer sur Tanoa.";
				img = "";
			};
		};

		class LaRochelleType {
			class Sections {
				class MarkerIconBackground {
					sufix = "back";
					type[] = {"n_unknown", "n_unknown", "n_unknown"};
					size[] = {{1, 1}, {1, 1}, {0.7, 0.7}};
					color[] = {"ColorBlack"};
					alpha[] = {1};
				};

				class MarkerIcon {
					sufix = "icon";
					type[] = {"loc_move", "loc_move", "loc_move"};
					size[] = {{1, 1}, {1, 1}, {0.7, 0.7}};
					color[] = {"ColorWhite"};
					alpha[] = {1};
				};

				class MarkerText {
					sufix = "text";
					text = "La Rochelle";
					type[] = {"mil_box"};
					size[] = {{0, 0}};
					color[] = {"ColorWhite"};
					alpha[] = {1};
				};
			};

			class MarkerTooltip {
				color[] = {0.345,0.345,0.345, 0.6};
				title = "La Rochelle";
				description = "La plus grosse ville au nord de Tanoa.";
				img = "";
			};
		};

		class LaRochelleAeroType {
			class Sections {
				class MarkerIconBackground {
					sufix = "back";
					type[] = {"n_unknown", "n_unknown", "n_unknown"};
					size[] = {{1, 1}, {1, 1}, {0.7, 0.7}};
					color[] = {"ColorBlack"};
					alpha[] = {1};
				};

				class MarkerIcon {
					sufix = "icon";
					type[] = {"loc_plane", "loc_plane", "loc_plane"};
					size[] = {{1, 1}, {1, 1}, {0.7, 0.7}};
					color[] = {"ColorWhite"};
					alpha[] = {1};
				};

				class MarkerText {
					sufix = "text";
					text = "Aérodrome de la Rochelle";
					type[] = {"mil_box"};
					size[] = {{0, 0}};
					color[] = {"ColorWhite"};
					alpha[] = {1};
				};
			};

			class MarkerTooltip {
				color[] = {0.345,0.345,0.345, 0.6};
				title = "Aérodrome de la Rochelle";
				description = "L'aérodrome du nord de Tanoa, il relit les îles par les airs mais aussi les archipels voisines.";
				img = "";
			};
		};

		class OumereType {
			class Sections {
				class MarkerIconBackground {
					sufix = "back";
					type[] = {"n_unknown", "n_unknown", "n_unknown"};
					size[] = {{1, 1}, {1, 1}, {0.7, 0.7}};
					color[] = {"ColorBlack"};
					alpha[] = {1};
				};

				class MarkerIcon {
					sufix = "icon";
					type[] = {"loc_move", "loc_move", "loc_move"};
					size[] = {{1, 1}, {1, 1}, {0.7, 0.7}};
					color[] = {"ColorWhite"};
					alpha[] = {1};
				};

				class MarkerText {
					sufix = "text";
					text = "Ouméré";
					type[] = {"mil_box"};
					size[] = {{0, 0}};
					color[] = {"ColorWhite"};
					alpha[] = {1};
				};
			};

			class MarkerTooltip {
				color[] = {0.345,0.345,0.345, 0.6};
				title = "Ouméré";
				description = "Un petit village dans Le nord de Tanoa.";
				img = "";
			};
		};

		class HarcourtType {
			class Sections {
				class MarkerIconBackground {
					sufix = "back";
					type[] = {"n_unknown", "n_unknown", "n_unknown"};
					size[] = {{1, 1}, {1, 1}, {0.7, 0.7}};
					color[] = {"ColorBlack"};
					alpha[] = {1};
				};

				class MarkerIcon {
					sufix = "icon";
					type[] = {"loc_move", "loc_move", "loc_move"};
					size[] = {{1, 1}, {1, 1}, {0.7, 0.7}};
					color[] = {"ColorWhite"};
					alpha[] = {1};
				};

				class MarkerText {
					sufix = "text";
					text = "Harcourt";
					type[] = {"mil_box"};
					size[] = {{0, 0}};
					color[] = {"ColorWhite"};
					alpha[] = {1};
				};
			};

			class MarkerTooltip {
				color[] = {0.345,0.345,0.345, 0.6};
				title = "Harcourt";
				description = "Une petit ville portuaire connu pour son pont.";
				img = "";
			};
		};

		class LijnhavenType {
			class Sections {
				class MarkerIconBackground {
					sufix = "back";
					type[] = {"n_unknown", "n_unknown", "n_unknown"};
					size[] = {{1, 1}, {1, 1}, {0.7, 0.7}};
					color[] = {"ColorBlack"};
					alpha[] = {1};
				};

				class MarkerIcon {
					sufix = "icon";
					type[] = {"loc_move", "loc_move", "loc_move"};
					size[] = {{1, 1}, {1, 1}, {0.7, 0.7}};
					color[] = {"ColorWhite"};
					alpha[] = {1};
				};

				class MarkerText {
					sufix = "text";
					text = "Lijnhaven";
					type[] = {"mil_box"};
					size[] = {{0, 0}};
					color[] = {"ColorWhite"};
					alpha[] = {1};
				};
			};

			class MarkerTooltip {
				color[] = {0.345,0.345,0.345, 0.6};
				title = "Lijnhaven";
				description = "La plus grosse ville historique du Sud de Tanoa.";
				img = "";
			};
		};

		class LijnhavenAeroType {
			class Sections {
				class MarkerIconBackground {
					sufix = "back";
					type[] = {"n_unknown", "n_unknown", "n_unknown"};
					size[] = {{1, 1}, {1, 1}, {0.7, 0.7}};
					color[] = {"ColorBlack"};
					alpha[] = {1};
				};

				class MarkerIcon {
					sufix = "icon";
					type[] = {"loc_plane", "loc_plane", "loc_plane"};
					size[] = {{1, 1}, {1, 1}, {0.7, 0.7}};
					color[] = {"ColorWhite"};
					alpha[] = {1};
				};

				class MarkerText {
					sufix = "text";
					text = "Aérodrome de Saint-George";
					type[] = {"mil_box"};
					size[] = {{0, 0}};
					color[] = {"ColorWhite"};
					alpha[] = {1};
				};
			};

			class MarkerTooltip {
				color[] = {0.345,0.345,0.345, 0.6};
				title = "Aérodrome de Saint-George";
				description = "Un aérodome qui fut par le temps exclusif à l'armée de l'Archipel.";
				img = "";
			};
		};

		class ModdergatType {
			class Sections {
				class MarkerIconBackground {
					sufix = "back";
					type[] = {"n_unknown", "n_unknown", "n_unknown"};
					size[] = {{1, 1}, {1, 1}, {0.7, 0.7}};
					color[] = {"ColorBlack"};
					alpha[] = {1};
				};

				class MarkerIcon {
					sufix = "icon";
					type[] = {"loc_move", "loc_move", "loc_move"};
					size[] = {{1, 1}, {1, 1}, {0.7, 0.7}};
					color[] = {"ColorWhite"};
					alpha[] = {1};
				};

				class MarkerText {
					sufix = "text";
					text = "Moddergat";
					type[] = {"mil_box"};
					size[] = {{0, 0}};
					color[] = {"ColorWhite"};
					alpha[] = {1};
				};
			};

			class MarkerTooltip {
				color[] = {0.345,0.345,0.345, 0.6};
				title = "Moddergat";
				description = "Le nord de Tanoa.";
				img = "";
			};
		};

		class KatkoulaType {
			class Sections {
				class MarkerIconBackground {
					sufix = "back";
					type[] = {"n_unknown", "n_unknown", "n_unknown"};
					size[] = {{1, 1}, {1, 1}, {0.7, 0.7}};
					color[] = {"ColorBlack"};
					alpha[] = {1};
				};

				class MarkerIcon {
					sufix = "icon";
					type[] = {"loc_move", "loc_move", "loc_move"};
					size[] = {{1, 1}, {1, 1}, {0.7, 0.7}};
					color[] = {"ColorWhite"};
					alpha[] = {1};
				};

				class MarkerText {
					sufix = "text";
					text = "Katkoula";
					type[] = {"mil_box"};
					size[] = {{0, 0}};
					color[] = {"ColorWhite"};
					alpha[] = {1};
				};
			};

			class MarkerTooltip {
				color[] = {0.345,0.345,0.345, 0.6};
				title = "Katkoula";
				description = "Une ville calme en apparence et qui n'existe uniquement grâce à son stockage de fuel.";
				img = "";
			};
		};

		class BalaAeroType {
			class Sections {
				class MarkerIconBackground {
					sufix = "back";
					type[] = {"n_unknown", "n_unknown", "n_unknown"};
					size[] = {{1, 1}, {1, 1}, {0.7, 0.7}};
					color[] = {"ColorBlack"};
					alpha[] = {1};
				};

				class MarkerIcon {
					sufix = "icon";
					type[] = {"loc_plane", "loc_plane", "loc_plane"};
					size[] = {{1, 1}, {1, 1}, {0.7, 0.7}};
					color[] = {"ColorWhite"};
					alpha[] = {1};
				};

				class MarkerText {
					sufix = "text";
					text = "Aérodrome de Bala";
					type[] = {"mil_box"};
					size[] = {{0, 0}};
					color[] = {"ColorWhite"};
					alpha[] = {1};
				};
			};

			class MarkerTooltip {
				color[] = {0.345,0.345,0.345, 0.6};
				title = "Aérodrome de Bala";
				description = "Le plus petit aérodome de l'archipel et le moins développé. Seul les féru d'aviations y vont et le l'aide à tenir encore debout...";
				img = "";
			};
		};

		class BalavuType {
			class Sections {
				class MarkerIconBackground {
					sufix = "back";
					type[] = {"n_unknown", "n_unknown", "n_unknown"};
					size[] = {{1, 1}, {1, 1}, {0.7, 0.7}};
					color[] = {"ColorBlack"};
					alpha[] = {1};
				};

				class MarkerIcon {
					sufix = "icon";
					type[] = {"loc_move", "loc_move", "loc_move"};
					size[] = {{1, 1}, {1, 1}, {0.7, 0.7}};
					color[] = {"ColorWhite"};
					alpha[] = {1};
				};

				class MarkerText {
					sufix = "text";
					text = "Balavu";
					type[] = {"mil_box"};
					size[] = {{0, 0}};
					color[] = {"ColorWhite"};
					alpha[] = {1};
				};
			};

			class MarkerTooltip {
				color[] = {0.345,0.345,0.345, 0.6};
				title = "Balavu";
				description = "Une petit ville portuaire qui n'a strictement rien d'attirant en dehors de sa proximité de deux grosses villes.";
				img = "";
			};
		};

		class TavuType {
			class Sections {
				class MarkerIconBackground {
					sufix = "back";
					type[] = {"n_unknown", "n_unknown", "n_unknown"};
					size[] = {{1, 1}, {1, 1}, {0.7, 0.7}};
					color[] = {"ColorBlack"};
					alpha[] = {1};
				};

				class MarkerIcon {
					sufix = "icon";
					type[] = {"loc_move", "loc_move", "loc_move"};
					size[] = {{1, 1}, {1, 1}, {0.7, 0.7}};
					color[] = {"ColorWhite"};
					alpha[] = {1};
				};

				class MarkerText {
					sufix = "text";
					text = "Tavu";
					type[] = {"mil_box"};
					size[] = {{0, 0}};
					color[] = {"ColorWhite"};
					alpha[] = {1};
				};
			};

			class MarkerTooltip {
				color[] = {0.345,0.345,0.345, 0.6};
				title = "Tavu";
				description = "Bon la je crois que Tavu non ?";
				img = "";
			};
		};

		class BelfortType {
			class Sections {
				class MarkerIconBackground {
					sufix = "back";
					type[] = {"n_unknown", "n_unknown", "n_unknown"};
					size[] = {{1, 1}, {1, 1}, {0.7, 0.7}};
					color[] = {"ColorBlack"};
					alpha[] = {1};
				};

				class MarkerIcon {
					sufix = "icon";
					type[] = {"loc_move", "loc_move", "loc_move"};
					size[] = {{1, 1}, {1, 1}, {0.7, 0.7}};
					color[] = {"ColorWhite"};
					alpha[] = {1};
				};

				class MarkerText {
					sufix = "text";
					text = "Belfort";
					type[] = {"mil_box"};
					size[] = {{0, 0}};
					color[] = {"ColorWhite"};
					alpha[] = {1};
				};
			};

			class MarkerTooltip {
				color[] = {0.345,0.345,0.345, 0.6};
				title = "Belfort";
				description = "Le nord de Tanoa."; // Continue from here
				img = "";
			};
		};

		class TuvanakaType {
			class Sections {
				class MarkerIconBackground {
					sufix = "back";
					type[] = {"n_unknown", "n_unknown", "n_unknown"};
					size[] = {{1, 1}, {1, 1}, {0.7, 0.7}};
					color[] = {"ColorBlack"};
					alpha[] = {1};
				};

				class MarkerIcon {
					sufix = "icon";
					type[] = {"loc_move", "loc_move", "loc_move"};
					size[] = {{1, 1}, {1, 1}, {0.7, 0.7}};
					color[] = {"ColorWhite"};
					alpha[] = {1};
				};

				class MarkerText {
					sufix = "text";
					text = "Tuvanaka";
					type[] = {"mil_box"};
					size[] = {{0, 0}};
					color[] = {"ColorWhite"};
					alpha[] = {1};
				};
			};

			class MarkerTooltip {
				color[] = {0.345,0.345,0.345, 0.6};
				title = "Tuvanaka";
				description = "Le nord de Tanoa.";
				img = "";
			};
		};

		class TuvanakaAeroType {
			class Sections {
				class MarkerIconBackground {
					sufix = "back";
					type[] = {"n_unknown", "n_unknown", "n_unknown"};
					size[] = {{1, 1}, {1, 1}, {0.7, 0.7}};
					color[] = {"ColorBlack"};
					alpha[] = {1};
				};

				class MarkerIcon {
					sufix = "icon";
					type[] = {"loc_plane", "loc_plane", "loc_plane"};
					size[] = {{1, 1}, {1, 1}, {0.7, 0.7}};
					color[] = {"ColorWhite"};
					alpha[] = {1};
				};

				class MarkerText {
					sufix = "text";
					text = "Base aérienne de Tuvanaka";
					type[] = {"mil_box"};
					size[] = {{0, 0}};
					color[] = {"ColorWhite"};
					alpha[] = {1};
				};
			};

			class MarkerTooltip {
				color[] = {0.345,0.345,0.345, 0.6};
				title = "Base aérienne de Tuvanaka";
				description = "Le nord de Tanoa.";
				img = "";
			};
		};

		class LifouAeroType {
			class Sections {
				class MarkerIconBackground {
					sufix = "back";
					type[] = {"n_unknown", "n_unknown", "n_unknown"};
					size[] = {{1, 1}, {1, 1}, {0.7, 0.7}};
					color[] = {"ColorBlack"};
					alpha[] = {1};
				};

				class MarkerIcon {
					sufix = "icon";
					type[] = {"loc_plane", "loc_plane", "loc_plane"};
					size[] = {{1, 1}, {1, 1}, {0.7, 0.7}};
					color[] = {"ColorWhite"};
					alpha[] = {1};
				};

				class MarkerText {
					sufix = "text";
					text = "Aéroport International de Lifou";
					type[] = {"mil_box"};
					size[] = {{0, 0}};
					color[] = {"ColorWhite"};
					alpha[] = {1};
				};
			};

			class MarkerTooltip {
				color[] = {0.345,0.345,0.345, 0.6};
				title = "Aéroport International de Lifou";
				description = "Le nord de Tanoa.";
				img = "";
			};
		};

		class TuvanakaAirType {
			class Sections {
				class MarkerIconBackground {
					sufix = "back";
					type[] = {"n_unknown", "n_unknown", "n_unknown"};
					size[] = {{1, 1}, {1, 1}, {0.7, 0.7}};
					color[] = {"ColorBlack"};
					alpha[] = {1};
				};

				class MarkerIcon {
					sufix = "icon";
					type[] = {"loc_plane", "loc_plane", "loc_plane"};
					size[] = {{1, 1}, {1, 1}, {0.7, 0.7}};
					color[] = {"ColorWhite"};
					alpha[] = {1};
				};

				class MarkerText {
					sufix = "text";
					text = "Aéroport de Tuvanaka";
					type[] = {"mil_box"};
					size[] = {{0, 0}};
					color[] = {"ColorWhite"};
					alpha[] = {1};
				};
			};

			class MarkerTooltip {
				color[] = {0.345,0.345,0.345, 0.6};
				title = "Aéroport de Tuvanaka";
				description = "Aéroport du nord.";
				img = "";
			};
		};



		class GangType {
			class Sections {
				class MarkerIconBackground {
					sufix = "back";
					type[] = {"n_unknown", "n_unknown", "n_unknown"};
					size[] = {{1, 1}, {1, 1}, {0.7, 0.7}};
					color[] = {"ColorGUER"};
					alpha[] = {1};
				};

				class MarkerIcon {
					sufix = "icon";
					type[] = {"loc_Attack", "loc_Attack", "loc_Attack"};
					size[] = {{1, 1}, {1, 1}, {0.7, 0.7}};
					color[] = {"ColorWhite"};
					alpha[] = {1};
				};

				class MarkerText {
					sufix = "text";
					text = "Zone Mafieux";
					type[] = {"mil_box"};
					size[] = {{0, 0}};
					color[] = {"ColorWhite"};
					alpha[] = {1};
				};
			};

			class MarkerTooltip {
				color[] = {0.063,0.604,0.071, 0.6};
				title = "Zone Mafieux";
				description = "Base reculé ganster.";
				img = "";
			};
		};

		class InsurgeType {
			class Sections {
				class MarkerIconBackground {
					sufix = "back";
					type[] = {"n_unknown", "n_unknown", "n_unknown"};
					size[] = {{1, 1}, {1, 1}, {0.7, 0.7}};
					color[] = {"ColorGUER"};
					alpha[] = {1};
				};

				class MarkerIcon {
					sufix = "icon";
					type[] = {"loc_Attack", "loc_Attack", "loc_Attack"};
					size[] = {{1, 1}, {1, 1}, {0.7, 0.7}};
					color[] = {"ColorWhite"};
					alpha[] = {1};
				};

				class MarkerText {
					sufix = "text";
					text = "Camp Insurgé";
					type[] = {"mil_box"};
					size[] = {{0, 0}};
					color[] = {"ColorWhite"};
					alpha[] = {1};
				};
			};

			class MarkerTooltip {
				color[] = {0.345,0.345,0.345, 0.6};
				title = "Camp Insurgé";
				description = "Le nord de Tanoa.";
				img = "";
			};
		};

		class NarcosType {
			class Sections {
				class MarkerIconBackground {
					sufix = "back";
					type[] = {"n_unknown", "n_unknown", "n_unknown"};
					size[] = {{1, 1}, {1, 1}, {0.7, 0.7}};
					color[] = {"ColorGUER"};
					alpha[] = {1};
				};

				class MarkerIcon {
					sufix = "icon";
					type[] = {"loc_Attack", "loc_Attack", "loc_Attack"};
					size[] = {{1, 1}, {1, 1}, {0.7, 0.7}};
					color[] = {"ColorWhite"};
					alpha[] = {1};
				};

				class MarkerText {
					sufix = "text";
					text = "Camp Narcos";
					type[] = {"mil_box"};
					size[] = {{0, 0}};
					color[] = {"ColorWhite"};
					alpha[] = {1};
				};
			};

			class MarkerTooltip {
				color[] = {0.345,0.345,0.345, 0.6};
				title = "Camp Narcos";
				description = "Le nord de Tanoa.";
				img = "";
			};
		};
	};

	class MarkersArea {

		class CopBase {

			systemMarker = "cop_base";
			typeClass = "CopBaseType";

			scales[] = {0, 1};
			
			visible = 1;
		};

		class GeorgeTown {

			systemMarker = "georgetown_area";
			typeClass = "GeorgeTownType";

			scales[] = {0.111658, 1};
			
			visible = 1;

			class Childs {
				class ChildGarage {
					
					systemMarker = "civ_gar_george_town";			
					typeClass = "GarageCarType";

					scales[] = {0, 0.111658};

					visible = 1;	

					class MarkerTooltip {
						color[] = {0.475, 0.098, 0.647, 0.6};
						title = "Garage";
						description = "Ici vous pouvez récupérer votre véhicule.";
						img = "";
					};
				};

				class ChildGeneralStore {
					
					systemMarker = "general_store_george_town";			
					typeClass = "GeneralStoreType";

					scales[] = {0, 0.111658};

					visible = 1;

					class MarkerTooltip {
						color[] = {0.475, 0.098, 0.647, 0.6};
						title = "Magasin Général";
						description = "Ici vous pouvez acheter toutes sortes de choses.";
						img = "";
					};
				};

				class ChildBijoux {
					
					systemMarker = "bijoux_george_town";			
					typeClass = "BijouxType";

					scales[] = {0, 0.111658};

					visible = 1;

					class MarkerTooltip {
						color[] = {0.475, 0.098, 0.647, 0.6};
						title = "Bijoutier";
						description = "Rachette tout bijoux qui a un peu de valeur.";
						img = "";
					};
				};

				class ChildATM1 {
					
					systemMarker = "atm_1_george_town";			
					typeClass = "AtmType";

					scales[] = {0, 0.111658};

					visible = 1;

					class MarkerTooltip {
						color[] = {0.475, 0.098, 0.647, 0.6};
						title = "Distributeur de billet";
						description = "Ici vous pouvez retirer de l'argent.";
						img = "";
					};
				};

				class ChildMarketStore {
					
					systemMarker = "market_george_town";			
					typeClass = "MarketStoreType";

					scales[] = {0, 0.111658};

					visible = 1;

					class MarkerTooltip {
						color[] = {0.475, 0.098, 0.647, 0.6};
						title = "Marché";
						description = "Ici vous pouvez acheter de la nouriture et des outils.";
						img = "";
					};
				};

				class ChildCarShop {
					
					systemMarker = "car_shop_george_town";			
					typeClass = "CivCarShopType";

					scales[] = {0, 0.111658};

					visible = 1;

					class MarkerTooltip {
						color[] = {0.475, 0.098, 0.647, 0.6};
						title = "Concessionnaire de voiture";
						description = "Ici vous pouvez acheter des véhicules légers.";
						img = "";
					};
				};

				class ChildShipShop {
					
					systemMarker = "ship_shop_george_town";			
					typeClass = "CivShipShopType";

					scales[] = {0, 0.111658};

					visible = 1;

					class MarkerTooltip {
						color[] = {0.475, 0.098, 0.647, 0.6};
						title = "Concessionnaire de bateau";
						description = "Ici vous pouvez acheter des bateaux.";
						img = "";
					};
				};

				class ChildShipShopFuel {
					
					systemMarker = "ship_shop_fuel_george_town";			
					typeClass = "FuelStationType";

					scales[] = {0, 0.111658};

					visible = 1;

					class MarkerTooltip {
						color[] = {0.475, 0.098, 0.647, 0.6};
						title = "Station service";
						description = "Pour remplir en carburant votre véhicule.";
						img = "";
					};
				};

				class ChildShipShopFuel2 {
					
					systemMarker = "ship_shop_fuel_2_george_town";			
					typeClass = "FuelStationType";

					scales[] = {0, 0.111658};

					visible = 1;

					class MarkerTooltip {
						color[] = {0.475, 0.098, 0.647, 0.6};
						title = "Station service";
						description = "Pour remplir en carburant votre véhicule.";
						img = "";
					};
				};

				class ChildATM2 {
					
					systemMarker = "atm_2_george_town";			
					typeClass = "AtmType";

					scales[] = {0, 0.111658};

					visible = 1;

					class MarkerTooltip {
						color[] = {0.475, 0.098, 0.647, 0.6};
						title = "Distributeur de billet";
						description = "Ici vous pouvez retirer de l'argent.";
						img = "";
					};
				};

				class ChildClotheStore {
					
					systemMarker = "clothe_store_george_town";			
					typeClass = "CivClotheStoreType";

					scales[] = {0, 0.111658};

					visible = 1;

					class MarkerTooltip {
						color[] = {0.475, 0.098, 0.647, 0.6};
						title = "Magasin de vêtements";
						description = "Ici vous pouvez acheter des vêtements.";
						img = "";
					};
				};

				class ChildDiveStore {
					
					systemMarker = "dive_store_george_town";			
					typeClass = "CivDiveStoreType";

					scales[] = {0, 0.111658};

					visible = 1;

					class MarkerTooltip {
						color[] = {0.475, 0.098, 0.647, 0.6};
						title = "Magasin de plongé";
						description = "Ici vous pouvez acheter du matériel de plongé.";
						img = "";
					};
				};

				class ChildCustom {
					
					systemMarker = "custom_george_town";			
					typeClass = "CustomType";

					scales[] = {0, 0.111658};

					visible = 1;

					class MarkerTooltip {
						color[] = {0.475, 0.098, 0.647, 0.6};
						title = "Custom";
						description = "Ici vous pouvez modifier votre véhicule.";
						img = "";
					};
				};

				class ChildLicenseStore {
					
					systemMarker = "license_shop_george_town";			
					typeClass = "CivLicenseStoreType";

					scales[] = {0, 0.111658};

					visible = 1;

					class MarkerTooltip {
						color[] = {0.094,0.376,0.855, 0.6};
						title = "Préfécture";
						description = "Ici vous pouvez acheter des licenses.";
						img = "";
					};
				};

				class ChildFieldSugar1 {
					
					systemMarker = "cannesucre_1_george_town";			
					typeClass = "FieldSugarType";

					scales[] = {0, 0.111658};

					visible = 1;

					class MarkerTooltip {
						color[] = {0.427,0.631,0.392, 0.6};
						title = "Champs de canne à sucre";
						description = "Pour y ramasser de la canne a sucre.";
						img = "";
					};
				};

				class ChildFieldSugar2 {
					
					systemMarker = "cannesucre_2_george_town";			
					typeClass = "FieldSugarType";

					scales[] = {0, 0.111658};

					visible = 1;

					class MarkerTooltip {
						color[] = {0.427,0.631,0.392, 0.6};
						title = "Champs de canne à sucre";
						description = "Pour y ramasser de la canne a sucre.";
						img = "";
					};
				};

				class ChildCivTruckShop {
					
					systemMarker = "truck_shop_george_town";			
					typeClass = "CivTruckShopType";

					scales[] = {0, 0.111658};

					visible = 1;

					class MarkerTooltip {
						color[] = {0.475, 0.098, 0.647, 0.6};
						title = "Concessionnaire de camion";
						description = "Ici vous pouvez acheter des camions.";
						img = "";
					};
				};
			};

		};

		class NicoletAtm {

			systemMarker = "atm_nicolet";
			typeClass = "AtmType";

			scales[] = {0, 1};

			visible = 1;
		};

		class Archeologue {

			systemMarker = "archeologue";
			typeClass = "ArcheologueType";

			scales[] = {0, 1};

			visible = 1;
		};

		class PetitNicoletCasse {

			systemMarker = "mark_casse_1";
			typeClass = "CasseShopType";

			scales[] = {0, 1};

			visible = 1;
		};

		class ReginaCasse {

			systemMarker = "mark_casse_3";
			typeClass = "CasseShopType";

			scales[] = {0, 1};

			visible = 1;
		};

		class LaRochelle {

			systemMarker = "larochelle_area";
			typeClass = "LaRochelleType";

			scales[] = {0.0379984, 1};

			visible = 1;

			class Childs {
				class ChildGarage {

					systemMarker = "civ_gar_larochelle";			
					typeClass = "GarageCarType";

					scales[] = {0, 0.0379984};

					visible = 1;	

					class MarkerTooltip {
						color[] = {0.475, 0.098, 0.647, 0.6};
						title = "Garage";
						description = "Ici vous pouvez récupérer votre véhicule.";
						img = "";
					};
				};

				class ChildBijoux {
					
					systemMarker = "bijoux_larochelle";			
					typeClass = "BijouxType";

					scales[] = {0, 0.0379984};

					visible = 1;

					class MarkerTooltip {
						color[] = {0.475, 0.098, 0.647, 0.6};
						title = "Bijoutier";
						description = "Rachette tout bijoux qui a un peu de valeur.";
						img = "";
					};
				};

				class ChildDiveStore {

					systemMarker = "civ_dive_store_larochelle";			
					typeClass = "CivDiveStoreType";

					scales[] = {0, 0.0379984};

					visible = 1;	

					class MarkerTooltip {
						color[] = {0.475, 0.098, 0.647, 0.6};
						title = "Magasin de plongé";
						description = "Ici vous pouvez acheter du matériel de plongé.";
						img = "";
					};
				};

				class ChildGeneralStore {

					systemMarker = "general_store_larochelle";			
					typeClass = "GeneralStoreType";

					scales[] = {0, 0.0379984};

					visible = 1;

					class MarkerTooltip {
						color[] = {0.475, 0.098, 0.647, 0.6};
						title = "Magasin Général";
						description = "Ici vous pouvez acheter toutes sortes de choses.";
						img = "";
					};
				};

				class ChildMarketStore {

					systemMarker = "market_larochelle";			
					typeClass = "MarketStoreType";

					scales[] = {0, 0.0379984};

					visible = 1;

					class MarkerTooltip {
						color[] = {0.475, 0.098, 0.647, 0.6};
						title = "Marché";
						description = "Ici vous pouvez acheter de la nouriture et des outils.";
						img = "";
					};
				};

				class ChildATM1 {

					systemMarker = "atm_1_larochelle";			
					typeClass = "AtmType";

					scales[] = {0, 0.0379984};

					visible = 1;

					class MarkerTooltip {
						color[] = {0.475, 0.098, 0.647, 0.6};
						title = "Distributeur de billet";
						description = "Ici vous pouvez retirer de l'argent.";
						img = "";
					};
				};

				class ChildCarShop {

					systemMarker = "car_shop_larochelle";			
					typeClass = "CivCarShopType";

					scales[] = {0, 0.0379984};

					visible = 1;

					class MarkerTooltip {
						color[] = {0.475, 0.098, 0.647, 0.6};
						title = "Concessionnaire de voiture";
						description = "Ici vous pouvez acheter des véhicules légers.";
						img = "";
					};
				};

				class ChildTruckShop {

					systemMarker = "truck_shop_larochelle";			
					typeClass = "CivTruckShopType";

					scales[] = {0, 0.0379984};

					visible = 1;

					class MarkerTooltip {
						color[] = {0.475, 0.098, 0.647, 0.6};
						title = "Concessionnaire de camion";
						description = "Ici vous pouvez acheter des camions.";
						img = "";
					};
				};

				class ChildShipShop {

					systemMarker = "ship_shop_larochelle";			
					typeClass = "CivShipShopType";

					scales[] = {0, 0.0379984};

					visible = 1;

					class MarkerTooltip {
						color[] = {0.475, 0.098, 0.647, 0.6};
						title = "Concessionnaire de bateau";
						description = "Ici vous pouvez acheter des bateaux.";
						img = "";
					};
				};

				class ChildShipShopFuel {

					systemMarker = "ship_shop_fuel_larochelle";			
					typeClass = "FuelStationType";

					scales[] = {0, 0.0379984};

					visible = 1;

					class MarkerTooltip {
						color[] = {0.475, 0.098, 0.647, 0.6};
						title = "Station service";
						description = "Pour remplir en carburant votre véhicule.";
						img = "";
					};
				};

				class ChildCacaoField {

					systemMarker = "cacao_field_larochelle";			
					typeClass = "FieldCacaoType";

					scales[] = {0, 0.0379984};

					visible = 1;

					class MarkerTooltip {
						color[] = {0.427,0.631,0.392, 0.6};
						title = "Champs de cacao";
						description = "Pour y ramasser du cacao.";
						img = "";
					};
				};

				class ChildClotheStore {

					systemMarker = "clothe_store_larochelle";			
					typeClass = "CivClotheStoreType";

					scales[] = {0, 0.0379984};

					visible = 1;

					class MarkerTooltip {
						color[] = {0.475, 0.098, 0.647, 0.6};
						title = "Magasin de vêtements";
						description = "Ici vous pouvez acheter des vêtements.";
						img = "";
					};
				};

				class ChildLicenseStore {

					systemMarker = "license_store_larochelle";			
					typeClass = "CivLicenseStoreType";

					scales[] = {0, 0.0379984};

					visible = 1;

					class MarkerTooltip {
						color[] = {0.094,0.376,0.855, 0.6};
						title = "Préfécture";
						description = "Ici vous pouvez acheter des licenses.";
						img = "";
					};
				};

				class ChildShipFuel {

					systemMarker = "ship_fuel_larochelle";			
					typeClass = "FuelStationType";

					scales[] = {0, 0.0379984};

					visible = 1;

					class MarkerTooltip {
						color[] = {0.475, 0.098, 0.647, 0.6};
						title = "Station service";
						description = "Pour remplir en carburant votre véhicule.";
						img = "";
					};
				};
			};
		};

		class LaRochelleHospital {

			systemMarker = "hospital_larochelle";
			typeClass = "HospitalType";

			scales[] = {0, 1};

			visible = 1;
		};

		class LaRochelleAir {

			systemMarker = "larochelle_airp_area";
			typeClass = "LaRochelleAeroType";

			scales[] = {0.0543353, 1};

			visible = 1;

			class Childs {
				class ChildGarage {

					systemMarker = "civ_gar_larochelle_air";			
					typeClass = "GarageCarType";

					scales[] = {0, 0.0543353};

					visible = 1;	

					class MarkerTooltip {
						color[] = {0.475, 0.098, 0.647, 0.6};
						title = "Garage";
						description = "Ici vous pouvez récupérer votre véhicule.";
						img = "";
					};
				};

				class ChildGaragePlane {

					systemMarker = "civ_gar_plane_larochelle_air";			
					typeClass = "GaragePlaneType";

					scales[] = {0, 0.0543353};

					visible = 1;

					class MarkerTooltip {
						color[] = {0.475, 0.098, 0.647, 0.6};
						title = "Garage aérien";
						description = "Ici vous pouvez sortir vos véhicules aériens.";
						img = "";
					};
				};

				class ChildShopPlane {

					systemMarker = "civ_shop_plane_larochelle_air";			
					typeClass = "CivPlaneShopType";

					scales[] = {0, 0.0543353};

					visible = 1;	

					class MarkerTooltip {
						color[] = {0.475, 0.098, 0.647, 0.6};
						title = "Concessionnaire aérien";
						description = "Ici vous pouvez acheter des bateaux.";
						img = "";
					};
				};

				class ChildCustom {

					systemMarker = "custom_larochelle_air";			
					typeClass = "CustomType";

					scales[] = {0, 0.0543353};

					visible = 1;	

					class MarkerTooltip {
						color[] = {0.475, 0.098, 0.647, 0.6};
						title = "Custom";
						description = "Ici vous pouvez modifier votre véhicule.";
						img = "";
					};
				};

				class ChildFuelStation {

					systemMarker = "fuel_larochelle_air";			
					typeClass = "FuelStationType";

					scales[] = {0, 0.0543353};

					visible = 1;

					class MarkerTooltip {
						color[] = {0.475, 0.098, 0.647, 0.6};
						title = "Station service";
						description = "Pour remplir en carburant votre véhicule.";
						img = "";
					};
				};
			};
		};

		class GangArea {

			systemMarker = "gang_area";
			typeClass = "GangType";

			scales[] = {0.0264479, 1};

			visible = 0;

			class Childs {
				class ChildImmatricule {

					systemMarker = "immatricule_gang";			
					typeClass = "GangImmatriculeType";

					scales[] = {0, 0.0264479};

					visible = 0;	

					class MarkerTooltip {
						color[] = {0.063,0.604,0.071, 0.6};
						title = "Receleur d'immatriculation";
						description = "Ici vous pouvez trafiquer l'imatriculation de vos véhicules.";
						img = "";
					};
				};

				class ChildGarage {

					systemMarker = "garage_heli_gang";			
					typeClass = "GangGarageHeliType";

					scales[] = {0, 0.0264479};

					visible = 0;

					class MarkerTooltip {
						color[] = {0.063,0.604,0.071, 0.6};
						title = "Garage Aérien";
						description = "Ici vous pouvez récupérer des véhicules aériens.";
						img = "";
					};
				};

				class ChildCarShop {

					systemMarker = "car_shop_gang";			
					typeClass = "GangCarShopType";

					scales[] = {0, 0.0264479};

					visible = 0;

					class MarkerTooltip {
						color[] = {0.063,0.604,0.071, 0.6};
						title = "Concessionnaire Mafieux";
						description = "Ici vous pouvez acheter des véhicules Mafieux.";
						img = "";
					};
				};

				class ChildGunShop {

					systemMarker = "gun_shop_gang";			
					typeClass = "GangGunShopType";

					scales[] = {0, 0.0264479};

					visible = 0;

					class MarkerTooltip {
						color[] = {0.063,0.604,0.071, 0.6};
						title = "Armurerie Mafieux";
						description = "Ici vous pouvez acheter de l'équipement Mafieux.";
						img = "";
					};
				};
			};
		};

		class Tanouka {

			systemMarker = "tanouka_area";
			typeClass = "TanoukaType";

			scales[] = {0.0481991, 1};

			visible = 1;

			class Childs {
				class ChildGarage {

					systemMarker = "civ_gar_tanouka";			
					typeClass = "GarageCarType";

					scales[] = {0, 0.0481991};

					visible = 1;	

					class MarkerTooltip {
						color[] = {0.475, 0.098, 0.647, 0.6};
						title = "Garage";
						description = "Ici vous pouvez récupérer votre véhicule.";
						img = "";
					};
				};

				class ChildGeneralStore {

					systemMarker = "general_store_tanouka";			
					typeClass = "GeneralStoreType";

					scales[] = {0, 0.0481991};

					visible = 1;

					class MarkerTooltip {
						color[] = {0.475, 0.098, 0.647, 0.6};
						title = "Magasin Général";
						description = "Ici vous pouvez acheter toutes sortes de choses.";
						img = "";
					};
				};

				class ChildBijoux {
					
					systemMarker = "bijoux_tanouka";			
					typeClass = "BijouxType";

					scales[] = {0, 0.0481991};

					visible = 1;

					class MarkerTooltip {
						color[] = {0.475, 0.098, 0.647, 0.6};
						title = "Bijoutier";
						description = "Rachette tout bijoux qui a un peu de valeur.";
						img = "";
					};
				};

				class ChildMarketStore {

					systemMarker = "market_tanouka";			
					typeClass = "MarketStoreType";

					scales[] = {0, 0.0481991};

					visible = 1;

					class MarkerTooltip {
						color[] = {0.475, 0.098, 0.647, 0.6};
						title = "Marché";
						description = "Ici vous pouvez acheter de la nouriture et des outils.";
						img = "";
					};
				};

				class ChildATM1 {

					systemMarker = "atm_1_tanouka";			
					typeClass = "AtmType";

					scales[] = {0, 0.0481991};

					visible = 1;

					class MarkerTooltip {
						color[] = {0.475, 0.098, 0.647, 0.6};
						title = "Distributeur de billet";
						description = "Ici vous pouvez retirer de l'argent.";
						img = "";
					};
				};

				class ChildCarShop {

					systemMarker = "car_shop_tanouka";			
					typeClass = "CivCarShopType";

					scales[] = {0, 0.0481991};

					visible = 1;

					class MarkerTooltip {
						color[] = {0.475, 0.098, 0.647, 0.6};
						title = "Concessionnaire de voiture";
						description = "Ici vous pouvez acheter des véhicules légers.";
						img = "";
					};
				};

				class ChildClotheStore {

					systemMarker = "clothe_store_tanouka";			
					typeClass = "CivClotheStoreType";

					scales[] = {0, 0.0481991};

					visible = 1;

					class MarkerTooltip {
						color[] = {0.475, 0.098, 0.647, 0.6};
						title = "Magasin de vêtements";
						description = "Ici vous pouvez acheter des vêtements.";
						img = "";
					};
				};

				class ChildLicenseStore {

					systemMarker = "license_store_tanouka";			
					typeClass = "CivLicenseStoreType";

					scales[] = {0, 0.0481991};

					visible = 1;

					class MarkerTooltip {
						color[] = {0.094,0.376,0.855, 0.6};
						title = "Préfécture";
						description = "Ici vous pouvez acheter des licenses.";
						img = "";
					};
				};
			};
		};

		class ChildSugarField {

			systemMarker = "cannesucre_tanouka";			
			typeClass = "FieldSugarType";

			scales[] = {0, 1};

			visible = 1;

			class MarkerTooltip {
				color[] = {0.427,0.631,0.392, 0.6};
				title = "Canne à sucre";
				description = "Pour y ramasser de la canne à sucre.";
				img = "";
			};
		};

		class DepanageEnt {

			systemMarker = "depanage_tanouka";
			typeClass = "DepanageType";

			scales[] = {0, 1};

			visible = 1;
		};

		class InsurgeArea {

			systemMarker = "insurge_area";
			typeClass = "InsurgeType";

			scales[] = {0.0114878, 1};

			visible = 0;

			class Childs {

				class ChildGarage {
					systemMarker = "garage_insurge";			
					typeClass = "InsurgeGarageType";

					scales[] = {0, 0.0114878};

					visible = 0;

					class MarkerTooltip {
						color[] = {0.063,0.604,0.071, 0.6};
						title = "Garage";
						description = "Ici vous pouvez récupérer votre véhicule.";
						img = "";
					};
				};

				class ChildCarShop {

					systemMarker = "car_shop_insurge";			
					typeClass = "InsurgeCarShopType";

					scales[] = {0, 0.0114878};

					visible = 0;

					class MarkerTooltip {
						color[] = {0.063,0.604,0.071, 0.6};
						title = "Concessionnaire Terrestre Insurgé";
						description = "Ici vous pouvez acheter des véhicules terrestre insurgé.";
						img = "";
					};
				};

				class ChildGunShop {

					systemMarker = "gun_shop_insurge";			
					typeClass = "InsurgeGunShopType";

					scales[] = {0, 0.0114878};

					visible = 0;

					class MarkerTooltip {
						color[] = {0.063,0.604,0.071, 0.6};
						title = "Armurerie Insurgé";
						description = "Ici vous pouvez acheter de l'équipement insurgé.";
						img = "";
					};
				};
			};
		};

		class NarcosArea {

			systemMarker = "narcos_area";
			typeClass = "NarcosType";

			scales[] = {0.0114878, 1};

			visible = 0;

			class Childs {

				class ChildGarage {

					systemMarker = "car_g_5";			
					typeClass = "InsurgeGarageType";

					scales[] = {0, 0.0114878};

					visible = 0;

					class MarkerTooltip {
						color[] = {0.063,0.604,0.071, 0.6};
						title = "Garage";
						description = "Ici vous pouvez récupérer votre véhicule.";
						img = "";
					};
				};

				
				class ChildCarShop {

					systemMarker = "car_shop_narcos";			
					typeClass = "InsurgeCarShopType";

					scales[] = {0, 0.0114878};

					visible = 0;

					class MarkerTooltip {
						color[] = {0.063,0.604,0.071, 0.6};
						title = "Concessionnaire Terrestre Narcos";
						description = "Ici vous pouvez acheter des véhicules terrestre narcos.";
						img = "";
					};
				};

				class ChildGunShop {

					systemMarker = "gun_shop_narcos";			
					typeClass = "InsurgeGunShopType";

					scales[] = {0, 0.0114878};

					visible = 0;

					class MarkerTooltip {
						color[] = {0.063,0.604,0.071, 0.6};
						title = "Armurerie Narcos";
						description = "Ici vous pouvez acheter de l'équipement narcos.";
						img = "";
					};
				};
			};
		};

		class GarageShipRaviTa {

			systemMarker = "garage_ship_ravita";
			typeClass = "GarageShipType";

			scales[] = {0, 1};

			visible = 1;

			class MarkerTooltip {
				color[] = {0.475, 0.098, 0.647, 0.6};
				title = "Garage à bateau";
				description = "Ici vous pouvez récupérer vos bateaux.";
				img = "";
			};
		};

		class GarageShipKoumac {

			systemMarker = "garage_ship_koumac";
			typeClass = "GarageShipType";

			scales[] = {0, 1};

			visible = 1;

			class MarkerTooltip {
				color[] = {0.475, 0.098, 0.647, 0.6};
				title = "Garage à bateau";
				description = "Ici vous pouvez récupérer vos bateaux.";
				img = "";
			};
		};

		class RaffinerieArea {

			systemMarker = "raffinerie_port";
			typeClass = "RaffinerieType";

			scales[] = {0, 1};

			visible = 1;
		};

		class RaffinerieArea2 {

			systemMarker = "raffinerie_port_2";
			typeClass = "RaffinerieType";

			scales[] = {0, 1};

			visible = 1;
		};

		class WestCasse {

			systemMarker = "mark_casse_2";
			typeClass = "CasseShopType";

			scales[] = {0, 1};

			visible = 1;
		};

		class GarageShipNandai {

			systemMarker = "garage_ship_nandai";
			typeClass = "GarageShipType";

			scales[] = {0, 1};

			visible = 1;

			class MarkerTooltip {
				color[] = {0.475, 0.098, 0.647, 0.6};
				title = "Garage à bateau";
				description = "Ici vous pouvez récupérer vos bateaux.";
				img = "";
			};
		};

		class OumereArea {

			systemMarker = "oumere_area";
			typeClass = "OumereType";

			scales[] = {0.0269, 1};

			visible = 1;

			class Childs {
				class ChildGarage {

					systemMarker = "garage_oumere";			
					typeClass = "GarageCarType";

					scales[] = {0, 0.0269};

					visible = 1;

					class MarkerTooltip {
						color[] = {0.475, 0.098, 0.647, 0.6};
						title = "Garage";
						description = "Ici vous pouvez récupérer votre véhicule.";
						img = "";
					};
				};

				class ChildATM {

					systemMarker = "atm_oumere";			
					typeClass = "AtmType";

					scales[] = {0, 0.0269};

					visible = 1;

					class MarkerTooltip {
						color[] = {0.475, 0.098, 0.647, 0.6};
						title = "Distributeur de billet";
						description = "Ici vous pouvez retirer de l'argent.";
						img = "";
					};
				};

				class ChildTruckShop {

					systemMarker = "truck_shop_oumere";			
					typeClass = "CivTruckShopType";

					scales[] = {0, 0.0269};

					visible = 1;

					class MarkerTooltip {
						color[] = {0.475, 0.098, 0.647, 0.6};
						title = "Concessionnaire de camion";
						description = "Ici vous pouvez acheter des camions.";
						img = "";
					};
				};

				class ChildShipFuel {

					systemMarker = "ship_fuel_oumere";			
					typeClass = "FuelStationType";

					scales[] = {0, 0.0269};

					visible = 1;

					class MarkerTooltip {
						color[] = {0.475, 0.098, 0.647, 0.6};
						title = "Station service";
						description = "Pour remplir en carburant votre véhicule.";
						img = "";
					};
				};
			};
		};

		class HarcourtArea {

			systemMarker = "harcourt_area";
			typeClass = "HarcourtType";

			scales[] = {0.0269, 1};

			visible = 1;

			class Childs {
				class ChildGarage {

					systemMarker = "garage_harcourt";			
					typeClass = "GarageCarType";

					scales[] = {0, 0.0269};

					visible = 1;

					class MarkerTooltip {
						color[] = {0.475, 0.098, 0.647, 0.6};
						title = "Garage";
						description = "Ici vous pouvez récupérer votre véhicule.";
						img = "";
					};
				};

				class ChildATM {

					systemMarker = "atm_harcourt";			
					typeClass = "AtmType";

					scales[] = {0, 0.0269};

					visible = 1;

					class MarkerTooltip {
						color[] = {0.475, 0.098, 0.647, 0.6};
						title = "Distributeur de billet";
						description = "Ici vous pouvez retirer de l'argent.";
						img = "";
					};
				};

				class ChildMarketStore {

					systemMarker = "market_harcourt";			
					typeClass = "MarketStoreType";

					scales[] = {0, 0.0269};

					visible = 1;

					class MarkerTooltip {
						color[] = {0.475, 0.098, 0.647, 0.6};
						title = "Marché";
						description = "Ici vous pouvez acheter de la nouriture et des outils.";
						img = "";
					};
				};

				class ChildGeneralStore {

					systemMarker = "general_store_harcourt";			
					typeClass = "GeneralStoreType";

					scales[] = {0, 0.0269};

					visible = 1;

					class MarkerTooltip {
						color[] = {0.475, 0.098, 0.647, 0.6};
						title = "Magasin Général";
						description = "Ici vous pouvez acheter toutes sortes de choses.";
						img = "";
					};
				};
			};
		};

		class ModdergatArea {

			systemMarker = "moddergat_area";
			typeClass = "ModdergatType";

			scales[] = {0.0269, 1};

			visible = 1;

			class Childs {
				class ChildGarage {

					systemMarker = "garage_moddergat";			
					typeClass = "GarageCarType";

					scales[] = {0, 0.0269};

					visible = 1;

					class MarkerTooltip {
						color[] = {0.475, 0.098, 0.647, 0.6};
						title = "Garage";
						description = "Ici vous pouvez récupérer votre véhicule.";
						img = "";
					};
				};

				class ChildATM {

					systemMarker = "atm_moddergat";			
					typeClass = "AtmType";

					scales[] = {0, 0.0269};

					visible = 1;

					class MarkerTooltip {
						color[] = {0.475, 0.098, 0.647, 0.6};
						title = "Distributeur de billet";
						description = "Ici vous pouvez retirer de l'argent.";
						img = "";
					};
				};

				class ChildMarketStore {

					systemMarker = "market_moddergat";			
					typeClass = "MarketStoreType";

					scales[] = {0, 0.0269};

					visible = 1;

					class MarkerTooltip {
						color[] = {0.475, 0.098, 0.647, 0.6};
						title = "Marché";
						description = "Ici vous pouvez acheter de la nouriture et des outils.";
						img = "";
					};
				};

				class ChildGeneralStore {

					systemMarker = "general_store_moddergat";			
					typeClass = "GeneralStoreType";

					scales[] = {0, 0.0269};

					visible = 1;

					class MarkerTooltip {
						color[] = {0.475, 0.098, 0.647, 0.6};
						title = "Magasin Général";
						description = "Ici vous pouvez acheter toutes sortes de choses.";
						img = "";
					};
				};

				class ChildShipFuel {

					systemMarker = "ship_fuel_moddergat";			
					typeClass = "FuelStationType";

					scales[] = {0, 0.0269};

					visible = 1;

					class MarkerTooltip {
						color[] = {0.475, 0.098, 0.647, 0.6};
						title = "Station service";
						description = "Pour remplir en carburant votre véhicule.";
						img = "";
					};
				};

				class ChildGarageShip {

					systemMarker = "ship_garage_moddergat";			
					typeClass = "GarageShipType";

					scales[] = {0, 0.0269};

					visible = 1;

					class MarkerTooltip {
						color[] = {0.475, 0.098, 0.647, 0.6};
						title = "Garage à bateau";
						description = "Ici vous pouvez récupérer vos bateaux.";
						img = "";
					};
				};
			};
		};

		class Lijnhaven {

			systemMarker = "lijnhaven_area";
			typeClass = "LijnhavenType";

			scales[] = {0.0549, 1};

			visible = 1;

			class Childs {
				class ChildGarage {

					systemMarker = "civ_gar_lijnhaven";			
					typeClass = "GarageCarType";

					scales[] = {0, 0.0549};

					visible = 1;	

					class MarkerTooltip {
						color[] = {0.475, 0.098, 0.647, 0.6};
						title = "Garage";
						description = "Ici vous pouvez récupérer votre véhicule.";
						img = "";
					};
				};

				class ChildDiveStore {

					systemMarker = "civ_dive_store_lijnhaven";			
					typeClass = "CivDiveStoreType";

					scales[] = {0, 0.0549};

					visible = 1;	

					class MarkerTooltip {
						color[] = {0.475, 0.098, 0.647, 0.6};
						title = "Magasin de plongé";
						description = "Ici vous pouvez acheter du matériel de plongé.";
						img = "";
					};
				};

				class ChildGeneralStore {

					systemMarker = "general_store_lijnhaven";			
					typeClass = "GeneralStoreType";

					scales[] = {0, 0.0549};

					visible = 1;

					class MarkerTooltip {
						color[] = {0.475, 0.098, 0.647, 0.6};
						title = "Magasin Général";
						description = "Ici vous pouvez acheter toutes sortes de choses.";
						img = "";
					};
				};

				class ChildMarketStore {

					systemMarker = "market_lijnhaven";			
					typeClass = "MarketStoreType";

					scales[] = {0, 0.0549};

					visible = 1;

					class MarkerTooltip {
						color[] = {0.475, 0.098, 0.647, 0.6};
						title = "Marché";
						description = "Ici vous pouvez acheter de la nouriture et des outils.";
						img = "";
					};
				};

				class ChildATM1 {

					systemMarker = "atm_1_lijnhaven";			
					typeClass = "AtmType";

					scales[] = {0, 0.0549};

					visible = 1;

					class MarkerTooltip {
						color[] = {0.475, 0.098, 0.647, 0.6};
						title = "Distributeur de billet";
						description = "Ici vous pouvez retirer de l'argent.";
						img = "";
					};
				};

				class ChildGarageShip {

					systemMarker = "garage_ship_lijnhaven";			
					typeClass = "GarageShipType";

					scales[] = {0, 0.0549};

					visible = 1;

					class MarkerTooltip {
						color[] = {0.475, 0.098, 0.647, 0.6};
						title = "Garage à bateau";
						description = "Ici vous pouvez récupérer vos bateaux.";
						img = "";
					};
				};

				class ChildShipFuel {

					systemMarker = "ship_fuel_lijnhaven";			
					typeClass = "FuelStationType";

					scales[] = {0, 0.0549};

					visible = 1;

					class MarkerTooltip {
						color[] = {0.475, 0.098, 0.647, 0.6};
						title = "Station service";
						description = "Pour remplir en carburant votre véhicule.";
						img = "";
					};
				};

				class ChildClotheStore {

					systemMarker = "clothe_store_lijnhaven";			
					typeClass = "CivClotheStoreType";

					scales[] = {0, 0.0549};

					visible = 1;

					class MarkerTooltip {
						color[] = {0.475, 0.098, 0.647, 0.6};
						title = "Magasin de vêtements";
						description = "Ici vous pouvez acheter des vêtements.";
						img = "";
					};
				};

				class ChildLicenseStore {

					systemMarker = "license_store_lijnhaven";			
					typeClass = "CivLicenseStoreType";

					scales[] = {0, 0.0549};

					visible = 1;

					class MarkerTooltip {
						color[] = {0.094,0.376,0.855, 0.6};
						title = "Préfécture";
						description = "Ici vous pouvez acheter des licenses.";
						img = "";
					};
				};
			};
		};

		class LijnhavenAir {

			systemMarker = "lijnhaven_airp_area";
			typeClass = "LijnhavenAeroType";

			scales[] = {0.0299, 1};

			visible = 1;

			class Childs {

				class ChildGaragePlane {

					systemMarker = "gar_plane_lijnhaven_air";			
					typeClass = "GaragePlaneType";

					scales[] = {0, 0.0299};

					visible = 1;

					class MarkerTooltip {
						color[] = {0.475, 0.098, 0.647, 0.6};
						title = "Garage aérien";
						description = "Ici vous pouvez sortir vos véhicules aériens.";
						img = "";
					};
				};

				class ChildShopPlane {

					systemMarker = "shop_plane_lijnhaven_air";			
					typeClass = "CivPlaneShopType";

					scales[] = {0, 0.0299};

					visible = 1;

					class MarkerTooltip {
						color[] = {0.475, 0.098, 0.647, 0.6};
						title = "Concessionnaire aérien";
						description = "Ici vous pouvez acheter des bateaux.";
						img = "";
					};
				};

				class ChildFuelStation {

					systemMarker = "fuel_lijnhaven_air";			
					typeClass = "FuelStationType";

					scales[] = {0, 0.0299};

					visible = 1;

					class MarkerTooltip {
						color[] = {0.475, 0.098, 0.647, 0.6};
						title = "Station service";
						description = "Pour remplir en carburant votre véhicule.";
						img = "";
					};
				};
			};
		};

		class Katkoula {

			systemMarker = "katkoula_area";
			typeClass = "KatkoulaType";

			scales[] = {0.0379984, 1};

			visible = 1;

			class Childs {
				class ChildGarage {

					systemMarker = "civ_gar_katkoula";			
					typeClass = "GarageCarType";

					scales[] = {0, 0.0379984};

					visible = 1;	

					class MarkerTooltip {
						color[] = {0.475, 0.098, 0.647, 0.6};
						title = "Garage";
						description = "Ici vous pouvez récupérer votre véhicule.";
						img = "";
					};
				};

				class ChildDiveStore {

					systemMarker = "civ_dive_store_katkoula";			
					typeClass = "CivDiveStoreType";

					scales[] = {0, 0.0379984};

					visible = 1;	

					class MarkerTooltip {
						color[] = {0.475, 0.098, 0.647, 0.6};
						title = "Magasin de plongé";
						description = "Ici vous pouvez acheter du matériel de plongé.";
						img = "";
					};
				};

				class ChildBijoux {
					
					systemMarker = "bijoux_katkoula";			
					typeClass = "BijouxType";

					scales[] = {0, 0.0379984};

					visible = 1;

					class MarkerTooltip {
						color[] = {0.475, 0.098, 0.647, 0.6};
						title = "Bijoutier";
						description = "Rachette tout bijoux qui a un peu de valeur.";
						img = "";
					};
				};

				class ChildGeneralStore {

					systemMarker = "general_store_katkoula";			
					typeClass = "GeneralStoreType";

					scales[] = {0, 0.0379984};

					visible = 1;

					class MarkerTooltip {
						color[] = {0.475, 0.098, 0.647, 0.6};
						title = "Magasin Général";
						description = "Ici vous pouvez acheter toutes sortes de choses.";
						img = "";
					};
				};

				class ChildMarketStore {

					systemMarker = "market_katkoula";			
					typeClass = "MarketStoreType";

					scales[] = {0, 0.0379984};

					visible = 1;

					class MarkerTooltip {
						color[] = {0.475, 0.098, 0.647, 0.6};
						title = "Marché";
						description = "Ici vous pouvez acheter de la nouriture et des outils.";
						img = "";
					};
				};

				class ChildATM1 {

					systemMarker = "atm_1_katkoula";			
					typeClass = "AtmType";

					scales[] = {0, 0.0379984};

					visible = 1;

					class MarkerTooltip {
						color[] = {0.475, 0.098, 0.647, 0.6};
						title = "Distributeur de billet";
						description = "Ici vous pouvez retirer de l'argent.";
						img = "";
					};
				};

				class ChildGarageShip {

					systemMarker = "garage_ship_katkoula";			
					typeClass = "GarageShipType";

					scales[] = {0, 0.0379984};

					visible = 1;

					class MarkerTooltip {
						color[] = {0.475, 0.098, 0.647, 0.6};
						title = "Garage à bateau";
						description = "Ici vous pouvez récupérer vos bateaux.";
						img = "";
					};
				};

				class ChildShipFuel {

					systemMarker = "ship_fuel_katkoula";			
					typeClass = "FuelStationType";

					scales[] = {0, 0.0379984};

					visible = 1;

					class MarkerTooltip {
						color[] = {0.475, 0.098, 0.647, 0.6};
						title = "Station service";
						description = "Pour remplir en carburant votre véhicule.";
						img = "";
					};
				};

				class ChildClotheStore {

					systemMarker = "clothe_store_katkoula";			
					typeClass = "CivClotheStoreType";

					scales[] = {0, 0.0379984};

					visible = 1;

					class MarkerTooltip {
						color[] = {0.475, 0.098, 0.647, 0.6};
						title = "Magasin de vêtements";
						description = "Ici vous pouvez acheter des vêtements.";
						img = "";
					};
				};

				class ChildLicenseStore {

					systemMarker = "license_store_katkoula";			
					typeClass = "CivLicenseStoreType";

					scales[] = {0, 0.0379984};

					visible = 1;

					class MarkerTooltip {
						color[] = {0.094,0.376,0.855, 0.6};
						title = "Préfécture";
						description = "Ici vous pouvez acheter des licenses.";
						img = "";
					};
				};

				class ChildCarShop {

					systemMarker = "car_shop_katkoula";			
					typeClass = "CivCarShopType";

					scales[] = {0, 0.0379984};

					visible = 1;

					class MarkerTooltip {
						color[] = {0.475, 0.098, 0.647, 0.6};
						title = "Concessionnaire de voiture";
						description = "Ici vous pouvez acheter des véhicules légers.";
						img = "";
					};
				};

				class ChildTruckShop {

					systemMarker = "truck_shop_katkoula";			
					typeClass = "CivTruckShopType";

					scales[] = {0, 0.0379984};

					visible = 1;

					class MarkerTooltip {
						color[] = {0.475, 0.098, 0.647, 0.6};
						title = "Concessionnaire de camion";
						description = "Ici vous pouvez acheter des camions.";
						img = "";
					};
				};
			};
		};

		/*
		class BalaAir {

			systemMarker = "bala_airp_area";
			typeClass = "BalaAeroType";

			scales[] = {0.0265, 1};

			visible = 1;

			class Childs {
				class ChildGarage {

					systemMarker = "civ_gar_bala_air";			
					typeClass = "GarageCarType";

					scales[] = {0, 0.0265};

					visible = 1;

					class MarkerTooltip {
						color[] = {0.475, 0.098, 0.647, 0.6};
						title = "Garage";
						description = "Ici vous pouvez récupérer votre véhicule.";
						img = "";
					};
				};

				class ChildGaragePlane {

					systemMarker = "civ_gar_plane_bala_air";			
					typeClass = "GaragePlaneType";

					scales[] = {0, 0.0265};

					visible = 1;	

					class MarkerTooltip {
						color[] = {0.475, 0.098, 0.647, 0.6};
						title = "Garage Aérien";
						description = "Ici vous pouvez récupérer vos véhicules aériens.";
						img = "";
					};
				};

				class ChildFuelStation {

					systemMarker = "fuel_bala_air";			
					typeClass = "FuelStationType";

					scales[] = {0, 0.0265};

					visible = 1;

					class MarkerTooltip {
						color[] = {0.475, 0.098, 0.647, 0.6};
						title = "Station service";
						description = "Pour remplir en carburant votre véhicule.";
						img = "";
					};
				};
			};
		};
		*/

		class BalavuArea {

			systemMarker = "balavu_area";
			typeClass = "BalavuType";

			scales[] = {0.0185, 1};

			visible = 1;

			class Childs {
				class ChildGarageShip {

					systemMarker = "garage_ship_balavu";			
					typeClass = "GarageShipType";

					scales[] = {0, 0.0185};

					visible = 1;

					class MarkerTooltip {
						color[] = {0.475, 0.098, 0.647, 0.6};
						title = "Garage à bateau";
						description = "Ici vous pouvez récupérer vos bateaux.";
						img = "";
					};
				};

				class ChildShipFuelStation {

					systemMarker = "fuel_balavu";			
					typeClass = "FuelStationType";

					scales[] = {0, 0.0265};

					visible = 1;

					class MarkerTooltip {
						color[] = {0.475, 0.098, 0.647, 0.6};
						title = "Station service";
						description = "Pour remplir en carburant votre véhicule.";
						img = "";
					};
				};
			};
		};

		class TavuArea {

			systemMarker = "tavu_area";
			typeClass = "TavuType";

			scales[] = {0.0185, 1};

			visible = 1;

			class Childs {
				class ChildGarageShip {

					systemMarker = "garage_ship_tavu";			
					typeClass = "GarageShipType";

					scales[] = {0, 0.0185};

					visible = 1;

					class MarkerTooltip {
						color[] = {0.475, 0.098, 0.647, 0.6};
						title = "Garage à bateau";
						description = "Ici vous pouvez récupérer vos bateaux.";
						img = "";
					};
				};

				class ChildGarageCar {

					systemMarker = "garage_car_tavu";			
					typeClass = "GarageCarType";

					scales[] = {0, 0.0185};

					visible = 1;

					class MarkerTooltip {
						color[] = {0.475, 0.098, 0.647, 0.6};
						title = "Garage";
						description = "Ici vous pouvez récupérer votre véhicule.";
						img = "";
					};
				};

				class ChildATM {

					systemMarker = "atm_tavu";			
					typeClass = "AtmType";

					scales[] = {0, 0.0185};

					visible = 1;

					class MarkerTooltip {
						color[] = {0.475, 0.098, 0.647, 0.6};
						title = "Distributeur de billet";
						description = "Ici vous pouvez retirer de l'argent.";
						img = "";
					};
				};
			};
		};

		class Hacker {
			systemMarker = "mrk_hacker";
			typeClass = "HackerType";

			scales[] = {0, 1};

			visible = 0;
		};

		class Bank {
			systemMarker = "lbank_1";
			typeClass = "BankType";
			scales[] = {0, 1};
			visible = 1;
		};

		class HospitalLifou {
			systemMarker = "hospital_marker";
			typeClass = "HospitalType";
			scales[] = {0, 1};
			visible = 1;

			class MarkerTooltip {
				color[] = {0.957,0.012,0.012, 0.6};
				title = "Hopital principal de Tanoa.";
				description = "Si vous vous sentez mal, c'est ici qu'il faut aller.";
				img = "";
			};
		};

		class LifouAir {

			systemMarker = "lifou_airp_area";
			typeClass = "LifouAeroType";

			scales[] = {0.03799, 1};

			visible = 1;

			class Childs {
				class ChildGarage {

					systemMarker = "civ_gar_lifou_air";			
					typeClass = "GarageCarType";

					scales[] = {0, 0.03799};

					visible = 1;	

					class MarkerTooltip {
						color[] = {0.475, 0.098, 0.647, 0.6};
						title = "Garage";
						description = "Ici vous pouvez récupérer votre véhicule.";
						img = "";
					};
				};

				class ChildGaragePlane {

					systemMarker = "civ_gar_plane_lifou_air";			
					typeClass = "GaragePlaneType";

					scales[] = {0, 0.03799};

					visible = 1;

					class MarkerTooltip {
						color[] = {0.475, 0.098, 0.647, 0.6};
						title = "Garage aérien";
						description = "Ici vous pouvez sortir vos véhicules aériens.";
						img = "";
					};
				};

				class ChildShopPlane {

					systemMarker = "shop_plane_lifou_air";			
					typeClass = "CivPlaneShopType";

					scales[] = {0, 0.03799};

					visible = 1;	

					class MarkerTooltip {
						color[] = {0.475, 0.098, 0.647, 0.6};
						title = "Concessionnaire aérien";
						description = "Ici vous pouvez acheter des bateaux.";
						img = "";
					};
				};

				class ChildCustom {

					systemMarker = "custom_lifou_air";			
					typeClass = "CustomType";

					scales[] = {0, 0.03799};

					visible = 1;	

					class MarkerTooltip {
						color[] = {0.475, 0.098, 0.647, 0.6};
						title = "Custom";
						description = "Ici vous pouvez modifier votre véhicule.";
						img = "";
					};
				};

				class ChildFuelStation {

					systemMarker = "fuel_lifou_air";			
					typeClass = "FuelStationType";

					scales[] = {0, 0.03799};

					visible = 1;

					class MarkerTooltip {
						color[] = {0.475, 0.098, 0.647, 0.6};
						title = "Station service";
						description = "Pour remplir en carburant votre véhicule.";
						img = "";
					};
				};

				class ChildATM {

					systemMarker = "atm_lifou_air";			
					typeClass = "AtmType";

					scales[] = {0, 0.03799};

					visible = 1;

					class MarkerTooltip {
						color[] = {0.475, 0.098, 0.647, 0.6};
						title = "Distributeur de billet";
						description = "Ici vous pouvez retirer de l'argent.";
						img = "";
					};
				};

				class ChildLicenseStore {

					systemMarker = "civ_pref_plane_lifou";			
					typeClass = "CivLicenseAirStoreType";

					scales[] = {0, 0.03799};

					visible = 1;

					class MarkerTooltip {
						color[] = {0.475, 0.098, 0.647, 0.6};
						title = "Préfecture Aérienne";
						description = "Ici vous pouvez transférer les papiers des véhicules aériens.";
						img = "";
					};
				};
			};
		};

		class VolcanTelecom {
			systemMarker = "7News";
			typeClass = "VolcanTelecomType";
			scales[] = {0, 1};
			visible = 1;
		};

		class FieldBananaBelfort {
			systemMarker = "field_banana_belfort";
			typeClass = "FieldBananaType";
			scales[] = {0, 1};
			visible = 1;

			class MarkerTooltip {
				color[] = {0.427,0.631,0.392, 0.6};
				title = "Champs de bananiers";
				description = "Pour y ramasser des bananes.";
				img = "";
			};
		};

		class FieldBananaHarcour {
			systemMarker = "field_banana_harcour";
			typeClass = "FieldBananaType";
			scales[] = {0, 1};
			visible = 1;

			class MarkerTooltip {
				color[] = {0.427,0.631,0.392, 0.6};
				title = "Champs de bananiers";
				description = "Pour y ramasser des bananes.";
				img = "";
			};
		};

		class CivGunStore {
			systemMarker = "civ_gun_store";
			typeClass = "CivGunStoreType";
			scales[] = {0, 1};
			visible = 1;

			class MarkerTooltip {
				color[] = {0.475, 0.098, 0.647, 0.6};
				title = "Armurerie";
				description = "Armurerie civil de tanoa, vous pouvez y acheter des armes et de l'équipement. Des stands d'entrainement sont disponnibles a proximité.";
				img = "";
			};
		};

		class BelfortArea {

			systemMarker = "belfort_area";
			typeClass = "BelfortType";

			scales[] = {0.0265, 1};

			visible = 1;

			class Childs {

				class TanoaNews {

					systemMarker = "tanoa_news";			
					typeClass = "TanoaNewsType";

					scales[] = {0, 0.0265};

					visible = 1;
				};

				class ChildATM {

					systemMarker = "atm_belfort";			
					typeClass = "AtmType";

					scales[] = {0, 0.0265};

					visible = 1;

					class MarkerTooltip {
						color[] = {0.475, 0.098, 0.647, 0.6};
						title = "Distributeur de billet";
						description = "Ici vous pouvez retirer de l'argent.";
						img = "";
					};
				};
			};
		};

		class TuvanakaArea {

			systemMarker = "tuvanaka_area";
			typeClass = "TuvanakaType";

			scales[] = {0.0265, 1};

			visible = 1;

			class Childs {

				class ChildATM {

					systemMarker = "atm_tuvanaka";			
					typeClass = "AtmType";

					scales[] = {0, 0.0265};

					visible = 1;

					class MarkerTooltip {
						color[] = {0.475, 0.098, 0.647, 0.6};
						title = "Distributeur de billet";
						description = "Ici vous pouvez retirer de l'argent.";
						img = "";
					};
				};

				class ChildShipFuel {
					
					systemMarker = "ship_fuel_tuvanaka";			
					typeClass = "FuelStationType";

					scales[] = {0, 0.0265};

					visible = 1;

					class MarkerTooltip {
						color[] = {0.475, 0.098, 0.647, 0.6};
						title = "Station service";
						description = "Pour remplir en carburant votre véhicule.";
						img = "";
					};
				};

				class ChildGarageShip {

					systemMarker = "ship_garage_tuvanaka";			
					typeClass = "GarageShipType";

					scales[] = {0, 0.0265};

					visible = 1;

					class MarkerTooltip {
						color[] = {0.475, 0.098, 0.647, 0.6};
						title = "Garage à bateau";
						description = "Ici vous pouvez récupérer vos bateaux.";
						img = "";
					};
				};
			};
		};

		class TuvanakaAir {

			systemMarker = "tuvanaka_airp_area";
			typeClass = "TuvanakaAirType";

			scales[] = {0.03799, 1};

			visible = 1;

			class Childs {
				class ChildGarage {

					systemMarker = "gar_tuvanaka_air";			
					typeClass = "GarageCarType";

					scales[] = {0, 0.03799};

					visible = 1;	

					class MarkerTooltip {
						color[] = {0.475, 0.098, 0.647, 0.6};
						title = "Garage";
						description = "Ici vous pouvez récupérer votre véhicule.";
						img = "";
					};
				};

				class ChildGaragePlane {

					systemMarker = "gar_plane_tuvanaka_air";			
					typeClass = "GaragePlaneType";

					scales[] = {0, 0.03799};

					visible = 1;

					class MarkerTooltip {
						color[] = {0.475, 0.098, 0.647, 0.6};
						title = "Garage aérien";
						description = "Ici vous pouvez sortir vos véhicules aériens.";
						img = "";
					};
				};

				class ChildShopPlane {

					systemMarker = "shop_plane_tuvanaka_air";			
					typeClass = "CivPlaneShopType";

					scales[] = {0, 0.03799};

					visible = 1;	

					class MarkerTooltip {
						color[] = {0.475, 0.098, 0.647, 0.6};
						title = "Concessionnaire aérien";
						description = "Ici vous pouvez acheter des véhicules aériens.";
						img = "";
					};
				};

				class ChildFuelStation {

					systemMarker = "fuel_tuvanaka_air";			
					typeClass = "FuelStationType";

					scales[] = {0, 0.03799};

					visible = 1;

					class MarkerTooltip {
						color[] = {0.475, 0.098, 0.647, 0.6};
						title = "Station service";
						description = "Pour remplir en carburant votre véhicule.";
						img = "";
					};
				};
			};
		};

		class TinMine {
			systemMarker = "tin_1";
			typeClass = "MineType";
			text = "Mine d'étain";
			scales[] = {0, 1};
			visible = 0;
			
			visibleSides[] = {"cop", "med"};

			class MarkerTooltip {
				color[] = {0.8,0.769,0.059, 0.6};
				title = "Mine d'étain";
				description = "Cette Zone est un secteur de récupération de minerais d'étain.";
				img = "";
			};
		};

		class CopperMine {
			systemMarker = "copper_1";
			typeClass = "MineType";
			text = "Mine de cuivre";
			scales[] = {0, 1};
			visible = 0;

			visibleSides[] = {"cop", "med"};

			class MarkerTooltip {
				color[] = {0.8,0.769,0.059, 0.6};
				title = "Mine de cuivre";
				description = "Cette Zone est un secteur de récupération de minerais de cuivre.";
				img = "";
			};
		};

		class IronMine {
			systemMarker = "iron_1";
			typeClass = "MineType";
			text = "Mine de fer";
			scales[] = {0, 1};
			visible = 0;

			visibleSides[] = {"cop", "med"};

			class MarkerTooltip {
				color[] = {0.8,0.769,0.059, 0.6};
				title = "Mine de fer";
				description = "Cette Zone est un secteur de récupération de minerais de fer.";
				img = "";
			};
		};

		class ChromiumMine {
			systemMarker = "chromium_1";
			typeClass = "MineType";
			text = "Mine de chrome";
			scales[] = {0, 1};
			visible = 0;

			visibleSides[] = {"cop", "med"};

			class MarkerTooltip {
				color[] = {0.8,0.769,0.059, 0.6};
				title = "Mine de chrome";
				description = "Cette Zone est un secteur de récupération de minerais de chrome.";
				img = "";
			};
		};

		class AluminiumMine {
			systemMarker = "aluminium_1";
			typeClass = "MineType";
			text = "Mine d'aluminium";
			scales[] = {0, 1};
			visible = 0;

			visibleSides[] = {"cop", "med"};

			class MarkerTooltip {
				color[] = {0.8,0.769,0.059, 0.6};
				title = "Mine d'aluminium";
				description = "Cette Zone est un secteur de récupération de minerais d'aluminium.";
				img = "";
			};
		};

		class NickelMine {
			systemMarker = "nickel_1";
			typeClass = "MineType";
			text = "Mine de nickel";
			scales[] = {0, 1};
			visible = 0;

			visibleSides[] = {"cop", "med"};

			class MarkerTooltip {
				color[] = {0.8,0.769,0.059, 0.6};
				title = "Mine de nickel";
				description = "Cette Zone est un secteur de récupération de minerais de nickel.";
				img = "";
			};
		};

		class GoldMine {
			systemMarker = "gold_1";
			typeClass = "MineType";
			text = "Mine d'or";
			scales[] = {0, 1};
			visible = 0;

			visibleSides[] = {"cop", "med"};

			class MarkerTooltip {
				color[] = {0.8,0.769,0.059, 0.6};
				title = "Mine d'or";
				description = "Cette Zone est un secteur de récupération de minerais d'or.";
				img = "";
			};
		};

		class MineSell {
			systemMarker = "mine_trader";
			typeClass = "MineSellType";
			scales[] = {0, 1};
			visible = 1;
		};

		class GemsSell {
			systemMarker = "diamond_trader";
			typeClass = "GemsSellType";
			scales[] = {0, 1};
			visible = 1;
		};

		class Furnace {
			systemMarker = "iron_processing";
			typeClass = "FurnaceType";
			scales[] = {0, 1};
			visible = 1;
		};

		class MarijuanaField {
			systemMarker = "marijuana_1";
			typeClass = "DrugFieldType";
			text = "Champ de Cannabis";
			scales[] = {0, 1};
			visible = 0;

			class MarkerTooltip {
				color[] = {0.831,0,0, 0.6};
				title = "Champ de Cannabis";
				description = "Champ de drogue.";
				img = "";
			};
		};

		class MauiwauiField {
			systemMarker = "mauiwaui_1";
			typeClass = "DrugFieldType";
			text = "Champ de Maui Waui";
			scales[] = {0, 1};
			visible = 0;

			class MarkerTooltip {
				color[] = {0.831,0,0, 0.6};
				title = "Champ de Maui Waui";
				description = "Champ de drogue.";
				img = "";
			};
		};

		class PurpleField {
			systemMarker = "purple_1";
			typeClass = "DrugFieldType";
			text = "Champ de Purple Kush";
			scales[] = {0, 1};
			visible = 0;

			class MarkerTooltip {
				color[] = {0.831,0,0, 0.6};
				title = "Champ de Purple Kush";
				description = "Champ de drogue.";
				img = "";
			};
		};

		class StrawberryField {
			systemMarker = "straw_1";
			typeClass = "DrugFieldType";
			text = "Champ de Strawberry";
			scales[] = {0, 1};
			visible = 0;

			class MarkerTooltip {
				color[] = {0.831,0,0, 0.6};
				title = "Champ de Strawberry";
				description = "Champ de drogue.";
				img = "";
			};
		};

		class MarijuanaProcess {
			systemMarker = "marijuana_p";
			typeClass = "DrugProcessType";
			text = "Traitement de Marijuana";
			scales[] = {0, 1};
			visible = 0;

			class MarkerTooltip {
				color[] = {0.831,0,0, 0.6};
				title = "Traitement de Drogue";
				description = "L'un des seuls endroit où les flics ne fouillera pas pour traiter de drogue... Espérons...";
				img = "";
			};
		};

		class MauiwauiProcess {
			systemMarker = "mauiwaui_p";
			typeClass = "DrugProcessType";
			text = "Traitement de Maui Waui";
			scales[] = {0, 1};
			visible = 0;

			class MarkerTooltip {
				color[] = {0.831,0,0, 0.6};
				title = "Traitement de Drogue";
				description = "L'un des seuls endroit où les flics ne fouillera pas pour traiter de drogue... Espérons...";
				img = "";
			};
		};

		class PurpleProcess {
			systemMarker = "purple_p";
			typeClass = "DrugProcessType";
			text = "Traitement de Purple Kush";
			scales[] = {0, 1};
			visible = 0;

			class MarkerTooltip {
				color[] = {0.831,0,0, 0.6};
				title = "Traitement de Drogue";
				description = "L'un des seuls endroit où les flics ne fouillera pas pour traiter de drogue... Espérons...";
				img = "";
			};
		};

		class StrawberryProcess {
			systemMarker = "straw_p";
			typeClass = "DrugProcessType";
			text = "Traitement de Strawberry";
			scales[] = {0, 1};
			visible = 0;

			class MarkerTooltip {
				color[] = {0.831,0,0, 0.6};
				title = "Traitement de Drogue";
				description = "L'un des seuls endroit où les flics ne fouillera pas pour traiter de drogue... Espérons...";
				img = "";
			};
		};

		class DrugDealer {
			systemMarker = "dealer_mrk";
			typeClass = "DrugDealerType";
			scales[] = {0, 1};
			visible = 0;
			visibleSides[] = {};
		};

		class SnakeField {
			systemMarker = "serpent_1";
			typeClass = "SnakeType";
			scales[] = {0, 1};
			visible = 0;
		};

		class SnakeProcess {
			systemMarker = "serpent_p";
			typeClass = "SnakeProcessType";
			scales[] = {0, 1};
			visible = 0;
		};

		class SnakeSell {
			systemMarker = "Shop_Serpent";
			typeClass = "SnakeSellType";
			scales[] = {0, 1};
			visible = 0;
		};

		class KaoriField {
			systemMarker = "bois_tropical_1";
			typeClass = "WoodIllegalType";
			text = "Forêt de kaori";
			scales[] = {0, 1};
			visible = 0;

			class MarkerTooltip {
				color[] = {0.831,0,0, 0.6};
				title = "Forêt de kaori";
				description = "L'endroit parfait pour couper du bois pour se faire un peu d'argent et suer.";
				img = "";
			};
		};

		class PinField {
			systemMarker = "bois_parc_1";
			typeClass = "WoodType";
			text = "Forêt de pin";
			scales[] = {0, 1};
			visible = 1;

			class MarkerTooltip {
				color[] = {0.353,0.58,0.392, 0.6};
				title = "Forêt de pin";
				description = "L'endroit parfait pour couper du bois pour se faire un peu d'argent et suer.";
				img = "";
			};
		};

		class WoodProcess {
			systemMarker = "charpente_process";
			typeClass = "WoodProcessType";
			scales[] = {0, 1};
			visible = 1;
		};

		class WoodSellSouth {
			systemMarker = "wood_trader_1";
			typeClass = "WoodSellType";
			scales[] = {0, 1};
			visible = 1;

			class MarkerTooltip {
				color[] = {0.427,0.631,0.392, 0.6};
				title = "Exportation de bois";
				description = "L'endroit parfait pour vendre du bois.";
				img = "";
			};
		};

		class WoodSellNorth {
			systemMarker = "wood_trader_2";
			typeClass = "WoodSellType";
			scales[] = {0, 1};
			visible = 1;

			class MarkerTooltip {
				color[] = {0.427,0.631,0.392, 0.6};
				title = "Exportation de bois";
				description = "L'endroit parfait pour vendre du bois.";
				img = "";
			};
		};

		class ArcheSous {
			systemMarker = "arche_sous_1";
			typeClass = "ArcheSousType";
			scales[] = {0, 1};
			visible = 1;
		};

		class ArcheTerre {
			systemMarker = "arche_ter_1";
			typeClass = "ArcheTerreType";
			scales[] = {0, 1};
			visible = 1;
		};

		class MedBuy {
			systemMarker = "med_1";
			typeClass = "MedBuyType";
			scales[] = {0, 1};
			visible = 1;
		};

		class MedProcess {
			systemMarker = "med_p_1";
			typeClass = "MedProcessType";
			scales[] = {0, 1};
			visible = 1;
		};

		class MedSell {
			systemMarker = "med_sell";
			typeClass = "MedSellType";
			scales[] = {0, 1};
			visible = 1;
		};

		class SugarProcess {
			systemMarker = "sugar_processing";
			typeClass = "SugarProcessType";
			scales[] = {0, 1};
			visible = 1;
		};

		class SugarSell {
			systemMarker = "sugar_trader";
			typeClass = "SugarSellType";
			scales[] = {0, 1};
			visible = 1;
		};

		class MoneyLaundering {
			systemMarker = "money_laundering";
			typeClass = "MoneyLaunderingType";
			scales[] = {0, 1};
			visible = 0;
		};

		class ContrebandShop {
			systemMarker = "contrebande_mrk";
			typeClass = "ContrebandShopType";
			scales[] = {0, 1};
			visible = 0;
		};

		class WeaponsFarmShop {
			systemMarker = "weapons_farm_mrk";
			typeClass = "WeaponsFarmShopType";
			scales[] = {0, 1};
			visible = 0;
		};

		class WeaponsFarmProcess1 {
			systemMarker = "weapons_farm_process_1";
			typeClass = "WeaponsFarmProcess1Type";
			scales[] = {0, 1};
			visible = 0;
		};

		class WeaponsFarmProcess2 {
			systemMarker = "weapons_farm_process_2";
			typeClass = "WeaponsFarmProcess2Type";
			scales[] = {0, 1};
			visible = 0;
		};

		class WeaponsFarmSell {
			systemMarker = "weapons_farm_sell";
			typeClass = "WeaponsFarmSellType";
			scales[] = {0, 1};
			visible = 0;
		};

		class PresidentHouse {
			systemMarker = "president_house";
			typeClass = "PresidentHouseType";
			scales[] = {0, 1};
			visible = 1;
		};

		class Ocas {
			systemMarker = "ocas_depot_entr";
			typeClass = "OcasType";
			scales[] = {0, 1};
			visible = 1;			
		};

		class Bar {
			systemMarker = "bar_pos";
			typeClass = "BarType";
			scales[] = {0, 1};
			visible = 1;			
		};

		class Johnson {
			systemMarker = "johnson_ent";
			typeClass = "JohnsonType";
			scales[] = {0, 1};
			visible = 1;
		};
	};
};