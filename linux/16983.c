cocci_test_suite() {
	struct silead_fw_data {
		u32 offset;
		u32 val;
	} cocci_id/* drivers/input/touchscreen/silead.c 79 */;
	struct silead_ts_data {
		struct i2c_client *client;
		struct gpio_desc *gpio_power;
		struct input_dev *input;
		struct regulator_bulk_data regulators[2];
		char fw_name[64];
		struct touchscreen_properties prop;
		u32 max_fingers;
		u32 chip_id;
		struct input_mt_pos pos[SILEAD_MAX_FINGERS];
		int slots[SILEAD_MAX_FINGERS];
		int id[SILEAD_MAX_FINGERS];
	} cocci_id/* drivers/input/touchscreen/silead.c 65 */;
	struct i2c_driver cocci_id/* drivers/input/touchscreen/silead.c 630 */;
	const struct of_device_id cocci_id/* drivers/input/touchscreen/silead.c 619 */[];
	const struct acpi_device_id cocci_id/* drivers/input/touchscreen/silead.c 603 */[];
	enum silead_ts_power{SILEAD_POWER_ON=1, SILEAD_POWER_OFF=0,} cocci_id/* drivers/input/touchscreen/silead.c 60 */;
	const struct i2c_device_id cocci_id/* drivers/input/touchscreen/silead.c 591 */[];
	int __maybe_unused cocci_id/* drivers/input/touchscreen/silead.c 550 */;
	const struct i2c_device_id *cocci_id/* drivers/input/touchscreen/silead.c 462 */;
	struct silead_ts_data *cocci_id/* drivers/input/touchscreen/silead.c 456 */;
	void *cocci_id/* drivers/input/touchscreen/silead.c 454 */;
	void cocci_id/* drivers/input/touchscreen/silead.c 454 */;
	const struct acpi_device_id *cocci_id/* drivers/input/touchscreen/silead.c 423 */;
	const char *cocci_id/* drivers/input/touchscreen/silead.c 401 */;
	irqreturn_t cocci_id/* drivers/input/touchscreen/silead.c 387 */;
	u8 *cocci_id/* drivers/input/touchscreen/silead.c 337 */;
	__le32 cocci_id/* drivers/input/touchscreen/silead.c 333 */;
	struct i2c_client *cocci_id/* drivers/input/touchscreen/silead.c 330 */;
	int cocci_id/* drivers/input/touchscreen/silead.c 330 */;
	u32 cocci_id/* drivers/input/touchscreen/silead.c 315 */;
	struct silead_fw_data *cocci_id/* drivers/input/touchscreen/silead.c 286 */;
	const struct firmware *cocci_id/* drivers/input/touchscreen/silead.c 285 */;
	unsigned int cocci_id/* drivers/input/touchscreen/silead.c 284 */;
	struct device *cocci_id/* drivers/input/touchscreen/silead.c 282 */;
	bool cocci_id/* drivers/input/touchscreen/silead.c 138 */;
	struct input_dev *cocci_id/* drivers/input/touchscreen/silead.c 134 */;
	enum silead_ts_power cocci_id/* drivers/input/touchscreen/silead.c 121 */;
}
