class CfgPatches
{
	class vg7_Corvette_Blackout
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
	class vg7_R_Door;
	class vg7_L_Door;
	class vg7_Corvette;

	//Blackout Server Custom CORVETTE

class vg7_Corvette_Blackout: vg7_Corvette
	{
		displayname="Blackouts Corvette Blackout Style";
		descriptionShort="Blackout";
		hiddenSelections[]=
		{
			"light_1_1",
			"light_2_1",
			"light_brake_1_2",
			"light_brake_2_2",
			"light_reverse_1_2",
			"light_reverse_2_2",
			"light_1_2",
			"light_2_2",
			"light_dashboard",
			"baja_light",
			"mainpaint"
		};
		hiddenSelectionsTextures[]=
		{
			"",
			"",
			"",
			"",
			"",
			"",
			"",
			"",
			"",
			"",
			""
		};
		hiddenSelectionsMaterials[]=
		{
			"dz\vehicles\wheeled\offroadhatchback\data\offroadhatchback_lights.rvmat",
			"dz\vehicles\wheeled\offroadhatchback\data\offroadhatchback_lights.rvmat",
			"dz\vehicles\wheeled\offroadhatchback\data\offroadhatchback_lights.rvmat",
			"dz\vehicles\wheeled\offroadhatchback\data\offroadhatchback_lights.rvmat",
			"dz\vehicles\wheeled\offroadhatchback\data\offroadhatchback_lights.rvmat",
			"dz\vehicles\wheeled\offroadhatchback\data\offroadhatchback_lights.rvmat",
			"dz\vehicles\wheeled\offroadhatchback\data\offroadhatchback_lights.rvmat",
			"dz\vehicles\wheeled\offroadhatchback\data\offroadhatchback_lights.rvmat",
			"dz\vehicles\wheeled\offroadhatchback\data\offroadhatchback_lights.rvmat",
			"dz\vehicles\wheeled\offroadhatchback\data\offroadhatchback_lights.rvmat",
			"vg7\vg7_corvette\data\body.rvmat"
		};
	};


		class vg7_R_Door_Blackout: vg7_R_Door
	{
		displayName="Passenger Door Blackout Style";
		Model = "vg7_blackout_server\vg7_blackout_server\proxy\vg7_R_Door.p3d";
		inventorySlot="vg7_R_Door";
		rotationFlags=2;
		hiddenSelectionsMaterials[]=
		{
			"vg7_blackout_server\vg7_blackout_server\data\metal.rvmat"
		};
	};

	class vg7_L_Door_Blackout: vg7_L_Door
	{
		displayName="Driver Door Blackout Style";
		Model = "vg7_blackout_server\vg7_blackout_server\proxy\vg7_L_Door.p3d";
		inventorySlot="vg7_L_Door";
		rotationFlags=2;
		hiddenSelectionsMaterials[]=
		{
			"vg7_blackout_server\vg7_blackout_server\data\metal.rvmat"
		};
	};
	
	
};
