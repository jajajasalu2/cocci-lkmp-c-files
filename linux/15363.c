cocci_test_suite() {
	struct watchdog_info cocci_id/* drivers/watchdog/lantiq_wdt.c 92 */;
	struct ltq_wdt_priv cocci_id/* drivers/watchdog/lantiq_wdt.c 89 */;
	struct watchdog_device *cocci_id/* drivers/watchdog/lantiq_wdt.c 87 */;
	struct ltq_wdt_priv *cocci_id/* drivers/watchdog/lantiq_wdt.c 87 */;
	void cocci_id/* drivers/watchdog/lantiq_wdt.c 77 */;
	struct ltq_wdt_priv {
		struct watchdog_device wdt;
		void __iomem *membase;
		unsigned long clk_rate;
	} cocci_id/* drivers/watchdog/lantiq_wdt.c 61 */;
	struct ltq_wdt_hw {
		int (*bootstatus_get)(struct device *dev);
	} cocci_id/* drivers/watchdog/lantiq_wdt.c 57 */;
	bool cocci_id/* drivers/watchdog/lantiq_wdt.c 55 */;
	struct platform_driver cocci_id/* drivers/watchdog/lantiq_wdt.c 274 */;
	const struct of_device_id cocci_id/* drivers/watchdog/lantiq_wdt.c 266 */[];
	const struct ltq_wdt_hw cocci_id/* drivers/watchdog/lantiq_wdt.c 262 */;
	const struct ltq_wdt_hw *cocci_id/* drivers/watchdog/lantiq_wdt.c 205 */;
	struct clk *cocci_id/* drivers/watchdog/lantiq_wdt.c 204 */;
	struct platform_device *cocci_id/* drivers/watchdog/lantiq_wdt.c 199 */;
	u32 cocci_id/* drivers/watchdog/lantiq_wdt.c 181 */;
	struct regmap *cocci_id/* drivers/watchdog/lantiq_wdt.c 180 */;
	struct device *cocci_id/* drivers/watchdog/lantiq_wdt.c 178 */;
	int cocci_id/* drivers/watchdog/lantiq_wdt.c 178 */;
	const struct watchdog_ops cocci_id/* drivers/watchdog/lantiq_wdt.c 150 */;
	u64 cocci_id/* drivers/watchdog/lantiq_wdt.c 144 */;
	unsigned int cocci_id/* drivers/watchdog/lantiq_wdt.c 141 */;
}
