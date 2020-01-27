cocci_test_suite() {
	unsigned long cocci_id/* drivers/watchdog/rza_wdt.c 52 */;
	struct rza_wdt *cocci_id/* drivers/watchdog/rza_wdt.c 50 */;
	void cocci_id/* drivers/watchdog/rza_wdt.c 50 */;
	struct rza_wdt {
		struct watchdog_device wdev;
		void __iomem *base;
		struct clk *clk;
		u8 count;
		u8 cks;
	} cocci_id/* drivers/watchdog/rza_wdt.c 42 */;
	struct platform_driver cocci_id/* drivers/watchdog/rza_wdt.c 235 */;
	void *cocci_id/* drivers/watchdog/rza_wdt.c 229 */;
	const struct of_device_id cocci_id/* drivers/watchdog/rza_wdt.c 228 */[];
	uintptr_t cocci_id/* drivers/watchdog/rza_wdt.c 196 */;
	u8 cocci_id/* drivers/watchdog/rza_wdt.c 196 */;
	struct device *cocci_id/* drivers/watchdog/rza_wdt.c 169 */;
	struct platform_device *cocci_id/* drivers/watchdog/rza_wdt.c 167 */;
	const struct watchdog_ops cocci_id/* drivers/watchdog/rza_wdt.c 158 */;
	const struct watchdog_info cocci_id/* drivers/watchdog/rza_wdt.c 153 */;
	struct watchdog_device *cocci_id/* drivers/watchdog/rza_wdt.c 115 */;
	unsigned int cocci_id/* drivers/watchdog/rza_wdt.c 115 */;
	int cocci_id/* drivers/watchdog/rza_wdt.c 115 */;
}
