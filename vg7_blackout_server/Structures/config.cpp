class CfgPatches
{
	class vg7_blackout_server_structures
	{
		requiredAddons[] = {"DZ_Data"};
	};
};

class CfgVehicles
{
	class HouseNoDestruct;
	class land_blackout_trader_container: HouseNoDestruct
	{
		scope = 2;
		model = "\vg7_blackout_server\vg7_blackout_server\Structures\trader.p3d";
		class Doors
        {
            class Door1
            {
                displayName = "Door1";
                component = "Door1";
                soundPos = "Door1";
                animPeriod = 1.0;
                initPhase = 0.0;
                initOpened = 0.0;
                soundOpen = "doorMetalTwinBigOpen";
                soundClose = "doorMetalTwinBigClose";
                soundLocked = "doorMetalTwinBigRattle";
                soundOpenABit = "doorMetalTwinBigOpenABit";
            };
		};
	};

    class land_blackout_animal_cage: HouseNoDestruct
	{
		scope = 2;
		model = "\vg7_blackout_server\vg7_blackout_server\Structures\animalcage.p3d";
		class Doors
        {
            class Door1
            {
                displayName = "Door1";
                component = "Door1";
                soundPos = "Door1";
                animPeriod = 1.0;
                initPhase = 0.0;
                initOpened = 0.0;
                soundOpen = "doorMetalTwinBigOpen";
                soundClose = "doorMetalTwinBigClose";
                soundLocked = "doorMetalTwinBigRattle";
                soundOpenABit = "doorMetalTwinBigOpenABit";
            };
		};
	};

    class Nehr_Gaming_01: HouseNoDestruct
	{
		scope = 2;
		model = "\vg7_blackout_server\vg7_blackout_server\Structures\avtomat5.p3d";
        hiddenSelections[]=
		{
			"morskoyboy"			
		};
		hiddenSelectionsTextures[]=
		{
			"vg7_blackout_server\vg7_blackout_server\Structures\data\morskoyboy_avtomat3.paa",			
		};        
	};
    
};