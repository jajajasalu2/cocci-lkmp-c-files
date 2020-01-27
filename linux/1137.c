cocci_test_suite() {
	struct cpufreq_policy *cocci_id/* drivers/cpufreq/e_powersaver.c 79 */;
	int cocci_id/* drivers/cpufreq/e_powersaver.c 79 */;
	void cocci_id/* drivers/cpufreq/e_powersaver.c 56 */;
	struct acpi_processor_performance *cocci_id/* drivers/cpufreq/e_powersaver.c 53 */;
	struct eps_cpu_data *cocci_id/* drivers/cpufreq/e_powersaver.c 43 */[NR_CPUS];
	void __exit cocci_id/* drivers/cpufreq/e_powersaver.c 402 */;
	int __init cocci_id/* drivers/cpufreq/e_powersaver.c 393 */;
	const struct x86_cpu_id cocci_id/* drivers/cpufreq/e_powersaver.c 387 */[];
	struct cpufreq_driver cocci_id/* drivers/cpufreq/e_powersaver.c 374 */;
	unsigned int cocci_id/* drivers/cpufreq/e_powersaver.c 366 */;
	struct cpufreq_frequency_table *cocci_id/* drivers/cpufreq/e_powersaver.c 184 */;
	struct cpuinfo_x86 *cocci_id/* drivers/cpufreq/e_powersaver.c 183 */;
	struct eps_cpu_data *cocci_id/* drivers/cpufreq/e_powersaver.c 182 */;
	u8 cocci_id/* drivers/cpufreq/e_powersaver.c 177 */;
	u64 cocci_id/* drivers/cpufreq/e_powersaver.c 176 */;
	u32 cocci_id/* drivers/cpufreq/e_powersaver.c 175 */;
	struct eps_cpu_data {
		u32 fsb;
#if IS_ENABLED(CONFIG_ACPI_PROCESSOR)
		u32 bios_limit;
#endif
		struct cpufreq_frequency_table freq_table[];
	} cocci_id/*  1 */;
}
