cocci_test_suite() {
	struct i2c_driver cocci_id/* drivers/leds/leds-as3645a.c 757 */;
	const struct of_device_id cocci_id/* drivers/leds/leds-as3645a.c 751 */[];
	const struct i2c_device_id cocci_id/* drivers/leds/leds-as3645a.c 745 */[];
	struct i2c_client *cocci_id/* drivers/leds/leds-as3645a.c 673 */;
	struct v4l2_flash_config cocci_id/* drivers/leds/leds-as3645a.c 635 */;
	struct led_flash_setting *cocci_id/* drivers/leds/leds-as3645a.c 574 */;
	struct led_init_data cocci_id/* drivers/leds/leds-as3645a.c 573 */;
	struct led_classdev *cocci_id/* drivers/leds/leds-as3645a.c 571 */;
	u32 cocci_id/* drivers/leds/leds-as3645a.c 489 */;
	struct as3645a_config *cocci_id/* drivers/leds/leds-as3645a.c 484 */;
	struct fwnode_handle *cocci_id/* drivers/leds/leds-as3645a.c 482 */;
	const char *cocci_id/* drivers/leds/leds-as3645a.c 424 */;
	struct device *cocci_id/* drivers/leds/leds-as3645a.c 422 */;
	int cocci_id/* drivers/leds/leds-as3645a.c 420 */;
	const struct led_flash_ops cocci_id/* drivers/leds/leds-as3645a.c 373 */;
	enum led_brightness cocci_id/* drivers/leds/leds-as3645a.c 327 */;
	bool cocci_id/* drivers/leds/leds-as3645a.c 298 */;
	struct as3645a *cocci_id/* drivers/leds/leds-as3645a.c 298 */;
	unsigned int cocci_id/* drivers/leds/leds-as3645a.c 285 */;
	u32 *cocci_id/* drivers/leds/leds-as3645a.c 251 */;
	struct led_classdev_flash *cocci_id/* drivers/leds/leds-as3645a.c 251 */;
	enum as_mode cocci_id/* drivers/leds/leds-as3645a.c 234 */;
	u8 cocci_id/* drivers/leds/leds-as3645a.c 170 */;
	struct as3645a cocci_id/* drivers/leds/leds-as3645a.c 151 */;
	struct as3645a {
		struct i2c_client *client;
		struct mutex mutex;
		struct led_classdev_flash fled;
		struct led_classdev iled_cdev;
		struct v4l2_flash *vf;
		struct v4l2_flash *vfind;
		struct fwnode_handle *flash_node;
		struct fwnode_handle *indicator_node;
		struct as3645a_config cfg;
		enum as_mode mode;
		unsigned int timeout;
		unsigned int flash_current;
		unsigned int assist_current;
		unsigned int indicator_current;
		enum v4l2_flash_strobe_source strobe_source;
	} cocci_id/* drivers/leds/leds-as3645a.c 127 */;
	struct as3645a_config {
		u32 flash_timeout_us;
		u32 flash_max_ua;
		u32 assist_max_ua;
		u32 indicator_max_ua;
		u32 voltage_reference;
		u32 peak;
	} cocci_id/* drivers/leds/leds-as3645a.c 118 */;
	enum as_mode{AS_MODE_EXT_TORCH=0 << AS_CONTROL_MODE_SETTING_SHIFT, AS_MODE_INDICATOR=1 << AS_CONTROL_MODE_SETTING_SHIFT, AS_MODE_ASSIST=2 << AS_CONTROL_MODE_SETTING_SHIFT, AS_MODE_FLASH=3 << AS_CONTROL_MODE_SETTING_SHIFT,} cocci_id/* drivers/leds/leds-as3645a.c 111 */;
}