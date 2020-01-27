cocci_test_suite() {
	struct rtc_time *cocci_id/* drivers/rtc/rtc-fm3130.c 92 */;
	void cocci_id/* drivers/rtc/rtc-fm3130.c 65 */;
	const struct i2c_device_id cocci_id/* drivers/rtc/rtc-fm3130.c 55 */[];
	struct fm3130 {
		u8 reg_addr_time;
		u8 reg_addr_alarm;
		u8 regs[15];
		struct i2c_msg msg[4];
		struct i2c_client *client;
		struct rtc_device *rtc;
		int alarm_valid;
		int data_valid;
	} cocci_id/* drivers/rtc/rtc-fm3130.c 45 */;
	struct fm3130 cocci_id/* drivers/rtc/rtc-fm3130.c 355 */;
	struct i2c_adapter *cocci_id/* drivers/rtc/rtc-fm3130.c 349 */;
	const struct i2c_device_id *cocci_id/* drivers/rtc/rtc-fm3130.c 344 */;
	struct i2c_client *cocci_id/* drivers/rtc/rtc-fm3130.c 343 */;
	struct i2c_driver cocci_id/* drivers/rtc/rtc-fm3130.c 341 */;
	const struct rtc_class_ops cocci_id/* drivers/rtc/rtc-fm3130.c 333 */;
	struct fm3130 *cocci_id/* drivers/rtc/rtc-fm3130.c 303 */;
	struct device *cocci_id/* drivers/rtc/rtc-fm3130.c 301 */;
	unsigned int cocci_id/* drivers/rtc/rtc-fm3130.c 301 */;
	int cocci_id/* drivers/rtc/rtc-fm3130.c 301 */;
	struct rtc_wkalrm *cocci_id/* drivers/rtc/rtc-fm3130.c 182 */;
	u8 *cocci_id/* drivers/rtc/rtc-fm3130.c 143 */;
}
