cocci_test_suite() {
	struct qt1050_key_regs {
		unsigned int nthr;
		unsigned int pulse_scale;
		unsigned int di_aks;
		unsigned int csd;
	} cocci_id/* drivers/input/keyboard/qt1050.c 98 */;
	struct i2c_driver cocci_id/* drivers/input/keyboard/qt1050.c 585 */;
	const struct of_device_id __maybe_unused cocci_id/* drivers/input/keyboard/qt1050.c 579 */[];
	int __maybe_unused cocci_id/* drivers/input/keyboard/qt1050.c 566 */;
	struct i2c_client *cocci_id/* drivers/input/keyboard/qt1050.c 428 */;
	struct qt1050_key cocci_id/* drivers/input/keyboard/qt1050.c 352 */;
	struct fwnode_handle *cocci_id/* drivers/input/keyboard/qt1050.c 344 */;
	struct device *cocci_id/* drivers/input/keyboard/qt1050.c 343 */;
	const struct qt1050_key_regs *cocci_id/* drivers/input/keyboard/qt1050.c 305 */;
	struct qt1050_key *cocci_id/* drivers/input/keyboard/qt1050.c 304 */;
	struct regmap *cocci_id/* drivers/input/keyboard/qt1050.c 303 */;
	struct qt1050_priv *cocci_id/* drivers/input/keyboard/qt1050.c 301 */;
	int cocci_id/* drivers/input/keyboard/qt1050.c 301 */;
	unsigned long cocci_id/* drivers/input/keyboard/qt1050.c 252 */;
	struct input_dev *cocci_id/* drivers/input/keyboard/qt1050.c 251 */;
	irqreturn_t cocci_id/* drivers/input/keyboard/qt1050.c 248 */;
	void *cocci_id/* drivers/input/keyboard/qt1050.c 248 */;
	unsigned int cocci_id/* drivers/input/keyboard/qt1050.c 225 */;
	bool cocci_id/* drivers/input/keyboard/qt1050.c 223 */;
	struct regmap_config cocci_id/* drivers/input/keyboard/qt1050.c 211 */;
	const struct regmap_access_table cocci_id/* drivers/input/keyboard/qt1050.c 190 */;
	const struct regmap_range cocci_id/* drivers/input/keyboard/qt1050.c 174 */[];
	const struct qt1050_key_regs cocci_id/* drivers/input/keyboard/qt1050.c 124 */[];
	struct qt1050_priv {
		struct i2c_client *client;
		struct input_dev *input;
		struct regmap *regmap;
		struct qt1050_key keys[QT1050_MAX_KEYS];
		unsigned short keycodes[QT1050_MAX_KEYS];
		u8 reg_keys;
		u8 last_keys;
	} cocci_id/* drivers/input/keyboard/qt1050.c 114 */;
	struct qt1050_key {
		u32 num;
		u32 charge_delay;
		u32 thr_cnt;
		u32 samples;
		u32 scale;
		u32 keycode;
	} cocci_id/* drivers/input/keyboard/qt1050.c 105 */;
}
