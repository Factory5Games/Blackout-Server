class CfgPatches
{
	class Blackout_Server
	{
		units[]={};
		weapons[]={};
		requiredVersion=0.1;
		requiredAddons[]=
		{
			"DZ_Data","DZ_Scripts","DZ_Gear_Containers","DZ_Sounds_Effects","DZ_Vehicles_Wheeled","DZ_Vehicles_Parts","DZ_Gear_Camping"
			
		};
	};
};

class CfgMods
{
	class vg7_blackout_server
	{
		dir="vg7_blackout_server";
		picture="vg7_blackout_server\vg7_blackout_server\data\Blackout_Updated.paa";
		action="https://steamcommunity.com/sharedfiles/filedetails/?id=2722222836";		
		name="Blackout Server";
		credits="VectorG7 Blackouts";
		author="VectorG7";		
		type="mod";
		dependencies[] = { "Game", "World", "Mission" };
		
		class defs
		{
			class imageSets
			{				
				files[] = {"vg7_blackout_server\vg7_blackout_server\data\Set1\CustomGUI_1.imageset"};
			};
			class gameScriptModule
			{
				value = "";
				files[] = {"vg7_blackout_server\vg7_blackout_server\scripts\3_game"};
			};
			class worldScriptModule
			{
				value = "";
				files[] = {"vg7_blackout_server\vg7_blackout_server\scripts\4_World"};
			};
			class missionScriptModule
			{
				value = "";
				files[] = {"vg7_blackout_server\vg7_blackout_server\scripts\5_mission"};
			};
		};
	}; 

};

