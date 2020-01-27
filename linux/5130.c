cocci_test_suite() {
	struct tegra_gpio_info {
		struct device *dev;
		void __iomem *regs;
		struct irq_domain *irq_domain;
		struct tegra_gpio_bank *bank_info;
		const struct tegra_gpio_soc_config *soc;
		struct gpio_chip gc;
		struct irq_chip ic;
		u32 bank_count;
	} cocci_id/* drivers/gpio/gpio-tegra.c 85 */;
	struct tegra_gpio_soc_config {
		bool debounce_supported;
		u32 bank_stride;
		u32 upper_offset;
	} cocci_id/* drivers/gpio/gpio-tegra.c 79 */;
	int __init cocci_id/* drivers/gpio/gpio-tegra.c 716 */;
	struct platform_driver cocci_id/* drivers/gpio/gpio-tegra.c 707 */;
	const struct of_device_id cocci_id/* drivers/gpio/gpio-tegra.c 700 */[];
	const struct tegra_gpio_soc_config cocci_id/* drivers/gpio/gpio-tegra.c 684 */;
	struct tegra_gpio_bank {
		unsigned int bank;
		unsigned int irq;
		spinlock_t lvl_lock[4];
		spinlock_t dbc_lock[4];
#ifdef CONFIG_PM_SLEEP
		u32 cnf[4];
		u32 out[4];
		u32 oe[4];
		u32 int_enb[4];
		u32 int_lvl[4];
		u32 wake_enb[4];
		u32 dbc_enb[4];
#endif
		u32 dbc_cnt[4];
		struct tegra_gpio_info *tgi;
	} cocci_id/* drivers/gpio/gpio-tegra.c 61 */;
	struct tegra_gpio_info cocci_id/* drivers/gpio/gpio-tegra.c 59 */;
	struct platform_device *cocci_id/* drivers/gpio/gpio-tegra.c 563 */;
	const struct dev_pm_ops cocci_id/* drivers/gpio/gpio-tegra.c 559 */;
	void cocci_id/* drivers/gpio/gpio-tegra.c 545 */;
	unsigned int cocci_id/* drivers/gpio/gpio-tegra.c 522 */;
	struct tegra_gpio_info *cocci_id/* drivers/gpio/gpio-tegra.c 521 */;
	struct seq_file *cocci_id/* drivers/gpio/gpio-tegra.c 519 */;
	void *cocci_id/* drivers/gpio/gpio-tegra.c 519 */;
	int cocci_id/* drivers/gpio/gpio-tegra.c 519 */;
	struct device *cocci_id/* drivers/gpio/gpio-tegra.c 416 */;
	struct irq_chip *cocci_id/* drivers/gpio/gpio-tegra.c 380 */;
	unsigned long cocci_id/* drivers/gpio/gpio-tegra.c 379 */;
	bool cocci_id/* drivers/gpio/gpio-tegra.c 377 */;
	struct irq_desc *cocci_id/* drivers/gpio/gpio-tegra.c 374 */;
	struct tegra_gpio_bank *cocci_id/* drivers/gpio/gpio-tegra.c 278 */;
	struct irq_data *cocci_id/* drivers/gpio/gpio-tegra.c 276 */;
	u32 cocci_id/* drivers/gpio/gpio-tegra.c 209 */;
	struct gpio_chip *cocci_id/* drivers/gpio/gpio-tegra.c 167 */;
}
