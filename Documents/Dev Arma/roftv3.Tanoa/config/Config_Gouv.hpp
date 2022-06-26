/*
	File: Config for Gouv

	
*/
class CfgGouv {

	class Taxe {

		timeSaveDb = 10;
		max_value = 60;

		class legal_vente {
			displayname = "Vente Légal";
			description = "Pourcentage d'argent qui sera prélévé lors de la vente d'un objet Légal";
			base_value = 0;
		};

		class illegal_vente {
			displayname = "Vente Illégal";	
			description = "Pourcentage d'argent qui sera prélévé lors de la vente d'un objet Illégal";
			base_value = 0;
		};

		class atm_depot {
			displayname = "Dépot ATM";
			description = "Pourcentage d'argent qui sera prélévé lors du dépot d'argent dans un ATM.";
			base_value = 0;
		};

		class atm_virement {
			displayname = "Virement ATM";
			description = "Pourcentage d'argent qui sera prélévé lors d'un virement bancaire.";
			base_value = 0;
		};

		class veh_assure {
			displayname = "Assurance de véhicule";
			description = "Pourcentage d'argent qui sera prélévé de l'assurance d'un véhicule";
			base_value = 0;
		};

		class salaire {
			displayname = "Salaire";
			description = "Pourcentage d'argent qui sera prélévé lors du versement d'un salaire";
			base_value = 0;
		};

		class shop_civil {
			displayname = "Magasins Civil";
			description = "Pourcentage d'argent qui sera prélévé lors d'achat d'un matériel, vétement, équipement dans un magasins civil.";
			base_value = 0;
		};

		class essence_price {
			displayname = "Essence aux Stations";
			description = "Pourcentage d'argent qui sera prélévé lors d'achat de l'essence dans une station essence.";
			base_value = 0;
		};

		class sop_vehicle {
			displayname = "Magasins de véhicules";
			description = "Pourcentage d'argent qui sera prélévé lors d'achat d'un véhicule civil.";
			base_value = 0;
		};
	};
};