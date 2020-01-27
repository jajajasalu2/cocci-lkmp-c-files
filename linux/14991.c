cocci_test_suite() {
	struct raspberrypi_firmware_prop cocci_id/* drivers/clk/bcm/clk-raspberrypi.c 70 */;
	u32 *cocci_id/* drivers/clk/bcm/clk-raspberrypi.c 68 */;
	u32 cocci_id/* drivers/clk/bcm/clk-raspberrypi.c 67 */;
	struct raspberrypi_firmware_prop {
		__le32 id;
		__le32 val;
		__le32 disable_turbo;
	}__packed cocci_id/* drivers/clk/bcm/clk-raspberrypi.c 61 */;
	struct raspberrypi_clk {
		struct device *dev;
		struct rpi_firmware *firmware;
		struct platform_device *cpufreq;
		unsigned long min_rate;
		unsigned long max_rate;
		struct clk_hw pllb;
		struct clk_hw *pllb_arm;
		struct clk_lookup *pllb_arm_lookup;
	} cocci_id/* drivers/clk/bcm/clk-raspberrypi.c 34 */;
	struct platform_driver cocci_id/* drivers/clk/bcm/clk-raspberrypi.c 303 */;
	struct raspberrypi_clk *cocci_id/* drivers/clk/bcm/clk-raspberrypi.c 255 */;
	struct rpi_firmware *cocci_id/* drivers/clk/bcm/clk-raspberrypi.c 254 */;
	struct device *cocci_id/* drivers/clk/bcm/clk-raspberrypi.c 253 */;
	struct device_node *cocci_id/* drivers/clk/bcm/clk-raspberrypi.c 252 */;
	struct platform_device *cocci_id/* drivers/clk/bcm/clk-raspberrypi.c 250 */;
	int cocci_id/* drivers/clk/bcm/clk-raspberrypi.c 250 */;
	const char *cocci_id/* drivers/clk/bcm/clk-raspberrypi.c 185 */[];
	struct clk_init_data cocci_id/* drivers/clk/bcm/clk-raspberrypi.c 179 */;
	const struct clk_ops cocci_id/* drivers/clk/bcm/clk-raspberrypi.c 169 */;
	u64 cocci_id/* drivers/clk/bcm/clk-raspberrypi.c 149 */;
	struct clk_rate_request *cocci_id/* drivers/clk/bcm/clk-raspberrypi.c 145 */;
	struct raspberrypi_clk cocci_id/* drivers/clk/bcm/clk-raspberrypi.c 106 */;
	struct clk_hw *cocci_id/* drivers/clk/bcm/clk-raspberrypi.c 103 */;
	unsigned long cocci_id/* drivers/clk/bcm/clk-raspberrypi.c 103 */;
}
