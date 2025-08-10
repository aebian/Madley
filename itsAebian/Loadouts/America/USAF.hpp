// United States Airforce - File

class US_AIRFORCE_GENERAL : US_ARMY_DEFAULT_UCP // Airforce General (Parade Uniform)
{
	uniform[] = {"U_B_ParadeUniform_01_US_decorated_F"};
	vest[] = {""};
	backpack[] = {""};
	primary[] = {""};
	secondary[] = {"rhsusf_weap_glock17g4","acc_pointer_IR_pistol_RF","rhsusf_mag_17Rnd_9x19_JHP"};
	launcher[] = {""};
	magazines[] = {"rhs_mag_m18_red",2,"rhsusf_mag_17Rnd_9x19_JHP",2};
	items[] += {"ACE_packingBandage",2,"ACE_fieldDressing",2,"ACE_EarPlugs",1};
	lrradios[] =  {"ACRE_PRC148"};
	binoculars[] = {"rhsusf_bino_lerca_1200_tan"};
	compass[] = {"ItemCompass"};
	goggles[] = {""};
	gps[] = {"ItemGPS"};
	headgear[] = {"rhssaf_beret_green"};
	map[] = {"ItemMap"};
	nvgs[] = {""};
	watch[] = {"ACE_Altimeter"};
	postLoadout = "(_this select 0) action [""SwitchWeapon"", (_this select 0), (_this select 0), 100];";

};

class US_AIRFORCE_GENERAL_CU : US_AIRFORCE_GENERAL // AIrfoce Genral (Combat Uniform)
{
	uniform[] = {"rhs_uniform_g3_m81"};
	vest[] = {"rhsusf_iotv_ocp"};

};

class US_AIRFORCE_SECF_LEAD : US_ARMY_DEFAULT_UCP // Airforce Security Forces Lead
{
	uniform[] = {"rhs_uniform_abu"};
	vest[] = {"rhsusf_iotv_ucp_Squadleader"};
	backpack[] = {""};
	primary[] = {"rhs_weap_m4a1_blockII_M203_bk","rhsusf_acc_anpeq15side_bk","rhsusf_acc_eotech_552","rhsusf_acc_SFMB556","rhs_mag_30Rnd_556x45_Mk318_PMAG","rhs_mag_M441_HE"};
	secondary[] = {"rhsusf_weap_m9","rhsusf_mag_15Rnd_9x19_JHP"};
	launcher[] = {""};
	magazines[] = {"rhs_mag_30Rnd_556x45_Mk318_PMAG",8,"rhs_mag_m18_red",2,"rhsusf_mag_15Rnd_9x19_JHP",2,"rhs_mag_m713_Red",4,"rhs_mag_M441_HE",3,"UGL_FlareRed_F",2};
	items[] += {"ACE_packingBandage",2,"ACE_fieldDressing",2,"ACE_EarPlugs",1};
	lrradios[] =  {"ACRE_PRC148"};
	binoculars[] = {"rhsusf_bino_lerca_1200_tan"};
	compass[] = {"ItemCompass"};
	goggles[] = {"rhs_googles_black"};
	gps[] = {"ItemGPS"};
	headgear[] = {"rhssaf_beret_black"};
	map[] = {"ItemMap"};
	nvgs[] = {""};
	watch[] = {"ACE_Altimeter"};
};

class US_AIRFORCE_SECF_RFL : US_AIRFORCE_SECF_LEAD // Airforce Security Forces Rifleman
{
	uniform[] = {"rhs_uniform_abu"};
	vest[] = {"rhsusf_iotv_ucp_Rifleman"};
	backpack[] = {""};
	primary[] = {"rhs_weap_m4a1_blockII_bk","rhsusf_acc_SFMB556","rhsusf_acc_anpeq15side_bk","rhsusf_acc_eotech_552","rhs_mag_30Rnd_556x45_Mk318_PMAG"};
	secondary[] = {"rhsusf_weap_m9","rhsusf_mag_15Rnd_9x19_JHP"};
	launcher[] = {""};
	magazines[] = {"rhs_mag_30Rnd_556x45_Mk318_PMAG",8,"rhsusf_mag_15Rnd_9x19_JHP",3,"rhs_mag_m18_red",2,"rhsusf_mag_15Rnd_9x19_JHP",2};
	headgear[] = {"rhsusf_ach_helmet_headset_ess_ucp_alt","rhssaf_beret_black","rhsusf_ach_helmet_headset_ess_ucp_alt"};
};

class US_AIRFORCE_SECF_SNP : US_AIRFORCE_SECF_LEAD // Airforce Security Forces Sniper
{
	uniform[] = {"rhs_uniform_abu"};
	vest[] = {"rhsusf_iotv_ucp_SAW"};
	backpack[] = {""};
	primary[] = {"rhs_weap_m40a5","rhsusf_acc_anpeq16a","rhsusf_acc_M8541_low_wd","rhsusf_10Rnd_762x51_m993_Mag","rhsusf_acc_harris_swivel"};
	secondary[] = {"rhsusf_weap_m9","rhsusf_mag_15Rnd_9x19_JHP"};
	launcher[] = {""};
	magazines[] = {"rhsusf_10Rnd_762x51_m993_Mag",10,"rhsusf_mag_15Rnd_9x19_JHP",5};
	items[] += {"ACE_packingBandage",2,"ACE_fieldDressing",2,"rhs_mag_m18_red",2};
};


class US_AIRFORCE_ATC : US_ARMY_DEFAULT_UCP // Air Traffic Controller
{
	uniform[] = {"rhs_uniform_abu"};
	vest[] = {""};
	backpack[] = {""};
	primary[] = {""};
	secondary[] = {"rhsusf_weap_m9","rhsusf_mag_15Rnd_9x19_JHP"};
	launcher[] = {""};
	magazines[] = {"rhsusf_mag_15Rnd_9x19_JHP",1};
	items[] += { };
	compass[]= {"ItemCompass"};
	binoculars[] = {"Binocular"};
	goggles[] = {"G_Aviator"};
	gps[] = {""};
	headgear[] = {"rhsusf_Bowman"};
	map[] = {"ItemMap"};
	watch[] = {"ItemWatch"};
	postLoadout = "(_this select 0) action ['SwitchWeapon', (_this select 0), (_this select 0), 1]";
};

class US_AIRFORCE_JPLT : CommonAmerica // Airforce Jet Pilot
{
	uniform[] = {"U_I_pilotCoveralls"};
	vest[] = {""};
	backpack[] = {"B_Parachute"};
	primary[] = {""};
	secondary[] = {"rhsusf_weap_glock17g4"};
	launcher[] = {""};
	magazines[] = {"rhsusf_mag_17Rnd_9x19_JHP",3};
	items[] += {"ACE_packingBandage",4,"ACE_quikclot",4,"ACE_tourniquet",2,"rhs_mag_m18_purple",1};
	lrradios[] =  {"ACRE_PRC148","ACRE_PRC148"};
	binoculars[] = {"rhsusf_bino_lerca_1200_tan"};
	compass[] = {"ItemCompass"};
	goggles[] = {"rhsusf_shemagh2_grn"};
	gps[] = {"ItemGPS"};
	headgear[] = {"RHS_jetpilot_usaf"};
	map[] = {"ItemMap"};
	nvgs[] = {"rhsusf_ANPVS_14"};
	watch[] = {"ACE_Altimeter"};
	preLoadout = "(_this select 0) setVariable [""ACE_GForceCoef"",0]";
};	

class US_AIRFORCE_PLT : US_AIRFORCE_JPLT // Airforce Pilot (Transport Aircraft)
{
	headgear[] = {"H_Cap_headphones"};

};


class US_AIRFORCE_STARGATE03_TL : CommonAmerica // Airforce Stargate 03 Team-Lead
{
	uniform[] = {"rhs_uniform_g3_mc"};
	vest[] = {"V_PlateCarrier2_blk"};
	backpack[] = {""};
	primary[] = {"rhs_weap_hk416d145_m320","rhsusf_acc_anpeq15A","rhsusf_acc_eotech_552","rhs_mag_30Rnd_556x45_Mk318_PMAG","rhs_mag_M397_HET"};
	secondary[] = {"rhsusf_weap_m9","rhsusf_mag_15Rnd_9x19_JHP"};
	launcher[] = {""};
	magazines[] = {"rhsusf_mag_15Rnd_9x19_JHP",3,"rhs_mag_30Rnd_556x45_Mk318_PMAG",10,"rhs_mag_M397_HET",3};
	items[] += {"ACE_packingBandage",6,"ACE_quikclot",6,"ACE_tourniquet",2,"rhs_mag_m18_purple",2};
	lrradios[] =  {"ACRE_PRC148","ACRE_PRC148"};
	binoculars[] = {"rhsusf_bino_lerca_1200_tan"};
	compass[] = {"ItemCompass"};
	goggles[] = {"rhsusf_shemagh2_gogg_od"};
	gps[] = {"B_UavTerminal"};
	headgear[] = {"H_Watchcap_khk"};
	map[] = {"ItemMap"};
	nvgs[] = {""};
	watch[] = {"ChemicalDetector_01_watch_F"};
	insignia[] = {"Stargate03"};
	preLoadout = "(_this select 0) setVariable [""ACE_GForceCoef"",0];(_this select 0) setVariable [""ACE_medical_medicClass"", 1, true];";
};	

class US_AIRFORCE_STARGATE03_TL_WDL : US_AIRFORCE_STARGATE03_TL // Airforce Stargate 03 Team-Lead [WDL]
{
	uniform[] = {"rhs_uniform_bdu_erdl"};
	vest[] = {"V_PlateCarrier2_blk"};
	goggles[] = {"rhsusf_shemagh2_gogg_grn"};
	headgear[] = {"H_Watchcap_camo"};

};

class US_AIRFORCE_STARGATE03_RFL : US_AIRFORCE_STARGATE03_TL // Airforce Stargate 03 Member
{
	headgear[] = {"H_Watchcap_khk"};
	primary[] = {"rhs_weap_hk416d10_LMT_grip3","rhsusf_acc_eotech_552","rhsusf_acc_anpeq15A","rhs_mag_30Rnd_556x45_Mk318_PMAG"};
	magazines[] = {"rhsusf_mag_15Rnd_9x19_JHP",3,"rhs_mag_30Rnd_556x45_Mk318_PMAG",6};
	items[] = {"ACE_packingBandage",6,"ACE_quikclot",6,"ACE_tourniquet",2};
	binoculars[] = {""};
	preLoadout = "[(_this select 0),""Stargate03""] call bis_fnc_setUnitInsignia; (_this select 0) setVariable [""ACE_GForceCoef"",0]";
};

class US_AIRFORCE_STARGATE03_RFL_WDL : US_AIRFORCE_STARGATE03_RFL // Airforce Stargate 03 Member [WDL]
{
	uniform[] = {"rhs_uniform_bdu_erdl"};
	goggles[] = {"rhsusf_shemagh2_gogg_grn"};
	headgear[] = {"H_Watchcap_camo"};
};


class US_AIRFORCE_STARGATE03_MG : US_AIRFORCE_STARGATE03_RFL // Airforce Stargate 03 Member
{
	primary[] = {"rhs_weap_m27iar_grip3","rhsusf_acc_SF3P556","rhsusf_acc_anpeq15A", "rhsusf_acc_ACOG_3d", "rhs_mag_100Rnd_556x45_Mk318_cmag"};
	magazines[] = {"rhsusf_mag_15Rnd_9x19_JHP",3,"rhs_mag_100Rnd_556x45_Mk318_cmag","rhs_mag_30Rnd_556x45_Mk318_PMAG",6};
	headgear[] = {"H_Watchcap_khk"};
};

class US_AIRFORCE_STARGATE03_MG_WDL : US_AIRFORCE_STARGATE03_MG // Airforce Stargate 03 Member [WDL]
{
	uniform[] = {"rhs_uniform_bdu_erdl"};
	goggles[] = {"rhsusf_shemagh2_gogg_grn"};
	headgear[] = {"H_Watchcap_camo"};
};

class US_AIRFORCE_STARGATE23_TL_WDL : US_AIRFORCE_STARGATE03_TL_WDL // Airforce Stargate 23 Leader
{
	vest[] = {"V_PlateCarrier2_rgr_noflag_F"};
	goggles[] = {"rhsusf_shemagh2_gogg_grn"};
	primary[] = {"rhs_weap_m249_pip_L_para","rhsusf_acc_SF3P556","rhsusf_acc_anpeq15A", "rhsusf_acc_ACOG_MDO", "rhsusf_200Rnd_556x45_soft_pouch"};
	magazines[] = {"rhsusf_mag_15Rnd_9x19_JHP",3,"rhsusf_200Rnd_556x45_soft_pouch",5};
	headgear[] = {"rhsusf_ach_bare_wood_headset"};
	backpack[] = {"B_Kitbag_sgg"};
};

class US_AIRFORCE_STARGATE23_RFL_WDL : US_AIRFORCE_STARGATE23_TL_WDL // Airforce Stargate 23 Rifleman
{
	primary[] = {"rhs_weap_mk18_KAC_wd","rhsusf_acc_anpeq15A","rhsusf_acc_eotech_552","rhs_mag_30Rnd_556x45_Mk318_PMAG"};
	magazines[] = {"rhsusf_mag_15Rnd_9x19_JHP",3,"rhs_mag_30Rnd_556x45_Mk318_PMAG",5};
};

class US_AIRFORCE_STARGATE_MED_LEAD : CommonAmerica // Airforce Stargate Medic Team-Lead
{
	uniform[] = {"rhs_uniform_g3_mc"};
	vest[] = {"V_PlateCarrier2_blk"};
	backpack[] = {"B_Kitbag_rgr"};
	primary[] = {"rhs_weap_mk18_KAC_wd","rhsusf_acc_anpeq15A","rhsusf_acc_eotech_552","rhs_mag_30Rnd_556x45_Mk318_PMAG"};
	secondary[] = {"rhsusf_weap_m9","rhsusf_mag_15Rnd_9x19_JHP"};
	launcher[] = {""};
	magazines[] = {"rhsusf_mag_15Rnd_9x19_JHP",3,"rhs_mag_30Rnd_556x45_Mk318_PMAG",10};
	items[] = {"rhs_mag_m18_green",2,"ACE_surgicalKit",1,"ACE_fieldDressing",20,"ACE_elasticBandage",20,"ACE_quikclot",20,"ACE_packingBandage",20,"ACE_bloodIV",10,"ACE_epinephrine",16,"ACE_morphine",16,"ACE_tourniquet",8,"ACE_splint",10};
	lrradios[] =  {"ACRE_PRC148","ACRE_PRC148"};
	binoculars[] = {"rhsusf_bino_lerca_1200_tan"};
	compass[] = {"ItemCompass"};
	goggles[] = {"rhsusf_shemagh2_gogg_od"};
	gps[] = {"B_UavTerminal"};
	headgear[] = {"rhsusf_opscore_mar_ut_pelt"};
	map[] = {"ItemMap"};
	nvgs[] = {""};
	watch[] = {"ChemicalDetector_01_watch_F"};
	preLoadout = "(_this select 0) setVariable [""ACE_medical_medicClass"", 2, true]";
};	

class US_AIRFORCE_STARGATE_MED_LEAD_WDL : US_AIRFORCE_STARGATE_MED_LEAD 
{
	uniform[] = {"rhs_uniform_bdu_erdl"};
	headgear[] = {"rhsusf_opscore_mar_fg_pelt"};
}


class US_AIRFORCE_STARGATE_MED_NG : US_AIRFORCE_STARGATE_MED_LEAD // Airforce Stargate Medic (No-Gun)
{
	backpack[] = {"B_Kitbag_rgr"};
	headgear[] = {""};
	primary[] = {""};
	magazines[] = {""};
	goggles[] = {""};
	preLoadout = "(_this select 0) setVariable [""ACE_medical_medicClass"", 2, true]";
};

class US_AIRFORCE_STARGATE_MED_NG_WDL : US_AIRFORCE_STARGATE_MED_NG // Airforce Stargate Medic (No-Gun)
{
	uniform[] = {"rhs_uniform_bdu_erdl"};
	postLoadout = "(_this select 0) action [""SwitchWeapon"", (_this select 0), (_this select 0), 100];";
};


class US_AIRFORCE_STARGATE_JTAC : CommonAmerica // Airforce Stargate JTAC
{
	uniform[] = {"rhs_uniform_g3_mc"};
	vest[] = {"V_PlateCarrier2_blk"};
	backpack[] = {"rhsusf_falconii_mc"};
	primary[] = {"rhs_weap_m4_m203","rhsusf_acc_SF3P556","rhsusf_acc_anpeq15A","rhsusf_acc_ACOG_RMR","rhs_mag_30Rnd_556x45_Mk318_PMAG","rhs_mag_M397_HET"};
	secondary[] = {"rhsusf_weap_m9","rhsusf_mag_15Rnd_9x19_JHP"};
	launcher[] = {""};
	magazines[] = {"rhs_mag_30Rnd_556x45_Mk318_PMAG",6,"rhsusf_mag_15Rnd_9x19_JHP",2,"rhs_mag_M397_HET",2};
	items[] = {"ACE_quikclot",2,"ACE_fieldDressing",2,"ACE_packingBandage",2,"ACE_tourniquet",2,"Laserbatteries",1,"rhs_mag_m18_green",3,"rhs_mag_m18_purple",3,"rhs_mag_m18_red",3,"rhs_mag_m18_yellow",3,"rhs_mag_m713_Red",3,"rhs_mag_m716_yellow",3,"rhs_mag_m715_Green",3};
	lrradios[] =  {"ACRE_PRC148","ACRE_PRC148"};
	binoculars[] = {"Laserdesignator"};
	compass[] = {"ItemCompass"};
	goggles[] = {"rhsusf_shemagh2_gogg_od"};
	gps[] = {"B_UavTerminal"};
	headgear[] = {"rhsusf_opscore_fg_pelt_cam"};
	map[] = {"ItemMap"};
	nvgs[] = {"rhsusf_ANPVS_14"};
	watch[] = {"ChemicalDetector_01_watch_F"};
	preLoadout = "(_this select 0) setVariable [""ACE_GForceCoef"",0];(_this select 0) setVariable [""ACE_medical_medicClass"", 1, true];";
};	

class US_AIRFORCE_STARGATE_JTAC_WDL : US_AIRFORCE_STARGATE_JTAC
{
	uniform[] = {"rhs_uniform_bdu_erdl"};
	backpack[] = {"rhsusf_falconii"};
};