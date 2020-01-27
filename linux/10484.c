cocci_test_suite() {
	const struct si_powertune_data cocci_id/* drivers/gpu/drm/radeon/si_dpm.c 999 */;
	const struct si_cac_config_reg cocci_id/* drivers/gpu/drm/radeon/si_dpm.c 994 */[];
	struct seq_file *cocci_id/* drivers/gpu/drm/radeon/si_dpm.c 7093 */;
	struct radeon_clock_voltage_dependency_entry cocci_id/* drivers/gpu/drm/radeon/si_dpm.c 6962 */;
	struct si_power_info cocci_id/* drivers/gpu/drm/radeon/si_dpm.c 6911 */;
	struct pci_dev *cocci_id/* drivers/gpu/drm/radeon/si_dpm.c 6908 */;
	enum pci_bus_speed cocci_id/* drivers/gpu/drm/radeon/si_dpm.c 6907 */;
	struct ni_ps cocci_id/* drivers/gpu/drm/radeon/si_dpm.c 6854 */;
	union power_info *cocci_id/* drivers/gpu/drm/radeon/si_dpm.c 6818 */;
	struct _NonClockInfoArray *cocci_id/* drivers/gpu/drm/radeon/si_dpm.c 6817 */;
	struct _ClockInfoArray *cocci_id/* drivers/gpu/drm/radeon/si_dpm.c 6816 */;
	struct _StateArray *cocci_id/* drivers/gpu/drm/radeon/si_dpm.c 6815 */;
	union pplib_clock_info *cocci_id/* drivers/gpu/drm/radeon/si_dpm.c 6814 */;
	union pplib_power_state *cocci_id/* drivers/gpu/drm/radeon/si_dpm.c 6812 */;
	struct _ATOM_PPLIB_NONCLOCK_INFO *cocci_id/* drivers/gpu/drm/radeon/si_dpm.c 6811 */;
	struct radeon_mode_info *cocci_id/* drivers/gpu/drm/radeon/si_dpm.c 6810 */;
	union pplib_power_state {
		struct _ATOM_PPLIB_STATE v1;
		struct _ATOM_PPLIB_STATE_V2 v2;
	} cocci_id/* drivers/gpu/drm/radeon/si_dpm.c 6701 */;
	union pplib_clock_info {
		struct _ATOM_PPLIB_R600_CLOCK_INFO r600;
		struct _ATOM_PPLIB_RS780_CLOCK_INFO rs780;
		struct _ATOM_PPLIB_EVERGREEN_CLOCK_INFO evergreen;
		struct _ATOM_PPLIB_SUMO_CLOCK_INFO sumo;
		struct _ATOM_PPLIB_SI_CLOCK_INFO si;
	} cocci_id/* drivers/gpu/drm/radeon/si_dpm.c 6693 */;
	union power_info {
		struct _ATOM_POWERPLAY_INFO info;
		struct _ATOM_POWERPLAY_INFO_V2 info_2;
		struct _ATOM_POWERPLAY_INFO_V3 info_3;
		struct _ATOM_PPLIB_POWERPLAYTABLE pplib;
		struct _ATOM_PPLIB_POWERPLAYTABLE2 pplib2;
		struct _ATOM_PPLIB_POWERPLAYTABLE3 pplib3;
	} cocci_id/* drivers/gpu/drm/radeon/si_dpm.c 6684 */;
	struct radeon_ps cocci_id/* drivers/gpu/drm/radeon/si_dpm.c 6523 */;
	uint8_t cocci_id/* drivers/gpu/drm/radeon/si_dpm.c 6091 */;
	PP_SIslands_FanTable cocci_id/* drivers/gpu/drm/radeon/si_dpm.c 6033 */;
	enum radeon_pcie_gen cocci_id/* drivers/gpu/drm/radeon/si_dpm.c 5719 */;
	SMC_SIslands_MCRegisterSet cocci_id/* drivers/gpu/drm/radeon/si_dpm.c 5706 */;
	SMC_SIslands_MCRegisters cocci_id/* drivers/gpu/drm/radeon/si_dpm.c 5659 */;
	SMC_SIslands_MCRegisters *cocci_id/* drivers/gpu/drm/radeon/si_dpm.c 5639 */;
	SMC_SIslands_MCRegisterSet *cocci_id/* drivers/gpu/drm/radeon/si_dpm.c 5619 */;
	struct rv7xx_pl *cocci_id/* drivers/gpu/drm/radeon/si_dpm.c 5618 */;
	const struct si_mc_reg_entry *cocci_id/* drivers/gpu/drm/radeon/si_dpm.c 5603 */;
	struct atom_mc_reg_table cocci_id/* drivers/gpu/drm/radeon/si_dpm.c 5541 */;
	struct si_mc_reg_table *cocci_id/* drivers/gpu/drm/radeon/si_dpm.c 5507 */;
	struct atom_mc_reg_table *cocci_id/* drivers/gpu/drm/radeon/si_dpm.c 5506 */;
	u16 *cocci_id/* drivers/gpu/drm/radeon/si_dpm.c 5426 */;
	struct radeon_crtc *cocci_id/* drivers/gpu/drm/radeon/si_dpm.c 5319 */;
	SISLANDS_SMC_HW_PERFORMANCE_LEVEL cocci_id/* drivers/gpu/drm/radeon/si_dpm.c 5279 */;
	SISLANDS_SMC_SWSTATE cocci_id/* drivers/gpu/drm/radeon/si_dpm.c 5277 */;
	struct ni_power_info *cocci_id/* drivers/gpu/drm/radeon/si_dpm.c 5194 */;
	SISLANDS_SMC_SWSTATE *cocci_id/* drivers/gpu/drm/radeon/si_dpm.c 5191 */;
	const struct ni_ps *cocci_id/* drivers/gpu/drm/radeon/si_dpm.c 5152 */;
	const struct si_power_info *cocci_id/* drivers/gpu/drm/radeon/si_dpm.c 5150 */;
	struct si_ulv_param *cocci_id/* drivers/gpu/drm/radeon/si_dpm.c 5138 */;
	u8 cocci_id/* drivers/gpu/drm/radeon/si_dpm.c 4991 */;
	SISLANDS_SMC_HW_PERFORMANCE_LEVEL *cocci_id/* drivers/gpu/drm/radeon/si_dpm.c 4979 */;
	struct atom_mpll_param cocci_id/* drivers/gpu/drm/radeon/si_dpm.c 4891 */;
	SISLANDS_SMC_MCLK_VALUE *cocci_id/* drivers/gpu/drm/radeon/si_dpm.c 4876 */;
	struct radeon_atom_ss cocci_id/* drivers/gpu/drm/radeon/si_dpm.c 4824 */;
	struct atom_clock_dividers cocci_id/* drivers/gpu/drm/radeon/si_dpm.c 4788 */;
	struct si_power_info *cocci_id/* drivers/gpu/drm/radeon/si_dpm.c 4787 */;
	struct rv7xx_power_info *cocci_id/* drivers/gpu/drm/radeon/si_dpm.c 4786 */;
	SISLANDS_SMC_SCLK_VALUE *cocci_id/* drivers/gpu/drm/radeon/si_dpm.c 4784 */;
	SISLANDS_SMC_STATETABLE cocci_id/* drivers/gpu/drm/radeon/si_dpm.c 4778 */;
	SISLANDS_SMC_STATETABLE *cocci_id/* drivers/gpu/drm/radeon/si_dpm.c 4700 */;
	const struct si_ulv_param *cocci_id/* drivers/gpu/drm/radeon/si_dpm.c 4699 */;
	struct SISLANDS_SMC_VOLTAGE_VALUE *cocci_id/* drivers/gpu/drm/radeon/si_dpm.c 4354 */;
	u8 *cocci_id/* drivers/gpu/drm/radeon/si_dpm.c 4336 */;
	SMC_SIslands_MCArbDramTimingRegisterSet cocci_id/* drivers/gpu/drm/radeon/si_dpm.c 4325 */;
	unsigned int cocci_id/* drivers/gpu/drm/radeon/si_dpm.c 4321 */;
	SMC_SIslands_MCArbDramTimingRegisterSet *cocci_id/* drivers/gpu/drm/radeon/si_dpm.c 4295 */;
	const struct radeon_phase_shedding_limits_table *cocci_id/* drivers/gpu/drm/radeon/si_dpm.c 4210 */;
	SISLANDS_SMC_VOLTAGE_VALUE *cocci_id/* drivers/gpu/drm/radeon/si_dpm.c 4149 */;
	const struct atom_voltage_table *cocci_id/* drivers/gpu/drm/radeon/si_dpm.c 4039 */;
	struct evergreen_power_info *cocci_id/* drivers/gpu/drm/radeon/si_dpm.c 3961 */;
	struct atom_voltage_table *cocci_id/* drivers/gpu/drm/radeon/si_dpm.c 3939 */;
	struct radeon_clock_voltage_dependency_table *cocci_id/* drivers/gpu/drm/radeon/si_dpm.c 3938 */;
	enum r600_td cocci_id/* drivers/gpu/drm/radeon/si_dpm.c 3772 */;
	PPSMC_Msg cocci_id/* drivers/gpu/drm/radeon/si_dpm.c 3634 */;
	enum radeon_dpm_forced_level cocci_id/* drivers/gpu/drm/radeon/si_dpm.c 3402 */;
	enum radeon_dpm_auto_throttle_src cocci_id/* drivers/gpu/drm/radeon/si_dpm.c 3315 */;
	enum radeon_dpm_event_src cocci_id/* drivers/gpu/drm/radeon/si_dpm.c 3283 */;
	const struct si_dte_data cocci_id/* drivers/gpu/drm/radeon/si_dpm.c 310 */;
	int cocci_id/* drivers/gpu/drm/radeon/si_dpm.c 2979 */;
	u16 cocci_id/* drivers/gpu/drm/radeon/si_dpm.c 2976 */;
	u32 cocci_id/* drivers/gpu/drm/radeon/si_dpm.c 2975 */;
	bool cocci_id/* drivers/gpu/drm/radeon/si_dpm.c 2973 */;
	struct radeon_clock_and_voltage_limits *cocci_id/* drivers/gpu/drm/radeon/si_dpm.c 2972 */;
	struct ni_ps *cocci_id/* drivers/gpu/drm/radeon/si_dpm.c 2971 */;
	struct radeon_ps *cocci_id/* drivers/gpu/drm/radeon/si_dpm.c 2969 */;
	struct radeon_device *cocci_id/* drivers/gpu/drm/radeon/si_dpm.c 2968 */;
	void cocci_id/* drivers/gpu/drm/radeon/si_dpm.c 2968 */;
	struct radeon_vce_clock_voltage_dependency_table *cocci_id/* drivers/gpu/drm/radeon/si_dpm.c 2941 */;
	SMC_SISLANDS_SPLL_DIV_TABLE cocci_id/* drivers/gpu/drm/radeon/si_dpm.c 2863 */;
	SISLANDS_SMC_SCLK_VALUE cocci_id/* drivers/gpu/drm/radeon/si_dpm.c 2852 */;
	SMC_SISLANDS_SPLL_DIV_TABLE *cocci_id/* drivers/gpu/drm/radeon/si_dpm.c 2851 */;
	const struct si_cac_config_reg *cocci_id/* drivers/gpu/drm/radeon/si_dpm.c 2739 */;
	PP_SIslands_CacConfig cocci_id/* drivers/gpu/drm/radeon/si_dpm.c 2668 */;
	PP_SIslands_CacConfig *cocci_id/* drivers/gpu/drm/radeon/si_dpm.c 2580 */;
	struct radeon_cac_leakage_table *cocci_id/* drivers/gpu/drm/radeon/si_dpm.c 2538 */;
	Smc_SIslands_DTE_Configuration cocci_id/* drivers/gpu/drm/radeon/si_dpm.c 2488 */;
	Smc_SIslands_DTE_Configuration *cocci_id/* drivers/gpu/drm/radeon/si_dpm.c 2474 */;
	struct si_dte_data *cocci_id/* drivers/gpu/drm/radeon/si_dpm.c 2473 */;
	PPSMC_Result cocci_id/* drivers/gpu/drm/radeon/si_dpm.c 2444 */;
	SISLANDS_SMC_VOLTAGE_VALUE cocci_id/* drivers/gpu/drm/radeon/si_dpm.c 2295 */;
	u64 cocci_id/* drivers/gpu/drm/radeon/si_dpm.c 2258 */;
	const u16 cocci_id/* drivers/gpu/drm/radeon/si_dpm.c 2255 */;
	PP_SIslands_PAPMParameters cocci_id/* drivers/gpu/drm/radeon/si_dpm.c 2203 */;
	struct radeon_ppm_table *cocci_id/* drivers/gpu/drm/radeon/si_dpm.c 2166 */;
	PP_SIslands_PAPMParameters *cocci_id/* drivers/gpu/drm/radeon/si_dpm.c 2165 */;
	u32 *cocci_id/* drivers/gpu/drm/radeon/si_dpm.c 2127 */;
	u32 cocci_id/* drivers/gpu/drm/radeon/si_dpm.c 1845 */[5];
	const u32 cocci_id/* drivers/gpu/drm/radeon/si_dpm.c 1829 */;
	const struct ni_leakage_coeffients *cocci_id/* drivers/gpu/drm/radeon/si_dpm.c 1828 */;
	s32 cocci_id/* drivers/gpu/drm/radeon/si_dpm.c 1802 */;
	s64 cocci_id/* drivers/gpu/drm/radeon/si_dpm.c 1775 */;
	void cocci_id/* drivers/gpu/drm/radeon/si_dpm.c 1763 */(struct radeon_device *rdev);
	int cocci_id/* drivers/gpu/drm/radeon/si_dpm.c 1758 */(struct radeon_device *rdev,
							       u32 engine_clock,
							       SISLANDS_SMC_SCLK_VALUE *sclk);
	int cocci_id/* drivers/gpu/drm/radeon/si_dpm.c 1755 */(struct radeon_device *rdev,
							       struct rv7xx_pl *pl,
							       SISLANDS_SMC_HW_PERFORMANCE_LEVEL *level);
	int cocci_id/* drivers/gpu/drm/radeon/si_dpm.c 1753 */(struct radeon_device *rdev,
							       u16 reg_offset,
							       u32 value);
	int cocci_id/* drivers/gpu/drm/radeon/si_dpm.c 1750 */(struct radeon_device *rdev,
							       SISLANDS_SMC_VOLTAGE_VALUE *voltage,
							       u16 *std_voltage);
	int cocci_id/* drivers/gpu/drm/radeon/si_dpm.c 1747 */(struct radeon_device *rdev,
							       const struct atom_voltage_table *table,
							       u16 value,
							       SISLANDS_SMC_VOLTAGE_VALUE *voltage);
	void cocci_id/* drivers/gpu/drm/radeon/si_dpm.c 1745 */(struct radeon_device *rdev,
								bool enable);
	int cocci_id/* drivers/gpu/drm/radeon/si_dpm.c 1744 */(struct radeon_device *rdev);
	struct ni_ps *cocci_id/* drivers/gpu/drm/radeon/si_dpm.c 1742 */(struct radeon_ps *rps);
	struct ni_power_info *cocci_id/* drivers/gpu/drm/radeon/si_dpm.c 1741 */(struct radeon_device *rdev);
	struct evergreen_power_info *cocci_id/* drivers/gpu/drm/radeon/si_dpm.c 1740 */(struct radeon_device *rdev);
	struct rv7xx_power_info *cocci_id/* drivers/gpu/drm/radeon/si_dpm.c 1739 */(struct radeon_device *rdev);
	struct si_cac_config_reg cocci_id/* drivers/gpu/drm/radeon/si_dpm.c 1102 */[];
}
