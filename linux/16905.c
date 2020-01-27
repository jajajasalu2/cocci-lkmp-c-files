cocci_test_suite() {
	const u32 cocci_id/* drivers/input/mouse/navpoint.c 43 */;
	struct platform_driver cocci_id/* drivers/input/mouse/navpoint.c 348 */;
	struct device *cocci_id/* drivers/input/mouse/navpoint.c 332 */;
	int __maybe_unused cocci_id/* drivers/input/mouse/navpoint.c 332 */;
	struct navpoint {
		struct ssp_device *ssp;
		struct input_dev *input;
		struct device *dev;
		int gpio;
		int index;
		u8 data[1 + HEADER_LENGTH(0xff)];
	} cocci_id/* drivers/input/mouse/navpoint.c 31 */;
	const struct navpoint_platform_data *cocci_id/* drivers/input/mouse/navpoint.c 207 */;
	struct platform_device *cocci_id/* drivers/input/mouse/navpoint.c 205 */;
	struct navpoint *cocci_id/* drivers/input/mouse/navpoint.c 200 */;
	struct input_dev *cocci_id/* drivers/input/mouse/navpoint.c 198 */;
	void cocci_id/* drivers/input/mouse/navpoint.c 198 */;
	struct ssp_device *cocci_id/* drivers/input/mouse/navpoint.c 179 */;
	u32 cocci_id/* drivers/input/mouse/navpoint.c 122 */;
	irqreturn_t cocci_id/* drivers/input/mouse/navpoint.c 117 */;
	void *cocci_id/* drivers/input/mouse/navpoint.c 117 */;
	int cocci_id/* drivers/input/mouse/navpoint.c 117 */;
}
