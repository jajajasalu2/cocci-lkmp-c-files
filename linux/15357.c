cocci_test_suite() {
	struct platform_device *cocci_id/* drivers/watchdog/orion_wdt.c 99 */;
	struct orion_watchdog {
		struct watchdog_device wdt;
		void __iomem *reg;
		void __iomem *rstout;
		void __iomem *rstout_mask;
		unsigned long clk_rate;
		struct clk *clk;
		const struct orion_watchdog_data *data;
	} cocci_id/* drivers/watchdog/orion_wdt.c 71 */;
	struct platform_driver cocci_id/* drivers/watchdog/orion_wdt.c 664 */;
	void cocci_id/* drivers/watchdog/orion_wdt.c 658 */;
	struct orion_watchdog_data {
		int wdt_counter_offset;
		int wdt_enable_bit;
		int rstout_enable_bit;
		int rstout_mask_bit;
		int (*clock_init)(struct platform_device *,
				  struct orion_watchdog *);
		int (*enabled)(struct orion_watchdog *);
		int (*start)(struct watchdog_device *);
		int (*stop)(struct watchdog_device *);
	} cocci_id/* drivers/watchdog/orion_wdt.c 59 */;
	struct orion_watchdog cocci_id/* drivers/watchdog/orion_wdt.c 558 */;
	const struct of_device_id *cocci_id/* drivers/watchdog/orion_wdt.c 554 */;
	struct resource *cocci_id/* drivers/watchdog/orion_wdt.c 502 */;
	struct device_node *cocci_id/* drivers/watchdog/orion_wdt.c 501 */;
	const struct of_device_id cocci_id/* drivers/watchdog/orion_wdt.c 473 */[];
	const struct orion_watchdog_data cocci_id/* drivers/watchdog/orion_wdt.c 431 */;
	phys_addr_t cocci_id/* drivers/watchdog/orion_wdt.c 405 */;
	void __iomem *cocci_id/* drivers/watchdog/orion_wdt.c 404 */;
	irqreturn_t cocci_id/* drivers/watchdog/orion_wdt.c 382 */;
	void *cocci_id/* drivers/watchdog/orion_wdt.c 382 */;
	const struct watchdog_ops cocci_id/* drivers/watchdog/orion_wdt.c 374 */;
	struct watchdog_info cocci_id/* drivers/watchdog/orion_wdt.c 369 */;
	unsigned int cocci_id/* drivers/watchdog/orion_wdt.c 363 */;
	bool cocci_id/* drivers/watchdog/orion_wdt.c 347 */;
	u32 cocci_id/* drivers/watchdog/orion_wdt.c 231 */;
	struct orion_watchdog *cocci_id/* drivers/watchdog/orion_wdt.c 230 */;
	struct watchdog_device *cocci_id/* drivers/watchdog/orion_wdt.c 228 */;
	int cocci_id/* drivers/watchdog/orion_wdt.c 228 */;
}
