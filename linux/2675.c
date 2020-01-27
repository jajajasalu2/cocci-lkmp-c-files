cocci_test_suite() {
	struct platform_driver cocci_id/* drivers/i2c/busses/i2c-bcm-kona.c 890 */;
	const struct of_device_id cocci_id/* drivers/i2c/busses/i2c-bcm-kona.c 884 */[];
	struct resource *cocci_id/* drivers/i2c/busses/i2c-bcm-kona.c 753 */;
	struct platform_device *cocci_id/* drivers/i2c/busses/i2c-bcm-kona.c 748 */;
	unsigned int cocci_id/* drivers/i2c/busses/i2c-bcm-kona.c 716 */;
	struct bcm_kona_i2c_dev *cocci_id/* drivers/i2c/busses/i2c-bcm-kona.c 714 */;
	int cocci_id/* drivers/i2c/busses/i2c-bcm-kona.c 714 */;
	const struct i2c_algorithm cocci_id/* drivers/i2c/busses/i2c-bcm-kona.c 709 */;
	uint32_t cocci_id/* drivers/i2c/busses/i2c-bcm-kona.c 703 */;
	struct i2c_adapter *cocci_id/* drivers/i2c/busses/i2c-bcm-kona.c 703 */;
	struct i2c_msg cocci_id/* drivers/i2c/busses/i2c-bcm-kona.c 602 */[];
	void cocci_id/* drivers/i2c/busses/i2c-bcm-kona.c 519 */;
	unsigned char cocci_id/* drivers/i2c/busses/i2c-bcm-kona.c 480 */;
	struct i2c_msg *cocci_id/* drivers/i2c/busses/i2c-bcm-kona.c 478 */;
	uint8_t cocci_id/* drivers/i2c/busses/i2c-bcm-kona.c 355 */;
	uint8_t *cocci_id/* drivers/i2c/busses/i2c-bcm-kona.c 334 */;
	unsigned long cocci_id/* drivers/i2c/busses/i2c-bcm-kona.c 294 */;
	irqreturn_t cocci_id/* drivers/i2c/busses/i2c-bcm-kona.c 218 */;
	void *cocci_id/* drivers/i2c/busses/i2c-bcm-kona.c 218 */;
	enum bcm_kona_cmd_t cocci_id/* drivers/i2c/busses/i2c-bcm-kona.c 170 */;
	struct bcm_kona_i2c_dev {
		struct device *device;
		void __iomem *base;
		int irq;
		struct clk *external_clk;
		struct i2c_adapter adapter;
		struct completion done;
		const struct bus_speed_cfg *std_cfg;
		const struct hs_bus_speed_cfg *hs_cfg;
	} cocci_id/* drivers/i2c/busses/i2c-bcm-kona.c 154 */;
	const struct hs_bus_speed_cfg cocci_id/* drivers/i2c/busses/i2c-bcm-kona.c 150 */[];
	const struct bus_speed_cfg cocci_id/* drivers/i2c/busses/i2c-bcm-kona.c 144 */[];
	struct hs_bus_speed_cfg {
		uint8_t hs_hold;
		uint8_t hs_high_phase;
		uint8_t hs_setup;
		uint8_t prescale;
		uint8_t time_p;
		uint8_t no_div;
		uint8_t time_div;
	} cocci_id/* drivers/i2c/busses/i2c-bcm-kona.c 131 */;
	struct bus_speed_cfg {
		uint8_t time_m;
		uint8_t time_n;
		uint8_t prescale;
		uint8_t time_p;
		uint8_t no_div;
		uint8_t time_div;
	} cocci_id/* drivers/i2c/busses/i2c-bcm-kona.c 121 */;
	enum hs_bus_speed_index{BCM_SPD_3P4MHZ=0,} cocci_id/* drivers/i2c/busses/i2c-bcm-kona.c 116 */;
	enum bus_speed_index{BCM_SPD_100K=0, BCM_SPD_400K, BCM_SPD_1MHZ,} cocci_id/* drivers/i2c/busses/i2c-bcm-kona.c 110 */;
	enum bcm_kona_cmd_t{BCM_CMD_NOACTION=0, BCM_CMD_START, BCM_CMD_RESTART, BCM_CMD_STOP,} cocci_id/* drivers/i2c/busses/i2c-bcm-kona.c 103 */;
}
