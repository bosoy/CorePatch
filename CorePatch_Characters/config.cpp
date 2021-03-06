class CfgPatches
{
	class CorePatch_Characters
	{
		requiredAddons[] = {"CorePatch"};
		requiredVersion = 1.00;
		units[] = {
			"US_Delta_Force_TL_Light_EP1",
			"US_Soldier_Crew_Light_EP1",
			"US_Soldier_MG_Light_EP1"
		};
		weapons[] = {};
	};
};
class CfgAddons
{
	class PreloadAddons
	{
		class CorePatch_Characters
		{
			list[] = {"CorePatch_Characters"};
		};
	};
};
class CfgVehicles
{
	class CAManBase;
	class SoldierWB : CAManBase
	{
		class HitPoints;
	};
	class GER_Soldier_base_EP1 : SoldierWB
	{
		canDeactivateMines = 1;
	};
	class US_Soldier_Base_EP1 : SoldierWB
	{
		class HitPoints : HitPoints
		{
			class HitHead;
		};
	};
	class Drake : US_Soldier_Base_EP1
	{
		canDeactivateMines = 1;
	};
	class US_Delta_Force_EP1 : US_Soldier_Base_EP1
	{
		canDeactivateMines = 1;
	};
	class US_Delta_Force_TL_EP1 : US_Soldier_Base_EP1
	{
		canDeactivateMines = 1;
	};
	class US_Delta_Force_TL_Light_EP1 : US_Delta_Force_TL_EP1
	{
		model = "\ca\characters_E\Delta\Delta2_Light";
		scope = 1;

		class HitPoints : HitPoints
		{
			class HitHead : HitHead
			{
				armor = 0.60000002;
			};
		};
	};
	class US_Soldier_Crew_EP1 : US_Soldier_Base_EP1
	{
	};
	class Herrera : US_Soldier_Crew_EP1
	{
		canDeactivateMines = 1;
	};
	class US_Soldier_Crew_Light_EP1 : US_Soldier_Crew_EP1
	{
		model = "\ca\characters_E\US\US_crewman_Light";
		scope = 1;

		class HitPoints : HitPoints
		{
			class HitHead : HitHead
			{
				armor = 0.60000002;
			};
		};
	};
	class US_Soldier_Engineer_EP1 : US_Soldier_Base_EP1
	{
		cost = 100000;
	};
	class US_Soldier_MG_EP1 : US_Soldier_Base_EP1
	{
	};
	class US_Soldier_MG_Light_EP1 : US_Soldier_MG_EP1
	{
		model = "\ca\characters_E\US\US_machine_gunner_Light";
		scope = 1;

		class HitPoints : HitPoints
		{
			class HitHead : HitHead
			{
				armor = 0.60000002;
			};
		};
	};
	class SoldierEB;
	class MVD_Soldier_Base : SoldierEB
	{
		canDeactivateMines = 1;
		canHideBodies = 1;
	};
	class RUS_Soldier_Base : SoldierEB
	{
		canDeactivateMines = 1;
		canHideBodies = 1;
	};
	class CZ_Soldier_base_EP1;
	class CZ_Special_Forces_DES_EP1 : CZ_Soldier_base_EP1
	{
		canDeactivateMines = 1;
	};
	class CZ_Special_Forces_GL_DES_EP1 : CZ_Soldier_base_EP1
	{
		canDeactivateMines = 1;
	};
	class CZ_Special_Forces_MG_DES_EP1 : CZ_Soldier_base_EP1
	{
		canDeactivateMines = 1;
	};
	class CZ_Special_Forces_Scout_DES_EP1 : CZ_Soldier_base_EP1
	{
		canDeactivateMines = 1;
	};
	class CZ_Special_Forces_TL_DES_EP1 : CZ_Soldier_base_EP1
	{
		canDeactivateMines = 1;
	};
	class GUE_Soldier_Base;
	class GUE_Soldier_Sab : GUE_Soldier_Base
	{
		canHideBodies = 1;
		engineer = 0;
	};
	class Ins_Soldier_Base;
	class Ins_Soldier_Sab : Ins_Soldier_Base
	{
		canDeactivateMines = 1;
		canHideBodies = 1;
		engineer = 0;
	};
	class Ins_Soldier_Sapper : Ins_Soldier_Base
	{
		engineer = 0;
	};
	class RU_Soldier_Base;
	class RU_Soldier_AT : RU_Soldier_Base
	{
		magazines[] = {
			"30Rnd_545x39_AK",
			"30Rnd_545x39_AK",
			"30Rnd_545x39_AK",
			"30Rnd_545x39_AK",
			"30Rnd_545x39_AK",
			"30Rnd_545x39_AK",
			"PG7VL",
			"PG7VL",
			"PG7VL"
		};
	};
	class TK_GUE_Soldier_Base_EP1;
	class US_Delta_Force_Undercover_Takistani_Base_EP1 : TK_GUE_Soldier_Base_EP1
	{
		canDeactivateMines = 1;
		canHideBodies = 1;
	};
	class TK_Soldier_base_EP1;
	class TK_Special_Forces_EP1 : TK_Soldier_base_EP1
	{
		canDeactivateMines = 1;
		canHideBodies = 1;
	};
	class US_Soldier_Pilot_EP1;
	class Pierce : US_Soldier_Pilot_EP1
	{
		canDeactivateMines = 1;
	};
	class USMC_Soldier_Base;
	class USMC_SoldierS_Engineer : USMC_Soldier_Base
	{
		cost = 100000;
	};
};
