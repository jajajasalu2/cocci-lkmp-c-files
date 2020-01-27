cocci_test_suite() {
	u32 cocci_id/* drivers/devfreq/exynos-bus.c 93 */;
	unsigned long *cocci_id/* drivers/devfreq/exynos-bus.c 93 */;
	unsigned long cocci_id/* drivers/devfreq/exynos-bus.c 67 */;
	struct devfreq_event_data *cocci_id/* drivers/devfreq/exynos-bus.c 64 */;
	struct platform_driver cocci_id/* drivers/devfreq/exynos-bus.c 482 */;
	const struct of_device_id cocci_id/* drivers/devfreq/exynos-bus.c 476 */[];
	const struct dev_pm_ops cocci_id/* drivers/devfreq/exynos-bus.c 472 */;
	bool cocci_id/* drivers/devfreq/exynos-bus.c 301 */;
	struct devfreq *cocci_id/* drivers/devfreq/exynos-bus.c 297 */;
	struct devfreq_passive_data *cocci_id/* drivers/devfreq/exynos-bus.c 296 */;
	struct devfreq_simple_ondemand_data *cocci_id/* drivers/devfreq/exynos-bus.c 295 */;
	struct devfreq_dev_profile *cocci_id/* drivers/devfreq/exynos-bus.c 294 */;
	struct platform_device *cocci_id/* drivers/devfreq/exynos-bus.c 290 */;
	struct exynos_bus {
		struct device *dev;
		struct devfreq *devfreq;
		struct devfreq_event_dev **edev;
		unsigned int edev_count;
		struct mutex lock;
		unsigned long curr_freq;
		struct opp_table *opp_table;
		struct clk *clk;
		unsigned int ratio;
	} cocci_id/* drivers/devfreq/exynos-bus.c 26 */;
	struct dev_pm_opp *cocci_id/* drivers/devfreq/exynos-bus.c 245 */;
	const char *cocci_id/* drivers/devfreq/exynos-bus.c 180 */;
	struct opp_table *cocci_id/* drivers/devfreq/exynos-bus.c 179 */;
	struct device_node *cocci_id/* drivers/devfreq/exynos-bus.c 175 */;
	int cocci_id/* drivers/devfreq/exynos-bus.c 153 */;
	struct exynos_bus *cocci_id/* drivers/devfreq/exynos-bus.c 152 */;
	struct device *cocci_id/* drivers/devfreq/exynos-bus.c 150 */;
	void cocci_id/* drivers/devfreq/exynos-bus.c 150 */;
	struct devfreq_event_data cocci_id/* drivers/devfreq/exynos-bus.c 123 */;
	struct devfreq_dev_status *cocci_id/* drivers/devfreq/exynos-bus.c 120 */;
}
