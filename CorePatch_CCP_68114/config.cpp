class CfgPatches
{
	class CorePatch_CCP_68114
	{
		requiredAddons[] = {"CorePatch"};
		requiredVersion = 1.00;
		units[] = {};
		weapons[] = {};
	};
};
class Mode_FullAuto;
class CfgWeapons
{
	class M16_base;
	class M16A2: M16_base
	{
		class Burst;
		class Single;
	};
	class FN_FAL: M16A2
	{
		modes[] = {
			"Single",
			"FullAuto"
		};

		class Burst: Burst
		{
			delete begin2;

			begin1[] = {
				"Ca\Sounds_E\Weapons_E\FNFAL\FNFAL_single_2",
				1.7782794,
				1,
				1500
			};
			reloadTime = 0.092307692;
			soundBegin[] = {
				"begin1",
				0.5
			};
		};
		class FullAuto: Mode_FullAuto
		{
			begin1[] = {
				"Ca\Sounds_E\Weapons_E\FNFAL\FNFAL_single_2",
				1.7782794,
				1,
				1500
			};
			dispersion = 0.00050000002;
			maxRange = 200;
			maxRangeProbab = 0.050000001;
			midRange = 80;
			midRangeProbab = 0.69999999;
			minRange = 0;
			minRangeProbab = 0.30000001;
			recoil = "recoil_auto_primary_5outof10";
			recoilProne = "recoil_auto_primary_prone_5outof10";
			reloadTime = 0.092307692;
			soundBegin[] = {
				"begin1",
				0.5
			};
		};
		class Single: Single
		{
			delete begin2;

			begin1[] = {
				"Ca\Sounds_E\Weapons_E\FNFAL\FNFAL_single_2",
				1.7782794,
				1,
				1500
			};
			reloadTime = 0.092307692;
			soundBegin[] = {
				"begin1",
				0.5
			};
		};
	};
};
