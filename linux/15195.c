cocci_test_suite() {
	unsigned char cocci_id/* drivers/leds/leds-88pm860x.c 71 */[3];
	enum led_brightness cocci_id/* drivers/leds/leds-88pm860x.c 67 */;
	struct led_classdev *cocci_id/* drivers/leds/leds-88pm860x.c 66 */;
	struct pm860x_chip *cocci_id/* drivers/leds/leds-88pm860x.c 45 */;
	int cocci_id/* drivers/leds/leds-88pm860x.c 45 */;
	struct pm860x_led {
		struct led_classdev cdev;
		struct i2c_client *i2c;
		struct pm860x_chip *chip;
		struct mutex lock;
		char name[MFD_NAME_SIZE];
		int port;
		int iset;
		unsigned char brightness;
		unsigned char current_brightness;
		int reg_control;
		int reg_blink;
		int blink_mask;
	} cocci_id/* drivers/leds/leds-88pm860x.c 28 */;
	struct platform_driver cocci_id/* drivers/leds/leds-88pm860x.c 216 */;
	struct pm860x_led cocci_id/* drivers/leds/leds-88pm860x.c 152 */;
	struct resource *cocci_id/* drivers/leds/leds-88pm860x.c 149 */;
	struct pm860x_led_pdata *cocci_id/* drivers/leds/leds-88pm860x.c 147 */;
	struct device_node *cocci_id/* drivers/leds/leds-88pm860x.c 118 */;
	struct pm860x_led *cocci_id/* drivers/leds/leds-88pm860x.c 116 */;
	struct platform_device *cocci_id/* drivers/leds/leds-88pm860x.c 115 */;
}
