class CfgPatches
{
	class Blackout_Server
	{
		units[]={};
		weapons[]={};
		requiredVersion=0.1;
		requiredAddons[]=
		{
			"DZ_Scripts","DZ_Data","DZ_Gear_Containers","DZ_Sounds_Effects","DZ_Vehicles_Wheeled","DZ_Vehicles_Parts","DZ_Gear_Camping"
			
		};
	};
};

class CfgMods
{
	class vg7_blackout_server
	{
		dir="vg7_blackout_server";
		picture="vg7_blackout_server\vg7_blackout_server\data\Blackout_Updated.paa";
		action="";
		hideName=1;
		hidePicture=1;
		name="Blackout Server";
		credits="VectorG7 Blackouts";
		author="VectorG7";
		authorID="0";
		version="1.0";
		extra=0;
		type="mod";
		dependencies[] = 
		{
			"Game",
		 	"World",
			"Mission" 
		 };
		
		class defs
		{
			class gameScriptModule
			{
				value = "";
				files[] = {"vg7_blackout_server/vg7_blackout_server/scripts/3_game"};
			};
			class worldScriptModule
			{
				value = "";
				files[] = {"vg7_blackout_server/vg7_blackout_server/scripts/4_World"};
			};
			class missionScriptModule
			{
				value = "";
				files[] = {"vg7_blackout_server/vg7_blackout_server/scripts/5_mission"};
			};
		};
	}; 

};

