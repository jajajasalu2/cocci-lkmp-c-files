cocci_test_suite() {
	struct armada_37xx_watchdog {
		struct watchdog_device wdt;
		struct regmap *cpu_misc;
		void __iomem *reg;
		u64 timeout;
		unsigned long clk_rate;
		struct clk *clk;
	} cocci_id/* drivers/watchdog/armada_37xx_wdt.c 76 */;
	struct platform_driver cocci_id/* drivers/watchdog/armada_37xx_wdt.c 358 */;
	const struct of_device_id cocci_id/* drivers/watchdog/armada_37xx_wdt.c 351 */[];
	const struct dev_pm_ops cocci_id/* drivers/watchdog/armada_37xx_wdt.c 345 */;
	struct device *cocci_id/* drivers/watchdog/armada_37xx_wdt.c 335 */;
	int __maybe_unused cocci_id/* drivers/watchdog/armada_37xx_wdt.c 335 */;
	struct armada_37xx_watchdog cocci_id/* drivers/watchdog/armada_37xx_wdt.c 259 */;
	struct regmap *cocci_id/* drivers/watchdog/armada_37xx_wdt.c 256 */;
	struct resource *cocci_id/* drivers/watchdog/armada_37xx_wdt.c 255 */;
	struct platform_device *cocci_id/* drivers/watchdog/armada_37xx_wdt.c 252 */;
	void *cocci_id/* drivers/watchdog/armada_37xx_wdt.c 247 */;
	void cocci_id/* drivers/watchdog/armada_37xx_wdt.c 247 */;
	const struct watchdog_ops cocci_id/* drivers/watchdog/armada_37xx_wdt.c 238 */;
	const struct watchdog_info cocci_id/* drivers/watchdog/armada_37xx_wdt.c 233 */;
	u32 cocci_id/* drivers/watchdog/armada_37xx_wdt.c 187 */;
	bool cocci_id/* drivers/watchdog/armada_37xx_wdt.c 185 */;
	u64 cocci_id/* drivers/watchdog/armada_37xx_wdt.c 159 */;
	struct armada_37xx_watchdog *cocci_id/* drivers/watchdog/armada_37xx_wdt.c 158 */;
	struct watchdog_device *cocci_id/* drivers/watchdog/armada_37xx_wdt.c 156 */;
	unsigned int cocci_id/* drivers/watchdog/armada_37xx_wdt.c 156 */;
	int cocci_id/* drivers/watchdog/armada_37xx_wdt.c 145 */;
}
