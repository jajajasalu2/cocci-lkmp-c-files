cocci_test_suite() {
	unsigned char cocci_id/* drivers/rtc/rtc-sd3078.c 86 */[NUM_TIME_REGS];
	unsigned char cocci_id/* drivers/rtc/rtc-sd3078.c 85 */;
	struct rtc_time *cocci_id/* drivers/rtc/rtc-sd3078.c 83 */;
	struct device *cocci_id/* drivers/rtc/rtc-sd3078.c 83 */;
	struct sd3078 *cocci_id/* drivers/rtc/rtc-sd3078.c 72 */;
	void cocci_id/* drivers/rtc/rtc-sd3078.c 72 */;
	struct sd3078 {
		struct rtc_device *rtc;
		struct regmap *regmap;
	} cocci_id/* drivers/rtc/rtc-sd3078.c 39 */;
	struct i2c_driver cocci_id/* drivers/rtc/rtc-sd3078.c 216 */;
	const struct of_device_id cocci_id/* drivers/rtc/rtc-sd3078.c 210 */[];
	const struct i2c_device_id cocci_id/* drivers/rtc/rtc-sd3078.c 204 */[];
	const struct i2c_device_id *cocci_id/* drivers/rtc/rtc-sd3078.c 167 */;
	struct i2c_client *cocci_id/* drivers/rtc/rtc-sd3078.c 166 */;
	int cocci_id/* drivers/rtc/rtc-sd3078.c 166 */;
	const struct regmap_config cocci_id/* drivers/rtc/rtc-sd3078.c 160 */;
	const struct rtc_class_ops cocci_id/* drivers/rtc/rtc-sd3078.c 155 */;
}
