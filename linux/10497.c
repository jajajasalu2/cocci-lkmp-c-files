cocci_test_suite() {
	u64 cocci_id/* drivers/gpu/drm/radeon/rv6xx_dpm.c 937 */;
	u32 cocci_id/* drivers/gpu/drm/radeon/rv6xx_dpm.c 781 */;
	struct radeon_device *cocci_id/* drivers/gpu/drm/radeon/rv6xx_dpm.c 781 */;
	u32 *cocci_id/* drivers/gpu/drm/radeon/rv6xx_dpm.c 634 */;
	enum r600_power_level cocci_id/* drivers/gpu/drm/radeon/rv6xx_dpm.c 549 */;
	struct atom_clock_dividers *cocci_id/* drivers/gpu/drm/radeon/rv6xx_dpm.c 526 */;
	u32 cocci_id/* drivers/gpu/drm/radeon/rv6xx_dpm.c 33 */(struct radeon_device *rdev,
								u32 unscaled_count,
								u32 unit);
	struct rv6xx_sclk_stepping cocci_id/* drivers/gpu/drm/radeon/rv6xx_dpm.c 299 */;
	u8 cocci_id/* drivers/gpu/drm/radeon/rv6xx_dpm.c 292 */;
	enum radeon_dpm_forced_level cocci_id/* drivers/gpu/drm/radeon/rv6xx_dpm.c 2131 */;
	struct rv6xx_sclk_stepping *cocci_id/* drivers/gpu/drm/radeon/rv6xx_dpm.c 210 */;
	bool cocci_id/* drivers/gpu/drm/radeon/rv6xx_dpm.c 209 */;
	struct rv6xx_pl *cocci_id/* drivers/gpu/drm/radeon/rv6xx_dpm.c 2033 */;
	struct seq_file *cocci_id/* drivers/gpu/drm/radeon/rv6xx_dpm.c 2029 */;
	struct rv6xx_power_info cocci_id/* drivers/gpu/drm/radeon/rv6xx_dpm.c 1939 */;
	struct radeon_atom_ss cocci_id/* drivers/gpu/drm/radeon/rv6xx_dpm.c 1934 */;
	struct rv6xx_ps cocci_id/* drivers/gpu/drm/radeon/rv6xx_dpm.c 1908 */;
	struct radeon_ps cocci_id/* drivers/gpu/drm/radeon/rv6xx_dpm.c 1891 */;
	u16 cocci_id/* drivers/gpu/drm/radeon/rv6xx_dpm.c 1881 */;
	union power_info *cocci_id/* drivers/gpu/drm/radeon/rv6xx_dpm.c 1879 */;
	union pplib_clock_info *cocci_id/* drivers/gpu/drm/radeon/rv6xx_dpm.c 1878 */;
	union pplib_power_state *cocci_id/* drivers/gpu/drm/radeon/rv6xx_dpm.c 1876 */;
	struct _ATOM_PPLIB_NONCLOCK_INFO *cocci_id/* drivers/gpu/drm/radeon/rv6xx_dpm.c 1875 */;
	struct radeon_mode_info *cocci_id/* drivers/gpu/drm/radeon/rv6xx_dpm.c 1874 */;
	union pplib_power_state {
		struct _ATOM_PPLIB_STATE v1;
		struct _ATOM_PPLIB_STATE_V2 v2;
	} cocci_id/* drivers/gpu/drm/radeon/rv6xx_dpm.c 1789 */;
	union pplib_clock_info {
		struct _ATOM_PPLIB_R600_CLOCK_INFO r600;
		struct _ATOM_PPLIB_RS780_CLOCK_INFO rs780;
		struct _ATOM_PPLIB_EVERGREEN_CLOCK_INFO evergreen;
		struct _ATOM_PPLIB_SUMO_CLOCK_INFO sumo;
	} cocci_id/* drivers/gpu/drm/radeon/rv6xx_dpm.c 1782 */;
	union power_info {
		struct _ATOM_POWERPLAY_INFO info;
		struct _ATOM_POWERPLAY_INFO_V2 info_2;
		struct _ATOM_POWERPLAY_INFO_V3 info_3;
		struct _ATOM_PPLIB_POWERPLAYTABLE pplib;
		struct _ATOM_PPLIB_POWERPLAYTABLE2 pplib2;
		struct _ATOM_PPLIB_POWERPLAYTABLE3 pplib3;
	} cocci_id/* drivers/gpu/drm/radeon/rv6xx_dpm.c 1773 */;
	struct atom_clock_dividers cocci_id/* drivers/gpu/drm/radeon/rv6xx_dpm.c 142 */;
	enum radeon_dpm_auto_throttle_src cocci_id/* drivers/gpu/drm/radeon/rv6xx_dpm.c 1389 */;
	enum radeon_dpm_event_src cocci_id/* drivers/gpu/drm/radeon/rv6xx_dpm.c 1355 */;
	struct radeon_ps *cocci_id/* drivers/gpu/drm/radeon/rv6xx_dpm.c 1046 */;
	struct rv6xx_power_info *cocci_id/* drivers/gpu/drm/radeon/rv6xx_dpm.c 1021 */;
	struct rv6xx_ps *cocci_id/* drivers/gpu/drm/radeon/rv6xx_dpm.c 1019 */;
	void cocci_id/* drivers/gpu/drm/radeon/rv6xx_dpm.c 1018 */;
	u8 *cocci_id/* drivers/gpu/drm/radeon/rv6xx_dpm.c 1002 */;
	int cocci_id/* drivers/gpu/drm/radeon/rv6xx_dpm.c 1001 */;
}
