cocci_test_suite() {
	u8 cocci_id/* drivers/input/touchscreen/wdt87xx_i2c.c 999 */[WDT_V1_RAW_BUF_COUNT];
	irqreturn_t cocci_id/* drivers/input/touchscreen/wdt87xx_i2c.c 993 */;
	struct input_dev *cocci_id/* drivers/input/touchscreen/wdt87xx_i2c.c 952 */;
	void cocci_id/* drivers/input/touchscreen/wdt87xx_i2c.c 952 */;
	const struct attribute_group cocci_id/* drivers/input/touchscreen/wdt87xx_i2c.c 948 */;
	struct attribute *cocci_id/* drivers/input/touchscreen/wdt87xx_i2c.c 939 */[];
	int cocci_id/* drivers/input/touchscreen/wdt87xx_i2c.c 915 */;
	const char *cocci_id/* drivers/input/touchscreen/wdt87xx_i2c.c 913 */;
	size_t cocci_id/* drivers/input/touchscreen/wdt87xx_i2c.c 913 */;
	u32 cocci_id/* drivers/input/touchscreen/wdt87xx_i2c.c 885 */;
	struct wdt87xx_data *cocci_id/* drivers/input/touchscreen/wdt87xx_i2c.c 884 */;
	struct i2c_client *cocci_id/* drivers/input/touchscreen/wdt87xx_i2c.c 883 */;
	struct device_attribute *cocci_id/* drivers/input/touchscreen/wdt87xx_i2c.c 881 */;
	char *cocci_id/* drivers/input/touchscreen/wdt87xx_i2c.c 881 */;
	struct device *cocci_id/* drivers/input/touchscreen/wdt87xx_i2c.c 880 */;
	ssize_t cocci_id/* drivers/input/touchscreen/wdt87xx_i2c.c 880 */;
	unsigned int cocci_id/* drivers/input/touchscreen/wdt87xx_i2c.c 818 */;
	const struct firmware *cocci_id/* drivers/input/touchscreen/wdt87xx_i2c.c 817 */;
	u8 cocci_id/* drivers/input/touchscreen/wdt87xx_i2c.c 647 */[CMD_BUF_SIZE];
	u8 cocci_id/* drivers/input/touchscreen/wdt87xx_i2c.c 646 */[PKT_BUF_SIZE];
	u16 *cocci_id/* drivers/input/touchscreen/wdt87xx_i2c.c 641 */;
	const u8 *cocci_id/* drivers/input/touchscreen/wdt87xx_i2c.c 630 */;
	u8 cocci_id/* drivers/input/touchscreen/wdt87xx_i2c.c 608 */;
	u16 cocci_id/* drivers/input/touchscreen/wdt87xx_i2c.c 608 */;
	u8 cocci_id/* drivers/input/touchscreen/wdt87xx_i2c.c 437 */[PKT_READ_SIZE];
	struct wdt87xx_sys_param *cocci_id/* drivers/input/touchscreen/wdt87xx_i2c.c 435 */;
	const void *cocci_id/* drivers/input/touchscreen/wdt87xx_i2c.c 415 */;
	u8 cocci_id/* drivers/input/touchscreen/wdt87xx_i2c.c 281 */[PKT_WRITE_SIZE];
	u8 cocci_id/* drivers/input/touchscreen/wdt87xx_i2c.c 280 */[8];
	u8 cocci_id/* drivers/input/touchscreen/wdt87xx_i2c.c 222 */[];
	u8 *cocci_id/* drivers/input/touchscreen/wdt87xx_i2c.c 220 */;
	struct i2c_msg cocci_id/* drivers/input/touchscreen/wdt87xx_i2c.c 191 */[];
	void *cocci_id/* drivers/input/touchscreen/wdt87xx_i2c.c 188 */;
	struct wdt87xx_data {
		struct i2c_client *client;
		struct input_dev *input;
		struct mutex fw_mutex;
		struct wdt87xx_sys_param param;
		u8 phys[32];
	} cocci_id/* drivers/input/touchscreen/wdt87xx_i2c.c 178 */;
	struct wdt87xx_sys_param {
		u16 fw_id;
		u16 plat_id;
		u16 xmls_id1;
		u16 xmls_id2;
		u16 phy_ch_x;
		u16 phy_ch_y;
		u16 phy_w;
		u16 phy_h;
		u16 scaling_factor;
		u32 max_x;
		u32 max_y;
		u16 vendor_id;
		u16 product_id;
	} cocci_id/* drivers/input/touchscreen/wdt87xx_i2c.c 162 */;
	struct i2c_driver cocci_id/* drivers/input/touchscreen/wdt87xx_i2c.c 1172 */;
	const struct acpi_device_id cocci_id/* drivers/input/touchscreen/wdt87xx_i2c.c 1166 */[];
	const struct i2c_device_id cocci_id/* drivers/input/touchscreen/wdt87xx_i2c.c 1160 */[];
	int __maybe_unused cocci_id/* drivers/input/touchscreen/wdt87xx_i2c.c 1136 */;
	const struct i2c_device_id *cocci_id/* drivers/input/touchscreen/wdt87xx_i2c.c 1068 */;
}
