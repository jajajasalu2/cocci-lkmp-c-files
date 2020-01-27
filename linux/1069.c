cocci_test_suite() {
	unsigned int cocci_id/* drivers/cpufreq/s3c2416-cpufreq.c 87 */;
	struct cpufreq_frequency_table cocci_id/* drivers/cpufreq/s3c2416-cpufreq.c 71 */[];
	struct s3c2416_dvfs cocci_id/* drivers/cpufreq/s3c2416-cpufreq.c 65 */[];
	int __init cocci_id/* drivers/cpufreq/s3c2416-cpufreq.c 478 */;
	struct cpufreq_driver cocci_id/* drivers/cpufreq/s3c2416-cpufreq.c 468 */;
	struct s3c2416_dvfs {
		unsigned int vddarm_min;
		unsigned int vddarm_max;
	} cocci_id/* drivers/cpufreq/s3c2416-cpufreq.c 42 */;
	struct s3c2416_data cocci_id/* drivers/cpufreq/s3c2416-cpufreq.c 40 */;
	unsigned long cocci_id/* drivers/cpufreq/s3c2416-cpufreq.c 338 */;
	struct clk *cocci_id/* drivers/cpufreq/s3c2416-cpufreq.c 337 */;
	struct cpufreq_policy *cocci_id/* drivers/cpufreq/s3c2416-cpufreq.c 333 */;
	struct notifier_block cocci_id/* drivers/cpufreq/s3c2416-cpufreq.c 329 */;
	void *cocci_id/* drivers/cpufreq/s3c2416-cpufreq.c 303 */;
	struct notifier_block *cocci_id/* drivers/cpufreq/s3c2416-cpufreq.c 302 */;
	struct s3c2416_dvfs *cocci_id/* drivers/cpufreq/s3c2416-cpufreq.c 267 */;
	struct cpufreq_frequency_table *cocci_id/* drivers/cpufreq/s3c2416-cpufreq.c 266 */;
	int cocci_id/* drivers/cpufreq/s3c2416-cpufreq.c 265 */;
	struct s3c2416_data *cocci_id/* drivers/cpufreq/s3c2416-cpufreq.c 263 */;
	void cocci_id/* drivers/cpufreq/s3c2416-cpufreq.c 263 */;
	struct s3c2416_data {
		struct clk *armdiv;
		struct clk *armclk;
		struct clk *hclk;
		unsigned long regulator_latency;
#ifdef CONFIG_ARM_S3C2416_CPUFREQ_VCORESCALE
		struct regulator *vddarm;
#endif
		struct cpufreq_frequency_table *freq_table;
		bool is_dvs;
		bool disable_dvs;
	} cocci_id/* drivers/cpufreq/s3c2416-cpufreq.c 24 */;
}
