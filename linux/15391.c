cocci_test_suite() {
	u32 cocci_id/* drivers/watchdog/sunxi_wdt.c 88 */;
	void *cocci_id/* drivers/watchdog/sunxi_wdt.c 83 */;
	unsigned long cocci_id/* drivers/watchdog/sunxi_wdt.c 83 */;
	const int cocci_id/* drivers/watchdog/sunxi_wdt.c 67 */[];
	struct sunxi_wdt_dev {
		struct watchdog_device wdt_dev;
		void __iomem *wdt_base;
		const struct sunxi_wdt_reg *wdt_regs;
	} cocci_id/* drivers/watchdog/sunxi_wdt.c 53 */;
	struct sunxi_wdt_reg {
		u8 wdt_ctrl;
		u8 wdt_cfg;
		u8 wdt_mode;
		u8 wdt_timeout_shift;
		u8 wdt_reset_mask;
		u8 wdt_reset_val;
	} cocci_id/* drivers/watchdog/sunxi_wdt.c 44 */;
	bool cocci_id/* drivers/watchdog/sunxi_wdt.c 37 */;
	struct platform_driver cocci_id/* drivers/watchdog/sunxi_wdt.c 274 */;
	struct device *cocci_id/* drivers/watchdog/sunxi_wdt.c 232 */;
	struct platform_device *cocci_id/* drivers/watchdog/sunxi_wdt.c 230 */;
	const struct of_device_id cocci_id/* drivers/watchdog/sunxi_wdt.c 223 */[];
	const struct sunxi_wdt_reg cocci_id/* drivers/watchdog/sunxi_wdt.c 205 */;
	const struct watchdog_ops cocci_id/* drivers/watchdog/sunxi_wdt.c 196 */;
	const struct watchdog_info cocci_id/* drivers/watchdog/sunxi_wdt.c 189 */;
	unsigned int cocci_id/* drivers/watchdog/sunxi_wdt.c 129 */;
	const struct sunxi_wdt_reg *cocci_id/* drivers/watchdog/sunxi_wdt.c 121 */;
	void __iomem *cocci_id/* drivers/watchdog/sunxi_wdt.c 120 */;
	struct sunxi_wdt_dev *cocci_id/* drivers/watchdog/sunxi_wdt.c 119 */;
	struct watchdog_device *cocci_id/* drivers/watchdog/sunxi_wdt.c 117 */;
	int cocci_id/* drivers/watchdog/sunxi_wdt.c 117 */;
}
