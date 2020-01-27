cocci_test_suite() {
	struct omap_wdt_dev {
		struct watchdog_device wdog;
		void __iomem *base;
		struct device *dev;
		bool omap_wdt_users;
		int wdt_trgr_pattern;
		struct mutex lock;
	} cocci_id/* drivers/watchdog/omap_wdt.c 62 */;
	bool cocci_id/* drivers/watchdog/omap_wdt.c 57 */;
	struct omap_wdt_dev cocci_id/* drivers/watchdog/omap_wdt.c 55 */;
	unsigned cocci_id/* drivers/watchdog/omap_wdt.c 51 */;
	struct platform_driver cocci_id/* drivers/watchdog/omap_wdt.c 362 */;
	const struct of_device_id cocci_id/* drivers/watchdog/omap_wdt.c 356 */[];
	pm_message_t cocci_id/* drivers/watchdog/omap_wdt.c 322 */;
	struct omap_wd_timer_platform_data *cocci_id/* drivers/watchdog/omap_wdt.c 231 */;
	struct platform_device *cocci_id/* drivers/watchdog/omap_wdt.c 229 */;
	const struct watchdog_ops cocci_id/* drivers/watchdog/omap_wdt.c 220 */;
	const struct watchdog_info cocci_id/* drivers/watchdog/omap_wdt.c 215 */;
	u32 cocci_id/* drivers/watchdog/omap_wdt.c 209 */;
	struct watchdog_device *cocci_id/* drivers/watchdog/omap_wdt.c 205 */;
	unsigned int cocci_id/* drivers/watchdog/omap_wdt.c 205 */;
	int cocci_id/* drivers/watchdog/omap_wdt.c 178 */;
	void __iomem *cocci_id/* drivers/watchdog/omap_wdt.c 104 */;
	struct omap_wdt_dev *cocci_id/* drivers/watchdog/omap_wdt.c 102 */;
	void cocci_id/* drivers/watchdog/omap_wdt.c 102 */;
}
