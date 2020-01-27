cocci_test_suite() {
	s32 cocci_id/* drivers/input/misc/apanel.c 95 */;
	struct apanel *cocci_id/* drivers/input/misc/apanel.c 93 */;
	struct input_dev *cocci_id/* drivers/input/misc/apanel.c 91 */;
	unsigned cocci_id/* drivers/input/misc/apanel.c 73 */;
	const unsigned short cocci_id/* drivers/input/misc/apanel.c 61 */[MAX_PANEL_KEYS];
	struct apanel {
		struct input_dev *idev;
		struct i2c_client *client;
		unsigned short keymap[MAX_PANEL_KEYS];
		u16 nkeys;
		struct led_classdev mail_led;
	} cocci_id/* drivers/input/misc/apanel.c 53 */;
	enum apanel_chip cocci_id/* drivers/input/misc/apanel.c 49 */[APANEL_DEV_MAX];
	enum apanel_chip{CHIP_NONE=0, CHIP_OZ992C=1, CHIP_OZ163T=2, CHIP_OZ711M3=4,} cocci_id/* drivers/input/misc/apanel.c 41 */;
	enum apanel_devid{APANEL_DEV_NONE=0, APANEL_DEV_APPBTN=1, APANEL_DEV_CDBTN=2, APANEL_DEV_LCD=3, APANEL_DEV_LED=4, APANEL_DEV_MAX,} cocci_id/* drivers/input/misc/apanel.c 31 */;
	void __exit cocci_id/* drivers/input/misc/apanel.c 294 */;
	void cocci_id/* drivers/input/misc/apanel.c 294 */;
	enum apanel_chip cocci_id/* drivers/input/misc/apanel.c 279 */;
	int cocci_id/* drivers/input/misc/apanel.c 232 */;
	unsigned char cocci_id/* drivers/input/misc/apanel.c 231 */;
	u8 cocci_id/* drivers/input/misc/apanel.c 230 */;
	const void __iomem *cocci_id/* drivers/input/misc/apanel.c 229 */;
	void __iomem *cocci_id/* drivers/input/misc/apanel.c 228 */;
	int __init cocci_id/* drivers/input/misc/apanel.c 226 */;
	const unsigned char cocci_id/* drivers/input/misc/apanel.c 214 */[];
	ssize_t cocci_id/* drivers/input/misc/apanel.c 213 */;
	struct i2c_driver cocci_id/* drivers/input/misc/apanel.c 201 */;
	const struct i2c_device_id cocci_id/* drivers/input/misc/apanel.c 195 */[];
	const struct i2c_device_id *cocci_id/* drivers/input/misc/apanel.c 124 */;
	struct i2c_client *cocci_id/* drivers/input/misc/apanel.c 123 */;
	u16 cocci_id/* drivers/input/misc/apanel.c 118 */;
	struct apanel cocci_id/* drivers/input/misc/apanel.c 117 */;
	enum led_brightness cocci_id/* drivers/input/misc/apanel.c 115 */;
	struct led_classdev *cocci_id/* drivers/input/misc/apanel.c 114 */;
}
