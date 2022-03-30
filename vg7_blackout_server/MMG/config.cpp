class CfgPatches
{
	class mmg_retexture
	{
		units[] = {"MMG_MK_III_Armor_blackout","MMG_combatshirt_blackout","MMG_combatpants_blackout","MMG_helmet_blackout"};
		weapons[] = {};
		requiredVersion = 0.1;
		requiredAddons[] = {"DZ_Data","DZ_Characters_Vests","DZ_Characters_Backpacks","DZ_Scripts","DZ_Characters","JPC_vest","DZ_Gear_Containers"};
	};
};
class CfgMods
{
	class jpc_vest
	{
		dir = "";
		picture = "";
		action = "";
		hideName = 1;
		hidePicture = 1;
		name = "MihgtyMoitzbert";
		credits = "";
		author = "MM";
		authorID = "MM";
		version = "1.0";
		extra = 0;
		type = "mod";
		dependencies[] = {"World"};
	};
};
class cfgVehicles
{
	class heavyvest_base;
	class MMG_MK_III_Armor_blackout: heavyvest_base
	{
		scope = 2;
		displayName = "MMG MK-3 Armor Blackout";
		hiddenSelectionsTextures[] = {"vg7_blackout_server\vg7_blackout_server\data\textures\heavyvest_bo.paa","vg7_blackout_server\vg7_blackout_server\data\textures\heavyvest_bo.paa","vg7_blackout_server\vg7_blackout_server\data\textures\heavyvest_bo.paa"};
	};
	class TacticalShirt_ColorBase;
	class MMG_combatshirt_blackout: TacticalShirt_ColorBase
	{
		scope = 2;
		itemsCargoSize[] = {10,6};
		displayName = "MMG CombatShirt Blackout";
		hiddenSelectionsTextures[] = {"vg7_blackout_server\vg7_blackout_server\data\textures\combatshirt_bo_g.paa","vg7_blackout_server\vg7_blackout_server\data\textures\combatshirt_bo.paa","vg7_blackout_server\vg7_blackout_server\data\textures\combatshirt_bo.paa"};
	};
	class CargoPants_ColorBase;
	class MMG_combatpants_blackout: CargoPants_ColorBase
	{
		scope = 2;
		itemsCargoSize[] = {10,6};
		displayName = "MMG CombatPants Blackout";
		hiddenSelectionsTextures[] = {"vg7_blackout_server\vg7_blackout_server\data\textures\combatpants_bo_g.paa","vg7_blackout_server\vg7_blackout_server\data\textures\combatpants_bo.paa","vg7_blackout_server\vg7_blackout_server\data\textures\combatpants_bo.paa"};
	};
	class Mich2001Helmet;
	class MMG_helmet_blackout: Mich2001Helmet
	{
		displayName = "Tactical Helmet Blackout";
		descriptionShort = "ONLY FOR ADMINS! The modder does not suggest to use it as a player. Gear made by MightyMoitzbert";
		scope = 2;
		hiddenSelectionsTextures[] = {"vg7_blackout_server\vg7_blackout_server\data\textures\helmet_bo.paa","vg7_blackout_server\vg7_blackout_server\data\textures\helmet_bo.paa","vg7_blackout_server\vg7_blackout_server\data\textures\helmet_bo.paa"};
	};
};
