cocci_test_suite() {
	struct icn8318_touch_data cocci_id/* drivers/input/touchscreen/chipone_icn8318.c 86 */;
	struct device *cocci_id/* drivers/input/touchscreen/chipone_icn8318.c 85 */;
	struct icn8318_data *cocci_id/* drivers/input/touchscreen/chipone_icn8318.c 84 */;
	irqreturn_t cocci_id/* drivers/input/touchscreen/chipone_icn8318.c 82 */;
	void *cocci_id/* drivers/input/touchscreen/chipone_icn8318.c 82 */;
	int cocci_id/* drivers/input/touchscreen/chipone_icn8318.c 82 */;
	u8 *cocci_id/* drivers/input/touchscreen/chipone_icn8318.c 69 */;
	struct i2c_msg cocci_id/* drivers/input/touchscreen/chipone_icn8318.c 59 */[2];
	u8 cocci_id/* drivers/input/touchscreen/chipone_icn8318.c 58 */;
	struct icn8318_touch_data *cocci_id/* drivers/input/touchscreen/chipone_icn8318.c 56 */;
	struct icn8318_data {
		struct i2c_client *client;
		struct input_dev *input;
		struct gpio_desc *wake_gpio;
		struct touchscreen_properties prop;
	} cocci_id/* drivers/input/touchscreen/chipone_icn8318.c 48 */;
	struct icn8318_touch_data {
		__u8 softbutton;
		__u8 touch_count;
		struct icn8318_touch touches[ICN8318_MAX_TOUCHES];
	}__packed cocci_id/* drivers/input/touchscreen/chipone_icn8318.c 42 */;
	struct icn8318_touch {
		__u8 slot;
		__be16 x;
		__be16 y;
		__u8 pressure;
		__u8 event;
#define ICN8318_EVENT_NO_DATA 1
#define ICN8318_EVENT_UPDATE1 2
#define ICN8318_EVENT_UPDATE2 3
#define ICN8318_EVENT_END 4
	}__packed cocci_id/* drivers/input/touchscreen/chipone_icn8318.c 29 */;
	struct i2c_driver cocci_id/* drivers/input/touchscreen/chipone_icn8318.c 264 */;
	const struct i2c_device_id cocci_id/* drivers/input/touchscreen/chipone_icn8318.c 259 */[];
	const struct of_device_id cocci_id/* drivers/input/touchscreen/chipone_icn8318.c 252 */[];
	struct input_dev *cocci_id/* drivers/input/touchscreen/chipone_icn8318.c 184 */;
	const struct i2c_device_id *cocci_id/* drivers/input/touchscreen/chipone_icn8318.c 180 */;
	struct i2c_client *cocci_id/* drivers/input/touchscreen/chipone_icn8318.c 179 */;
	void cocci_id/* drivers/input/touchscreen/chipone_icn8318.c 141 */;
	bool cocci_id/* drivers/input/touchscreen/chipone_icn8318.c 113 */;
	struct icn8318_touch *cocci_id/* drivers/input/touchscreen/chipone_icn8318.c 112 */;
}
