cocci_test_suite() {
	u8 cocci_id/* drivers/input/keyboard/tm2-touchkey.c 84 */;
	u32 cocci_id/* drivers/input/keyboard/tm2-touchkey.c 83 */;
	struct tm2_touchkey_data cocci_id/* drivers/input/keyboard/tm2-touchkey.c 82 */;
	enum led_brightness cocci_id/* drivers/input/keyboard/tm2-touchkey.c 79 */;
	struct led_classdev *cocci_id/* drivers/input/keyboard/tm2-touchkey.c 78 */;
	struct touchkey_variant cocci_id/* drivers/input/keyboard/tm2-touchkey.c 71 */;
	const struct touchkey_variant cocci_id/* drivers/input/keyboard/tm2-touchkey.c 64 */;
	struct tm2_touchkey_data {
		struct i2c_client *client;
		struct input_dev *input_dev;
		struct led_classdev led_dev;
		struct regulator *vdd;
		struct regulator_bulk_data regulators[2];
		const struct touchkey_variant *variant;
		u32 keycodes[4];
		int num_keycodes;
	} cocci_id/* drivers/input/keyboard/tm2-touchkey.c 46 */;
	struct touchkey_variant {
		u8 keycode_reg;
		u8 base_reg;
		u8 cmd_led_on;
		u8 cmd_led_off;
		bool no_reg;
		bool fixed_regulator;
	} cocci_id/* drivers/input/keyboard/tm2-touchkey.c 37 */;
	struct i2c_driver cocci_id/* drivers/input/keyboard/tm2-touchkey.c 335 */;
	const struct of_device_id cocci_id/* drivers/input/keyboard/tm2-touchkey.c 320 */[];
	const struct i2c_device_id cocci_id/* drivers/input/keyboard/tm2-touchkey.c 314 */[];
	struct device *cocci_id/* drivers/input/keyboard/tm2-touchkey.c 296 */;
	int __maybe_unused cocci_id/* drivers/input/keyboard/tm2-touchkey.c 296 */;
	struct device_node *cocci_id/* drivers/input/keyboard/tm2-touchkey.c 177 */;
	const struct i2c_device_id *cocci_id/* drivers/input/keyboard/tm2-touchkey.c 175 */;
	struct i2c_client *cocci_id/* drivers/input/keyboard/tm2-touchkey.c 174 */;
	struct tm2_touchkey_data *cocci_id/* drivers/input/keyboard/tm2-touchkey.c 128 */;
	irqreturn_t cocci_id/* drivers/input/keyboard/tm2-touchkey.c 126 */;
	void *cocci_id/* drivers/input/keyboard/tm2-touchkey.c 126 */;
	int cocci_id/* drivers/input/keyboard/tm2-touchkey.c 126 */;
	void cocci_id/* drivers/input/keyboard/tm2-touchkey.c 118 */;
}
