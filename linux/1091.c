cocci_test_suite() {
	struct armada_37xx_dvfs cocci_id/* drivers/cpufreq/armada-37xx-cpufreq.c 98 */[];
	struct armada_37xx_dvfs {
		u32 cpu_freq_max;
		u8 divider[LOAD_LEVEL_NR];
		u32 avs[LOAD_LEVEL_NR];
	} cocci_id/* drivers/cpufreq/armada-37xx-cpufreq.c 92 */;
	struct armada37xx_cpufreq_state {
		struct regmap *regmap;
		u32 nb_l0l1;
		u32 nb_l2l3;
		u32 nb_dyn_mod;
		u32 nb_cpu_load;
	} cocci_id/* drivers/cpufreq/armada-37xx-cpufreq.c 82 */;
	int cocci_id/* drivers/cpufreq/armada-37xx-cpufreq.c 74 */[];
	struct clk *cocci_id/* drivers/cpufreq/armada-37xx-cpufreq.c 364 */;
	struct device *cocci_id/* drivers/cpufreq/armada-37xx-cpufreq.c 362 */;
	unsigned long cocci_id/* drivers/cpufreq/armada-37xx-cpufreq.c 359 */;
	struct platform_device *cocci_id/* drivers/cpufreq/armada-37xx-cpufreq.c 358 */;
	struct cpufreq_dt_platform_data cocci_id/* drivers/cpufreq/armada-37xx-cpufreq.c 356 */;
	int __init cocci_id/* drivers/cpufreq/armada-37xx-cpufreq.c 354 */;
	struct armada37xx_cpufreq_state *cocci_id/* drivers/cpufreq/armada-37xx-cpufreq.c 334 */;
	struct cpufreq_policy *cocci_id/* drivers/cpufreq/armada-37xx-cpufreq.c 332 */;
	void cocci_id/* drivers/cpufreq/armada-37xx-cpufreq.c 293 */;
	u32 cocci_id/* drivers/cpufreq/armada-37xx-cpufreq.c 211 */;
	int cocci_id/* drivers/cpufreq/armada-37xx-cpufreq.c 210 */;
	unsigned int cocci_id/* drivers/cpufreq/armada-37xx-cpufreq.c 209 */;
	struct armada_37xx_dvfs *cocci_id/* drivers/cpufreq/armada-37xx-cpufreq.c 207 */;
	struct regmap *cocci_id/* drivers/cpufreq/armada-37xx-cpufreq.c 206 */;
	void __init cocci_id/* drivers/cpufreq/armada-37xx-cpufreq.c 206 */;
	u8 *cocci_id/* drivers/cpufreq/armada-37xx-cpufreq.c 123 */;
}
