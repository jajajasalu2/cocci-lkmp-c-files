cocci_test_suite() {
	SMU7_Discrete_FanTable cocci_id/* drivers/gpu/drm/radeon/ci_dpm.c 960 */;
	const struct ci_pt_config_reg cocci_id/* drivers/gpu/drm/radeon/ci_dpm.c 90 */[];
	bool cocci_id/* drivers/gpu/drm/radeon/ci_dpm.c 801 */;
	struct radeon_clock_and_voltage_limits *cocci_id/* drivers/gpu/drm/radeon/ci_dpm.c 800 */;
	struct ci_power_info *cocci_id/* drivers/gpu/drm/radeon/ci_dpm.c 799 */;
	struct ci_ps *cocci_id/* drivers/gpu/drm/radeon/ci_dpm.c 798 */;
	struct radeon_ps *cocci_id/* drivers/gpu/drm/radeon/ci_dpm.c 796 */;
	void cocci_id/* drivers/gpu/drm/radeon/ci_dpm.c 795 */;
	s32 cocci_id/* drivers/gpu/drm/radeon/ci_dpm.c 747 */;
	const struct ci_pt_defaults cocci_id/* drivers/gpu/drm/radeon/ci_dpm.c 69 */;
	struct radeon_cac_tdp_table *cocci_id/* drivers/gpu/drm/radeon/ci_dpm.c 671 */;
	struct ci_pl *cocci_id/* drivers/gpu/drm/radeon/ci_dpm.c 5960 */;
	struct seq_file *cocci_id/* drivers/gpu/drm/radeon/ci_dpm.c 5943 */;
	struct radeon_clock_voltage_dependency_entry cocci_id/* drivers/gpu/drm/radeon/ci_dpm.c 5790 */;
	const struct ci_pt_config_reg *cocci_id/* drivers/gpu/drm/radeon/ci_dpm.c 569 */;
	struct ci_power_info cocci_id/* drivers/gpu/drm/radeon/ci_dpm.c 5687 */;
	struct pci_dev *cocci_id/* drivers/gpu/drm/radeon/ci_dpm.c 5684 */;
	enum pci_bus_speed cocci_id/* drivers/gpu/drm/radeon/ci_dpm.c 5683 */;
	struct radeon_gpio_rec cocci_id/* drivers/gpu/drm/radeon/ci_dpm.c 5679 */;
	SMU7_Discrete_DpmTable *cocci_id/* drivers/gpu/drm/radeon/ci_dpm.c 5678 */;
	ATOM_FIRMWARE_INFO_V2_2 *cocci_id/* drivers/gpu/drm/radeon/ci_dpm.c 5640 */;
	struct radeon_mode_info *cocci_id/* drivers/gpu/drm/radeon/ci_dpm.c 5638 */;
	struct ci_vbios_boot_state *cocci_id/* drivers/gpu/drm/radeon/ci_dpm.c 5636 */;
	struct ci_ps cocci_id/* drivers/gpu/drm/radeon/ci_dpm.c 5589 */;
	union power_info *cocci_id/* drivers/gpu/drm/radeon/ci_dpm.c 5553 */;
	struct _NonClockInfoArray *cocci_id/* drivers/gpu/drm/radeon/ci_dpm.c 5552 */;
	struct _ClockInfoArray *cocci_id/* drivers/gpu/drm/radeon/ci_dpm.c 5551 */;
	struct _StateArray *cocci_id/* drivers/gpu/drm/radeon/ci_dpm.c 5550 */;
	union pplib_clock_info *cocci_id/* drivers/gpu/drm/radeon/ci_dpm.c 5549 */;
	union pplib_power_state *cocci_id/* drivers/gpu/drm/radeon/ci_dpm.c 5547 */;
	struct _ATOM_PPLIB_NONCLOCK_INFO *cocci_id/* drivers/gpu/drm/radeon/ci_dpm.c 5546 */;
	union pplib_power_state {
		struct _ATOM_PPLIB_STATE v1;
		struct _ATOM_PPLIB_STATE_V2 v2;
	} cocci_id/* drivers/gpu/drm/radeon/ci_dpm.c 5446 */;
	union pplib_clock_info {
		struct _ATOM_PPLIB_R600_CLOCK_INFO r600;
		struct _ATOM_PPLIB_RS780_CLOCK_INFO rs780;
		struct _ATOM_PPLIB_EVERGREEN_CLOCK_INFO evergreen;
		struct _ATOM_PPLIB_SUMO_CLOCK_INFO sumo;
		struct _ATOM_PPLIB_SI_CLOCK_INFO si;
		struct _ATOM_PPLIB_CI_CLOCK_INFO ci;
	} cocci_id/* drivers/gpu/drm/radeon/ci_dpm.c 5437 */;
	union power_info {
		struct _ATOM_POWERPLAY_INFO info;
		struct _ATOM_POWERPLAY_INFO_V2 info_2;
		struct _ATOM_POWERPLAY_INFO_V3 info_3;
		struct _ATOM_PPLIB_POWERPLAYTABLE pplib;
		struct _ATOM_PPLIB_POWERPLAYTABLE2 pplib2;
		struct _ATOM_PPLIB_POWERPLAYTABLE3 pplib3;
	} cocci_id/* drivers/gpu/drm/radeon/ci_dpm.c 5428 */;
	const bool cocci_id/* drivers/gpu/drm/radeon/ci_dpm.c 526 */;
	struct radeon_ps cocci_id/* drivers/gpu/drm/radeon/ci_dpm.c 5133 */;
	struct radeon_cac_leakage_table *cocci_id/* drivers/gpu/drm/radeon/ci_dpm.c 5053 */;
	struct radeon_phase_shedding_limits_table *cocci_id/* drivers/gpu/drm/radeon/ci_dpm.c 5033 */;
	struct radeon_uvd_clock_voltage_dependency_table *cocci_id/* drivers/gpu/drm/radeon/ci_dpm.c 5022 */;
	struct ci_leakage_voltage *cocci_id/* drivers/gpu/drm/radeon/ci_dpm.c 4963 */;
	enum radeon_pcie_gen cocci_id/* drivers/gpu/drm/radeon/ci_dpm.c 4797 */;
	SMU7_Discrete_MCRegisterSet cocci_id/* drivers/gpu/drm/radeon/ci_dpm.c 4784 */;
	SMU7_Discrete_MCRegisters cocci_id/* drivers/gpu/drm/radeon/ci_dpm.c 4755 */;
	SMU7_Discrete_MCRegisters *cocci_id/* drivers/gpu/drm/radeon/ci_dpm.c 4739 */;
	SMU7_Discrete_MCRegisterSet *cocci_id/* drivers/gpu/drm/radeon/ci_dpm.c 4720 */;
	const u32 cocci_id/* drivers/gpu/drm/radeon/ci_dpm.c 4719 */;
	const struct ci_mc_reg_entry *cocci_id/* drivers/gpu/drm/radeon/ci_dpm.c 4704 */;
	struct atom_mc_reg_table cocci_id/* drivers/gpu/drm/radeon/ci_dpm.c 4632 */;
	struct atom_mc_reg_table *cocci_id/* drivers/gpu/drm/radeon/ci_dpm.c 4627 */;
	struct ci_mc_reg_table *cocci_id/* drivers/gpu/drm/radeon/ci_dpm.c 4508 */;
	const struct atom_mc_reg_table *cocci_id/* drivers/gpu/drm/radeon/ci_dpm.c 4507 */;
	u16 cocci_id/* drivers/gpu/drm/radeon/ci_dpm.c 4407 */;
	u16 *cocci_id/* drivers/gpu/drm/radeon/ci_dpm.c 4407 */;
	const u16 *cocci_id/* drivers/gpu/drm/radeon/ci_dpm.c 440 */;
	struct radeon_ppm_table *cocci_id/* drivers/gpu/drm/radeon/ci_dpm.c 438 */;
	const struct ci_pt_defaults *cocci_id/* drivers/gpu/drm/radeon/ci_dpm.c 434 */;
	PPSMC_Result cocci_id/* drivers/gpu/drm/radeon/ci_dpm.c 4319 */;
	enum radeon_dpm_forced_level cocci_id/* drivers/gpu/drm/radeon/ci_dpm.c 4207 */;
	struct radeon_vce_clock_voltage_dependency_table *cocci_id/* drivers/gpu/drm/radeon/ci_dpm.c 4103 */;
	const struct radeon_clock_and_voltage_limits *cocci_id/* drivers/gpu/drm/radeon/ci_dpm.c 3934 */;
	u32 cocci_id/* drivers/gpu/drm/radeon/ci_dpm.c 3789 */;
	struct radeon_clock_voltage_dependency_table *cocci_id/* drivers/gpu/drm/radeon/ci_dpm.c 3785 */;
	struct radeon_device *cocci_id/* drivers/gpu/drm/radeon/ci_dpm.c 3783 */;
	int cocci_id/* drivers/gpu/drm/radeon/ci_dpm.c 3783 */;
	SMU7_Discrete_DpmTable cocci_id/* drivers/gpu/drm/radeon/ci_dpm.c 3693 */;
	struct ci_single_dpm_table *cocci_id/* drivers/gpu/drm/radeon/ci_dpm.c 3539 */;
	struct ci_dpm_table cocci_id/* drivers/gpu/drm/radeon/ci_dpm.c 3461 */;
	SMU7_Discrete_MemoryLevel cocci_id/* drivers/gpu/drm/radeon/ci_dpm.c 3329 */;
	SMU7_Discrete_GraphicsLevel cocci_id/* drivers/gpu/drm/radeon/ci_dpm.c 3282 */;
	struct ci_dpm_table *cocci_id/* drivers/gpu/drm/radeon/ci_dpm.c 3279 */;
	u8 cocci_id/* drivers/gpu/drm/radeon/ci_dpm.c 3210 */;
	struct atom_clock_dividers cocci_id/* drivers/gpu/drm/radeon/ci_dpm.c 3164 */;
	SMU7_Discrete_GraphicsLevel *cocci_id/* drivers/gpu/drm/radeon/ci_dpm.c 3161 */;
	SMU7_Discrete_Ulv *cocci_id/* drivers/gpu/drm/radeon/ci_dpm.c 3123 */;
	struct ci_ulv_parm *cocci_id/* drivers/gpu/drm/radeon/ci_dpm.c 3108 */;
	SMU7_Discrete_VoltageLevel cocci_id/* drivers/gpu/drm/radeon/ci_dpm.c 2994 */;
	struct radeon_atom_ss cocci_id/* drivers/gpu/drm/radeon/ci_dpm.c 2828 */;
	struct atom_mpll_param cocci_id/* drivers/gpu/drm/radeon/ci_dpm.c 2804 */;
	SMU7_Discrete_MemoryLevel *cocci_id/* drivers/gpu/drm/radeon/ci_dpm.c 2790 */;
	u8 *cocci_id/* drivers/gpu/drm/radeon/ci_dpm.c 2569 */;
	SMU7_Discrete_MCArbDramTimingTable cocci_id/* drivers/gpu/drm/radeon/ci_dpm.c 2549 */;
	SMU7_Discrete_MCArbDramTimingTableEntry *cocci_id/* drivers/gpu/drm/radeon/ci_dpm.c 2525 */;
	unsigned int cocci_id/* drivers/gpu/drm/radeon/ci_dpm.c 2401 */;
	const struct radeon_phase_shedding_limits_table *cocci_id/* drivers/gpu/drm/radeon/ci_dpm.c 2397 */;
	struct atom_voltage_table_entry *cocci_id/* drivers/gpu/drm/radeon/ci_dpm.c 2329 */;
	SMU7_Discrete_VoltageLevel *cocci_id/* drivers/gpu/drm/radeon/ci_dpm.c 2308 */;
	struct atom_voltage_table *cocci_id/* drivers/gpu/drm/radeon/ci_dpm.c 2115 */;
	PPSMC_Msg cocci_id/* drivers/gpu/drm/radeon/ci_dpm.c 1957 */;
	void cocci_id/* drivers/gpu/drm/radeon/ci_dpm.c 194 */(struct radeon_device *rdev);
	PPSMC_Result cocci_id/* drivers/gpu/drm/radeon/ci_dpm.c 190 */(struct radeon_device *rdev,
								       PPSMC_Msg msg,
								       u32 parameter);
	PPSMC_Result cocci_id/* drivers/gpu/drm/radeon/ci_dpm.c 189 */(struct radeon_device *rdev,
								       PPSMC_Msg msg);
	int cocci_id/* drivers/gpu/drm/radeon/ci_dpm.c 187 */(struct radeon_device *rdev,
							      bool gate);
	int cocci_id/* drivers/gpu/drm/radeon/ci_dpm.c 185 */(struct radeon_device *rdev,
							      u32 target_tdp);
	int cocci_id/* drivers/gpu/drm/radeon/ci_dpm.c 184 */(struct radeon_device *rdev,
							      u32 n);
	int cocci_id/* drivers/gpu/drm/radeon/ci_dpm.c 181 */(struct radeon_device *rdev,
							      struct atom_voltage_table_entry *voltage_table,
							      u16 *std_voltage_hi_sidd,
							      u16 *std_voltage_lo_sidd);
	void cocci_id/* drivers/gpu/drm/radeon/ci_dpm.c 178 */(struct radeon_device *rdev,
							       u32 block,
							       bool enable);
	int cocci_id/* drivers/gpu/drm/radeon/ci_dpm.c 177 */(struct radeon_device *rdev);
	void cocci_id/* drivers/gpu/drm/radeon/ci_dpm.c 172 */(struct radeon_device *rdev,
							       u32 max_voltage_steps,
							       struct atom_voltage_table *voltage_table);
	u8 cocci_id/* drivers/gpu/drm/radeon/ci_dpm.c 171 */(u32 memory_clock,
							     bool strobe_mode);
	u8 cocci_id/* drivers/gpu/drm/radeon/ci_dpm.c 170 */(u32 memory_clock);
	int cocci_id/* drivers/gpu/drm/radeon/ci_dpm.c 168 */(struct radeon_device *rdev,
							      u32 arb_freq_src,
							      u32 arb_freq_dest);
	u8 cocci_id/* drivers/gpu/drm/radeon/ci_dpm.c 167 */(struct radeon_device *rdev);
	enum radeon_dpm_auto_throttle_src cocci_id/* drivers/gpu/drm/radeon/ci_dpm.c 1430 */;
	enum radeon_dpm_event_src cocci_id/* drivers/gpu/drm/radeon/ci_dpm.c 1384 */;
	u64 cocci_id/* drivers/gpu/drm/radeon/ci_dpm.c 1079 */;
	u32 *cocci_id/* drivers/gpu/drm/radeon/ci_dpm.c 1076 */;
	uint8_t cocci_id/* drivers/gpu/drm/radeon/ci_dpm.c 1018 */;
}
