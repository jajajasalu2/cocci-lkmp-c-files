cocci_test_suite() {
	u32 cocci_id/* drivers/watchdog/cadence_wdt.c 85 */;
	struct cdns_wdt {
		void __iomem *regs;
		bool rst;
		struct clk *clk;
		u32 prescaler;
		u32 ctrl_clksel;
		spinlock_t io_lock;
		struct watchdog_device cdns_wdt_device;
	} cocci_id/* drivers/watchdog/cadence_wdt.c 74 */;
	struct platform_driver cocci_id/* drivers/watchdog/cadence_wdt.c 429 */;
	const struct of_device_id cocci_id/* drivers/watchdog/cadence_wdt.c 422 */[];
	int __maybe_unused cocci_id/* drivers/watchdog/cadence_wdt.c 403 */;
	struct watchdog_device *cocci_id/* drivers/watchdog/cadence_wdt.c 297 */;
	struct cdns_wdt *cocci_id/* drivers/watchdog/cadence_wdt.c 296 */;
	unsigned long cocci_id/* drivers/watchdog/cadence_wdt.c 295 */;
	struct device *cocci_id/* drivers/watchdog/cadence_wdt.c 293 */;
	void *cocci_id/* drivers/watchdog/cadence_wdt.c 277 */;
	void cocci_id/* drivers/watchdog/cadence_wdt.c 277 */;
	const struct watchdog_ops cocci_id/* drivers/watchdog/cadence_wdt.c 269 */;
	const struct watchdog_info cocci_id/* drivers/watchdog/cadence_wdt.c 262 */;
	struct platform_device *cocci_id/* drivers/watchdog/cadence_wdt.c 250 */;
	irqreturn_t cocci_id/* drivers/watchdog/cadence_wdt.c 248 */;
	int cocci_id/* drivers/watchdog/cadence_wdt.c 248 */;
	unsigned int cocci_id/* drivers/watchdog/cadence_wdt.c 231 */;
	unsigned short cocci_id/* drivers/watchdog/cadence_wdt.c 179 */;
}
