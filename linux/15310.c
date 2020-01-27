cocci_test_suite() {
	unsigned cocci_id/* drivers/watchdog/dw_wdt.c 67 */;
	struct dw_wdt cocci_id/* drivers/watchdog/dw_wdt.c 59 */;
	struct dw_wdt {
		void __iomem *regs;
		struct clk *clk;
		unsigned long rate;
		struct watchdog_device wdd;
		struct reset_control *rst;
		u32 control;
		u32 timeout;
	} cocci_id/* drivers/watchdog/dw_wdt.c 48 */;
	bool cocci_id/* drivers/watchdog/dw_wdt.c 43 */;
	struct platform_driver cocci_id/* drivers/watchdog/dw_wdt.c 328 */;
	const struct of_device_id cocci_id/* drivers/watchdog/dw_wdt.c 321 */[];
	struct watchdog_device *cocci_id/* drivers/watchdog/dw_wdt.c 235 */;
	struct device *cocci_id/* drivers/watchdog/dw_wdt.c 234 */;
	struct platform_device *cocci_id/* drivers/watchdog/dw_wdt.c 232 */;
	int cocci_id/* drivers/watchdog/dw_wdt.c 232 */;
	const struct watchdog_ops cocci_id/* drivers/watchdog/dw_wdt.c 190 */;
	const struct watchdog_info cocci_id/* drivers/watchdog/dw_wdt.c 184 */;
	unsigned int cocci_id/* drivers/watchdog/dw_wdt.c 176 */;
	void *cocci_id/* drivers/watchdog/dw_wdt.c 159 */;
	unsigned long cocci_id/* drivers/watchdog/dw_wdt.c 159 */;
	u32 cocci_id/* drivers/watchdog/dw_wdt.c 124 */;
	struct dw_wdt *cocci_id/* drivers/watchdog/dw_wdt.c 122 */;
	void cocci_id/* drivers/watchdog/dw_wdt.c 122 */;
}
