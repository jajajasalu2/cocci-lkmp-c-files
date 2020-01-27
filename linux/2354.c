cocci_test_suite() {
	void __user *cocci_id/* drivers/ps3/ps3-lpm.c 972 */;
	const unsigned long cocci_id/* drivers/ps3/ps3-lpm.c 933 */;
	unsigned long *cocci_id/* drivers/ps3/ps3-lpm.c 918 */;
	void *cocci_id/* drivers/ps3/ps3-lpm.c 917 */;
	unsigned long cocci_id/* drivers/ps3/ps3-lpm.c 917 */;
	u32 cocci_id/* drivers/ps3/ps3-lpm.c 882 */;
	void cocci_id/* drivers/ps3/ps3-lpm.c 882 */;
	struct ps3_lpm_shadow_regs {
		u64 pm_control;
		u64 pm_start_stop;
		u64 group_control;
		u64 debug_bus_control;
	} cocci_id/* drivers/ps3/ps3-lpm.c 81 */;
	u16 cocci_id/* drivers/ps3/ps3-lpm.c 764 */;
	u64 cocci_id/* drivers/ps3/ps3-lpm.c 748 */;
	int cocci_id/* drivers/ps3/ps3-lpm.c 748 */;
	u8 cocci_id/* drivers/ps3/ps3-lpm.c 732 */;
	enum pm_reg_name cocci_id/* drivers/ps3/ps3-lpm.c 387 */;
	const u64 cocci_id/* drivers/ps3/ps3-lpm.c 365 */;
	enum{use_start_stop_bookmark=1,} cocci_id/* drivers/ps3/ps3-lpm.c 162 */;
	struct device *cocci_id/* drivers/ps3/ps3-lpm.c 146 */;
	struct ps3_lpm_priv *cocci_id/* drivers/ps3/ps3-lpm.c 144 */;
	enum{PS3_LPM_DEFAULT_TB_CACHE_SIZE=0x4000,} cocci_id/* drivers/ps3/ps3-lpm.c 132 */;
	void __exit cocci_id/* drivers/ps3/ps3-lpm.c 1229 */;
	int __init cocci_id/* drivers/ps3/ps3-lpm.c 1223 */;
	struct ps3_system_bus_driver cocci_id/* drivers/ps3/ps3-lpm.c 1214 */;
	struct ps3_system_bus_device *cocci_id/* drivers/ps3/ps3-lpm.c 1176 */;
	struct ps3_lpm_priv {
		atomic_t open;
		u64 rights;
		u64 node_id;
		u64 pu_id;
		u64 lpm_id;
		u64 outlet_id;
		u64 tb_count;
		void *tb_cache;
		u64 tb_cache_size;
		void *tb_cache_internal;
		struct ps3_lpm_shadow_regs shadow;
		struct ps3_system_bus_device *sbd;
	} cocci_id/* drivers/ps3/ps3-lpm.c 117 */;
	enum ps3_lpm_tb_type cocci_id/* drivers/ps3/ps3-lpm.c 1074 */;
}
