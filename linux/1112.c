cocci_test_suite() {
	struct ti_cpufreq_data *cocci_id/* drivers/cpufreq/ti-cpufreq.c 63 */;
	unsigned long cocci_id/* drivers/cpufreq/ti-cpufreq.c 63 */;
	struct ti_cpufreq_data {
		struct device *cpu_dev;
		struct device_node *opp_node;
		struct regmap *syscon;
		const struct ti_cpufreq_soc_data *soc_data;
		struct opp_table *opp_table;
	} cocci_id/* drivers/cpufreq/ti-cpufreq.c 55 */;
	struct ti_cpufreq_soc_data {
		const char *const *reg_names;
		unsigned long (*efuse_xlate)(struct ti_cpufreq_data *opp_data,
					     unsigned long efuse);
		unsigned long efuse_fallback;
		unsigned long efuse_offset;
		unsigned long efuse_mask;
		unsigned long efuse_shift;
		unsigned long rev_offset;
		bool multi_regulator;
	} cocci_id/* drivers/cpufreq/ti-cpufreq.c 43 */;
	struct platform_driver cocci_id/* drivers/cpufreq/ti-cpufreq.c 418 */;
	struct ti_cpufreq_data cocci_id/* drivers/cpufreq/ti-cpufreq.c 41 */;
	const struct of_device_id *cocci_id/* drivers/cpufreq/ti-cpufreq.c 406 */;
	void cocci_id/* drivers/cpufreq/ti-cpufreq.c 404 */;
	const char *const *cocci_id/* drivers/cpufreq/ti-cpufreq.c 378 */;
	struct opp_table *cocci_id/* drivers/cpufreq/ti-cpufreq.c 320 */;
	u32 cocci_id/* drivers/cpufreq/ti-cpufreq.c 318 */[VERSION_COUNT];
	struct platform_device *cocci_id/* drivers/cpufreq/ti-cpufreq.c 316 */;
	struct device_node *cocci_id/* drivers/cpufreq/ti-cpufreq.c 306 */;
	const struct of_device_id cocci_id/* drivers/cpufreq/ti-cpufreq.c 291 */[];
	void __iomem *cocci_id/* drivers/cpufreq/ti-cpufreq.c 214 */;
	u32 cocci_id/* drivers/cpufreq/ti-cpufreq.c 207 */;
	struct device *cocci_id/* drivers/cpufreq/ti-cpufreq.c 206 */;
	u32 *cocci_id/* drivers/cpufreq/ti-cpufreq.c 204 */;
	int cocci_id/* drivers/cpufreq/ti-cpufreq.c 203 */;
	struct ti_cpufreq_soc_data cocci_id/* drivers/cpufreq/ti-cpufreq.c 186 */;
	const char *const cocci_id/* drivers/cpufreq/ti-cpufreq.c 169 */[];
}
