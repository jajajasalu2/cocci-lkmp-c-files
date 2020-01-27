cocci_test_suite() {
	struct bq32k_regs cocci_id/* drivers/rtc/rtc-bq32k.c 91 */;
	struct rtc_time *cocci_id/* drivers/rtc/rtc-bq32k.c 89 */;
	uint8_t cocci_id/* drivers/rtc/rtc-bq32k.c 78 */[MAX_LEN + 1];
	struct i2c_msg cocci_id/* drivers/rtc/rtc-bq32k.c 55 */[];
	void *cocci_id/* drivers/rtc/rtc-bq32k.c 52 */;
	struct i2c_driver cocci_id/* drivers/rtc/rtc-bq32k.c 50 */;
	struct bq32k_regs {
		uint8_t seconds;
		uint8_t minutes;
		uint8_t cent_hours;
		uint8_t day;
		uint8_t date;
		uint8_t month;
		uint8_t years;
	} cocci_id/* drivers/rtc/rtc-bq32k.c 40 */;
	const struct of_device_id cocci_id/* drivers/rtc/rtc-bq32k.c 314 */[];
	const struct i2c_device_id cocci_id/* drivers/rtc/rtc-bq32k.c 308 */[];
	uint8_t cocci_id/* drivers/rtc/rtc-bq32k.c 257 */;
	struct rtc_device *cocci_id/* drivers/rtc/rtc-bq32k.c 256 */;
	struct device *cocci_id/* drivers/rtc/rtc-bq32k.c 255 */;
	const struct i2c_device_id *cocci_id/* drivers/rtc/rtc-bq32k.c 253 */;
	struct i2c_client *cocci_id/* drivers/rtc/rtc-bq32k.c 252 */;
	int cocci_id/* drivers/rtc/rtc-bq32k.c 252 */;
	void cocci_id/* drivers/rtc/rtc-bq32k.c 247 */;
	const char *cocci_id/* drivers/rtc/rtc-bq32k.c 208 */;
	size_t cocci_id/* drivers/rtc/rtc-bq32k.c 208 */;
	char *cocci_id/* drivers/rtc/rtc-bq32k.c 195 */;
	struct device_attribute *cocci_id/* drivers/rtc/rtc-bq32k.c 194 */;
	ssize_t cocci_id/* drivers/rtc/rtc-bq32k.c 193 */;
	u32 cocci_id/* drivers/rtc/rtc-bq32k.c 146 */;
	unsigned char cocci_id/* drivers/rtc/rtc-bq32k.c 144 */;
	struct device_node *cocci_id/* drivers/rtc/rtc-bq32k.c 142 */;
	const struct rtc_class_ops cocci_id/* drivers/rtc/rtc-bq32k.c 137 */;
}
