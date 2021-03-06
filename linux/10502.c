cocci_test_suite() {
	struct radeon_clock_voltage_dependency_table *cocci_id/* drivers/gpu/drm/radeon/ni_dpm.c 992 */;
	const u32 *cocci_id/* drivers/gpu/drm/radeon/ni_dpm.c 909 */;
	u16 cocci_id/* drivers/gpu/drm/radeon/ni_dpm.c 794 */;
	bool cocci_id/* drivers/gpu/drm/radeon/ni_dpm.c 792 */;
	struct radeon_clock_and_voltage_limits *cocci_id/* drivers/gpu/drm/radeon/ni_dpm.c 791 */;
	struct ni_ps *cocci_id/* drivers/gpu/drm/radeon/ni_dpm.c 790 */;
	struct radeon_ps *cocci_id/* drivers/gpu/drm/radeon/ni_dpm.c 788 */;
	void cocci_id/* drivers/gpu/drm/radeon/ni_dpm.c 787 */;
	s32 cocci_id/* drivers/gpu/drm/radeon/ni_dpm.c 766 */;
	const struct ni_leakage_coeffients *cocci_id/* drivers/gpu/drm/radeon/ni_dpm.c 764 */;
	s64 cocci_id/* drivers/gpu/drm/radeon/ni_dpm.c 747 */;
	int cocci_id/* drivers/gpu/drm/radeon/ni_dpm.c 726 */(struct radeon_device *rdev);
	struct evergreen_power_info *cocci_id/* drivers/gpu/drm/radeon/ni_dpm.c 724 */(struct radeon_device *rdev);
	struct rv7xx_power_info *cocci_id/* drivers/gpu/drm/radeon/ni_dpm.c 723 */(struct radeon_device *rdev);
	struct seq_file *cocci_id/* drivers/gpu/drm/radeon/ni_dpm.c 4305 */;
	struct radeon_clock_voltage_dependency_entry cocci_id/* drivers/gpu/drm/radeon/ni_dpm.c 4082 */;
	struct ni_power_info cocci_id/* drivers/gpu/drm/radeon/ni_dpm.c 4054 */;
	struct ni_ps cocci_id/* drivers/gpu/drm/radeon/ni_dpm.c 4021 */;
	union power_info *cocci_id/* drivers/gpu/drm/radeon/ni_dpm.c 3992 */;
	union pplib_clock_info *cocci_id/* drivers/gpu/drm/radeon/ni_dpm.c 3991 */;
	union pplib_power_state *cocci_id/* drivers/gpu/drm/radeon/ni_dpm.c 3989 */;
	struct _ATOM_PPLIB_NONCLOCK_INFO *cocci_id/* drivers/gpu/drm/radeon/ni_dpm.c 3988 */;
	struct radeon_mode_info *cocci_id/* drivers/gpu/drm/radeon/ni_dpm.c 3987 */;
	union pplib_power_state {
		struct _ATOM_PPLIB_STATE v1;
		struct _ATOM_PPLIB_STATE_V2 v2;
	} cocci_id/* drivers/gpu/drm/radeon/ni_dpm.c 3889 */;
	union pplib_clock_info {
		struct _ATOM_PPLIB_R600_CLOCK_INFO r600;
		struct _ATOM_PPLIB_RS780_CLOCK_INFO rs780;
		struct _ATOM_PPLIB_EVERGREEN_CLOCK_INFO evergreen;
		struct _ATOM_PPLIB_SUMO_CLOCK_INFO sumo;
	} cocci_id/* drivers/gpu/drm/radeon/ni_dpm.c 3882 */;
	union power_info {
		struct _ATOM_POWERPLAY_INFO info;
		struct _ATOM_POWERPLAY_INFO_V2 info_2;
		struct _ATOM_POWERPLAY_INFO_V3 info_3;
		struct _ATOM_PPLIB_POWERPLAYTABLE pplib;
		struct _ATOM_PPLIB_POWERPLAYTABLE2 pplib2;
		struct _ATOM_PPLIB_POWERPLAYTABLE3 pplib3;
	} cocci_id/* drivers/gpu/drm/radeon/ni_dpm.c 3873 */;
	struct radeon_ps cocci_id/* drivers/gpu/drm/radeon/ni_dpm.c 3768 */;
	u32 cocci_id/* drivers/gpu/drm/radeon/ni_dpm.c 3442 */;
	struct rv7xx_power_info *cocci_id/* drivers/gpu/drm/radeon/ni_dpm.c 3441 */;
	struct radeon_device *cocci_id/* drivers/gpu/drm/radeon/ni_dpm.c 3439 */;
	int cocci_id/* drivers/gpu/drm/radeon/ni_dpm.c 3439 */;
	PP_NIslands_CACTABLES cocci_id/* drivers/gpu/drm/radeon/ni_dpm.c 3150 */;
	struct radeon_cac_leakage_table *cocci_id/* drivers/gpu/drm/radeon/ni_dpm.c 3097 */;
	PP_NIslands_CACTABLES *cocci_id/* drivers/gpu/drm/radeon/ni_dpm.c 3047 */;
	SMC_NIslands_MCRegisterSet cocci_id/* drivers/gpu/drm/radeon/ni_dpm.c 3042 */;
	SMC_NIslands_MCRegisters cocci_id/* drivers/gpu/drm/radeon/ni_dpm.c 3001 */;
	SMC_NIslands_MCRegisters *cocci_id/* drivers/gpu/drm/radeon/ni_dpm.c 2980 */;
	SMC_NIslands_MCRegisterSet *cocci_id/* drivers/gpu/drm/radeon/ni_dpm.c 2959 */;
	struct rv7xx_pl *cocci_id/* drivers/gpu/drm/radeon/ni_dpm.c 2958 */;
	struct ni_mc_reg_entry *cocci_id/* drivers/gpu/drm/radeon/ni_dpm.c 2943 */;
	struct atom_mc_reg_table cocci_id/* drivers/gpu/drm/radeon/ni_dpm.c 2879 */;
	struct ni_mc_reg_table *cocci_id/* drivers/gpu/drm/radeon/ni_dpm.c 2846 */;
	struct atom_mc_reg_table *cocci_id/* drivers/gpu/drm/radeon/ni_dpm.c 2845 */;
	u16 *cocci_id/* drivers/gpu/drm/radeon/ni_dpm.c 2768 */;
	NISLANDS_SMC_HW_PERFORMANCE_LEVEL cocci_id/* drivers/gpu/drm/radeon/ni_dpm.c 2690 */;
	NISLANDS_SMC_SWSTATE cocci_id/* drivers/gpu/drm/radeon/ni_dpm.c 2689 */;
	u8 cocci_id/* drivers/gpu/drm/radeon/ni_dpm.c 2646 */;
	NISLANDS_SMC_SWSTATE *cocci_id/* drivers/gpu/drm/radeon/ni_dpm.c 2626 */;
	PPSMC_Result cocci_id/* drivers/gpu/drm/radeon/ni_dpm.c 2599 */;
	const u32 cocci_id/* drivers/gpu/drm/radeon/ni_dpm.c 252 */[];
	NISLANDS_SMC_HW_PERFORMANCE_LEVEL *cocci_id/* drivers/gpu/drm/radeon/ni_dpm.c 2311 */;
	NISLANDS_SMC_MCLK_VALUE *cocci_id/* drivers/gpu/drm/radeon/ni_dpm.c 2163 */;
	SMC_NISLANDS_SPLL_DIV_TABLE cocci_id/* drivers/gpu/drm/radeon/ni_dpm.c 2107 */;
	NISLANDS_SMC_SCLK_VALUE cocci_id/* drivers/gpu/drm/radeon/ni_dpm.c 2095 */;
	SMC_NISLANDS_SPLL_DIV_TABLE *cocci_id/* drivers/gpu/drm/radeon/ni_dpm.c 2094 */;
	struct radeon_atom_ss cocci_id/* drivers/gpu/drm/radeon/ni_dpm.c 2041 */;
	struct atom_clock_dividers cocci_id/* drivers/gpu/drm/radeon/ni_dpm.c 2004 */;
	NISLANDS_SMC_SCLK_VALUE *cocci_id/* drivers/gpu/drm/radeon/ni_dpm.c 2000 */;
	NISLANDS_SMC_STATETABLE cocci_id/* drivers/gpu/drm/radeon/ni_dpm.c 1948 */;
	NISLANDS_SMC_STATETABLE *cocci_id/* drivers/gpu/drm/radeon/ni_dpm.c 1946 */;
	const struct ni_cac_weights cocci_id/* drivers/gpu/drm/radeon/ni_dpm.c 181 */;
	struct NISLANDS_SMC_VOLTAGE_VALUE *cocci_id/* drivers/gpu/drm/radeon/ni_dpm.c 1673 */;
	u8 *cocci_id/* drivers/gpu/drm/radeon/ni_dpm.c 1656 */;
	SMC_NIslands_MCArbDramTimingRegisterSet cocci_id/* drivers/gpu/drm/radeon/ni_dpm.c 1644 */;
	unsigned int cocci_id/* drivers/gpu/drm/radeon/ni_dpm.c 1639 */;
	SMC_NIslands_MCArbDramTimingRegisterSet *cocci_id/* drivers/gpu/drm/radeon/ni_dpm.c 1617 */;
	u32 *cocci_id/* drivers/gpu/drm/radeon/ni_dpm.c 1437 */;
	u64 cocci_id/* drivers/gpu/drm/radeon/ni_dpm.c 1397 */;
	NISLANDS_SMC_VOLTAGE_VALUE cocci_id/* drivers/gpu/drm/radeon/ni_dpm.c 1394 */;
	struct ni_power_info *cocci_id/* drivers/gpu/drm/radeon/ni_dpm.c 1388 */;
	struct evergreen_power_info *cocci_id/* drivers/gpu/drm/radeon/ni_dpm.c 1387 */;
	NISLANDS_SMC_VOLTAGE_VALUE *cocci_id/* drivers/gpu/drm/radeon/ni_dpm.c 1345 */;
	unsigned char cocci_id/* drivers/gpu/drm/radeon/ni_dpm.c 1276 */;
	struct atom_voltage_table *cocci_id/* drivers/gpu/drm/radeon/ni_dpm.c 1260 */;
	enum radeon_dpm_forced_level cocci_id/* drivers/gpu/drm/radeon/ni_dpm.c 1055 */;
	PPSMC_Msg cocci_id/* drivers/gpu/drm/radeon/ni_dpm.c 1039 */;
}
