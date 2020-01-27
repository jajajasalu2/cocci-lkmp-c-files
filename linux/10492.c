cocci_test_suite() {
	u32 cocci_id/* drivers/gpu/drm/radeon/rs780_dpm.c 988 */;
	struct seq_file *cocci_id/* drivers/gpu/drm/radeon/rs780_dpm.c 984 */;
	struct igp_power_info cocci_id/* drivers/gpu/drm/radeon/rs780_dpm.c 858 */;
	u8 cocci_id/* drivers/gpu/drm/radeon/rs780_dpm.c 855 */;
	u16 cocci_id/* drivers/gpu/drm/radeon/rs780_dpm.c 854 */;
	union igp_info *cocci_id/* drivers/gpu/drm/radeon/rs780_dpm.c 853 */;
	struct igp_ps cocci_id/* drivers/gpu/drm/radeon/rs780_dpm.c 831 */;
	struct radeon_ps cocci_id/* drivers/gpu/drm/radeon/rs780_dpm.c 810 */;
	union power_info *cocci_id/* drivers/gpu/drm/radeon/rs780_dpm.c 798 */;
	union pplib_clock_info *cocci_id/* drivers/gpu/drm/radeon/rs780_dpm.c 797 */;
	union pplib_power_state *cocci_id/* drivers/gpu/drm/radeon/rs780_dpm.c 795 */;
	struct _ATOM_PPLIB_NONCLOCK_INFO *cocci_id/* drivers/gpu/drm/radeon/rs780_dpm.c 794 */;
	void cocci_id/* drivers/gpu/drm/radeon/rs780_dpm.c 74 */(struct radeon_device *rdev,
								 bool enable);
	union pplib_power_state {
		struct _ATOM_PPLIB_STATE v1;
		struct _ATOM_PPLIB_STATE_V2 v2;
	} cocci_id/* drivers/gpu/drm/radeon/rs780_dpm.c 714 */;
	union pplib_clock_info {
		struct _ATOM_PPLIB_R600_CLOCK_INFO r600;
		struct _ATOM_PPLIB_RS780_CLOCK_INFO rs780;
		struct _ATOM_PPLIB_EVERGREEN_CLOCK_INFO evergreen;
		struct _ATOM_PPLIB_SUMO_CLOCK_INFO sumo;
	} cocci_id/* drivers/gpu/drm/radeon/rs780_dpm.c 707 */;
	union power_info {
		struct _ATOM_POWERPLAY_INFO info;
		struct _ATOM_POWERPLAY_INFO_V2 info_2;
		struct _ATOM_POWERPLAY_INFO_V3 info_3;
		struct _ATOM_PPLIB_POWERPLAYTABLE pplib;
		struct _ATOM_PPLIB_POWERPLAYTABLE2 pplib2;
		struct _ATOM_PPLIB_POWERPLAYTABLE3 pplib3;
	} cocci_id/* drivers/gpu/drm/radeon/rs780_dpm.c 698 */;
	union igp_info {
		struct _ATOM_INTEGRATED_SYSTEM_INFO info;
		struct _ATOM_INTEGRATED_SYSTEM_INFO_V2 info_2;
	} cocci_id/* drivers/gpu/drm/radeon/rs780_dpm.c 693 */;
	struct igp_power_info *cocci_id/* drivers/gpu/drm/radeon/rs780_dpm.c 634 */;
	int cocci_id/* drivers/gpu/drm/radeon/rs780_dpm.c 599 */;
	struct radeon_crtc *cocci_id/* drivers/gpu/drm/radeon/rs780_dpm.c 55 */;
	struct drm_crtc *cocci_id/* drivers/gpu/drm/radeon/rs780_dpm.c 54 */;
	struct radeon_mode_info *cocci_id/* drivers/gpu/drm/radeon/rs780_dpm.c 53 */;
	enum rs780_vddc_level cocci_id/* drivers/gpu/drm/radeon/rs780_dpm.c 529 */;
	struct igp_ps *cocci_id/* drivers/gpu/drm/radeon/rs780_dpm.c 498 */;
	struct radeon_ps *cocci_id/* drivers/gpu/drm/radeon/rs780_dpm.c 495 */;
	struct radeon_device *cocci_id/* drivers/gpu/drm/radeon/rs780_dpm.c 494 */;
	void cocci_id/* drivers/gpu/drm/radeon/rs780_dpm.c 494 */;
	bool cocci_id/* drivers/gpu/drm/radeon/rs780_dpm.c 305 */;
	u32 cocci_id/* drivers/gpu/drm/radeon/rs780_dpm.c 229 */[4];
	u32 cocci_id/* drivers/gpu/drm/radeon/rs780_dpm.c 228 */[3];
	struct drm_device *cocci_id/* drivers/gpu/drm/radeon/rs780_dpm.c 227 */;
	struct atom_clock_dividers cocci_id/* drivers/gpu/drm/radeon/rs780_dpm.c 1035 */;
	enum radeon_dpm_forced_level cocci_id/* drivers/gpu/drm/radeon/rs780_dpm.c 1030 */;
}
