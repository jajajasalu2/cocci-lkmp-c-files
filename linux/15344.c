cocci_test_suite() {
	const struct watchdog_ops cocci_id/* drivers/watchdog/ts4800_wdt.c 97 */;
	unsigned int cocci_id/* drivers/watchdog/ts4800_wdt.c 81 */;
	void cocci_id/* drivers/watchdog/ts4800_wdt.c 59 */;
	const struct {
		const int timeout;
		const int regval;
	} cocci_id/* drivers/watchdog/ts4800_wdt.c 49 */[];
	struct ts4800_wdt {
		struct watchdog_device wdd;
		struct regmap *regmap;
		u32 feed_offset;
		u32 feed_val;
	} cocci_id/* drivers/watchdog/ts4800_wdt.c 30 */;
	struct platform_driver cocci_id/* drivers/watchdog/ts4800_wdt.c 191 */;
	bool cocci_id/* drivers/watchdog/ts4800_wdt.c 19 */;
	const struct of_device_id cocci_id/* drivers/watchdog/ts4800_wdt.c 185 */[];
	u32 cocci_id/* drivers/watchdog/ts4800_wdt.c 116 */;
	struct ts4800_wdt *cocci_id/* drivers/watchdog/ts4800_wdt.c 115 */;
	struct watchdog_device *cocci_id/* drivers/watchdog/ts4800_wdt.c 114 */;
	struct device_node *cocci_id/* drivers/watchdog/ts4800_wdt.c 112 */;
	struct device *cocci_id/* drivers/watchdog/ts4800_wdt.c 111 */;
	struct platform_device *cocci_id/* drivers/watchdog/ts4800_wdt.c 109 */;
	int cocci_id/* drivers/watchdog/ts4800_wdt.c 109 */;
	const struct watchdog_info cocci_id/* drivers/watchdog/ts4800_wdt.c 104 */;
}
