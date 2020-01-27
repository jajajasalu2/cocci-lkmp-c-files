cocci_test_suite() {
	struct platform_driver cocci_id/* drivers/watchdog/s3c2410_wdt.c 725 */;
	bool cocci_id/* drivers/watchdog/s3c2410_wdt.c 67 */;
	struct resource *cocci_id/* drivers/watchdog/s3c2410_wdt.c 516 */;
	struct device *cocci_id/* drivers/watchdog/s3c2410_wdt.c 514 */;
	struct s3c2410_wdt_variant *cocci_id/* drivers/watchdog/s3c2410_wdt.c 505 */;
	struct platform_device *cocci_id/* drivers/watchdog/s3c2410_wdt.c 498 */;
	const struct s3c2410_wdt_variant *cocci_id/* drivers/watchdog/s3c2410_wdt.c 497 */;
	unsigned int cocci_id/* drivers/watchdog/s3c2410_wdt.c 480 */;
	int cocci_id/* drivers/watchdog/s3c2410_wdt.c 452 */;
	void *cocci_id/* drivers/watchdog/s3c2410_wdt.c 416 */;
	irqreturn_t cocci_id/* drivers/watchdog/s3c2410_wdt.c 399 */;
	const struct watchdog_device cocci_id/* drivers/watchdog/s3c2410_wdt.c 391 */;
	const struct watchdog_ops cocci_id/* drivers/watchdog/s3c2410_wdt.c 382 */;
	const struct watchdog_info cocci_id/* drivers/watchdog/s3c2410_wdt.c 376 */;
	void __iomem *cocci_id/* drivers/watchdog/s3c2410_wdt.c 354 */;
	unsigned long cocci_id/* drivers/watchdog/s3c2410_wdt.c 245 */;
	struct s3c2410_wdt *cocci_id/* drivers/watchdog/s3c2410_wdt.c 243 */;
	void cocci_id/* drivers/watchdog/s3c2410_wdt.c 243 */;
	struct watchdog_device *cocci_id/* drivers/watchdog/s3c2410_wdt.c 232 */;
	u32 cocci_id/* drivers/watchdog/s3c2410_wdt.c 206 */;
	struct s3c2410_wdt cocci_id/* drivers/watchdog/s3c2410_wdt.c 200 */;
	struct notifier_block *cocci_id/* drivers/watchdog/s3c2410_wdt.c 198 */;
	struct clk *cocci_id/* drivers/watchdog/s3c2410_wdt.c 190 */;
	const struct platform_device_id cocci_id/* drivers/watchdog/s3c2410_wdt.c 179 */[];
	const struct of_device_id cocci_id/* drivers/watchdog/s3c2410_wdt.c 163 */[];
	const struct s3c2410_wdt_variant cocci_id/* drivers/watchdog/s3c2410_wdt.c 133 */;
	struct s3c2410_wdt {
		struct device *dev;
		struct clk *clock;
		void __iomem *reg_base;
		unsigned int count;
		spinlock_t lock;
		unsigned long wtcon_save;
		unsigned long wtdat_save;
		struct watchdog_device wdt_device;
		struct notifier_block freq_transition;
		const struct s3c2410_wdt_variant *drv_data;
		struct regmap *pmureg;
	} cocci_id/* drivers/watchdog/s3c2410_wdt.c 110 */;
	struct s3c2410_wdt_variant {
		int disable_reg;
		int mask_reset_reg;
		int mask_bit;
		int rst_stat_reg;
		int rst_stat_bit;
		u32 quirks;
	} cocci_id/* drivers/watchdog/s3c2410_wdt.c 101 */;
}
