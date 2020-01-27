cocci_test_suite() {
	unsigned long cocci_id/* drivers/cpufreq/tegra20-cpufreq.c 86 */;
	unsigned int cocci_id/* drivers/cpufreq/tegra20-cpufreq.c 39 */;
	struct tegra20_cpufreq {
		struct device *dev;
		struct cpufreq_driver driver;
		struct clk *cpu_clk;
		struct clk *pll_x_clk;
		struct clk *pll_p_clk;
		bool pll_x_prepared;
	} cocci_id/* drivers/cpufreq/tegra20-cpufreq.c 30 */;
	struct platform_driver cocci_id/* drivers/cpufreq/tegra20-cpufreq.c 209 */;
	struct cpufreq_frequency_table cocci_id/* drivers/cpufreq/tegra20-cpufreq.c 18 */[];
	struct tegra20_cpufreq *cocci_id/* drivers/cpufreq/tegra20-cpufreq.c 141 */;
	struct platform_device *cocci_id/* drivers/cpufreq/tegra20-cpufreq.c 139 */;
	int cocci_id/* drivers/cpufreq/tegra20-cpufreq.c 139 */;
	struct cpufreq_policy *cocci_id/* drivers/cpufreq/tegra20-cpufreq.c 131 */;
}
