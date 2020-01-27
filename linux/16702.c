cocci_test_suite() {
	struct fwnode_handle *cocci_id/* drivers/input/keyboard/adc-keys.c 69 */;
	struct adc_keys_button *cocci_id/* drivers/input/keyboard/adc-keys.c 68 */;
	struct device *cocci_id/* drivers/input/keyboard/adc-keys.c 66 */;
	struct adc_keys_state *cocci_id/* drivers/input/keyboard/adc-keys.c 66 */;
	int cocci_id/* drivers/input/keyboard/adc-keys.c 66 */;
	u32 cocci_id/* drivers/input/keyboard/adc-keys.c 36 */;
	struct input_dev *cocci_id/* drivers/input/keyboard/adc-keys.c 32 */;
	void cocci_id/* drivers/input/keyboard/adc-keys.c 32 */;
	struct adc_keys_state {
		struct iio_channel *channel;
		u32 num_keys;
		u32 last_key;
		u32 keyup_voltage;
		const struct adc_keys_button *map;
	} cocci_id/* drivers/input/keyboard/adc-keys.c 24 */;
	struct platform_driver __refdata cocci_id/* drivers/input/keyboard/adc-keys.c 196 */;
	struct adc_keys_button {
		u32 voltage;
		u32 keycode;
	} cocci_id/* drivers/input/keyboard/adc-keys.c 19 */;
	const struct of_device_id cocci_id/* drivers/input/keyboard/adc-keys.c 189 */[];
	enum iio_chan_type cocci_id/* drivers/input/keyboard/adc-keys.c 111 */;
	struct platform_device *cocci_id/* drivers/input/keyboard/adc-keys.c 106 */;
}
