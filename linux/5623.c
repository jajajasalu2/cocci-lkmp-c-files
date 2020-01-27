cocci_test_suite() {
	struct abx80x_cap {
		u16 pn;
		bool has_tc;
		bool has_wdog;
	} cocci_id/* drivers/rtc/rtc-abx80x.c 94 */;
	enum abx80x_chip{AB0801, AB0803, AB0804, AB0805, AB1801, AB1803, AB1804, AB1805, RV1805, ABX80X,} cocci_id/* drivers/rtc/rtc-abx80x.c 91 */;
	u8 cocci_id/* drivers/rtc/rtc-abx80x.c 89 */[];
	struct i2c_driver cocci_id/* drivers/rtc/rtc-abx80x.c 869 */;
	const struct i2c_device_id cocci_id/* drivers/rtc/rtc-abx80x.c 854 */[];
	char cocci_id/* drivers/rtc/rtc-abx80x.c 681 */[7];
	const struct i2c_device_id *cocci_id/* drivers/rtc/rtc-abx80x.c 676 */;
	const struct watchdog_ops cocci_id/* drivers/rtc/rtc-abx80x.c 647 */;
	const struct watchdog_info cocci_id/* drivers/rtc/rtc-abx80x.c 642 */;
	u8 cocci_id/* drivers/rtc/rtc-abx80x.c 604 */;
	struct abx80x_priv *cocci_id/* drivers/rtc/rtc-abx80x.c 603 */;
	unsigned int cocci_id/* drivers/rtc/rtc-abx80x.c 601 */;
	struct watchdog_device *cocci_id/* drivers/rtc/rtc-abx80x.c 600 */;
	int cocci_id/* drivers/rtc/rtc-abx80x.c 600 */;
	u32 cocci_id/* drivers/rtc/rtc-abx80x.c 565 */;
	const char *cocci_id/* drivers/rtc/rtc-abx80x.c 562 */;
	struct device_node *cocci_id/* drivers/rtc/rtc-abx80x.c 560 */;
	const struct rtc_class_ops cocci_id/* drivers/rtc/rtc-abx80x.c 551 */;
	void __user *cocci_id/* drivers/rtc/rtc-abx80x.c 528 */;
	unsigned long cocci_id/* drivers/rtc/rtc-abx80x.c 515 */;
	struct i2c_client *cocci_id/* drivers/rtc/rtc-abx80x.c 502 */;
	struct device *cocci_id/* drivers/rtc/rtc-abx80x.c 500 */;
	const struct attribute_group cocci_id/* drivers/rtc/rtc-abx80x.c 496 */;
	struct attribute *cocci_id/* drivers/rtc/rtc-abx80x.c 490 */[];
	struct device_attribute *cocci_id/* drivers/rtc/rtc-abx80x.c 410 */;
	char *cocci_id/* drivers/rtc/rtc-abx80x.c 410 */;
	ssize_t cocci_id/* drivers/rtc/rtc-abx80x.c 409 */;
	size_t cocci_id/* drivers/rtc/rtc-abx80x.c 393 */;
	u8 cocci_id/* drivers/rtc/rtc-abx80x.c 301 */[6];
	unsigned char cocci_id/* drivers/rtc/rtc-abx80x.c 269 */[7];
	struct rtc_wkalrm *cocci_id/* drivers/rtc/rtc-abx80x.c 266 */;
	struct rtc_device *cocci_id/* drivers/rtc/rtc-abx80x.c 244 */;
	irqreturn_t cocci_id/* drivers/rtc/rtc-abx80x.c 240 */;
	void *cocci_id/* drivers/rtc/rtc-abx80x.c 240 */;
	unsigned char cocci_id/* drivers/rtc/rtc-abx80x.c 163 */[8];
	struct rtc_time *cocci_id/* drivers/rtc/rtc-abx80x.c 160 */;
	struct abx80x_priv {
		struct rtc_device *rtc;
		struct i2c_client *client;
		struct watchdog_device wdog;
	} cocci_id/* drivers/rtc/rtc-abx80x.c 113 */;
	struct abx80x_cap cocci_id/* drivers/rtc/rtc-abx80x.c 100 */[];
}
