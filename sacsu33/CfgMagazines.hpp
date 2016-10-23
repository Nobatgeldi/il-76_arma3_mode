class CfgMagazines
{
	class VehicleMagazine;
	class SAC_150Rnd_30mm_GSh301: VehicleMagazine
	{
		scope=2;
		count=300;
		ammo="B_40mm_GPR_Tracer_Red";
		initSpeed=1036;
		tracersEvery=1;
		nameSound="cannon";
	};
	class SAC_6Rnd_R73: VehicleMagazine
	{
		scope=2;
		displayName="R-73";
		displayNameShort="R-73";
		ammo="SAC_M_R73_AA";
		count=6;
		initSpeed=0;
		maxLeadSpeed=450;
		sound[]=
		{
			"A3\sounds_f\dummysound",
			1,
			1,
			1300
		};
		reloadSound[]=
		{
			"A3\sounds_f\dummysound",
			0.00031622799,
			1,
			20
		};
		nameSound="missiles";
	};
	class SAC_4Rnd_R73: SAC_6Rnd_R73
	{
		count=4;
	};
	class SAC_2Rnd_R73: SAC_6Rnd_R73
	{
		count=2;
	}
	class SAC_6Rnd_R27RE: SAC_6Rnd_R73
	{
		scope=2;
		displayName="R-27RE";
		count=6;
		ammo="SAC_M_R27RE";
		initSpeed=0;
	};
	class SAC_4Rnd_R27RE: SAC_6Rnd_R27RE
	{
		count=4;
	};
	class SAC_2Rnd_R27RE: SAC_6Rnd_R27RE
	{
		count=2;
	};
	class SAC_6Rnd_R77: VehicleMagazine
	{
		scope=2;
		displayName="R-77";
		count=6;
		ammo="SAC_M_R77";
		initSpeed=0;
	};
	class SAC_4Rnd_R77: SAC_6Rnd_R77
	{
		count=4;
	};
	class SAC_2Rnd_R77: SAC_6Rnd_R77
	{
		count=2;
	};
	class su33_80Rnd_S8T: VehicleMagazine
	{
		scope=2;
		displayName="S8 Rocket";
		ammo="su33_rocket_80mm_HE";
		count=80;
		initSpeed=0;
		nameSound="rockets";
		sound[]=
		{
			"A3\sounds_f\weapons\rockets\explosion_missile_02",
			1,
			1,
			1200
		};
		reloadSound[]=
		{
			"",
			0.00031622799,
			1
		};
	};
};