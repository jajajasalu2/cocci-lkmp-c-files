cocci_test_suite() {
	unsigned long cocci_id/* drivers/watchdog/st_lpc_wdt.c 83 */;
	unsigned int cocci_id/* drivers/watchdog/st_lpc_wdt.c 81 */;
	bool cocci_id/* drivers/watchdog/st_lpc_wdt.c 65 */;
	const struct of_device_id cocci_id/* drivers/watchdog/st_lpc_wdt.c 56 */[];
	struct st_wdog_syscfg cocci_id/* drivers/watchdog/st_lpc_wdt.c 51 */;
	struct st_wdog {
		void __iomem *base;
		struct device *dev;
		struct regmap *regmap;
		struct st_wdog_syscfg *syscfg;
		struct clk *clk;
		unsigned long clkrate;
		bool warm_reset;
	} cocci_id/* drivers/watchdog/st_lpc_wdt.c 41 */;
	struct st_wdog_syscfg {
		unsigned int reset_type_reg;
		unsigned int reset_type_mask;
		unsigned int enable_reg;
		unsigned int enable_mask;
	} cocci_id/* drivers/watchdog/st_lpc_wdt.c 34 */;
	struct watchdog_device cocci_id/* drivers/watchdog/st_lpc_wdt.c 32 */;
	struct platform_driver cocci_id/* drivers/watchdog/st_lpc_wdt.c 294 */;
	struct st_wdog_syscfg *cocci_id/* drivers/watchdog/st_lpc_wdt.c 181 */;
	uint32_t cocci_id/* drivers/watchdog/st_lpc_wdt.c 159 */;
	void __iomem *cocci_id/* drivers/watchdog/st_lpc_wdt.c 158 */;
	struct clk *cocci_id/* drivers/watchdog/st_lpc_wdt.c 157 */;
	struct regmap *cocci_id/* drivers/watchdog/st_lpc_wdt.c 156 */;
	struct device_node *cocci_id/* drivers/watchdog/st_lpc_wdt.c 154 */;
	const struct of_device_id *cocci_id/* drivers/watchdog/st_lpc_wdt.c 153 */;
	struct device *cocci_id/* drivers/watchdog/st_lpc_wdt.c 152 */;
	struct platform_device *cocci_id/* drivers/watchdog/st_lpc_wdt.c 150 */;
	void *cocci_id/* drivers/watchdog/st_lpc_wdt.c 145 */;
	void cocci_id/* drivers/watchdog/st_lpc_wdt.c 145 */;
	const struct watchdog_ops cocci_id/* drivers/watchdog/st_lpc_wdt.c 132 */;
	const struct watchdog_info cocci_id/* drivers/watchdog/st_lpc_wdt.c 127 */;
	struct st_wdog *cocci_id/* drivers/watchdog/st_lpc_wdt.c 120 */;
	struct watchdog_device *cocci_id/* drivers/watchdog/st_lpc_wdt.c 118 */;
	int cocci_id/* drivers/watchdog/st_lpc_wdt.c 118 */;
}
