cocci_test_suite() {
	u8 cocci_id/* drivers/gpu/drm/amd/amdgpu/kv_dpm.c 842 */;
	struct sumo_vid_mapping_table *cocci_id/* drivers/gpu/drm/amd/amdgpu/kv_dpm.c 72 */;
	u16 cocci_id/* drivers/gpu/drm/amd/amdgpu/kv_dpm.c 685 */;
	void cocci_id/* drivers/gpu/drm/amd/amdgpu/kv_dpm.c 68 */(struct amdgpu_device *adev,
								  bool gate);
	int cocci_id/* drivers/gpu/drm/amd/amdgpu/kv_dpm.c 63 */(struct amdgpu_device *adev,
								 int min_temp,
								 int max_temp);
	void cocci_id/* drivers/gpu/drm/amd/amdgpu/kv_dpm.c 60 */(struct amdgpu_device *adev,
								  struct amdgpu_ps *new_rps,
								  struct amdgpu_ps *old_rps);
	int cocci_id/* drivers/gpu/drm/amd/amdgpu/kv_dpm.c 56 */(struct amdgpu_device *adev,
								 u32 level);
	void cocci_id/* drivers/gpu/drm/amd/amdgpu/kv_dpm.c 54 */(struct amdgpu_device *adev,
								  struct amdgpu_ps *new_rps);
	int cocci_id/* drivers/gpu/drm/amd/amdgpu/kv_dpm.c 52 */(struct amdgpu_device *adev);
	int cocci_id/* drivers/gpu/drm/amd/amdgpu/kv_dpm.c 47 */(struct amdgpu_device *adev,
								 bool enable);
	void cocci_id/* drivers/gpu/drm/amd/amdgpu/kv_dpm.c 46 */(struct amdgpu_device *adev);
	const struct amd_pm_funcs cocci_id/* drivers/gpu/drm/amd/amdgpu/kv_dpm.c 44 */;
	const struct kv_pt_config_reg *cocci_id/* drivers/gpu/drm/amd/amdgpu/kv_dpm.c 411 */;
	const struct amdgpu_irq_src_funcs cocci_id/* drivers/gpu/drm/amd/amdgpu/kv_dpm.c 3373 */;
	const struct amdgpu_ip_block_version cocci_id/* drivers/gpu/drm/amd/amdgpu/kv_dpm.c 3347 */;
	const struct amd_ip_funcs cocci_id/* drivers/gpu/drm/amd/amdgpu/kv_dpm.c 3330 */;
	uint32_t *cocci_id/* drivers/gpu/drm/amd/amdgpu/kv_dpm.c 3300 */;
	uint32_t cocci_id/* drivers/gpu/drm/amd/amdgpu/kv_dpm.c 3285 */;
	int *cocci_id/* drivers/gpu/drm/amd/amdgpu/kv_dpm.c 3281 */;
	bool *cocci_id/* drivers/gpu/drm/amd/amdgpu/kv_dpm.c 3240 */;
	void *cocci_id/* drivers/gpu/drm/amd/amdgpu/kv_dpm.c 3237 */;
	const struct kv_pl *cocci_id/* drivers/gpu/drm/amd/amdgpu/kv_dpm.c 3228 */;
	enum amd_powergating_state cocci_id/* drivers/gpu/drm/amd/amdgpu/kv_dpm.c 3223 */;
	enum amd_clockgating_state cocci_id/* drivers/gpu/drm/amd/amdgpu/kv_dpm.c 3217 */;
	struct amdgpu_iv_entry *cocci_id/* drivers/gpu/drm/amd/amdgpu/kv_dpm.c 3188 */;
	struct amdgpu_irq_src *cocci_id/* drivers/gpu/drm/amd/amdgpu/kv_dpm.c 3187 */;
	enum amdgpu_interrupt_state cocci_id/* drivers/gpu/drm/amd/amdgpu/kv_dpm.c 3141 */;
	unsigned cocci_id/* drivers/gpu/drm/amd/amdgpu/kv_dpm.c 3140 */;
	const struct kv_pt_config_reg cocci_id/* drivers/gpu/drm/amd/amdgpu/kv_dpm.c 293 */[];
	struct kv_pl *cocci_id/* drivers/gpu/drm/amd/amdgpu/kv_dpm.c 2903 */;
	struct seq_file *cocci_id/* drivers/gpu/drm/amd/amdgpu/kv_dpm.c 2865 */;
	struct kv_power_info cocci_id/* drivers/gpu/drm/amd/amdgpu/kv_dpm.c 2796 */;
	struct kv_ps cocci_id/* drivers/gpu/drm/amd/amdgpu/kv_dpm.c 2747 */;
	union power_info *cocci_id/* drivers/gpu/drm/amd/amdgpu/kv_dpm.c 2711 */;
	struct _NonClockInfoArray *cocci_id/* drivers/gpu/drm/amd/amdgpu/kv_dpm.c 2710 */;
	struct _ClockInfoArray *cocci_id/* drivers/gpu/drm/amd/amdgpu/kv_dpm.c 2709 */;
	struct _StateArray *cocci_id/* drivers/gpu/drm/amd/amdgpu/kv_dpm.c 2708 */;
	union pplib_clock_info *cocci_id/* drivers/gpu/drm/amd/amdgpu/kv_dpm.c 2707 */;
	union pplib_power_state *cocci_id/* drivers/gpu/drm/amd/amdgpu/kv_dpm.c 2705 */;
	struct _ATOM_PPLIB_NONCLOCK_INFO *cocci_id/* drivers/gpu/drm/amd/amdgpu/kv_dpm.c 2704 */;
	struct amdgpu_mode_info *cocci_id/* drivers/gpu/drm/amd/amdgpu/kv_dpm.c 2703 */;
	union pplib_power_state {
		struct _ATOM_PPLIB_STATE v1;
		struct _ATOM_PPLIB_STATE_V2 v2;
	} cocci_id/* drivers/gpu/drm/amd/amdgpu/kv_dpm.c 2638 */;
	union pplib_clock_info {
		struct _ATOM_PPLIB_R600_CLOCK_INFO r600;
		struct _ATOM_PPLIB_RS780_CLOCK_INFO rs780;
		struct _ATOM_PPLIB_EVERGREEN_CLOCK_INFO evergreen;
		struct _ATOM_PPLIB_SUMO_CLOCK_INFO sumo;
	} cocci_id/* drivers/gpu/drm/amd/amdgpu/kv_dpm.c 2631 */;
	union power_info {
		struct _ATOM_POWERPLAY_INFO info;
		struct _ATOM_POWERPLAY_INFO_V2 info_2;
		struct _ATOM_POWERPLAY_INFO_V3 info_3;
		struct _ATOM_PPLIB_POWERPLAYTABLE pplib;
		struct _ATOM_PPLIB_POWERPLAYTABLE2 pplib2;
		struct _ATOM_PPLIB_POWERPLAYTABLE3 pplib3;
	} cocci_id/* drivers/gpu/drm/amd/amdgpu/kv_dpm.c 2622 */;
	union igp_info *cocci_id/* drivers/gpu/drm/amd/amdgpu/kv_dpm.c 2563 */;
	union igp_info {
		struct _ATOM_INTEGRATED_SYSTEM_INFO info;
		struct _ATOM_INTEGRATED_SYSTEM_INFO_V2 info_2;
		struct _ATOM_INTEGRATED_SYSTEM_INFO_V5 info_5;
		struct _ATOM_INTEGRATED_SYSTEM_INFO_V6 info_6;
		struct _ATOM_INTEGRATED_SYSTEM_INFO_V1_7 info_7;
		struct _ATOM_INTEGRATED_SYSTEM_INFO_V1_8 info_8;
	} cocci_id/* drivers/gpu/drm/amd/amdgpu/kv_dpm.c 2549 */;
	struct sumo_sclk_voltage_mapping_table *cocci_id/* drivers/gpu/drm/amd/amdgpu/kv_dpm.c 2269 */;
	struct amdgpu_clock_and_voltage_limits *cocci_id/* drivers/gpu/drm/amd/amdgpu/kv_dpm.c 2217 */;
	struct amdgpu_clock_voltage_dependency_table *cocci_id/* drivers/gpu/drm/amd/amdgpu/kv_dpm.c 2214 */;
	bool cocci_id/* drivers/gpu/drm/amd/amdgpu/kv_dpm.c 2213 */;
	int cocci_id/* drivers/gpu/drm/amd/amdgpu/kv_dpm.c 2212 */;
	u32 cocci_id/* drivers/gpu/drm/amd/amdgpu/kv_dpm.c 2210 */;
	struct kv_power_info *cocci_id/* drivers/gpu/drm/amd/amdgpu/kv_dpm.c 2209 */;
	struct kv_ps *cocci_id/* drivers/gpu/drm/amd/amdgpu/kv_dpm.c 2208 */;
	struct amdgpu_ps *cocci_id/* drivers/gpu/drm/amd/amdgpu/kv_dpm.c 2205 */;
	struct amdgpu_device *cocci_id/* drivers/gpu/drm/amd/amdgpu/kv_dpm.c 2204 */;
	void cocci_id/* drivers/gpu/drm/amd/amdgpu/kv_dpm.c 2204 */;
	struct amdgpu_uvd_clock_voltage_dependency_table *cocci_id/* drivers/gpu/drm/amd/amdgpu/kv_dpm.c 2054 */;
	struct amdgpu_ps cocci_id/* drivers/gpu/drm/amd/amdgpu/kv_dpm.c 1908 */;
	enum amd_dpm_forced_level cocci_id/* drivers/gpu/drm/amd/amdgpu/kv_dpm.c 1880 */;
	struct amdgpu_vce_clock_voltage_dependency_table *cocci_id/* drivers/gpu/drm/amd/amdgpu/kv_dpm.c 1532 */;
	uint8_t *cocci_id/* drivers/gpu/drm/amd/amdgpu/kv_dpm.c 1516 */;
	u8 *cocci_id/* drivers/gpu/drm/amd/amdgpu/kv_dpm.c 1442 */;
	ATOM_AVAILABLE_SCLK_LIST *cocci_id/* drivers/gpu/drm/amd/amdgpu/kv_dpm.c 138 */;
	struct atom_clock_dividers cocci_id/* drivers/gpu/drm/amd/amdgpu/kv_dpm.c 1106 */;
}
