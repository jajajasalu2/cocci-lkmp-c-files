cocci_test_suite() {
	struct bcm_kona_wdt *cocci_id/* drivers/watchdog/bcm_kona_wdt.c 97 */;
	unsigned long cocci_id/* drivers/watchdog/bcm_kona_wdt.c 96 */;
	struct seq_file *cocci_id/* drivers/watchdog/bcm_kona_wdt.c 93 */;
	void *cocci_id/* drivers/watchdog/bcm_kona_wdt.c 93 */;
	int cocci_id/* drivers/watchdog/bcm_kona_wdt.c 93 */;
	uint32_t cocci_id/* drivers/watchdog/bcm_kona_wdt.c 58 */;
	struct bcm_kona_wdt {
		void __iomem *base;
		int resolution;
		spinlock_t lock;
#ifdef CONFIG_BCM_KONA_WDT_DEBUG
		unsigned long busy_count;
		struct dentry *debugfs;
#endif
	} cocci_id/* drivers/watchdog/bcm_kona_wdt.c 37 */;
	struct platform_driver cocci_id/* drivers/watchdog/bcm_kona_wdt.c 327 */;
	const struct of_device_id cocci_id/* drivers/watchdog/bcm_kona_wdt.c 321 */[];
	struct device *cocci_id/* drivers/watchdog/bcm_kona_wdt.c 270 */;
	struct watchdog_device cocci_id/* drivers/watchdog/bcm_kona_wdt.c 260 */;
	const struct watchdog_info cocci_id/* drivers/watchdog/bcm_kona_wdt.c 254 */;
	const struct watchdog_ops cocci_id/* drivers/watchdog/bcm_kona_wdt.c 246 */;
	struct watchdog_device *cocci_id/* drivers/watchdog/bcm_kona_wdt.c 216 */;
	unsigned int cocci_id/* drivers/watchdog/bcm_kona_wdt.c 216 */;
	unsigned cocci_id/* drivers/watchdog/bcm_kona_wdt.c 168 */;
	struct platform_device *cocci_id/* drivers/watchdog/bcm_kona_wdt.c 152 */;
	void cocci_id/* drivers/watchdog/bcm_kona_wdt.c 152 */;
	struct dentry *cocci_id/* drivers/watchdog/bcm_kona_wdt.c 137 */;
}
