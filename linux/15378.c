cocci_test_suite() {
	struct davinci_wdt_device {
		void __iomem *base;
		struct clk *clk;
		struct watchdog_device wdd;
	} cocci_id/* drivers/watchdog/davinci_wdt.c 64 */;
	struct platform_driver cocci_id/* drivers/watchdog/davinci_wdt.c 257 */;
	const struct of_device_id cocci_id/* drivers/watchdog/davinci_wdt.c 251 */[];
	struct device *cocci_id/* drivers/watchdog/davinci_wdt.c 200 */;
	struct platform_device *cocci_id/* drivers/watchdog/davinci_wdt.c 197 */;
	void *cocci_id/* drivers/watchdog/davinci_wdt.c 192 */;
	void cocci_id/* drivers/watchdog/davinci_wdt.c 192 */;
	const struct watchdog_ops cocci_id/* drivers/watchdog/davinci_wdt.c 183 */;
	const struct watchdog_info cocci_id/* drivers/watchdog/davinci_wdt.c 178 */;
	struct davinci_wdt_device *cocci_id/* drivers/watchdog/davinci_wdt.c 122 */;
	u32 cocci_id/* drivers/watchdog/davinci_wdt.c 121 */;
	unsigned long cocci_id/* drivers/watchdog/davinci_wdt.c 120 */;
	u64 cocci_id/* drivers/watchdog/davinci_wdt.c 119 */;
	struct watchdog_device *cocci_id/* drivers/watchdog/davinci_wdt.c 117 */;
	unsigned int cocci_id/* drivers/watchdog/davinci_wdt.c 117 */;
	int cocci_id/* drivers/watchdog/davinci_wdt.c 106 */;
}
