cocci_test_suite() {
	u8 cocci_id/* drivers/gpu/drm/radeon/kv_dpm.c 760 */;
	void cocci_id/* drivers/gpu/drm/radeon/kv_dpm.c 65 */(struct radeon_device *rdev,
							      u32 block,
							      bool enable);
	void cocci_id/* drivers/gpu/drm/radeon/kv_dpm.c 63 */(struct radeon_device *rdev);
	void cocci_id/* drivers/gpu/drm/radeon/kv_dpm.c 61 */(struct radeon_device *rdev,
							      bool gate);
	u16 cocci_id/* drivers/gpu/drm/radeon/kv_dpm.c 605 */;
	struct sumo_vid_mapping_table *cocci_id/* drivers/gpu/drm/radeon/kv_dpm.c 554 */;
	int cocci_id/* drivers/gpu/drm/radeon/kv_dpm.c 54 */(struct radeon_device *rdev,
							     int min_temp,
							     int max_temp);
	void cocci_id/* drivers/gpu/drm/radeon/kv_dpm.c 51 */(struct radeon_device *rdev,
							      struct radeon_ps *new_rps,
							      struct radeon_ps *old_rps);
	int cocci_id/* drivers/gpu/drm/radeon/kv_dpm.c 47 */(struct radeon_device *rdev,
							     u32 level);
	void cocci_id/* drivers/gpu/drm/radeon/kv_dpm.c 45 */(struct radeon_device *rdev,
							      struct radeon_ps *new_rps);
	int cocci_id/* drivers/gpu/drm/radeon/kv_dpm.c 43 */(struct radeon_device *rdev);
	int cocci_id/* drivers/gpu/drm/radeon/kv_dpm.c 38 */(struct radeon_device *rdev,
							     bool enable);
	struct kv_pl *cocci_id/* drivers/gpu/drm/radeon/kv_dpm.c 2859 */;
	const struct kv_pt_config_reg *cocci_id/* drivers/gpu/drm/radeon/kv_dpm.c 285 */;
	struct seq_file *cocci_id/* drivers/gpu/drm/radeon/kv_dpm.c 2803 */;
	struct kv_power_info cocci_id/* drivers/gpu/drm/radeon/kv_dpm.c 2728 */;
	struct kv_ps cocci_id/* drivers/gpu/drm/radeon/kv_dpm.c 2679 */;
	union power_info *cocci_id/* drivers/gpu/drm/radeon/kv_dpm.c 2643 */;
	struct _NonClockInfoArray *cocci_id/* drivers/gpu/drm/radeon/kv_dpm.c 2642 */;
	struct _ClockInfoArray *cocci_id/* drivers/gpu/drm/radeon/kv_dpm.c 2641 */;
	struct _StateArray *cocci_id/* drivers/gpu/drm/radeon/kv_dpm.c 2640 */;
	union pplib_clock_info *cocci_id/* drivers/gpu/drm/radeon/kv_dpm.c 2639 */;
	union pplib_power_state *cocci_id/* drivers/gpu/drm/radeon/kv_dpm.c 2637 */;
	struct _ATOM_PPLIB_NONCLOCK_INFO *cocci_id/* drivers/gpu/drm/radeon/kv_dpm.c 2636 */;
	struct radeon_mode_info *cocci_id/* drivers/gpu/drm/radeon/kv_dpm.c 2635 */;
	union pplib_power_state {
		struct _ATOM_PPLIB_STATE v1;
		struct _ATOM_PPLIB_STATE_V2 v2;
	} cocci_id/* drivers/gpu/drm/radeon/kv_dpm.c 2570 */;
	union pplib_clock_info {
		struct _ATOM_PPLIB_R600_CLOCK_INFO r600;
		struct _ATOM_PPLIB_RS780_CLOCK_INFO rs780;
		struct _ATOM_PPLIB_EVERGREEN_CLOCK_INFO evergreen;
		struct _ATOM_PPLIB_SUMO_CLOCK_INFO sumo;
	} cocci_id/* drivers/gpu/drm/radeon/kv_dpm.c 2563 */;
	union power_info {
		struct _ATOM_POWERPLAY_INFO info;
		struct _ATOM_POWERPLAY_INFO_V2 info_2;
		struct _ATOM_POWERPLAY_INFO_V3 info_3;
		struct _ATOM_PPLIB_POWERPLAYTABLE pplib;
		struct _ATOM_PPLIB_POWERPLAYTABLE2 pplib2;
		struct _ATOM_PPLIB_POWERPLAYTABLE3 pplib3;
	} cocci_id/* drivers/gpu/drm/radeon/kv_dpm.c 2554 */;
	union igp_info *cocci_id/* drivers/gpu/drm/radeon/kv_dpm.c 2495 */;
	union igp_info {
		struct _ATOM_INTEGRATED_SYSTEM_INFO info;
		struct _ATOM_INTEGRATED_SYSTEM_INFO_V2 info_2;
		struct _ATOM_INTEGRATED_SYSTEM_INFO_V5 info_5;
		struct _ATOM_INTEGRATED_SYSTEM_INFO_V6 info_6;
		struct _ATOM_INTEGRATED_SYSTEM_INFO_V1_7 info_7;
		struct _ATOM_INTEGRATED_SYSTEM_INFO_V1_8 info_8;
	} cocci_id/* drivers/gpu/drm/radeon/kv_dpm.c 2481 */;
	struct sumo_sclk_voltage_mapping_table *cocci_id/* drivers/gpu/drm/radeon/kv_dpm.c 2204 */;
	struct radeon_clock_and_voltage_limits *cocci_id/* drivers/gpu/drm/radeon/kv_dpm.c 2152 */;
	struct radeon_clock_voltage_dependency_table *cocci_id/* drivers/gpu/drm/radeon/kv_dpm.c 2149 */;
	bool cocci_id/* drivers/gpu/drm/radeon/kv_dpm.c 2148 */;
	int cocci_id/* drivers/gpu/drm/radeon/kv_dpm.c 2147 */;
	u32 cocci_id/* drivers/gpu/drm/radeon/kv_dpm.c 2145 */;
	struct kv_power_info *cocci_id/* drivers/gpu/drm/radeon/kv_dpm.c 2144 */;
	struct kv_ps *cocci_id/* drivers/gpu/drm/radeon/kv_dpm.c 2143 */;
	struct radeon_ps *cocci_id/* drivers/gpu/drm/radeon/kv_dpm.c 2140 */;
	struct radeon_device *cocci_id/* drivers/gpu/drm/radeon/kv_dpm.c 2139 */;
	void cocci_id/* drivers/gpu/drm/radeon/kv_dpm.c 2139 */;
	int *cocci_id/* drivers/gpu/drm/radeon/kv_dpm.c 2105 */;
	struct radeon_uvd_clock_voltage_dependency_table *cocci_id/* drivers/gpu/drm/radeon/kv_dpm.c 1988 */;
	struct radeon_ps cocci_id/* drivers/gpu/drm/radeon/kv_dpm.c 1842 */;
	enum radeon_dpm_forced_level cocci_id/* drivers/gpu/drm/radeon/kv_dpm.c 1816 */;
	const struct kv_pt_config_reg cocci_id/* drivers/gpu/drm/radeon/kv_dpm.c 167 */[];
	const struct kv_lcac_config_reg cocci_id/* drivers/gpu/drm/radeon/kv_dpm.c 162 */[];
	struct radeon_vce_clock_voltage_dependency_table *cocci_id/* drivers/gpu/drm/radeon/kv_dpm.c 1464 */;
	uint8_t *cocci_id/* drivers/gpu/drm/radeon/kv_dpm.c 1448 */;
	u8 *cocci_id/* drivers/gpu/drm/radeon/kv_dpm.c 1374 */;
	const struct kv_lcac_config_values cocci_id/* drivers/gpu/drm/radeon/kv_dpm.c 105 */[];
	struct atom_clock_dividers cocci_id/* drivers/gpu/drm/radeon/kv_dpm.c 1024 */;
}
