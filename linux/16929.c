cocci_test_suite() {
	int __maybe_unused cocci_id/* drivers/input/touchscreen/goodix.c 996 */;
	const struct goodix_chip_data cocci_id/* drivers/input/touchscreen/goodix.c 94 */;
	int cocci_id/* drivers/input/touchscreen/goodix.c 91 */(struct goodix_ts_data *ts,
								const struct firmware *cfg);
	const struct i2c_device_id *cocci_id/* drivers/input/touchscreen/goodix.c 844 */;
	void *cocci_id/* drivers/input/touchscreen/goodix.c 816 */;
	void cocci_id/* drivers/input/touchscreen/goodix.c 816 */;
	char cocci_id/* drivers/input/touchscreen/goodix.c 666 */[5];
	u8 cocci_id/* drivers/input/touchscreen/goodix.c 665 */[6];
	u8 cocci_id/* drivers/input/touchscreen/goodix.c 632 */[GOODIX_CONFIG_MAX_LENGTH];
	struct gpio_desc *cocci_id/* drivers/input/touchscreen/goodix.c 572 */;
	struct device *cocci_id/* drivers/input/touchscreen/goodix.c 571 */;
	const struct firmware *cocci_id/* drivers/input/touchscreen/goodix.c 464 */;
	struct goodix_ts_data *cocci_id/* drivers/input/touchscreen/goodix.c 463 */;
	int cocci_id/* drivers/input/touchscreen/goodix.c 463 */;
	u16 cocci_id/* drivers/input/touchscreen/goodix.c 437 */;
	u8 cocci_id/* drivers/input/touchscreen/goodix.c 413 */;
	struct goodix_ts_data {
		struct i2c_client *client;
		struct input_dev *input_dev;
		const struct goodix_chip_data *chip;
		struct touchscreen_properties prop;
		unsigned int max_touch_num;
		unsigned int int_trigger_type;
		struct regulator *avdd28;
		struct regulator *vddio;
		struct gpio_desc *gpiod_int;
		struct gpio_desc *gpiod_rst;
		u16 id;
		u16 version;
		const char *cfg_name;
		struct completion firmware_loading_complete;
		unsigned long irq_flags;
		unsigned int contact_size;
	} cocci_id/* drivers/input/touchscreen/goodix.c 40 */;
	irqreturn_t cocci_id/* drivers/input/touchscreen/goodix.c 385 */;
	u8 cocci_id/* drivers/input/touchscreen/goodix.c 353 */[1 + GOODIX_MAX_CONTACT_SIZE * GOODIX_MAX_CONTACTS];
	struct goodix_chip_data {
		u16 config_addr;
		int config_len;
		int (*check_config)(struct goodix_ts_data *,
				    const struct firmware *);
	} cocci_id/* drivers/input/touchscreen/goodix.c 34 */;
	struct goodix_ts_data cocci_id/* drivers/input/touchscreen/goodix.c 32 */;
	unsigned long cocci_id/* drivers/input/touchscreen/goodix.c 264 */;
	const struct goodix_chip_data *cocci_id/* drivers/input/touchscreen/goodix.c 238 */;
	struct i2c_msg cocci_id/* drivers/input/touchscreen/goodix.c 212 */;
	unsigned cocci_id/* drivers/input/touchscreen/goodix.c 209 */;
	const u8 *cocci_id/* drivers/input/touchscreen/goodix.c 208 */;
	__be16 cocci_id/* drivers/input/touchscreen/goodix.c 183 */;
	struct i2c_msg cocci_id/* drivers/input/touchscreen/goodix.c 182 */[2];
	u8 *cocci_id/* drivers/input/touchscreen/goodix.c 180 */;
	struct i2c_client *cocci_id/* drivers/input/touchscreen/goodix.c 179 */;
	const struct dmi_system_id cocci_id/* drivers/input/touchscreen/goodix.c 158 */[];
	const unsigned long cocci_id/* drivers/input/touchscreen/goodix.c 118 */[];
	struct i2c_driver cocci_id/* drivers/input/touchscreen/goodix.c 1062 */;
	const struct of_device_id cocci_id/* drivers/input/touchscreen/goodix.c 1046 */[];
	const struct acpi_device_id cocci_id/* drivers/input/touchscreen/goodix.c 1037 */[];
	const struct i2c_device_id cocci_id/* drivers/input/touchscreen/goodix.c 1030 */[];
}
