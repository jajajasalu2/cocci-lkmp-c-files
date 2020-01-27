cocci_test_suite() {
	u64 cocci_id/* drivers/watchdog/sp805_wdt.c 94 */;
	unsigned int cocci_id/* drivers/watchdog/sp805_wdt.c 91 */;
	u32 cocci_id/* drivers/watchdog/sp805_wdt.c 85 */;
	bool cocci_id/* drivers/watchdog/sp805_wdt.c 76 */;
	struct sp805_wdt {
		struct watchdog_device wdd;
		spinlock_t lock;
		void __iomem *base;
		struct clk *clk;
		u64 rate;
		struct amba_device *adev;
		unsigned int load_val;
	} cocci_id/* drivers/watchdog/sp805_wdt.c 66 */;
	struct amba_driver cocci_id/* drivers/watchdog/sp805_wdt.c 346 */;
	const struct amba_id cocci_id/* drivers/watchdog/sp805_wdt.c 336 */[];
	struct device *cocci_id/* drivers/watchdog/sp805_wdt.c 323 */;
	int __maybe_unused cocci_id/* drivers/watchdog/sp805_wdt.c 323 */;
	struct sp805_wdt *cocci_id/* drivers/watchdog/sp805_wdt.c 229 */;
	const struct amba_id *cocci_id/* drivers/watchdog/sp805_wdt.c 227 */;
	struct amba_device *cocci_id/* drivers/watchdog/sp805_wdt.c 227 */;
	int cocci_id/* drivers/watchdog/sp805_wdt.c 226 */;
	const struct watchdog_ops cocci_id/* drivers/watchdog/sp805_wdt.c 216 */;
	const struct watchdog_info cocci_id/* drivers/watchdog/sp805_wdt.c 211 */;
	struct watchdog_device *cocci_id/* drivers/watchdog/sp805_wdt.c 147 */;
	void *cocci_id/* drivers/watchdog/sp805_wdt.c 136 */;
	unsigned long cocci_id/* drivers/watchdog/sp805_wdt.c 136 */;
}
