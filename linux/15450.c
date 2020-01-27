cocci_test_suite() {
	irqreturn_t cocci_id/* drivers/watchdog/sprd_wdt.c 81 */;
	void __iomem *cocci_id/* drivers/watchdog/sprd_wdt.c 71 */;
	struct sprd_wdt cocci_id/* drivers/watchdog/sprd_wdt.c 68 */;
	struct sprd_wdt {
		void __iomem *base;
		struct watchdog_device wdd;
		struct clk *enable;
		struct clk *rtc_enable;
		int irq;
	} cocci_id/* drivers/watchdog/sprd_wdt.c 58 */;
	struct platform_driver cocci_id/* drivers/watchdog/sprd_wdt.c 370 */;
	const struct of_device_id cocci_id/* drivers/watchdog/sprd_wdt.c 364 */[];
	const struct dev_pm_ops cocci_id/* drivers/watchdog/sprd_wdt.c 359 */;
	struct device *cocci_id/* drivers/watchdog/sprd_wdt.c 339 */;
	int __maybe_unused cocci_id/* drivers/watchdog/sprd_wdt.c 339 */;
	struct platform_device *cocci_id/* drivers/watchdog/sprd_wdt.c 260 */;
	const struct watchdog_info cocci_id/* drivers/watchdog/sprd_wdt.c 252 */;
	const struct watchdog_ops cocci_id/* drivers/watchdog/sprd_wdt.c 243 */;
	struct watchdog_device *cocci_id/* drivers/watchdog/sprd_wdt.c 234 */;
	struct sprd_wdt *cocci_id/* drivers/watchdog/sprd_wdt.c 164 */;
	void *cocci_id/* drivers/watchdog/sprd_wdt.c 162 */;
	void cocci_id/* drivers/watchdog/sprd_wdt.c 162 */;
	u32 cocci_id/* drivers/watchdog/sprd_wdt.c 142 */;
	int cocci_id/* drivers/watchdog/sprd_wdt.c 140 */;
}
