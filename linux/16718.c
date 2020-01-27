cocci_test_suite() {
	const struct mcs_platform_data *cocci_id/* drivers/input/keyboard/mcs_touchkey.c 98 */;
	const struct i2c_device_id *cocci_id/* drivers/input/keyboard/mcs_touchkey.c 96 */;
	unsigned int cocci_id/* drivers/input/keyboard/mcs_touchkey.c 60 */;
	struct input_dev *cocci_id/* drivers/input/keyboard/mcs_touchkey.c 59 */;
	struct i2c_client *cocci_id/* drivers/input/keyboard/mcs_touchkey.c 58 */;
	struct mcs_touchkey_chip *cocci_id/* drivers/input/keyboard/mcs_touchkey.c 57 */;
	struct mcs_touchkey_data *cocci_id/* drivers/input/keyboard/mcs_touchkey.c 56 */;
	irqreturn_t cocci_id/* drivers/input/keyboard/mcs_touchkey.c 54 */;
	void *cocci_id/* drivers/input/keyboard/mcs_touchkey.c 54 */;
	int cocci_id/* drivers/input/keyboard/mcs_touchkey.c 54 */;
	struct mcs_touchkey_data {
		void (*poweron)( );
		struct i2c_client *client;
		struct input_dev *input_dev;
		struct mcs_touchkey_chip chip;
		unsigned int key_code;
		unsigned int key_val;
		unsigned short keycodes[];
	} cocci_id/* drivers/input/keyboard/mcs_touchkey.c 43 */;
	struct mcs_touchkey_chip {
		unsigned int status_reg;
		unsigned int pressbit;
		unsigned int press_invert;
		unsigned int baseval;
	} cocci_id/* drivers/input/keyboard/mcs_touchkey.c 36 */;
	enum mcs_touchkey_type{MCS5000_TOUCHKEY, MCS5080_TOUCHKEY,} cocci_id/* drivers/input/keyboard/mcs_touchkey.c 31 */;
	struct i2c_driver cocci_id/* drivers/input/keyboard/mcs_touchkey.c 260 */;
	const struct i2c_device_id cocci_id/* drivers/input/keyboard/mcs_touchkey.c 253 */[];
	struct device *cocci_id/* drivers/input/keyboard/mcs_touchkey.c 234 */;
	void cocci_id/* drivers/input/keyboard/mcs_touchkey.c 210 */;
}
