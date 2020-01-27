cocci_test_suite() {
	struct ssb_bus *cocci_id/* drivers/ssb/driver_chipcommon_pmu.c 93 */;
	unsigned int cocci_id/* drivers/ssb/driver_chipcommon_pmu.c 78 */;
	u32 cocci_id/* drivers/ssb/driver_chipcommon_pmu.c 75 */;
	const struct pmu0_plltab_entry *cocci_id/* drivers/ssb/driver_chipcommon_pmu.c 75 */;
	int cocci_id/* drivers/ssb/driver_chipcommon_pmu.c 593 */;
	bool cocci_id/* drivers/ssb/driver_chipcommon_pmu.c 590 */;
	const struct pmu0_plltab_entry cocci_id/* drivers/ssb/driver_chipcommon_pmu.c 57 */[];
	enum ssb_pmu_ldo_volt_id cocci_id/* drivers/ssb/driver_chipcommon_pmu.c 541 */;
	struct pmu0_plltab_entry {
		u16 freq;
		u8 xf;
		u8 wb_int;
		u32 wb_frac;
	} cocci_id/* drivers/ssb/driver_chipcommon_pmu.c 50 */;
	const struct pmu_res_depend_tab_entry *cocci_id/* drivers/ssb/driver_chipcommon_pmu.c 430 */;
	const struct pmu_res_updown_tab_entry *cocci_id/* drivers/ssb/driver_chipcommon_pmu.c 428 */;
	const struct pmu_res_depend_tab_entry cocci_id/* drivers/ssb/driver_chipcommon_pmu.c 411 */[];
	const struct pmu_res_updown_tab_entry cocci_id/* drivers/ssb/driver_chipcommon_pmu.c 407 */[];
	struct pmu_res_depend_tab_entry {
		u8 resource;
		u8 task;
		u32 depend;
	} cocci_id/* drivers/ssb/driver_chipcommon_pmu.c 368 */;
	enum pmu_res_depend_tab_task{PMU_RES_DEP_SET=1, PMU_RES_DEP_ADD, PMU_RES_DEP_REMOVE,} cocci_id/* drivers/ssb/driver_chipcommon_pmu.c 362 */;
	struct pmu_res_updown_tab_entry {
		u8 resource;
		u16 updown;
	} cocci_id/* drivers/ssb/driver_chipcommon_pmu.c 357 */;
	char cocci_id/* drivers/ssb/driver_chipcommon_pmu.c 324 */[20];
	void cocci_id/* drivers/ssb/driver_chipcommon_pmu.c 28 */;
	struct ssb_chipcommon *cocci_id/* drivers/ssb/driver_chipcommon_pmu.c 22 */;
	const struct pmu1_plltab_entry *cocci_id/* drivers/ssb/driver_chipcommon_pmu.c 206 */;
	const struct pmu1_plltab_entry cocci_id/* drivers/ssb/driver_chipcommon_pmu.c 186 */[];
	struct pmu1_plltab_entry {
		u16 freq;
		u8 xf;
		u8 ndiv_int;
		u32 ndiv_frac;
		u8 p1div;
		u8 p2div;
	} cocci_id/* drivers/ssb/driver_chipcommon_pmu.c 177 */;
}
