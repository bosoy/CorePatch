class CfgPatches
{
	class CorePatch_CIT_14162
	{
		requiredAddons[] = {"CorePatch"};
		requiredVersion = 1.00;
		units[] = {};
		weapons[] = {};
	};
};
class CfgMagazines
{
	class Strela;
	class Igla : Strela
	{
		modelSpecial = "\CorePatch\CorePatch_CIT_14162\Igla_loaded";
	};
};
class CfgWeapons
{
	class Strela;
	class Igla : Strela
	{
		model = "\CorePatch\CorePatch_CIT_14162\Igla";
	};
};
