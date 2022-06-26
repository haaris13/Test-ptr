/*
	File: Config for Gouv

	Autor: IronBlade
*/
class CfgGouv {

	class Taxe {

		timeSaveDb = 10;
		max_value = 30;

		class legal_vente {
			displayname = "Vente Légal";
			description = "Pourcentage d'argent qui sera prélévé lors de la vente d'un objet Légal";
			base_value = 5;
		};

		class atm_depot {
			displayname = "Dépot ATM";
			description = "Pourcentage d'argent qui sera prélévé lors du dépot d'argent dans un ATM.";
			base_value = 2;
		};

		class atm_virement {
			displayname = "Virement ATM";
			description = "Pourcentage d'argent qui sera prélévé lors d'un virement bancaire.";
			base_value = 10;
		};

		class veh_assure {
			displayname = "Assurance de véhicule";
			description = "Pourcentage d'argent qui sera prélévé de l'assurance d'un véhicule";
			base_value = 5;
		};

		class shop_civil {
			displayname = "Magasins Civil";
			description = "Pourcentage d'argent qui sera prélévé lors d'achat d'un matériel, vétement, équipement dans un magasins civil.";
			base_value = 5;
		};

		class essence_price {
			displayname = "Essence aux Stations";
			description = "Pourcentage d'argent qui sera prélévé lors d'achat de l'essence dans une station essence.";
			base_value = 5;
		};

		class sop_vehicle {
			displayname = "Magasins de véhicules";
			description = "Pourcentage d'argent qui sera prélévé lors d'achat d'un véhicule civil.";
			base_value = 2;
		};

		class entreprise_invoice {
			displayname = "Facture entreprises";
			description = "Pourcentage d'argent qui sera prélévé lors d'un payement d'une facture d'entreprise.";
			base_value = 2;
		};

		class veh_fourriere {
			displayname = "Fourrière";
			description = "Pourcentage d'argent qui sera prélévé lors d'un payement de la fourrière dans le garage.";
			base_value = 10;
		};

		/*
		class salaire {
			displayname = "Salaire";
			description = "Pourcentage d'argent qui sera prélévé lors du versement d'un salaire";
			base_value = 5;
		};
		*/

		/*
		class illegal_vente {
			displayname = "Vente Illégal";	
			description = "Pourcentage d'argent qui sera prélévé lors de la vente d'un objet Illégal";
			base_value = 0;
		};
		*/
	};
};