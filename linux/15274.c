cocci_test_suite() {
	struct i2c_driver cocci_id/* drivers/leds/leds-tca6507.c 834 */;
	struct i2c_adapter *cocci_id/* drivers/leds/leds-tca6507.c 756 */;
	const struct i2c_device_id *cocci_id/* drivers/leds/leds-tca6507.c 753 */;
	const struct of_device_id cocci_id/* drivers/leds/leds-tca6507.c 737 */[];
	struct tca6507_platform_data cocci_id/* drivers/leds/leds-tca6507.c 725 */;
	u32 cocci_id/* drivers/leds/leds-tca6507.c 708 */;
	struct led_info cocci_id/* drivers/leds/leds-tca6507.c 702 */;
	struct led_info *cocci_id/* drivers/leds/leds-tca6507.c 694 */;
	struct device_node *cocci_id/* drivers/leds/leds-tca6507.c 692 */;
	struct i2c_client *cocci_id/* drivers/leds/leds-tca6507.c 690 */;
	struct tca6507_platform_data *cocci_id/* drivers/leds/leds-tca6507.c 689 */;
	unsigned cocci_id/* drivers/leds/leds-tca6507.c 625 */;
	struct gpio_chip *cocci_id/* drivers/leds/leds-tca6507.c 624 */;
	struct tca6507_led cocci_id/* drivers/leds/leds-tca6507.c 572 */;
	unsigned long *cocci_id/* drivers/leds/leds-tca6507.c 569 */;
	struct led_classdev *cocci_id/* drivers/leds/leds-tca6507.c 568 */;
	enum led_brightness cocci_id/* drivers/leds/leds-tca6507.c 558 */;
	unsigned long cocci_id/* drivers/leds/leds-tca6507.c 536 */;
	struct tca6507_chip *cocci_id/* drivers/leds/leds-tca6507.c 534 */;
	struct tca6507_led *cocci_id/* drivers/leds/leds-tca6507.c 532 */;
	struct bank *cocci_id/* drivers/leds/leds-tca6507.c 398 */;
	void cocci_id/* drivers/leds/leds-tca6507.c 376 */;
	u8 cocci_id/* drivers/leds/leds-tca6507.c 362 */[TCA6507_REG_CNT];
	struct tca6507_chip cocci_id/* drivers/leds/leds-tca6507.c 358 */;
	struct work_struct *cocci_id/* drivers/leds/leds-tca6507.c 356 */;
	int *cocci_id/* drivers/leds/leds-tca6507.c 203 */;
	const struct i2c_device_id cocci_id/* drivers/leds/leds-tca6507.c 197 */[];
	struct tca6507_chip {
		int reg_set;
		u8 reg_file[TCA6507_REG_CNT];
		struct bank {
			int level;
			int ontime,offtime;
			int on_dflt,off_dflt;
			int time_use,level_use;
		} bank[3];
		struct i2c_client *client;
		struct work_struct work;
		spinlock_t lock;
		struct tca6507_led {
			struct tca6507_chip *chip;
			struct led_classdev led_cdev;
			int num;
			int ontime,offtime;
			int on_dflt,off_dflt;
			int bank;
			int blink;
		} leds[NUM_LEDS];
#ifdef CONFIG_GPIOLIB
		struct gpio_chip gpio;
		const char *gpio_name[NUM_LEDS];
		int gpio_map[NUM_LEDS];
#endif
	} cocci_id/* drivers/leds/leds-tca6507.c 165 */;
	int cocci_id/* drivers/leds/leds-tca6507.c 157 */;
	int cocci_id/* drivers/leds/leds-tca6507.c 145 */[TIMECODES];
	int cocci_id/* drivers/leds/leds-tca6507.c 121 */[2];
	int cocci_id/* drivers/leds/leds-tca6507.c 116 */[3];
	enum{BANK0, BANK1, MASTER,} cocci_id/* drivers/leds/leds-tca6507.c 111 */;
}
