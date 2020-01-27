cocci_test_suite() {
	u32 cocci_id/* drivers/input/keyboard/qt2160.c 76 */;
	struct qt2160_led cocci_id/* drivers/input/keyboard/qt2160.c 73 */;
	struct qt2160_led *cocci_id/* drivers/input/keyboard/qt2160.c 73 */;
	enum led_brightness cocci_id/* drivers/input/keyboard/qt2160.c 71 */;
	struct led_classdev *cocci_id/* drivers/input/keyboard/qt2160.c 70 */;
	int cocci_id/* drivers/input/keyboard/qt2160.c 66 */(struct i2c_client *client,
							     u8 reg, u8 data);
	int cocci_id/* drivers/input/keyboard/qt2160.c 65 */(struct i2c_client *client,
							     u8 reg);
	struct qt2160_data {
		struct i2c_client *client;
		struct input_dev *input;
		struct delayed_work dwork;
		unsigned short keycodes[ARRAY_SIZE(qt2160_key2code)];
		u16 key_matrix;
#ifdef CONFIG_LEDS_CLASS
		struct qt2160_led leds[QT2160_NUM_LEDS_X];
#endif
	} cocci_id/* drivers/input/keyboard/qt2160.c 54 */;
	struct i2c_driver cocci_id/* drivers/input/keyboard/qt2160.c 460 */;
	const struct i2c_device_id cocci_id/* drivers/input/keyboard/qt2160.c 453 */[];
	struct qt2160_led {
		struct qt2160_data *qt2160;
		struct led_classdev cdev;
		char name[32];
		int id;
		enum led_brightness brightness;
	} cocci_id/* drivers/input/keyboard/qt2160.c 45 */;
	unsigned char cocci_id/* drivers/input/keyboard/qt2160.c 37 */[];
	struct qt2160_data cocci_id/* drivers/input/keyboard/qt2160.c 362 */;
	const struct i2c_device_id *cocci_id/* drivers/input/keyboard/qt2160.c 342 */;
	bool cocci_id/* drivers/input/keyboard/qt2160.c 310 */;
	u8 cocci_id/* drivers/input/keyboard/qt2160.c 225 */;
	struct work_struct *cocci_id/* drivers/input/keyboard/qt2160.c 212 */;
	void cocci_id/* drivers/input/keyboard/qt2160.c 207 */;
	irqreturn_t cocci_id/* drivers/input/keyboard/qt2160.c 198 */;
	void *cocci_id/* drivers/input/keyboard/qt2160.c 198 */;
	u16 cocci_id/* drivers/input/keyboard/qt2160.c 163 */;
	u8 cocci_id/* drivers/input/keyboard/qt2160.c 162 */[6];
	struct input_dev *cocci_id/* drivers/input/keyboard/qt2160.c 161 */;
	struct i2c_client *cocci_id/* drivers/input/keyboard/qt2160.c 160 */;
	struct qt2160_data *cocci_id/* drivers/input/keyboard/qt2160.c 158 */;
	int cocci_id/* drivers/input/keyboard/qt2160.c 158 */;
	u8 *cocci_id/* drivers/input/keyboard/qt2160.c 108 */;
	unsigned int cocci_id/* drivers/input/keyboard/qt2160.c 108 */;
}
