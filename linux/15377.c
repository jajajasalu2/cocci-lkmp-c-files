cocci_test_suite() {
	unsigned int cocci_id/* drivers/watchdog/asm9260_wdt.c 77 */;
	struct asm9260_wdt_priv {
		struct device *dev;
		struct watchdog_device wdd;
		struct clk *clk;
		struct clk *clk_ahb;
		struct reset_control *rst;
		void __iomem *iobase;
		int irq;
		unsigned long wdt_freq;
		enum asm9260_wdt_mode mode;
	} cocci_id/* drivers/watchdog/asm9260_wdt.c 54 */;
	enum asm9260_wdt_mode{HW_RESET, SW_RESET, DEBUG,} cocci_id/* drivers/watchdog/asm9260_wdt.c 48 */;
	struct platform_driver cocci_id/* drivers/watchdog/asm9260_wdt.c 365 */;
	const struct of_device_id cocci_id/* drivers/watchdog/asm9260_wdt.c 359 */[];
	struct asm9260_wdt_priv cocci_id/* drivers/watchdog/asm9260_wdt.c 293 */;
	const char *constcocci_id/* drivers/watchdog/asm9260_wdt.c 291 */[];
	struct device *cocci_id/* drivers/watchdog/asm9260_wdt.c 287 */;
	struct platform_device *cocci_id/* drivers/watchdog/asm9260_wdt.c 285 */;
	const char *cocci_id/* drivers/watchdog/asm9260_wdt.c 263 */;
	void *cocci_id/* drivers/watchdog/asm9260_wdt.c 198 */;
	void cocci_id/* drivers/watchdog/asm9260_wdt.c 198 */;
	const struct watchdog_ops cocci_id/* drivers/watchdog/asm9260_wdt.c 188 */;
	const struct watchdog_info cocci_id/* drivers/watchdog/asm9260_wdt.c 182 */;
	struct asm9260_wdt_priv *cocci_id/* drivers/watchdog/asm9260_wdt.c 175 */;
	struct watchdog_device *cocci_id/* drivers/watchdog/asm9260_wdt.c 172 */;
	unsigned long cocci_id/* drivers/watchdog/asm9260_wdt.c 172 */;
	int cocci_id/* drivers/watchdog/asm9260_wdt.c 172 */;
	irqreturn_t cocci_id/* drivers/watchdog/asm9260_wdt.c 153 */;
	u32 cocci_id/* drivers/watchdog/asm9260_wdt.c 102 */;
}
