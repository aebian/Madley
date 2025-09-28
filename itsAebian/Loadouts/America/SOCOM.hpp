// United States SOCOM - File

class US_DELTA_OPERATOR : US_ARMY_DEFAULT_OCP // 1st SFOD-D Operator
{
	uniform[] = {"U_B_CombatUniform_mcam"};
	vest[] = {"V_PlateCarrier2_blk"};
	backpack[] = {""};
	primary[] = {"rhs_weap_mk18_m320","rhsusf_acc_rotex5_grey","rhsusf_acc_anpeq15side_bk","rhsusf_acc_eotech_552","rhs_mag_30Rnd_556x45_Mk318_SCAR_Ranger","rhs_mag_M397_HET"};
	secondary[] = {"rhsusf_weap_m1911a1"};
	launcher[] = {""};
	magazines[] = {"rhsusf_mag_7x45acp_MHP",3,"rhs_mag_30Rnd_556x45_Mk318_SCAR_Ranger",4,"rhs_mag_M397_HET",3};
	items[] = {"ACE_quikclot",2,"ACE_fieldDressing",2,"ACE_packingBandage",2,"ACE_tourniquet",2,"rhs_mag_m67",3,"rhs_mag_m18_purple",2};
	lrradios[] =  {"ACRE_PRC148"};
	binoculars[] = {"rhsusf_bino_m24_ARD"};
	compass[] = {"ItemCompass"};
	goggles[] = {""};
	gps[] = {"ItemGPS"};
	headgear[] = {"rhsusf_protech_helmet_rhino_ess","rhsusf_protech_helmet_ess"};
	map[] = {"ItemMap"};
	nvgs[] = {"rhsusf_ANPVS_15"};
	watch[] = {"ACE_Altimeter"};
	preLoadout = "(_this select 0) setVariable [""ACE_GForceCoef"",0];(_this select 0) setVariable [""ACE_medical_medicClass"",1,true]";
};

class US_DELTA_OPERATOR_AT : US_DELTA_OPERATOR // 1st SFOD-D Operator (with AT)
{
	primary[] = {"rhs_weap_mk18_KAC_bk","rhsusf_acc_rotex5_grey","rhsusf_acc_anpeq15side_bk","rhsusf_acc_eotech_552","rhs_mag_30Rnd_556x45_Mk318_SCAR_Ranger"};
	magazines[] = {"rhsusf_mag_7x45acp_MHP",3,"rhs_mag_30Rnd_556x45_Mk318_SCAR_Ranger",5};
	launcher[] = {"rhs_weap_m72a7"};
};

class US_DELTA_SPOTTER : US_DELTA_OPERATOR // 1st SFOD-D Spotter
{
	primary[] = {"rhs_weap_mk18_KAC_bk","rhsusf_acc_rotex5_grey","rhsusf_acc_anpeq15side_bk","optic_MRCO","rhs_mag_30Rnd_556x45_Mk318_SCAR_Ranger"};
	magazines[] = {"rhsusf_mag_7x45acp_MHP",3,"rhs_mag_30Rnd_556x45_Mk318_SCAR_Ranger",12};
	items[] = {"ACE_quikclot",2,"ACE_fieldDressing",2,"ACE_packingBandage",2,"ACE_tourniquet",2,"rhs_mag_m67",3,"rhs_mag_m18_purple",1};
	binoculars[] = {"rhsusf_bino_lerca_1200_tan"};
	headgear[] = {"rhsusf_protech_helmet_ess"};
};

class US_DELTA_SNIPER : US_DELTA_SPOTTER // 1st SFOD-D Sniper
{
	primary[] = {"rhs_weap_m14_socom_rail","rhsusf_acc_m14_flashsuppresor","rhsusf_acc_ACOG_RMR_3d","rhsusf_20Rnd_762x51_m118_special_Mag"};
	magazines[] = {"rhsusf_mag_7x45acp_MHP",3,"rhsusf_20Rnd_762x51_m118_special_Mag",8};
	items[] = {"rhsusf_acc_aac_m14dcqd_silencer","ACE_quikclot",2,"ACE_fieldDressing",2,"ACE_packingBandage",2,"ACE_tourniquet",2,"rhs_mag_m18_purple",1};
};

class US_SOCOM_CBRN_OP : US_ARMY_DEFAULT_OCP // SOCOM CBRN Operator
{
	uniform[] = {"U_B_CBRN_Suit_01_Wdl_F"};
	vest[] = {"V_PlateCarrier2_wdl"};
	backpack[] = {"B_CombinationUnitRespirator_01_F"};
	primary[] = {"rhs_weap_hk416d10_LMT_wd_grip3","rhsusf_acc_nt4_black","rhsusf_acc_anpeq15side_illum","rhsusf_acc_g33_xps3","rhs_acc_grip_ffg2","rhs_mag_30Rnd_556x45_Mk318_SCAR_Ranger"};
	secondary[] = {"rhsusf_weap_m1911a1","rhsusf_mag_7x45acp_MHP"};
	launcher[] = {""};
	magazines[] = {"rhsusf_mag_7x45acp_MHP",3,"rhs_mag_30Rnd_556x45_Mk318_SCAR_Ranger",9};
	items[] = {"ACE_quikclot",2,"ACE_fieldDressing",2,"ACE_packingBandage",2,"ACE_tourniquet",2,"rhs_mag_m67",4,"rhs_mag_m18_purple",2};
	lrradios[] =  {"ACRE_PRC148"};
	binoculars[] = {"rhsusf_bino_m24_ARD"};
	compass[] = {"ItemCompass"};
	goggles[] = {"G_Balaclava_TI_G_tna_F"};
	gps[] = {"ItemGPS"};
	headgear[] = {"H_HelmetB_TI_tna_F"};
	map[] = {"ItemMap"};
	nvgs[] = {"NVGogglesB_grn_F"};
	watch[] = {"ChemicalDetector_01_watch_F"};
	preLoadout = "(_this select 0) setVariable [""ACE_GForceCoef"",0];(_this select 0) setVariable [""ACE_medical_medicClass"",1,true]";
};

// US Army Rangers // 

class US_ARMY_RANGER_CMDR : US_ARMY_DEFAULT_UCP // US Ranger Commander
{
	uniform[] = {"rhs_uniform_g3_mc"};
	vest[] = {"rhsusf_mbav_medic"};
	backpack[] = {""};
	primary[] = {""};
	secondary[] = {"hgun_Pistol_heavy_01_green_F","optic_MRD_black"};
	launcher[] = {""};
	magazines[] = {"11Rnd_45ACP_Mag",4 };
	items[] += {"ACE_EarPlugs",1 };
	binoculars[] = {"rhsusf_bino_lerca_1200_tan"};
	compass[] = {"ItemCompass"};
	goggles[] = {"rhs_googles_black"};
	gps[] = {"ItemGPS"};
	headgear[] = {"rhssaf_beret_green"};
	map[] = {"ItemMap"};
	nvgs[] = {""};
	watch[] = {"ACE_Altimeter"};
	insignia[] = {"Spetsnaz223rdDetachment"};
};

class US_ARMY_RANGER_CMDR_ALT : US_ARMY_RANGER_CMDR 
{
	primary[] = {"rhs_weap_m249_pip_L_vfg","rhsusf_acc_saw_bipod","rhsusf_acc_anpeq15side","rhsusf_acc_eotech_552_d","rhsusf_200Rnd_556x45_soft_pouch"};
	magazines[] += {"rhsusf_200Rnd_556x45_soft_pouch",3 };
};

class US_ARMY_RANGER_LEAD : US_ARMY_OPL // Army [Element Leader]
{
	uniform[] = {"rhs_uniform_g3_mc"};
	vest[] = {"rhsusf_mbav_light"};
	backpack[] = {"rhsusf_assault_eagleaiii_ocp"};
	primary[] = {"rhs_weap_SCARH_FDE_CQC","rhsusf_acc_anpeq15side","rhsusf_acc_eotech_552_d","rhsusf_acc_grip2_tan" ,"rhs_mag_20Rnd_SCAR_762x51_m61_ap"};
	secondary[] = {"hgun_Pistol_heavy_01_F","acc_flashlight_pistol"};
	magazines[] = {"rhs_mag_20Rnd_SCAR_762x51_m61_ap",7,"11Rnd_45ACP_Mag",3,"Laserbatteries"};
	items[] += {"ACE_EarPlugs",1 };
	binoculars[] = {"Laserdesignator_03"};
	goggles[] = {"rhsusf_shemagh2_gogg_tan"};
	headgear[] = {"rhsusf_mich_bare_norotos_alt","rhsusf_mich_bare_norotos_alt_tan","rhsusf_mich_bare_norotos_alt_semi"};
	nvgs[] = {"O_NVGoggles_ghex_F"};
	insignia[] = {"Spetsnaz223rdDetachment"};
};

class US_ARMY_RANGER_RFL : US_ARMY_RANGER_LEAD // US Army Ranger (Rifleman)
{
	vest[] = {"rhsusf_mbav_rifleman"};
	backpack[] = {""};
	magazines[] = {"rhs_mag_20Rnd_SCAR_762x51_m61_ap",7,"11Rnd_45ACP_Mag",3 };
	items[] = {"ACE_fieldDressing",2,"ACE_packingBandage",2,"ACE_tourniquet",1,"rhs_mag_m18_green",1,"rhs_mag_m18_red",2};
	binoculars[] = {"rhsusf_bino_lerca_1200_tan"};
	insignia[] = {"Spetsnaz223rdDetachment"};
};

class US_ARMY_RANGER_ARM : US_ARMY_RANGER_RFL 
{
	vest[] = {"rhsusf_mbav_mg"};
	primary[] = {"rhs_weap_m249_pip_L_vfg","rhsusf_acc_saw_bipod","rhsusf_acc_anpeq15side","rhsusf_acc_eotech_552_d","rhsusf_200Rnd_556x45_soft_pouch"};
	backpack[] = {"B_Kitbag_tan"};
	magazines[] = {"rhsusf_200Rnd_556x45_soft_pouch",6,"11Rnd_45ACP_Mag",4};
};

class US_ARMY_RANGER_ARM_NEW : US_ARMY_RANGER_ARM 
{
	primary[] = {"MMG_02_sand_F","bipod_01_F_blk","rhsusf_acc_anpeq15side","optic_ERCO_snd_F","130Rnd_338_Mag"};
	magazines[] = {"130Rnd_338_Mag",4,"11Rnd_45ACP_Mag",2 };
	backpack[] = {"B_Kitbag_tan"};
};

class US_ARMY_RANGER_MED : US_ARMY_RANGER_RFL // US Army Ranger (Medic)
{
	vest[] = {"rhsusf_mbav_medic"};
	backpack[] = {"B_Kitbag_cbr"};
	primary[] = {"rhs_weap_mk18_KAC_wd","muzzle_snds_m_khk_F","acc_pointer_IR","rhsusf_acc_compm4","rhsusf_acc_grip2_wd","rhs_mag_30Rnd_556x45_Mk318_SCAR_Ranger"};
	magazines[] = {"rhs_mag_30Rnd_556x45_Mk318_SCAR_Ranger",7,"11Rnd_45ACP_Mag",2 };
	items[] += {"ACE_surgicalKit","ACE_fieldDressing",20,"ACE_elasticBandage",20,"ACE_quikclot",20,"ACE_packingBandage",20,"ACE_bloodIV",10,"ACE_epinephrine",16,"ACE_morphine",16,"ACE_tourniquet",8,"ACE_splint",6,"rhs_mag_m18_green",6 };
	preLoadout = "(_this select 0) setVariable [""ACE_medical_medicClass"",2,true]";
};

class US_ARMY_RANGER_MED_NG : US_ARMY_RANGER_MED // US Army Ranger (Medic,No-Gun [Main])
{
	primary[] = {""};
	goggles[] = {""};
	postLoadout = "(_this select 0) action ['SwitchWeapon',(_this select 0),(_this select 0),1]";
};

class US_ARMY_RANGER_MXM : US_ARMY_RANGER_RFL // US Army Ranger (Marksman)
{
	uniform[] = {"rhs_uniform_g3_mc"};
	vest[] = {"rhsusf_mbav_rifleman"};
	backpack[] = {""};
	primary[] = {"rhs_weap_SCARH_FDE_LB_grip3","rhsusf_acc_anpeq15side","rhsusf_acc_su230_mrds_c","rhsusf_acc_grip2_tan","rhs_mag_20Rnd_SCAR_762x51_m61_ap"};
	launcher[] = {""};
	magazines[] = {"rhs_mag_20Rnd_SCAR_762x51_m61_ap",7,"11Rnd_45ACP_Mag",3 };
	items[] += {};
};

class US_ARMY_RANGER_SNP : US_ARMY_RANGER_RFL // US Army Ranger (Sniper)
{
	uniform[] = {"rhs_uniform_g3_mc"};
	vest[] = {"rhsusf_mbav_rifleman"};
	bpcontent[] = {"rhsusf_acc_eotech_552_d",1,"ACE_CableTie",2,"ACE_bodyBag_blue",2,"ACE_Kestrel4500",1,"ACE_MapTools",1,"ACE_RangeCard",1,"ACE_PlottingBoard",1,"ACE_rope6",1,"ACE_SpottingScope",1,"ACE_Flashlight_KSF1",1,"ACE_DAGR",1,"ACE_ATragMX",1,"ACE_EntrenchingTool",1};
	primary[] = {"rhs_weap_XM2010_sa","rhsusf_acc_M2010S","rhsusf_acc_anpeq15side","rhsusf_acc_M8541_wd","bipod_02_F_hex","rhsusf_5Rnd_300winmag_xm2010"};
	launcher[] = {""};
	magazines[] = {"rhsusf_5Rnd_300winmag_xm2010",15,"11Rnd_45ACP_Mag",4};
	items[] += {};
};

class US_ARMY_RANGER_SNP_AM : US_ARMY_RANGER_SNP // US Army Ranger (Sniper - Anti Material)
{
	primary[] = {"rhs_weap_M107_w","rhsusf_acc_M8541_mrds","rhsusf_mag_10Rnd_STD_50BMG_mk211"};
	magazines[] = {"rhsusf_mag_10Rnd_STD_50BMG_mk211",5,"rhsusf_mag_10Rnd_STD_50BMG_M33",1,"11Rnd_45ACP_Mag",3 };
};