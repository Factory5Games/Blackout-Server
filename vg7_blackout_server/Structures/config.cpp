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
    class ExpansionATMLocker;
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

    class land_blackout_atm: ExpansionATMLocker
	{
		scope = 2;
		model = "\vg7_blackout_server\vg7_blackout_server\Structures\atm.p3d";
        hiddenSelections[]=
		{
			"atm",
            "screen"
		};
		hiddenSelectionsTextures[]=
		{
			"vg7_blackout_server\vg7_blackout_server\Structures\data\ATMplain.paa",
            "vg7_blackout_server\vg7_blackout_server\Structures\data\ATMplain.paa"
		};		
	};

    class land_blackout_atm_graffiti: ExpansionATMLocker
	{
		scope = 2;
		model = "\vg7_blackout_server\vg7_blackout_server\Structures\atm.p3d";
        hiddenSelections[]=
		{
			"atm",
            "screen"
		};
		hiddenSelectionsTextures[]=
		{
			"vg7_blackout_server\vg7_blackout_server\Structures\data\ATM.paa",
            "vg7_blackout_server\vg7_blackout_server\Structures\data\ATM.paa"
		};		
	};
};