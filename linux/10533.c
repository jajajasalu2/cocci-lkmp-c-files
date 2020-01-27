cocci_test_suite() {
	const u32 *cocci_id/* drivers/gpu/drm/radeon/trinity_dpm.c 490 */;
	const u32 cocci_id/* drivers/gpu/drm/radeon/trinity_dpm.c 42 */[];
	struct atom_clock_dividers cocci_id/* drivers/gpu/drm/radeon/trinity_dpm.c 368 */;
	void cocci_id/* drivers/gpu/drm/radeon/trinity_dpm.c 345 */(struct radeon_device *rdev,
								    struct radeon_ps *new_rps,
								    struct radeon_ps *old_rps);
	void cocci_id/* drivers/gpu/drm/radeon/trinity_dpm.c 344 */(struct radeon_device *rdev);
	void cocci_id/* drivers/gpu/drm/radeon/trinity_dpm.c 342 */(struct radeon_device *rdev,
								    const u32 *seq,
								    u32 count);
	void cocci_id/* drivers/gpu/drm/radeon/trinity_dpm.c 341 */(struct radeon_device *rdev,
								    bool enable);
	struct trinity_pl *cocci_id/* drivers/gpu/drm/radeon/trinity_dpm.c 2036 */;
	struct seq_file *cocci_id/* drivers/gpu/drm/radeon/trinity_dpm.c 2031 */;
	struct trinity_power_info cocci_id/* drivers/gpu/drm/radeon/trinity_dpm.c 1953 */;
	union igp_info *cocci_id/* drivers/gpu/drm/radeon/trinity_dpm.c 1852 */;
	union igp_info {
		struct _ATOM_INTEGRATED_SYSTEM_INFO info;
		struct _ATOM_INTEGRATED_SYSTEM_INFO_V2 info_2;
		struct _ATOM_INTEGRATED_SYSTEM_INFO_V5 info_5;
		struct _ATOM_INTEGRATED_SYSTEM_INFO_V6 info_6;
		struct _ATOM_INTEGRATED_SYSTEM_INFO_V1_7 info_7;
	} cocci_id/* drivers/gpu/drm/radeon/trinity_dpm.c 1820 */;
	struct sumo_ps cocci_id/* drivers/gpu/drm/radeon/trinity_dpm.c 1776 */;
	struct sumo_ps *cocci_id/* drivers/gpu/drm/radeon/trinity_dpm.c 1745 */;
	u8 *cocci_id/* drivers/gpu/drm/radeon/trinity_dpm.c 1744 */;
	union power_info *cocci_id/* drivers/gpu/drm/radeon/trinity_dpm.c 1740 */;
	struct _NonClockInfoArray *cocci_id/* drivers/gpu/drm/radeon/trinity_dpm.c 1739 */;
	struct _ClockInfoArray *cocci_id/* drivers/gpu/drm/radeon/trinity_dpm.c 1738 */;
	struct _StateArray *cocci_id/* drivers/gpu/drm/radeon/trinity_dpm.c 1737 */;
	union pplib_clock_info *cocci_id/* drivers/gpu/drm/radeon/trinity_dpm.c 1736 */;
	union pplib_power_state *cocci_id/* drivers/gpu/drm/radeon/trinity_dpm.c 1734 */;
	struct _ATOM_PPLIB_NONCLOCK_INFO *cocci_id/* drivers/gpu/drm/radeon/trinity_dpm.c 1733 */;
	struct radeon_mode_info *cocci_id/* drivers/gpu/drm/radeon/trinity_dpm.c 1732 */;
	union pplib_power_state {
		struct _ATOM_PPLIB_STATE v1;
		struct _ATOM_PPLIB_STATE_V2 v2;
	} cocci_id/* drivers/gpu/drm/radeon/trinity_dpm.c 1676 */;
	union pplib_clock_info {
		struct _ATOM_PPLIB_R600_CLOCK_INFO r600;
		struct _ATOM_PPLIB_RS780_CLOCK_INFO rs780;
		struct _ATOM_PPLIB_EVERGREEN_CLOCK_INFO evergreen;
		struct _ATOM_PPLIB_SUMO_CLOCK_INFO sumo;
	} cocci_id/* drivers/gpu/drm/radeon/trinity_dpm.c 1669 */;
	union power_info {
		struct _ATOM_POWERPLAY_INFO info;
		struct _ATOM_POWERPLAY_INFO_V2 info_2;
		struct _ATOM_POWERPLAY_INFO_V3 info_3;
		struct _ATOM_PPLIB_POWERPLAYTABLE pplib;
		struct _ATOM_PPLIB_POWERPLAYTABLE2 pplib2;
		struct _ATOM_PPLIB_POWERPLAYTABLE3 pplib3;
	} cocci_id/* drivers/gpu/drm/radeon/trinity_dpm.c 1660 */;
	u64 cocci_id/* drivers/gpu/drm/radeon/trinity_dpm.c 1639 */;
	u32 cocci_id/* drivers/gpu/drm/radeon/trinity_dpm.c 1637 */;
	struct radeon_device *cocci_id/* drivers/gpu/drm/radeon/trinity_dpm.c 1635 */;
	void cocci_id/* drivers/gpu/drm/radeon/trinity_dpm.c 1635 */;
	bool cocci_id/* drivers/gpu/drm/radeon/trinity_dpm.c 1547 */;
	u16 cocci_id/* drivers/gpu/drm/radeon/trinity_dpm.c 1546 */;
	struct radeon_vce_clock_voltage_dependency_table *cocci_id/* drivers/gpu/drm/radeon/trinity_dpm.c 1510 */;
	u16 *cocci_id/* drivers/gpu/drm/radeon/trinity_dpm.c 1506 */;
	struct trinity_power_info *cocci_id/* drivers/gpu/drm/radeon/trinity_dpm.c 1475 */;
	struct trinity_ps *cocci_id/* drivers/gpu/drm/radeon/trinity_dpm.c 1474 */;
	struct radeon_ps *cocci_id/* drivers/gpu/drm/radeon/trinity_dpm.c 1472 */;
	u8 cocci_id/* drivers/gpu/drm/radeon/trinity_dpm.c 1432 */;
	struct radeon_ps cocci_id/* drivers/gpu/drm/radeon/trinity_dpm.c 1236 */;
	enum radeon_dpm_forced_level cocci_id/* drivers/gpu/drm/radeon/trinity_dpm.c 1203 */;
	int cocci_id/* drivers/gpu/drm/radeon/trinity_dpm.c 1101 */;
}
