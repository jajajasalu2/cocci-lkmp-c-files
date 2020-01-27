cocci_test_suite() {
	struct sh_wdt {
		void __iomem *base;
		struct device *dev;
		struct clk *clk;
		spinlock_t lock;
		struct timer_list timer;
	} cocci_id/* drivers/watchdog/shwdt.c 72 */;
	unsigned long cocci_id/* drivers/watchdog/shwdt.c 70 */;
	bool cocci_id/* drivers/watchdog/shwdt.c 69 */;
	int cocci_id/* drivers/watchdog/shwdt.c 64 */;
	void __exit cocci_id/* drivers/watchdog/shwdt.c 319 */;
	void cocci_id/* drivers/watchdog/shwdt.c 319 */;
	int __init cocci_id/* drivers/watchdog/shwdt.c 306 */;
	struct platform_driver cocci_id/* drivers/watchdog/shwdt.c 296 */;
	struct sh_wdt cocci_id/* drivers/watchdog/shwdt.c 228 */;
	struct platform_device *cocci_id/* drivers/watchdog/shwdt.c 216 */;
	struct watchdog_device cocci_id/* drivers/watchdog/shwdt.c 211 */;
	const struct watchdog_ops cocci_id/* drivers/watchdog/shwdt.c 203 */;
	const struct watchdog_info cocci_id/* drivers/watchdog/shwdt.c 196 */;
	u8 cocci_id/* drivers/watchdog/shwdt.c 181 */;
	struct timer_list *cocci_id/* drivers/watchdog/shwdt.c 174 */;
	unsigned cocci_id/* drivers/watchdog/shwdt.c 158 */;
	struct sh_wdt *cocci_id/* drivers/watchdog/shwdt.c 148 */;
	struct watchdog_device *cocci_id/* drivers/watchdog/shwdt.c 146 */;
}
