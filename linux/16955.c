cocci_test_suite() {
	struct i2c_msg cocci_id/* drivers/input/touchscreen/chipone_icn8505.c 82 */[2];
	u8 cocci_id/* drivers/input/touchscreen/chipone_icn8505.c 80 */[3];
	u16 cocci_id/* drivers/input/touchscreen/chipone_icn8505.c 76 */;
	struct icn8505_data {
		struct i2c_client *client;
		struct input_dev *input;
		struct gpio_desc *wake_gpio;
		struct touchscreen_properties prop;
		char firmware_name[32];
	} cocci_id/* drivers/input/touchscreen/chipone_icn8505.c 68 */;
	struct icn8505_touch_data {
		u8 softbutton;
		u8 touch_count;
		struct icn8505_touch touches[ICN8505_MAX_TOUCHES];
	}__packed cocci_id/* drivers/input/touchscreen/chipone_icn8505.c 62 */;
	struct i2c_driver cocci_id/* drivers/input/touchscreen/chipone_icn8505.c 507 */;
	const struct acpi_device_id cocci_id/* drivers/input/touchscreen/chipone_icn8505.c 501 */[];
	struct icn8505_touch {
		u8 slot;
		u8 x[2];
		u8 y[2];
		u8 pressure;
		u8 event;
#define ICN8505_EVENT_NO_DATA 1
#define ICN8505_EVENT_UPDATE1 2
#define ICN8505_EVENT_UPDATE2 3
#define ICN8505_EVENT_END 4
	}__packed cocci_id/* drivers/input/touchscreen/chipone_icn8505.c 49 */;
	int __maybe_unused cocci_id/* drivers/input/touchscreen/chipone_icn8505.c 486 */;
	__le16 cocci_id/* drivers/input/touchscreen/chipone_icn8505.c 401 */[2];
	struct input_dev *cocci_id/* drivers/input/touchscreen/chipone_icn8505.c 400 */;
	struct i2c_client *cocci_id/* drivers/input/touchscreen/chipone_icn8505.c 396 */;
	acpi_status cocci_id/* drivers/input/touchscreen/chipone_icn8505.c 371 */;
	union acpi_object *cocci_id/* drivers/input/touchscreen/chipone_icn8505.c 370 */;
	struct acpi_device *cocci_id/* drivers/input/touchscreen/chipone_icn8505.c 369 */;
	const char *cocci_id/* drivers/input/touchscreen/chipone_icn8505.c 368 */;
	struct acpi_buffer cocci_id/* drivers/input/touchscreen/chipone_icn8505.c 367 */;
	bool cocci_id/* drivers/input/touchscreen/chipone_icn8505.c 344 */;
	struct icn8505_touch *cocci_id/* drivers/input/touchscreen/chipone_icn8505.c 343 */;
	struct icn8505_touch_data cocci_id/* drivers/input/touchscreen/chipone_icn8505.c 326 */;
	struct device *cocci_id/* drivers/input/touchscreen/chipone_icn8505.c 325 */;
	struct icn8505_data *cocci_id/* drivers/input/touchscreen/chipone_icn8505.c 324 */;
	irqreturn_t cocci_id/* drivers/input/touchscreen/chipone_icn8505.c 322 */;
	void *cocci_id/* drivers/input/touchscreen/chipone_icn8505.c 322 */;
	int cocci_id/* drivers/input/touchscreen/chipone_icn8505.c 322 */;
	u32 cocci_id/* drivers/input/touchscreen/chipone_icn8505.c 206 */;
	u8 cocci_id/* drivers/input/touchscreen/chipone_icn8505.c 205 */[4];
	size_t cocci_id/* drivers/input/touchscreen/chipone_icn8505.c 203 */;
	const struct firmware *cocci_id/* drivers/input/touchscreen/chipone_icn8505.c 200 */;
	const void *cocci_id/* drivers/input/touchscreen/chipone_icn8505.c 181 */;
	u8 cocci_id/* drivers/input/touchscreen/chipone_icn8505.c 156 */;
	struct i2c_msg cocci_id/* drivers/input/touchscreen/chipone_icn8505.c 119 */;
	u8 cocci_id/* drivers/input/touchscreen/chipone_icn8505.c 117 */[3 + 32];
}
