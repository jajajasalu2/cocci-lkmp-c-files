cocci_test_suite() {
	struct platform_driver cocci_id/* drivers/devfreq/event/exynos-ppmu.c 703 */;
	struct devfreq_event_desc *cocci_id/* drivers/devfreq/event/exynos-ppmu.c 647 */;
	struct devfreq_event_dev **cocci_id/* drivers/devfreq/event/exynos-ppmu.c 646 */;
	void __iomem *cocci_id/* drivers/devfreq/event/exynos-ppmu.c 606 */;
	struct resource *cocci_id/* drivers/devfreq/event/exynos-ppmu.c 605 */;
	struct device_node *cocci_id/* drivers/devfreq/event/exynos-ppmu.c 604 */;
	struct device *cocci_id/* drivers/devfreq/event/exynos-ppmu.c 603 */;
	struct platform_device *cocci_id/* drivers/devfreq/event/exynos-ppmu.c 600 */;
	struct regmap_config cocci_id/* drivers/devfreq/event/exynos-ppmu.c 594 */;
	struct devfreq_event_dev cocci_id/* drivers/devfreq/event/exynos-ppmu.c 559 */;
	enum exynos_ppmu_type cocci_id/* drivers/devfreq/event/exynos-ppmu.c 518 */;
	struct __exynos_ppmu_events {
		char *name;
		int id;
	} cocci_id/* drivers/devfreq/event/exynos-ppmu.c 51 */[];
	const struct of_device_id *cocci_id/* drivers/devfreq/event/exynos-ppmu.c 500 */;
	void *cocci_id/* drivers/devfreq/event/exynos-ppmu.c 484 */;
	const struct of_device_id cocci_id/* drivers/devfreq/event/exynos-ppmu.c 481 */[];
	u64 cocci_id/* drivers/devfreq/event/exynos-ppmu.c 455 */;
	unsigned long cocci_id/* drivers/devfreq/event/exynos-ppmu.c 418 */;
	struct exynos_ppmu {
		struct devfreq_event_dev **edev;
		struct devfreq_event_desc *desc;
		unsigned int num_events;
		struct device *dev;
		struct regmap *regmap;
		struct exynos_ppmu_data ppmu;
		enum exynos_ppmu_type ppmu_type;
	} cocci_id/* drivers/devfreq/event/exynos-ppmu.c 33 */;
	struct exynos_ppmu_data {
		struct clk *clk;
	} cocci_id/* drivers/devfreq/event/exynos-ppmu.c 29 */;
	const struct devfreq_event_ops cocci_id/* drivers/devfreq/event/exynos-ppmu.c 261 */;
	enum exynos_ppmu_type{EXYNOS_TYPE_PPMU, EXYNOS_TYPE_PPMU_V2,} cocci_id/* drivers/devfreq/event/exynos-ppmu.c 24 */;
	unsigned int cocci_id/* drivers/devfreq/event/exynos-ppmu.c 196 */;
	struct devfreq_event_data *cocci_id/* drivers/devfreq/event/exynos-ppmu.c 192 */;
	u32 cocci_id/* drivers/devfreq/event/exynos-ppmu.c 122 */;
	struct exynos_ppmu *cocci_id/* drivers/devfreq/event/exynos-ppmu.c 120 */;
	struct devfreq_event_dev *cocci_id/* drivers/devfreq/event/exynos-ppmu.c 118 */;
	int cocci_id/* drivers/devfreq/event/exynos-ppmu.c 118 */;
}
