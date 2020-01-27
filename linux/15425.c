cocci_test_suite() {
	struct ftwdt010_wdt *cocci_id/* drivers/watchdog/ftwdt010_wdt.c 98 */;
	irqreturn_t cocci_id/* drivers/watchdog/ftwdt010_wdt.c 96 */;
	void *cocci_id/* drivers/watchdog/ftwdt010_wdt.c 96 */;
	int cocci_id/* drivers/watchdog/ftwdt010_wdt.c 96 */;
	struct watchdog_device *cocci_id/* drivers/watchdog/ftwdt010_wdt.c 77 */;
	u32 cocci_id/* drivers/watchdog/ftwdt010_wdt.c 53 */;
	struct ftwdt010_wdt cocci_id/* drivers/watchdog/ftwdt010_wdt.c 47 */;
	struct ftwdt010_wdt {
		struct watchdog_device wdd;
		struct device *dev;
		void __iomem *base;
		bool has_irq;
	} cocci_id/* drivers/watchdog/ftwdt010_wdt.c 37 */;
	struct platform_driver cocci_id/* drivers/watchdog/ftwdt010_wdt.c 218 */;
	const struct of_device_id cocci_id/* drivers/watchdog/ftwdt010_wdt.c 210 */[];
	const struct dev_pm_ops cocci_id/* drivers/watchdog/ftwdt010_wdt.c 204 */;
	int __maybe_unused cocci_id/* drivers/watchdog/ftwdt010_wdt.c 190 */;
	unsigned int cocci_id/* drivers/watchdog/ftwdt010_wdt.c 125 */;
	struct device *cocci_id/* drivers/watchdog/ftwdt010_wdt.c 123 */;
	struct platform_device *cocci_id/* drivers/watchdog/ftwdt010_wdt.c 121 */;
	const struct watchdog_info cocci_id/* drivers/watchdog/ftwdt010_wdt.c 113 */;
	const struct watchdog_ops cocci_id/* drivers/watchdog/ftwdt010_wdt.c 105 */;
}
