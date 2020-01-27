cocci_test_suite() {
	enum lm3556_indic_n_blank{INDIC_N_BLANK_0=0, INDIC_N_BLANK_1, INDIC_N_BLANK_2, INDIC_N_BLANK_3, INDIC_N_BLANK_4, INDIC_N_BLANK_5, INDIC_N_BLANK_6, INDIC_N_BLANK_7, INDIC_N_BLANK_8, INDIC_N_BLANK_9, INDIC_N_BLANK_10, INDIC_N_BLANK_11, INDIC_N_BLANK_12, INDIC_N_BLANK_13, INDIC_N_BLANK_14, INDIC_N_BLANK_15,} cocci_id/* drivers/leds/leds-lm355x.c 86 */;
	enum lm3556_indic_pulse_time{PULSE_TIME_0_MS=0, PULSE_TIME_32_MS, PULSE_TIME_64_MS, PULSE_TIME_92_MS, PULSE_TIME_128_MS, PULSE_TIME_160_MS, PULSE_TIME_196_MS, PULSE_TIME_224_MS, PULSE_TIME_256_MS, PULSE_TIME_288_MS, PULSE_TIME_320_MS, PULSE_TIME_352_MS, PULSE_TIME_384_MS, PULSE_TIME_416_MS, PULSE_TIME_448_MS, PULSE_TIME_480_MS,} cocci_id/* drivers/leds/leds-lm355x.c 67 */;
	struct i2c_driver cocci_id/* drivers/leds/leds-lm355x.c 519 */;
	const struct i2c_device_id cocci_id/* drivers/leds/leds-lm355x.c 511 */[];
	struct lm355x_chip_data {
		struct device *dev;
		enum lm355x_type type;
		struct led_classdev cdev_flash;
		struct led_classdev cdev_torch;
		struct led_classdev cdev_indicator;
		struct lm355x_platform_data *pdata;
		struct regmap *regmap;
		struct mutex lock;
		unsigned int last_flag;
		struct lm355x_reg_data *regs;
	} cocci_id/* drivers/leds/leds-lm355x.c 50 */;
	struct lm355x_reg_data {
		u8 regno;
		u8 mask;
		u8 shift;
	} cocci_id/* drivers/leds/leds-lm355x.c 44 */;
	const struct i2c_device_id *cocci_id/* drivers/leds/leds-lm355x.c 400 */;
	struct i2c_client *cocci_id/* drivers/leds/leds-lm355x.c 399 */;
	const struct regmap_config cocci_id/* drivers/leds/leds-lm355x.c 392 */;
	struct attribute *cocci_id/* drivers/leds/leds-lm355x.c 386 */[];
	unsigned int cocci_id/* drivers/leds/leds-lm355x.c 360 */;
	enum lm355x_mode{MODE_SHDN=0, MODE_INDIC, MODE_TORCH, MODE_FLASH,} cocci_id/* drivers/leds/leds-lm355x.c 36 */;
	struct lm355x_chip_data cocci_id/* drivers/leds/leds-lm355x.c 359 */;
	struct lm355x_chip_data *cocci_id/* drivers/leds/leds-lm355x.c 358 */;
	struct led_classdev *cocci_id/* drivers/leds/leds-lm355x.c 357 */;
	const char *cocci_id/* drivers/leds/leds-lm355x.c 354 */;
	size_t cocci_id/* drivers/leds/leds-lm355x.c 354 */;
	struct device_attribute *cocci_id/* drivers/leds/leds-lm355x.c 353 */;
	struct device *cocci_id/* drivers/leds/leds-lm355x.c 352 */;
	ssize_t cocci_id/* drivers/leds/leds-lm355x.c 352 */;
	enum led_brightness cocci_id/* drivers/leds/leds-lm355x.c 339 */;
	enum lm355x_regs{REG_FLAG=0, REG_TORCH_CFG, REG_TORCH_CTRL, REG_STROBE_CFG, REG_FLASH_CTRL, REG_INDI_CFG, REG_INDI_CTRL, REG_OPMODE, REG_MAX,} cocci_id/* drivers/leds/leds-lm355x.c 23 */;
	struct lm355x_reg_data *cocci_id/* drivers/leds/leds-lm355x.c 201 */;
	u8 cocci_id/* drivers/leds/leds-lm355x.c 196 */;
	enum lm355x_mode cocci_id/* drivers/leds/leds-lm355x.c 196 */;
	enum lm355x_type{CHIP_LM3554=0, CHIP_LM3556,} cocci_id/* drivers/leds/leds-lm355x.c 18 */;
	struct lm355x_platform_data *cocci_id/* drivers/leds/leds-lm355x.c 163 */;
	int cocci_id/* drivers/leds/leds-lm355x.c 159 */;
	char cocci_id/* drivers/leds/leds-lm355x.c 153 */[][I2C_NAME_SIZE];
	struct lm355x_reg_data cocci_id/* drivers/leds/leds-lm355x.c 131 */[REG_MAX];
	struct indicator cocci_id/* drivers/leds/leds-lm355x.c 124 */[INDIC_PATTERN_SIZE];
	struct indicator {
		u8 blinking;
		u8 period_cnt;
	} cocci_id/* drivers/leds/leds-lm355x.c 118 */;
	enum lm3556_indic_period{INDIC_PERIOD_0=0, INDIC_PERIOD_1, INDIC_PERIOD_2, INDIC_PERIOD_3, INDIC_PERIOD_4, INDIC_PERIOD_5, INDIC_PERIOD_6, INDIC_PERIOD_7,} cocci_id/* drivers/leds/leds-lm355x.c 105 */;
}
