cocci_test_suite() {
	const struct max63xx_timeout cocci_id/* drivers/watchdog/max63xx_wdt.c 80 */[];
	struct max63xx_timeout {
		const u8 wdset;
		const u8 tdelay;
		const u8 twd;
	} cocci_id/* drivers/watchdog/max63xx_wdt.c 74 */;
	struct max63xx_wdt {
		struct watchdog_device wdd;
		const struct max63xx_timeout *timeout;
		void __iomem *base;
		spinlock_t lock;
		void (*ping)(struct max63xx_wdt *wdt);
		void (*set)(struct max63xx_wdt *wdt, u8 set);
	} cocci_id/* drivers/watchdog/max63xx_wdt.c 47 */;
	bool cocci_id/* drivers/watchdog/max63xx_wdt.c 34 */;
	unsigned int cocci_id/* drivers/watchdog/max63xx_wdt.c 33 */;
	struct platform_driver cocci_id/* drivers/watchdog/max63xx_wdt.c 258 */;
	kernel_ulong_t cocci_id/* drivers/watchdog/max63xx_wdt.c 248 */;
	const struct platform_device_id cocci_id/* drivers/watchdog/max63xx_wdt.c 247 */[];
	struct device *cocci_id/* drivers/watchdog/max63xx_wdt.c 203 */;
	struct platform_device *cocci_id/* drivers/watchdog/max63xx_wdt.c 188 */;
	struct max63xx_wdt *cocci_id/* drivers/watchdog/max63xx_wdt.c 188 */;
	int cocci_id/* drivers/watchdog/max63xx_wdt.c 188 */;
	u8 cocci_id/* drivers/watchdog/max63xx_wdt.c 162 */;
	void cocci_id/* drivers/watchdog/max63xx_wdt.c 160 */;
	const struct watchdog_info cocci_id/* drivers/watchdog/max63xx_wdt.c 155 */;
	const struct watchdog_ops cocci_id/* drivers/watchdog/max63xx_wdt.c 148 */;
	struct watchdog_device *cocci_id/* drivers/watchdog/max63xx_wdt.c 120 */;
	struct max63xx_timeout *cocci_id/* drivers/watchdog/max63xx_wdt.c 102 */;
}
