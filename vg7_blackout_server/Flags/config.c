class CfgPatches
{
	class vg7_blackout_server_flags
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

class CfgVehicles
{
	class Flag_Base;
	class Flag_Blackout_Weathered_Blue: Flag_Base
	{
		scope=2;
		hiddenSelectionsTextures[]={"vg7_blackout_server\vg7_blackout_server\data\flag_blackout_weathered_co.paa"};
	};	

    class Flag_Blackout_Blue: Flag_Base
	{
		scope=2;
		hiddenSelectionsTextures[]={"vg7_blackout_server\vg7_blackout_server\data\flag_blackout_blue_co.paa"};
	};

    class Flag_Blackout_Weathered_Black: Flag_Base
	{
		scope=2;
		hiddenSelectionsTextures[]={"vg7_blackout_server\vg7_blackout_server\data\flag_blackout_weathered_black_co.paa"};
	};

    class Flag_Blackout_Black: Flag_Base
	{
		scope=2;
		hiddenSelectionsTextures[]={"vg7_blackout_server\vg7_blackout_server\data\flag_blackout_black_co.paa"};
	};

    class Flag_BLACKOUTS1: Flag_Base
	{
		scope=2;
		hiddenSelectionsTextures[]={"vg7_blackout_server\vg7_blackout_server\data\flag_BLACKOUTS1_co.paa"};
	};

    class Flag_BLACKOUTS2: Flag_Base
	{
		scope=2;
		hiddenSelectionsTextures[]={"vg7_blackout_server\vg7_blackout_server\data\flag_BLACKOUTS2_co.paa"};
	};
};
