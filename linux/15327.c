cocci_test_suite() {
	u16 cocci_id/* drivers/watchdog/jz4740_wdt.c 59 */;
	struct jz4740_wdt_drvdata *cocci_id/* drivers/watchdog/jz4740_wdt.c 48 */;
	struct watchdog_device *cocci_id/* drivers/watchdog/jz4740_wdt.c 46 */;
	int cocci_id/* drivers/watchdog/jz4740_wdt.c 46 */;
	struct jz4740_wdt_drvdata {
		struct watchdog_device wdt;
		struct regmap *map;
		struct clk *clk;
		unsigned long clk_rate;
	} cocci_id/* drivers/watchdog/jz4740_wdt.c 39 */;
	unsigned int cocci_id/* drivers/watchdog/jz4740_wdt.c 32 */;
	bool cocci_id/* drivers/watchdog/jz4740_wdt.c 26 */;
	struct platform_driver cocci_id/* drivers/watchdog/jz4740_wdt.c 187 */;
	struct jz4740_wdt_drvdata cocci_id/* drivers/watchdog/jz4740_wdt.c 145 */;
	long cocci_id/* drivers/watchdog/jz4740_wdt.c 142 */;
	struct device *cocci_id/* drivers/watchdog/jz4740_wdt.c 139 */;
	struct platform_device *cocci_id/* drivers/watchdog/jz4740_wdt.c 137 */;
	const struct of_device_id cocci_id/* drivers/watchdog/jz4740_wdt.c 129 */[];
	const struct watchdog_ops cocci_id/* drivers/watchdog/jz4740_wdt.c 119 */;
	const struct watchdog_info cocci_id/* drivers/watchdog/jz4740_wdt.c 114 */;
	void *cocci_id/* drivers/watchdog/jz4740_wdt.c 107 */;
	unsigned long cocci_id/* drivers/watchdog/jz4740_wdt.c 107 */;
}
