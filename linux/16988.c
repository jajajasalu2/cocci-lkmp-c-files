cocci_test_suite() {
	long cocci_id/* drivers/input/touchscreen/raspberrypi-ts.c 64 */;
	int cocci_id/* drivers/input/touchscreen/raspberrypi-ts.c 63 */;
	struct rpi_ts_regs cocci_id/* drivers/input/touchscreen/raspberrypi-ts.c 62 */;
	struct input_dev *cocci_id/* drivers/input/touchscreen/raspberrypi-ts.c 59 */;
	struct rpi_ts_regs {
		u8 device_mode;
		u8 gesture_id;
		u8 num_points;
		struct rpi_ts_touch {
			u8 xh;
			u8 xl;
			u8 yh;
			u8 yl;
			u8 pressure;
			u8 area;
		} point[RPI_TS_MAX_SUPPORTED_POINTS];
	} cocci_id/* drivers/input/touchscreen/raspberrypi-ts.c 45 */;
	struct rpi_ts {
		struct platform_device *pdev;
		struct input_dev *input;
		struct touchscreen_properties prop;
		void __iomem *fw_regs_va;
		dma_addr_t fw_regs_phys;
		int known_ids;
	} cocci_id/* drivers/input/touchscreen/raspberrypi-ts.c 34 */;
	struct platform_driver cocci_id/* drivers/input/touchscreen/raspberrypi-ts.c 217 */;
	const struct of_device_id cocci_id/* drivers/input/touchscreen/raspberrypi-ts.c 211 */[];
	u32 cocci_id/* drivers/input/touchscreen/raspberrypi-ts.c 128 */;
	struct rpi_firmware *cocci_id/* drivers/input/touchscreen/raspberrypi-ts.c 126 */;
	struct device_node *cocci_id/* drivers/input/touchscreen/raspberrypi-ts.c 123 */;
	struct platform_device *cocci_id/* drivers/input/touchscreen/raspberrypi-ts.c 120 */;
	struct device *cocci_id/* drivers/input/touchscreen/raspberrypi-ts.c 115 */;
	struct rpi_ts *cocci_id/* drivers/input/touchscreen/raspberrypi-ts.c 114 */;
	void *cocci_id/* drivers/input/touchscreen/raspberrypi-ts.c 112 */;
	void cocci_id/* drivers/input/touchscreen/raspberrypi-ts.c 112 */;
}
