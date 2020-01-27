cocci_test_suite() {
	u16 cocci_id/* arch/arm/plat-omap/debug-leds.c 96 */;
	struct dbg_led cocci_id/* arch/arm/plat-omap/debug-leds.c 95 */;
	struct dbg_led *cocci_id/* arch/arm/plat-omap/debug-leds.c 95 */;
	enum led_brightness cocci_id/* arch/arm/plat-omap/debug-leds.c 93 */;
	struct led_classdev *cocci_id/* arch/arm/plat-omap/debug-leds.c 93 */;
	void cocci_id/* arch/arm/plat-omap/debug-leds.c 79 */;
	const struct {
		const char *name;
		const char *trigger;
	} cocci_id/* arch/arm/plat-omap/debug-leds.c 53 */[];
	struct dbg_led {
		struct led_classdev cdev;
		u16 mask;
	} cocci_id/* arch/arm/plat-omap/debug-leds.c 48 */;
	struct h2p2_dbg_fpga __iomem *cocci_id/* arch/arm/plat-omap/debug-leds.c 44 */;
	struct h2p2_dbg_fpga {
		u16 smc91x[8];
		u16 fpga_rev;
		u16 board_rev;
		u16 gpio_outputs;
		u16 leds;
		u16 misc_inputs;
		u16 lan_status;
		u16 lan_reset;
		u16 reserved0;
		u16 ps2_data;
		u16 ps2_ctrl;
	} cocci_id/* arch/arm/plat-omap/debug-leds.c 25 */;
	int __init cocci_id/* arch/arm/plat-omap/debug-leds.c 161 */;
	struct platform_driver cocci_id/* arch/arm/plat-omap/debug-leds.c 155 */;
	const struct dev_pm_ops cocci_id/* arch/arm/plat-omap/debug-leds.c 150 */;
	struct device *cocci_id/* arch/arm/plat-omap/debug-leds.c 144 */;
	struct resource *cocci_id/* arch/arm/plat-omap/debug-leds.c 104 */;
	struct platform_device *cocci_id/* arch/arm/plat-omap/debug-leds.c 102 */;
	int cocci_id/* arch/arm/plat-omap/debug-leds.c 102 */;
}
