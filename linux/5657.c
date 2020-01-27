cocci_test_suite() {
	struct i2c_driver cocci_id/* drivers/rtc/rtc-ab-b5ze-s3.c 942 */;
	const struct i2c_device_id cocci_id/* drivers/rtc/rtc-ab-b5ze-s3.c 936 */[];
	const struct of_device_id cocci_id/* drivers/rtc/rtc-ab-b5ze-s3.c 929 */[];
	const struct i2c_device_id *cocci_id/* drivers/rtc/rtc-ab-b5ze-s3.c 821 */;
	const struct regmap_config cocci_id/* drivers/rtc/rtc-ab-b5ze-s3.c 815 */;
	const struct rtc_class_ops cocci_id/* drivers/rtc/rtc-ab-b5ze-s3.c 807 */;
	u8 cocci_id/* drivers/rtc/rtc-ab-b5ze-s3.c 750 */[ABB5ZES3_CTRL_SEC_LEN];
	struct rtc_device *cocci_id/* drivers/rtc/rtc-ab-b5ze-s3.c 749 */;
	struct i2c_client *cocci_id/* drivers/rtc/rtc-ab-b5ze-s3.c 746 */;
	irqreturn_t cocci_id/* drivers/rtc/rtc-ab-b5ze-s3.c 744 */;
	void *cocci_id/* drivers/rtc/rtc-ab-b5ze-s3.c 744 */;
	bool cocci_id/* drivers/rtc/rtc-ab-b5ze-s3.c 591 */;
	struct regmap *cocci_id/* drivers/rtc/rtc-ab-b5ze-s3.c 590 */;
	int cocci_id/* drivers/rtc/rtc-ab-b5ze-s3.c 590 */;
	u8 cocci_id/* drivers/rtc/rtc-ab-b5ze-s3.c 509 */[ABB5ZES3_TIMA_SEC_LEN];
	unsigned int cocci_id/* drivers/rtc/rtc-ab-b5ze-s3.c 357 */;
	u8 cocci_id/* drivers/rtc/rtc-ab-b5ze-s3.c 356 */[ABB5ZES3_ALRM_SEC_LEN];
	unsigned long cocci_id/* drivers/rtc/rtc-ab-b5ze-s3.c 355 */;
	struct rtc_time cocci_id/* drivers/rtc/rtc-ab-b5ze-s3.c 354 */;
	struct rtc_wkalrm *cocci_id/* drivers/rtc/rtc-ab-b5ze-s3.c 351 */;
	u8 cocci_id/* drivers/rtc/rtc-ab-b5ze-s3.c 305 */;
	u8 cocci_id/* drivers/rtc/rtc-ab-b5ze-s3.c 302 */[ABB5ZES3_TIMA_SEC_LEN + 1];
	u8 *cocci_id/* drivers/rtc/rtc-ab-b5ze-s3.c 283 */;
	void cocci_id/* drivers/rtc/rtc-ab-b5ze-s3.c 273 */;
	u8 cocci_id/* drivers/rtc/rtc-ab-b5ze-s3.c 208 */[ABB5ZES3_REG_RTC_SC + ABB5ZES3_RTC_SEC_LEN];
	struct rtc_time *cocci_id/* drivers/rtc/rtc-ab-b5ze-s3.c 205 */;
	struct abb5zes3_rtc_data *cocci_id/* drivers/rtc/rtc-ab-b5ze-s3.c 158 */;
	struct device *cocci_id/* drivers/rtc/rtc-ab-b5ze-s3.c 156 */;
	const u8 cocci_id/* drivers/rtc/rtc-ab-b5ze-s3.c 136 */[ABB5ZES3_MEM_MAP_LEN];
	u8 cocci_id/* drivers/rtc/rtc-ab-b5ze-s3.c 135 */[ABB5ZES3_MEM_MAP_LEN];
	struct abb5zes3_rtc_data {
		struct rtc_device *rtc;
		struct regmap *regmap;
		int irq;
		bool battery_low;
		bool timer_alarm;
	} cocci_id/* drivers/rtc/rtc-ab-b5ze-s3.c 119 */;
}
