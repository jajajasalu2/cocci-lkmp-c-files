cocci_test_suite() {
	struct platform_driver cocci_id/* drivers/input/touchscreen/sun4i-ts.c 396 */;
	const struct of_device_id cocci_id/* drivers/input/touchscreen/sun4i-ts.c 388 */[];
	struct sun4i_ts_data cocci_id/* drivers/input/touchscreen/sun4i-ts.c 246 */;
	bool cocci_id/* drivers/input/touchscreen/sun4i-ts.c 242 */;
	struct device_node *cocci_id/* drivers/input/touchscreen/sun4i-ts.c 238 */;
	struct platform_device *cocci_id/* drivers/input/touchscreen/sun4i-ts.c 234 */;
	struct attribute *cocci_id/* drivers/input/touchscreen/sun4i-ts.c 227 */[];
	int cocci_id/* drivers/input/touchscreen/sun4i-ts.c 208 */;
	struct sun4i_ts_data *cocci_id/* drivers/input/touchscreen/sun4i-ts.c 207 */;
	char *cocci_id/* drivers/input/touchscreen/sun4i-ts.c 205 */;
	struct device_attribute *cocci_id/* drivers/input/touchscreen/sun4i-ts.c 204 */;
	struct device *cocci_id/* drivers/input/touchscreen/sun4i-ts.c 204 */;
	ssize_t cocci_id/* drivers/input/touchscreen/sun4i-ts.c 204 */;
	const struct thermal_zone_of_device_ops cocci_id/* drivers/input/touchscreen/sun4i-ts.c 200 */;
	void *cocci_id/* drivers/input/touchscreen/sun4i-ts.c 195 */;
	const struct sun4i_ts_data *cocci_id/* drivers/input/touchscreen/sun4i-ts.c 184 */;
	int *cocci_id/* drivers/input/touchscreen/sun4i-ts.c 184 */;
	struct input_dev *cocci_id/* drivers/input/touchscreen/sun4i-ts.c 176 */;
	void cocci_id/* drivers/input/touchscreen/sun4i-ts.c 176 */;
	u32 cocci_id/* drivers/input/touchscreen/sun4i-ts.c 150 */;
	irqreturn_t cocci_id/* drivers/input/touchscreen/sun4i-ts.c 147 */;
	struct sun4i_ts_data {
		struct device *dev;
		struct input_dev *input;
		void __iomem *base;
		unsigned int irq;
		bool ignore_fifo_data;
		int temp_data;
		int temp_offset;
		int temp_step;
	} cocci_id/* drivers/input/touchscreen/sun4i-ts.c 106 */;
}
