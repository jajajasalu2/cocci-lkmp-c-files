cocci_test_suite() {
	struct cpufreq_driver cocci_id/* drivers/cpufreq/tegra186-cpufreq.c 94 */;
	void __iomem *cocci_id/* drivers/cpufreq/tegra186-cpufreq.c 86 */;
	const struct tegra186_cpufreq_cluster_info *cocci_id/* drivers/cpufreq/tegra186-cpufreq.c 60 */;
	struct tegra186_cpufreq_cluster *cocci_id/* drivers/cpufreq/tegra186-cpufreq.c 59 */;
	struct tegra186_cpufreq_data *cocci_id/* drivers/cpufreq/tegra186-cpufreq.c 55 */;
	struct cpufreq_policy *cocci_id/* drivers/cpufreq/tegra186-cpufreq.c 53 */;
	struct tegra186_cpufreq_data {
		void __iomem *regs;
		size_t num_clusters;
		struct tegra186_cpufreq_cluster *clusters;
	} cocci_id/* drivers/cpufreq/tegra186-cpufreq.c 46 */;
	struct tegra186_cpufreq_cluster {
		const struct tegra186_cpufreq_cluster_info *info;
		struct cpufreq_frequency_table *table;
	} cocci_id/* drivers/cpufreq/tegra186-cpufreq.c 41 */;
	const struct tegra186_cpufreq_cluster_info cocci_id/* drivers/cpufreq/tegra186-cpufreq.c 26 */[];
	struct platform_driver cocci_id/* drivers/cpufreq/tegra186-cpufreq.c 256 */;
	const struct of_device_id cocci_id/* drivers/cpufreq/tegra186-cpufreq.c 250 */[];
	struct resource *cocci_id/* drivers/cpufreq/tegra186-cpufreq.c 190 */;
	struct tegra186_cpufreq_cluster_info {
		unsigned long offset;
		int cpus[4];
		unsigned int bpmp_cluster_id;
	} cocci_id/* drivers/cpufreq/tegra186-cpufreq.c 19 */;
	u32 cocci_id/* drivers/cpufreq/tegra186-cpufreq.c 160 */;
	u16 cocci_id/* drivers/cpufreq/tegra186-cpufreq.c 138 */;
	void *cocci_id/* drivers/cpufreq/tegra186-cpufreq.c 113 */;
	dma_addr_t cocci_id/* drivers/cpufreq/tegra186-cpufreq.c 112 */;
	int cocci_id/* drivers/cpufreq/tegra186-cpufreq.c 111 */;
	struct cpu_vhint_data *cocci_id/* drivers/cpufreq/tegra186-cpufreq.c 110 */;
	struct tegra_bpmp_message cocci_id/* drivers/cpufreq/tegra186-cpufreq.c 109 */;
	struct mrq_cpu_vhint_request cocci_id/* drivers/cpufreq/tegra186-cpufreq.c 108 */;
	unsigned int cocci_id/* drivers/cpufreq/tegra186-cpufreq.c 105 */;
	struct tegra_bpmp *cocci_id/* drivers/cpufreq/tegra186-cpufreq.c 104 */;
	struct platform_device *cocci_id/* drivers/cpufreq/tegra186-cpufreq.c 104 */;
	struct cpufreq_frequency_table *cocci_id/* drivers/cpufreq/tegra186-cpufreq.c 103 */;
}
