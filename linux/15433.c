cocci_test_suite() {
	struct timer_list *cocci_id/* drivers/watchdog/lpc18xx_wdt.c 78 */;
	unsigned long cocci_id/* drivers/watchdog/lpc18xx_wdt.c 64 */;
	struct watchdog_device *cocci_id/* drivers/watchdog/lpc18xx_wdt.c 61 */;
	struct lpc18xx_wdt_dev {
		struct watchdog_device wdt_dev;
		struct clk *reg_clk;
		struct clk *wdt_clk;
		unsigned long clk_rate;
		void __iomem *base;
		struct timer_list timer;
		spinlock_t lock;
	} cocci_id/* drivers/watchdog/lpc18xx_wdt.c 51 */;
	bool cocci_id/* drivers/watchdog/lpc18xx_wdt.c 46 */;
	int cocci_id/* drivers/watchdog/lpc18xx_wdt.c 41 */;
	struct platform_driver cocci_id/* drivers/watchdog/lpc18xx_wdt.c 306 */;
	const struct of_device_id cocci_id/* drivers/watchdog/lpc18xx_wdt.c 300 */[];
	struct device *cocci_id/* drivers/watchdog/lpc18xx_wdt.c 208 */;
	struct platform_device *cocci_id/* drivers/watchdog/lpc18xx_wdt.c 205 */;
	void *cocci_id/* drivers/watchdog/lpc18xx_wdt.c 200 */;
	const struct watchdog_ops cocci_id/* drivers/watchdog/lpc18xx_wdt.c 190 */;
	const struct watchdog_info cocci_id/* drivers/watchdog/lpc18xx_wdt.c 183 */;
	unsigned int cocci_id/* drivers/watchdog/lpc18xx_wdt.c 105 */;
	struct lpc18xx_wdt_dev *cocci_id/* drivers/watchdog/lpc18xx_wdt.c 103 */;
	void cocci_id/* drivers/watchdog/lpc18xx_wdt.c 103 */;
}
