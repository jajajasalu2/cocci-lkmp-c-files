cocci_test_suite() {
	union pplib_clock_info {
		struct _ATOM_PPLIB_R600_CLOCK_INFO r600;
		struct _ATOM_PPLIB_RS780_CLOCK_INFO rs780;
		struct _ATOM_PPLIB_EVERGREEN_CLOCK_INFO evergreen;
		struct _ATOM_PPLIB_SUMO_CLOCK_INFO sumo;
		struct _ATOM_PPLIB_SI_CLOCK_INFO si;
	} cocci_id/* drivers/gpu/drm/amd/amdgpu/si_dpm.c 91 */;
	union fan_info {
		struct _ATOM_PPLIB_FANTABLE fan;
		struct _ATOM_PPLIB_FANTABLE2 fan2;
		struct _ATOM_PPLIB_FANTABLE3 fan3;
	} cocci_id/* drivers/gpu/drm/amd/amdgpu/si_dpm.c 85 */;
	const struct amdgpu_irq_src_funcs cocci_id/* drivers/gpu/drm/amd/amdgpu/si_dpm.c 8071 */;
	const struct amdgpu_ip_block_version cocci_id/* drivers/gpu/drm/amd/amdgpu/si_dpm.c 8042 */;
	const struct amd_ip_funcs cocci_id/* drivers/gpu/drm/amd/amdgpu/si_dpm.c 8025 */;
	uint32_t *cocci_id/* drivers/gpu/drm/amd/amdgpu/si_dpm.c 8003 */;
	uint32_t cocci_id/* drivers/gpu/drm/amd/amdgpu/si_dpm.c 7990 */;
	int *cocci_id/* drivers/gpu/drm/amd/amdgpu/si_dpm.c 7984 */;
	bool *cocci_id/* drivers/gpu/drm/amd/amdgpu/si_dpm.c 7942 */;
	void *cocci_id/* drivers/gpu/drm/amd/amdgpu/si_dpm.c 7939 */;
	const struct rv7xx_pl *cocci_id/* drivers/gpu/drm/amd/amdgpu/si_dpm.c 7929 */;
	enum amd_powergating_state cocci_id/* drivers/gpu/drm/amd/amdgpu/si_dpm.c 7845 */;
	enum amd_clockgating_state cocci_id/* drivers/gpu/drm/amd/amdgpu/si_dpm.c 7839 */;
	char cocci_id/* drivers/gpu/drm/amd/amdgpu/si_dpm.c 7611 */[30];
	const char *cocci_id/* drivers/gpu/drm/amd/amdgpu/si_dpm.c 7610 */;
	struct amdgpu_iv_entry *cocci_id/* drivers/gpu/drm/amd/amdgpu/si_dpm.c 7554 */;
	struct amdgpu_irq_src *cocci_id/* drivers/gpu/drm/amd/amdgpu/si_dpm.c 7553 */;
	enum amdgpu_interrupt_state cocci_id/* drivers/gpu/drm/amd/amdgpu/si_dpm.c 7507 */;
	unsigned cocci_id/* drivers/gpu/drm/amd/amdgpu/si_dpm.c 7506 */;
	struct seq_file *cocci_id/* drivers/gpu/drm/amd/amdgpu/si_dpm.c 7483 */;
	union power_info {
		struct _ATOM_POWERPLAY_INFO info;
		struct _ATOM_POWERPLAY_INFO_V2 info_2;
		struct _ATOM_POWERPLAY_INFO_V3 info_3;
		struct _ATOM_PPLIB_POWERPLAYTABLE pplib;
		struct _ATOM_PPLIB_POWERPLAYTABLE2 pplib2;
		struct _ATOM_PPLIB_POWERPLAYTABLE3 pplib3;
		struct _ATOM_PPLIB_POWERPLAYTABLE4 pplib4;
		struct _ATOM_PPLIB_POWERPLAYTABLE5 pplib5;
	} cocci_id/* drivers/gpu/drm/amd/amdgpu/si_dpm.c 74 */;
	struct amdgpu_clock_voltage_dependency_entry cocci_id/* drivers/gpu/drm/amd/amdgpu/si_dpm.c 7352 */;
	struct si_power_info cocci_id/* drivers/gpu/drm/amd/amdgpu/si_dpm.c 7314 */;
	struct si_ps cocci_id/* drivers/gpu/drm/amd/amdgpu/si_dpm.c 7259 */;
	union power_info *cocci_id/* drivers/gpu/drm/amd/amdgpu/si_dpm.c 7223 */;
	struct _NonClockInfoArray *cocci_id/* drivers/gpu/drm/amd/amdgpu/si_dpm.c 7222 */;
	struct _ClockInfoArray *cocci_id/* drivers/gpu/drm/amd/amdgpu/si_dpm.c 7221 */;
	struct _StateArray *cocci_id/* drivers/gpu/drm/amd/amdgpu/si_dpm.c 7220 */;
	union pplib_clock_info *cocci_id/* drivers/gpu/drm/amd/amdgpu/si_dpm.c 7219 */;
	union pplib_power_state *cocci_id/* drivers/gpu/drm/amd/amdgpu/si_dpm.c 7217 */;
	struct _ATOM_PPLIB_NONCLOCK_INFO *cocci_id/* drivers/gpu/drm/amd/amdgpu/si_dpm.c 7216 */;
	struct amdgpu_mode_info *cocci_id/* drivers/gpu/drm/amd/amdgpu/si_dpm.c 7215 */;
	union pplib_power_state {
		struct _ATOM_PPLIB_STATE v1;
		struct _ATOM_PPLIB_STATE_V2 v2;
	} cocci_id/* drivers/gpu/drm/amd/amdgpu/si_dpm.c 7208 */;
	const struct amd_pm_funcs cocci_id/* drivers/gpu/drm/amd/amdgpu/si_dpm.c 72 */;
	struct amdgpu_ps cocci_id/* drivers/gpu/drm/amd/amdgpu/si_dpm.c 6942 */;
	uint8_t cocci_id/* drivers/gpu/drm/amd/amdgpu/si_dpm.c 6518 */;
	PP_SIslands_FanTable cocci_id/* drivers/gpu/drm/amd/amdgpu/si_dpm.c 6468 */;
	enum amdgpu_pcie_gen cocci_id/* drivers/gpu/drm/amd/amdgpu/si_dpm.c 6171 */;
	SMC_SIslands_MCRegisterSet cocci_id/* drivers/gpu/drm/amd/amdgpu/si_dpm.c 6159 */;
	SMC_SIslands_MCRegisters cocci_id/* drivers/gpu/drm/amd/amdgpu/si_dpm.c 6113 */;
	SMC_SIslands_MCRegisters *cocci_id/* drivers/gpu/drm/amd/amdgpu/si_dpm.c 6093 */;
	SMC_SIslands_MCRegisterSet *cocci_id/* drivers/gpu/drm/amd/amdgpu/si_dpm.c 6073 */;
	const struct si_mc_reg_entry *cocci_id/* drivers/gpu/drm/amd/amdgpu/si_dpm.c 6057 */;
	struct atom_mc_reg_table cocci_id/* drivers/gpu/drm/amd/amdgpu/si_dpm.c 5995 */;
	struct si_mc_reg_table *cocci_id/* drivers/gpu/drm/amd/amdgpu/si_dpm.c 5961 */;
	struct atom_mc_reg_table *cocci_id/* drivers/gpu/drm/amd/amdgpu/si_dpm.c 5960 */;
	struct amdgpu_crtc *cocci_id/* drivers/gpu/drm/amd/amdgpu/si_dpm.c 5779 */;
	SISLANDS_SMC_HW_PERFORMANCE_LEVEL cocci_id/* drivers/gpu/drm/amd/amdgpu/si_dpm.c 5741 */;
	SISLANDS_SMC_SWSTATE cocci_id/* drivers/gpu/drm/amd/amdgpu/si_dpm.c 5739 */;
	SISLANDS_SMC_SWSTATE *cocci_id/* drivers/gpu/drm/amd/amdgpu/si_dpm.c 5653 */;
	const struct si_ps *cocci_id/* drivers/gpu/drm/amd/amdgpu/si_dpm.c 5614 */;
	const struct si_power_info *cocci_id/* drivers/gpu/drm/amd/amdgpu/si_dpm.c 5612 */;
	struct si_ulv_param *cocci_id/* drivers/gpu/drm/amd/amdgpu/si_dpm.c 5600 */;
	SISLANDS_SMC_HW_PERFORMANCE_LEVEL *cocci_id/* drivers/gpu/drm/amd/amdgpu/si_dpm.c 5441 */;
	struct atom_mpll_param cocci_id/* drivers/gpu/drm/amd/amdgpu/si_dpm.c 5353 */;
	SISLANDS_SMC_MCLK_VALUE *cocci_id/* drivers/gpu/drm/amd/amdgpu/si_dpm.c 5338 */;
	struct atom_clock_dividers cocci_id/* drivers/gpu/drm/amd/amdgpu/si_dpm.c 5250 */;
	struct si_power_info *cocci_id/* drivers/gpu/drm/amd/amdgpu/si_dpm.c 5249 */;
	SISLANDS_SMC_SCLK_VALUE *cocci_id/* drivers/gpu/drm/amd/amdgpu/si_dpm.c 5246 */;
	SISLANDS_SMC_STATETABLE cocci_id/* drivers/gpu/drm/amd/amdgpu/si_dpm.c 5240 */;
	SISLANDS_SMC_STATETABLE *cocci_id/* drivers/gpu/drm/amd/amdgpu/si_dpm.c 5162 */;
	const struct si_ulv_param *cocci_id/* drivers/gpu/drm/amd/amdgpu/si_dpm.c 5161 */;
	struct SISLANDS_SMC_VOLTAGE_VALUE *cocci_id/* drivers/gpu/drm/amd/amdgpu/si_dpm.c 4818 */;
	u8 *cocci_id/* drivers/gpu/drm/amd/amdgpu/si_dpm.c 4800 */;
	SMC_SIslands_MCArbDramTimingRegisterSet cocci_id/* drivers/gpu/drm/amd/amdgpu/si_dpm.c 4789 */;
	SMC_SIslands_MCArbDramTimingRegisterSet *cocci_id/* drivers/gpu/drm/amd/amdgpu/si_dpm.c 4759 */;
	const struct amdgpu_phase_shedding_limits_table *cocci_id/* drivers/gpu/drm/amd/amdgpu/si_dpm.c 4672 */;
	SISLANDS_SMC_VOLTAGE_VALUE *cocci_id/* drivers/gpu/drm/amd/amdgpu/si_dpm.c 4611 */;
	const struct atom_voltage_table *cocci_id/* drivers/gpu/drm/amd/amdgpu/si_dpm.c 4501 */;
	enum r600_td cocci_id/* drivers/gpu/drm/amd/amdgpu/si_dpm.c 4237 */;
	PPSMC_Msg cocci_id/* drivers/gpu/drm/amd/amdgpu/si_dpm.c 4094 */;
	const struct si_dte_data cocci_id/* drivers/gpu/drm/amd/amdgpu/si_dpm.c 404 */;
	enum amd_dpm_forced_level cocci_id/* drivers/gpu/drm/amd/amdgpu/si_dpm.c 3861 */;
	enum amdgpu_dpm_auto_throttle_src cocci_id/* drivers/gpu/drm/amd/amdgpu/si_dpm.c 3774 */;
	enum amdgpu_dpm_event_src cocci_id/* drivers/gpu/drm/amd/amdgpu/si_dpm.c 3742 */;
	struct amdgpu_clock_and_voltage_limits *cocci_id/* drivers/gpu/drm/amd/amdgpu/si_dpm.c 3431 */;
	struct amdgpu_atom_ss cocci_id/* drivers/gpu/drm/amd/amdgpu/si_dpm.c 3413 */;
	struct rv7xx_power_info *cocci_id/* drivers/gpu/drm/amd/amdgpu/si_dpm.c 3412 */;
	u8 cocci_id/* drivers/gpu/drm/amd/amdgpu/si_dpm.c 3394 */;
	bool cocci_id/* drivers/gpu/drm/amd/amdgpu/si_dpm.c 3379 */;
	struct evergreen_power_info *cocci_id/* drivers/gpu/drm/amd/amdgpu/si_dpm.c 3318 */;
	u16 *cocci_id/* drivers/gpu/drm/amd/amdgpu/si_dpm.c 3316 */;
	u16 cocci_id/* drivers/gpu/drm/amd/amdgpu/si_dpm.c 3315 */;
	struct rv7xx_pl *cocci_id/* drivers/gpu/drm/amd/amdgpu/si_dpm.c 3289 */;
	const struct amdgpu_clock_and_voltage_limits *cocci_id/* drivers/gpu/drm/amd/amdgpu/si_dpm.c 3288 */;
	struct amdgpu_device *cocci_id/* drivers/gpu/drm/amd/amdgpu/si_dpm.c 3287 */;
	void cocci_id/* drivers/gpu/drm/amd/amdgpu/si_dpm.c 3287 */;
	u32 cocci_id/* drivers/gpu/drm/amd/amdgpu/si_dpm.c 3268 */;
	struct amdgpu_clock_voltage_dependency_table *cocci_id/* drivers/gpu/drm/amd/amdgpu/si_dpm.c 3267 */;
	u32 *cocci_id/* drivers/gpu/drm/amd/amdgpu/si_dpm.c 3251 */;
	unsigned int cocci_id/* drivers/gpu/drm/amd/amdgpu/si_dpm.c 3222 */;
	struct amdgpu_clock_array *cocci_id/* drivers/gpu/drm/amd/amdgpu/si_dpm.c 3219 */;
	struct atom_voltage_table *cocci_id/* drivers/gpu/drm/amd/amdgpu/si_dpm.c 3208 */;
	struct si_ps *cocci_id/* drivers/gpu/drm/amd/amdgpu/si_dpm.c 3194 */;
	struct amdgpu_ps *cocci_id/* drivers/gpu/drm/amd/amdgpu/si_dpm.c 3191 */;
	int cocci_id/* drivers/gpu/drm/amd/amdgpu/si_dpm.c 3081 */;
	struct amdgpu_vce_clock_voltage_dependency_table *cocci_id/* drivers/gpu/drm/amd/amdgpu/si_dpm.c 3040 */;
	SMC_SISLANDS_SPLL_DIV_TABLE cocci_id/* drivers/gpu/drm/amd/amdgpu/si_dpm.c 2962 */;
	SISLANDS_SMC_SCLK_VALUE cocci_id/* drivers/gpu/drm/amd/amdgpu/si_dpm.c 2951 */;
	SMC_SISLANDS_SPLL_DIV_TABLE *cocci_id/* drivers/gpu/drm/amd/amdgpu/si_dpm.c 2950 */;
	const struct si_cac_config_reg *cocci_id/* drivers/gpu/drm/amd/amdgpu/si_dpm.c 2838 */;
	PP_SIslands_CacConfig cocci_id/* drivers/gpu/drm/amd/amdgpu/si_dpm.c 2765 */;
	PP_SIslands_CacConfig *cocci_id/* drivers/gpu/drm/amd/amdgpu/si_dpm.c 2677 */;
	struct amdgpu_cac_leakage_table *cocci_id/* drivers/gpu/drm/amd/amdgpu/si_dpm.c 2636 */;
	Smc_SIslands_DTE_Configuration cocci_id/* drivers/gpu/drm/amd/amdgpu/si_dpm.c 2584 */;
	Smc_SIslands_DTE_Configuration *cocci_id/* drivers/gpu/drm/amd/amdgpu/si_dpm.c 2570 */;
	struct si_dte_data *cocci_id/* drivers/gpu/drm/amd/amdgpu/si_dpm.c 2569 */;
	PPSMC_Result cocci_id/* drivers/gpu/drm/amd/amdgpu/si_dpm.c 2540 */;
	SISLANDS_SMC_VOLTAGE_VALUE cocci_id/* drivers/gpu/drm/amd/amdgpu/si_dpm.c 2392 */;
	u64 cocci_id/* drivers/gpu/drm/amd/amdgpu/si_dpm.c 2348 */;
	const u16 cocci_id/* drivers/gpu/drm/amd/amdgpu/si_dpm.c 2345 */;
	PP_SIslands_PAPMParameters cocci_id/* drivers/gpu/drm/amd/amdgpu/si_dpm.c 2293 */;
	struct amdgpu_ppm_table *cocci_id/* drivers/gpu/drm/amd/amdgpu/si_dpm.c 2256 */;
	PP_SIslands_PAPMParameters *cocci_id/* drivers/gpu/drm/amd/amdgpu/si_dpm.c 2255 */;
	struct ni_power_info *cocci_id/* drivers/gpu/drm/amd/amdgpu/si_dpm.c 1966 */;
	u32 cocci_id/* drivers/gpu/drm/amd/amdgpu/si_dpm.c 1936 */[5];
	const u32 cocci_id/* drivers/gpu/drm/amd/amdgpu/si_dpm.c 1920 */;
	const struct ni_leakage_coeffients *cocci_id/* drivers/gpu/drm/amd/amdgpu/si_dpm.c 1919 */;
	s32 cocci_id/* drivers/gpu/drm/amd/amdgpu/si_dpm.c 1893 */;
	s64 cocci_id/* drivers/gpu/drm/amd/amdgpu/si_dpm.c 1866 */;
	void cocci_id/* drivers/gpu/drm/amd/amdgpu/si_dpm.c 1855 */(struct amdgpu_device *adev);
	int cocci_id/* drivers/gpu/drm/amd/amdgpu/si_dpm.c 1849 */(struct amdgpu_device *adev,
								   u32 engine_clock,
								   SISLANDS_SMC_SCLK_VALUE *sclk);
	int cocci_id/* drivers/gpu/drm/amd/amdgpu/si_dpm.c 1846 */(struct amdgpu_device *adev,
								   struct rv7xx_pl *pl,
								   SISLANDS_SMC_HW_PERFORMANCE_LEVEL *level);
	int cocci_id/* drivers/gpu/drm/amd/amdgpu/si_dpm.c 1844 */(struct amdgpu_device *adev,
								   u16 reg_offset,
								   u32 value);
	int cocci_id/* drivers/gpu/drm/amd/amdgpu/si_dpm.c 1841 */(struct amdgpu_device *adev,
								   SISLANDS_SMC_VOLTAGE_VALUE *voltage,
								   u16 *std_voltage);
	int cocci_id/* drivers/gpu/drm/amd/amdgpu/si_dpm.c 1838 */(struct amdgpu_device *adev,
								   const struct atom_voltage_table *table,
								   u16 value,
								   SISLANDS_SMC_VOLTAGE_VALUE *voltage);
	struct si_ps *cocci_id/* drivers/gpu/drm/amd/amdgpu/si_dpm.c 1836 */(struct amdgpu_ps *rps);
	struct ni_power_info *cocci_id/* drivers/gpu/drm/amd/amdgpu/si_dpm.c 1835 */(struct amdgpu_device *adev);
	struct evergreen_power_info *cocci_id/* drivers/gpu/drm/amd/amdgpu/si_dpm.c 1834 */(struct amdgpu_device *adev);
	struct rv7xx_power_info *cocci_id/* drivers/gpu/drm/amd/amdgpu/si_dpm.c 1833 */(struct amdgpu_device *adev);
	const u32 cocci_id/* drivers/gpu/drm/amd/amdgpu/si_dpm.c 118 */[R600_PM_NUMBER_OF_TC];
	const struct si_powertune_data cocci_id/* drivers/gpu/drm/amd/amdgpu/si_dpm.c 1093 */;
	const struct si_cac_config_reg cocci_id/* drivers/gpu/drm/amd/amdgpu/si_dpm.c 1088 */[];
}
