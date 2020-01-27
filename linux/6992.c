cocci_test_suite() {
	const struct x86_cpu_id cocci_id/* drivers/powercap/intel_rapl_common.c 953 */[]__initconst;
	const struct rapl_defaults cocci_id/* drivers/powercap/intel_rapl_common.c 939 */;
	struct rapl_defaults {
		u8 floor_freq_reg_addr;
		int (*check_unit)(struct rapl_package *rp, int cpu);
		void (*set_floor_freq)(struct rapl_domain *rd, bool mode);
		u64 (*compute_time_window)(struct rapl_package *rp, u64 val,
					   bool to_raw);
		unsigned int dram_domain_energy_unit;
	} cocci_id/* drivers/powercap/intel_rapl_common.c 92 */;
	bool cocci_id/* drivers/powercap/intel_rapl_common.c 897 */;
	const char cocci_id/* drivers/powercap/intel_rapl_common.c 86 */[];
	u32 cocci_id/* drivers/powercap/intel_rapl_common.c 816 */;
	struct rapl_package *cocci_id/* drivers/powercap/intel_rapl_common.c 814 */;
	void cocci_id/* drivers/powercap/intel_rapl_common.c 814 */;
	void *cocci_id/* drivers/powercap/intel_rapl_common.c 777 */;
	enum unit_type{ARBITRARY_UNIT, POWER_UNIT, ENERGY_UNIT, TIME_UNIT,} cocci_id/* drivers/powercap/intel_rapl_common.c 72 */;
	unsigned long long cocci_id/* drivers/powercap/intel_rapl_common.c 686 */;
	struct rapl_primitive_info *cocci_id/* drivers/powercap/intel_rapl_common.c 642 */;
	enum rapl_primitives cocci_id/* drivers/powercap/intel_rapl_common.c 639 */;
	struct rapl_primitive_info cocci_id/* drivers/powercap/intel_rapl_common.c 585 */[];
	enum unit_type cocci_id/* drivers/powercap/intel_rapl_common.c 550 */;
	unsigned int cocci_id/* drivers/powercap/intel_rapl_common.c 520 */;
	enum rapl_domain_reg_id cocci_id/* drivers/powercap/intel_rapl_common.c 516 */;
	enum rapl_domain_type cocci_id/* drivers/powercap/intel_rapl_common.c 515 */;
	const struct powercap_zone_constraint_ops cocci_id/* drivers/powercap/intel_rapl_common.c 503 */;
	const char *cocci_id/* drivers/powercap/intel_rapl_common.c 459 */;
	struct powercap_zone *cocci_id/* drivers/powercap/intel_rapl_common.c 459 */;
	u64 cocci_id/* drivers/powercap/intel_rapl_common.c 357 */;
	u64 *cocci_id/* drivers/powercap/intel_rapl_common.c 354 */;
	struct rapl_domain *cocci_id/* drivers/powercap/intel_rapl_common.c 296 */;
	int cocci_id/* drivers/powercap/intel_rapl_common.c 296 */;
	const struct powercap_zone_ops cocci_id/* drivers/powercap/intel_rapl_common.c 248 */[];
	bool *cocci_id/* drivers/powercap/intel_rapl_common.c 227 */;
	void __exit cocci_id/* drivers/powercap/intel_rapl_common.c 1453 */;
	const char *const cocci_id/* drivers/powercap/intel_rapl_common.c 143 */[];
	const struct x86_cpu_id *cocci_id/* drivers/powercap/intel_rapl_common.c 1419 */;
	int __init cocci_id/* drivers/powercap/intel_rapl_common.c 1417 */;
	struct platform_device *cocci_id/* drivers/powercap/intel_rapl_common.c 1415 */;
	struct notifier_block cocci_id/* drivers/powercap/intel_rapl_common.c 1411 */;
	unsigned long cocci_id/* drivers/powercap/intel_rapl_common.c 1398 */;
	struct notifier_block *cocci_id/* drivers/powercap/intel_rapl_common.c 1397 */;
	void cocci_id/* drivers/powercap/intel_rapl_common.c 139 */(struct rapl_package *rp);
	u64 cocci_id/* drivers/powercap/intel_rapl_common.c 137 */(struct rapl_domain *rd,
								   enum unit_type type,
								   u64 value,
								   int to_raw);
	int cocci_id/* drivers/powercap/intel_rapl_common.c 134 */(struct rapl_domain *rd,
								   enum rapl_primitives prim,
								   unsigned long long value);
	int cocci_id/* drivers/powercap/intel_rapl_common.c 131 */(struct rapl_domain *rd,
								   enum rapl_primitives prim,
								   bool xlate,
								   u64 *data);
	struct rapl_package cocci_id/* drivers/powercap/intel_rapl_common.c 1298 */;
	struct cpuinfo_x86 *cocci_id/* drivers/powercap/intel_rapl_common.c 1295 */;
	struct rapl_if_priv *cocci_id/* drivers/powercap/intel_rapl_common.c 1291 */;
	struct rapl_domain cocci_id/* drivers/powercap/intel_rapl_common.c 1230 */;
	struct rapl_primitive_info {
		const char *name;
		u64 mask;
		int shift;
		enum rapl_domain_reg_id id;
		enum unit_type unit;
		u32 flag;
	} cocci_id/* drivers/powercap/intel_rapl_common.c 112 */;
	struct reg_action cocci_id/* drivers/powercap/intel_rapl_common.c 1091 */;
	struct rapl_defaults *cocci_id/* drivers/powercap/intel_rapl_common.c 100 */;
}
