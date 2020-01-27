cocci_test_suite() {
	struct device *cocci_id/* drivers/input/keyboard/mpr121_touchkey.c 92 */;
	struct regulator *cocci_id/* drivers/input/keyboard/mpr121_touchkey.c 87 */;
	void *cocci_id/* drivers/input/keyboard/mpr121_touchkey.c 85 */;
	void cocci_id/* drivers/input/keyboard/mpr121_touchkey.c 85 */;
	const struct mpr121_init_register cocci_id/* drivers/input/keyboard/mpr121_touchkey.c 73 */[];
	struct mpr121_init_register {
		int addr;
		u8 val;
	} cocci_id/* drivers/input/keyboard/mpr121_touchkey.c 68 */;
	struct mpr121_touchkey {
		struct i2c_client *client;
		struct input_dev *input_dev;
		unsigned int statusbits;
		unsigned int keycount;
		u32 keycodes[MPR121_MAX_KEY_COUNT];
	} cocci_id/* drivers/input/keyboard/mpr121_touchkey.c 60 */;
	struct i2c_driver cocci_id/* drivers/input/keyboard/mpr121_touchkey.c 386 */;
	const struct of_device_id cocci_id/* drivers/input/keyboard/mpr121_touchkey.c 379 */[];
	const struct i2c_device_id cocci_id/* drivers/input/keyboard/mpr121_touchkey.c 372 */[];
	int __maybe_unused cocci_id/* drivers/input/keyboard/mpr121_touchkey.c 356 */;
	u32 cocci_id/* drivers/input/keyboard/mpr121_touchkey.c 241 */;
	struct input_dev *cocci_id/* drivers/input/keyboard/mpr121_touchkey.c 240 */;
	const struct i2c_device_id *cocci_id/* drivers/input/keyboard/mpr121_touchkey.c 234 */;
	unsigned char cocci_id/* drivers/input/keyboard/mpr121_touchkey.c 176 */;
	const struct mpr121_init_register *cocci_id/* drivers/input/keyboard/mpr121_touchkey.c 175 */;
	struct i2c_client *cocci_id/* drivers/input/keyboard/mpr121_touchkey.c 173 */;
	struct mpr121_touchkey *cocci_id/* drivers/input/keyboard/mpr121_touchkey.c 172 */;
	int cocci_id/* drivers/input/keyboard/mpr121_touchkey.c 172 */;
	irqreturn_t cocci_id/* drivers/input/keyboard/mpr121_touchkey.c 163 */;
	unsigned int cocci_id/* drivers/input/keyboard/mpr121_touchkey.c 127 */;
	unsigned long cocci_id/* drivers/input/keyboard/mpr121_touchkey.c 126 */;
}
