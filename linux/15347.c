cocci_test_suite() {
	unsigned int cocci_id/* drivers/watchdog/ts72xx_wdt.c 80 */;
	struct ts72xx_wdt_priv *cocci_id/* drivers/watchdog/ts72xx_wdt.c 73 */;
	struct watchdog_device *cocci_id/* drivers/watchdog/ts72xx_wdt.c 71 */;
	struct ts72xx_wdt_priv {
		void __iomem *control_reg;
		void __iomem *feed_reg;
		struct watchdog_device wdd;
		unsigned char regval;
	} cocci_id/* drivers/watchdog/ts72xx_wdt.c 44 */;
	bool cocci_id/* drivers/watchdog/ts72xx_wdt.c 27 */;
	int cocci_id/* drivers/watchdog/ts72xx_wdt.c 24 */;
	struct platform_driver cocci_id/* drivers/watchdog/ts72xx_wdt.c 165 */;
	struct device *cocci_id/* drivers/watchdog/ts72xx_wdt.c 125 */;
	struct platform_device *cocci_id/* drivers/watchdog/ts72xx_wdt.c 123 */;
	const struct watchdog_ops cocci_id/* drivers/watchdog/ts72xx_wdt.c 115 */;
	const struct watchdog_info cocci_id/* drivers/watchdog/ts72xx_wdt.c 107 */;
}
