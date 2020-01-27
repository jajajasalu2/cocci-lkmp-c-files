cocci_test_suite() {
	struct platform_driver cocci_id/* drivers/devfreq/tegra30-devfreq.c 929 */;
	const struct of_device_id cocci_id/* drivers/devfreq/tegra30-devfreq.c 921 */[];
	struct tegra_devfreq_device_config {
		u32 offset;
		u32 irq_mask;
		unsigned int boost_up_coeff;
		unsigned int boost_down_coeff;
		unsigned int boost_up_threshold;
		unsigned int boost_down_threshold;
		u32 avg_dependency_threshold;
	} cocci_id/* drivers/devfreq/tegra30-devfreq.c 86 */;
	long cocci_id/* drivers/devfreq/tegra30-devfreq.c 780 */;
	struct devfreq *cocci_id/* drivers/devfreq/tegra30-devfreq.c 778 */;
	struct platform_device *cocci_id/* drivers/devfreq/tegra30-devfreq.c 774 */;
	struct devfreq_governor cocci_id/* drivers/devfreq/tegra30-devfreq.c 766 */;
	unsigned int *cocci_id/* drivers/devfreq/tegra30-devfreq.c 717 */;
	struct devfreq_dev_profile cocci_id/* drivers/devfreq/tegra30-devfreq.c 676 */;
	struct devfreq_dev_status *cocci_id/* drivers/devfreq/tegra30-devfreq.c 646 */;
	struct device *cocci_id/* drivers/devfreq/tegra30-devfreq.c 645 */;
	struct dev_pm_opp *cocci_id/* drivers/devfreq/tegra30-devfreq.c 617 */;
	unsigned long *cocci_id/* drivers/devfreq/tegra30-devfreq.c 612 */;
	struct cpufreq_freqs *cocci_id/* drivers/devfreq/tegra30-devfreq.c 432 */;
	struct work_struct *cocci_id/* drivers/devfreq/tegra30-devfreq.c 398 */;
	struct tegra_devfreq cocci_id/* drivers/devfreq/tegra30-devfreq.c 385 */;
	struct clk_notifier_data *cocci_id/* drivers/devfreq/tegra30-devfreq.c 377 */;
	struct notifier_block *cocci_id/* drivers/devfreq/tegra30-devfreq.c 374 */;
	bool cocci_id/* drivers/devfreq/tegra30-devfreq.c 352 */;
	irqreturn_t cocci_id/* drivers/devfreq/tegra30-devfreq.c 349 */;
	void *cocci_id/* drivers/devfreq/tegra30-devfreq.c 349 */;
	int cocci_id/* drivers/devfreq/tegra30-devfreq.c 349 */;
	struct tegra_devfreq_device *cocci_id/* drivers/devfreq/tegra30-devfreq.c 317 */;
	const struct tegra_actmon_emc_ratio *cocci_id/* drivers/devfreq/tegra30-devfreq.c 302 */;
	unsigned int cocci_id/* drivers/devfreq/tegra30-devfreq.c 301 */;
	struct tegra_devfreq *cocci_id/* drivers/devfreq/tegra30-devfreq.c 298 */;
	unsigned long cocci_id/* drivers/devfreq/tegra30-devfreq.c 298 */;
	u32 cocci_id/* drivers/devfreq/tegra30-devfreq.c 255 */;
	void cocci_id/* drivers/devfreq/tegra30-devfreq.c 252 */;
	unsigned long long cocci_id/* drivers/devfreq/tegra30-devfreq.c 214 */;
	const struct tegra_actmon_emc_ratio cocci_id/* drivers/devfreq/tegra30-devfreq.c 183 */[];
	struct tegra_actmon_emc_ratio {
		unsigned long cpu_freq;
		unsigned long emc_freq;
	} cocci_id/* drivers/devfreq/tegra30-devfreq.c 178 */;
	struct tegra_devfreq {
		struct devfreq *devfreq;
		struct reset_control *reset;
		struct clk *clock;
		void __iomem *regs;
		struct clk *emc_clock;
		unsigned long max_freq;
		unsigned long cur_freq;
		struct notifier_block clk_rate_change_nb;
		struct delayed_work cpufreq_update_work;
		struct notifier_block cpu_rate_change_nb;
		struct tegra_devfreq_device devices[ARRAY_SIZE(actmon_device_configs)];
		unsigned int irq;
		bool started;
	} cocci_id/* drivers/devfreq/tegra30-devfreq.c 156 */;
	struct tegra_devfreq_device {
		const struct tegra_devfreq_device_config *config;
		void __iomem *regs;
		u32 avg_count;
		unsigned long boost_freq;
		unsigned long target_freq;
	} cocci_id/* drivers/devfreq/tegra30-devfreq.c 139 */;
	const struct tegra_devfreq_device_config cocci_id/* drivers/devfreq/tegra30-devfreq.c 112 */[];
	enum tegra_actmon_device{MCALL=0, MCCPU,} cocci_id/* drivers/devfreq/tegra30-devfreq.c 107 */;
}
