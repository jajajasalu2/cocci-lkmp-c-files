cocci_test_suite() {
	struct pca963x {
		struct pca963x_chipdef *chipdef;
		struct mutex mutex;
		struct i2c_client *client;
		struct pca963x_led *leds;
		unsigned long leds_on;
	} cocci_id/* drivers/leds/leds-pca963x.c 99 */;
	const struct i2c_device_id cocci_id/* drivers/leds/leds-pca963x.c 88 */[];
	struct pca963x_chipdef cocci_id/* drivers/leds/leds-pca963x.c 63 */[];
	struct pca963x_chipdef {
		u8 grppwm;
		u8 grpfreq;
		u8 ledout_base;
		int n_leds;
		unsigned int scaling;
	} cocci_id/* drivers/leds/leds-pca963x.c 55 */;
	enum pca963x_type{pca9633, pca9634, pca9635,} cocci_id/* drivers/leds/leds-pca963x.c 49 */;
	struct i2c_driver cocci_id/* drivers/leds/leds-pca963x.c 471 */;
	struct pca963x *cocci_id/* drivers/leds/leds-pca963x.c 358 */;
	const struct i2c_device_id *cocci_id/* drivers/leds/leds-pca963x.c 356 */;
	const struct of_device_id cocci_id/* drivers/leds/leds-pca963x.c 346 */[];
	struct pca963x_platform_data cocci_id/* drivers/leds/leds-pca963x.c 314 */;
	u32 cocci_id/* drivers/leds/leds-pca963x.c 297 */;
	struct led_info cocci_id/* drivers/leds/leds-pca963x.c 291 */;
	struct fwnode_handle *cocci_id/* drivers/leds/leds-pca963x.c 283 */;
	struct led_info *cocci_id/* drivers/leds/leds-pca963x.c 282 */;
	struct pca963x_chipdef *cocci_id/* drivers/leds/leds-pca963x.c 279 */;
	struct i2c_client *cocci_id/* drivers/leds/leds-pca963x.c 279 */;
	struct pca963x_platform_data *cocci_id/* drivers/leds/leds-pca963x.c 278 */;
	struct pca963x_led cocci_id/* drivers/leds/leds-pca963x.c 232 */;
	unsigned long cocci_id/* drivers/leds/leds-pca963x.c 229 */;
	unsigned long *cocci_id/* drivers/leds/leds-pca963x.c 226 */;
	struct led_classdev *cocci_id/* drivers/leds/leds-pca963x.c 225 */;
	unsigned int cocci_id/* drivers/leds/leds-pca963x.c 217 */;
	int cocci_id/* drivers/leds/leds-pca963x.c 159 */;
	u8 cocci_id/* drivers/leds/leds-pca963x.c 154 */;
	struct pca963x_led *cocci_id/* drivers/leds/leds-pca963x.c 152 */;
	void cocci_id/* drivers/leds/leds-pca963x.c 152 */;
	enum led_brightness cocci_id/* drivers/leds/leds-pca963x.c 117 */;
	struct pca963x_led {
		struct pca963x *chip;
		struct led_classdev led_cdev;
		int led_num;
		char name[32];
		u8 gdc;
		u8 gfrq;
	} cocci_id/* drivers/leds/leds-pca963x.c 107 */;
}
