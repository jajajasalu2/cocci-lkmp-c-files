cocci_test_suite() {
	irqreturn_t cocci_id/* drivers/watchdog/at91sam9_wdt.c 96 */;
	void *cocci_id/* drivers/watchdog/at91sam9_wdt.c 96 */;
	struct at91wdt {
		struct watchdog_device wdd;
		void __iomem *base;
		unsigned long next_heartbeat;
		struct timer_list timer;
		u32 mr;
		u32 mr_mask;
		unsigned long heartbeat;
		bool nowayout;
		unsigned int irq;
		struct clk *sclk;
	} cocci_id/* drivers/watchdog/at91sam9_wdt.c 81 */;
	struct at91wdt cocci_id/* drivers/watchdog/at91sam9_wdt.c 80 */;
	bool cocci_id/* drivers/watchdog/at91sam9_wdt.c 75 */;
	struct platform_driver cocci_id/* drivers/watchdog/at91sam9_wdt.c 406 */;
	const struct of_device_id cocci_id/* drivers/watchdog/at91sam9_wdt.c 398 */[];
	int __exit cocci_id/* drivers/watchdog/at91sam9_wdt.c 385 */;
	int __init cocci_id/* drivers/watchdog/at91sam9_wdt.c 328 */;
	const char *cocci_id/* drivers/watchdog/at91sam9_wdt.c 270 */;
	struct device_node *cocci_id/* drivers/watchdog/at91sam9_wdt.c 266 */;
	const struct watchdog_ops cocci_id/* drivers/watchdog/at91sam9_wdt.c 258 */;
	const struct watchdog_info cocci_id/* drivers/watchdog/at91sam9_wdt.c 252 */;
	struct device *cocci_id/* drivers/watchdog/at91sam9_wdt.c 161 */;
	unsigned long cocci_id/* drivers/watchdog/at91sam9_wdt.c 159 */;
	u32 cocci_id/* drivers/watchdog/at91sam9_wdt.c 154 */;
	struct platform_device *cocci_id/* drivers/watchdog/at91sam9_wdt.c 152 */;
	int cocci_id/* drivers/watchdog/at91sam9_wdt.c 152 */;
	struct watchdog_device *cocci_id/* drivers/watchdog/at91sam9_wdt.c 146 */;
	unsigned int cocci_id/* drivers/watchdog/at91sam9_wdt.c 146 */;
	struct at91wdt *cocci_id/* drivers/watchdog/at91sam9_wdt.c 122 */;
	struct timer_list *cocci_id/* drivers/watchdog/at91sam9_wdt.c 120 */;
	void cocci_id/* drivers/watchdog/at91sam9_wdt.c 120 */;
}
