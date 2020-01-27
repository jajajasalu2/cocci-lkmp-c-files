cocci_test_suite() {
	struct pca955x_chipdef cocci_id/* drivers/leds/leds-pca955x.c 77 */[];
	struct pca955x_chipdef {
		int bits;
		u8 slv_addr;
		int slv_addr_shift;
	} cocci_id/* drivers/leds/leds-pca955x.c 71 */;
	enum pca955x_type{pca9550, pca9551, pca9552, pca9553,} cocci_id/* drivers/leds/leds-pca955x.c 64 */;
	struct i2c_driver cocci_id/* drivers/leds/leds-pca955x.c 571 */;
	struct i2c_adapter *cocci_id/* drivers/leds/leds-pca955x.c 426 */;
	const struct i2c_device_id *cocci_id/* drivers/leds/leds-pca955x.c 421 */;
	void *cocci_id/* drivers/leds/leds-pca955x.c 412 */;
	const struct of_device_id cocci_id/* drivers/leds/leds-pca955x.c 411 */[];
	u32 cocci_id/* drivers/leds/leds-pca955x.c 386 */;
	const char *cocci_id/* drivers/leds/leds-pca955x.c 385 */;
	struct pca955x_led cocci_id/* drivers/leds/leds-pca955x.c 379 */;
	int cocci_id/* drivers/leds/leds-pca955x.c 368 */;
	struct fwnode_handle *cocci_id/* drivers/leds/leds-pca955x.c 367 */;
	struct pca955x_chipdef *cocci_id/* drivers/leds/leds-pca955x.c 364 */;
	struct i2c_client *cocci_id/* drivers/leds/leds-pca955x.c 364 */;
	struct pca955x_platform_data *cocci_id/* drivers/leds/leds-pca955x.c 363 */;
	struct pca955x_led *cocci_id/* drivers/leds/leds-pca955x.c 350 */;
	struct pca955x *cocci_id/* drivers/leds/leds-pca955x.c 349 */;
	unsigned int cocci_id/* drivers/leds/leds-pca955x.c 347 */;
	struct gpio_chip *cocci_id/* drivers/leds/leds-pca955x.c 346 */;
	u8 cocci_id/* drivers/leds/leds-pca955x.c 338 */;
	void cocci_id/* drivers/leds/leds-pca955x.c 328 */;
	u8 *cocci_id/* drivers/leds/leds-pca955x.c 291 */;
	enum led_brightness cocci_id/* drivers/leds/leds-pca955x.c 233 */;
	struct led_classdev *cocci_id/* drivers/leds/leds-pca955x.c 232 */;
	struct pca955x_platform_data {
		struct pca955x_led *leds;
		int num_leds;
	} cocci_id/* drivers/leds/leds-pca955x.c 128 */;
	struct pca955x_led {
		struct pca955x *pca955x;
		struct led_classdev led_cdev;
		int led_num;
		char name[32];
		u32 type;
		const char *default_trigger;
	} cocci_id/* drivers/leds/leds-pca955x.c 119 */;
	struct pca955x {
		struct mutex lock;
		struct pca955x_led *leds;
		struct pca955x_chipdef *chipdef;
		struct i2c_client *client;
#ifdef CONFIG_LEDS_PCA955X_GPIO
		struct gpio_chip gpio;
#endif
	} cocci_id/* drivers/leds/leds-pca955x.c 109 */;
	const struct i2c_device_id cocci_id/* drivers/leds/leds-pca955x.c 100 */[];
}
