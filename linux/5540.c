cocci_test_suite() {
	u8 *cocci_id/* drivers/rtc/rtc-max8997.c 74 */;
	struct rtc_time *cocci_id/* drivers/rtc/rtc-max8997.c 74 */;
	void cocci_id/* drivers/rtc/rtc-max8997.c 74 */;
	struct max8997_rtc_info {
		struct device *dev;
		struct max8997_dev *max8997;
		struct i2c_client *rtc;
		struct rtc_device *rtc_dev;
		struct mutex lock;
		int virq;
		int rtc_24hr_mode;
	} cocci_id/* drivers/rtc/rtc-max8997.c 64 */;
	enum{RTC_SEC=0, RTC_MIN, RTC_HOUR, RTC_WEEKDAY, RTC_MONTH, RTC_YEAR, RTC_DATE, RTC_NR_TIME,} cocci_id/* drivers/rtc/rtc-max8997.c 53 */;
	struct platform_driver cocci_id/* drivers/rtc/rtc-max8997.c 520 */;
	const struct platform_device_id cocci_id/* drivers/rtc/rtc-max8997.c 514 */[];
	struct max8997_rtc_info cocci_id/* drivers/rtc/rtc-max8997.c 454 */;
	struct max8997_dev *cocci_id/* drivers/rtc/rtc-max8997.c 450 */;
	struct platform_device *cocci_id/* drivers/rtc/rtc-max8997.c 448 */;
	u8 cocci_id/* drivers/rtc/rtc-max8997.c 428 */[2];
	u8 cocci_id/* drivers/rtc/rtc-max8997.c 397 */;
	bool cocci_id/* drivers/rtc/rtc-max8997.c 394 */;
	const struct rtc_class_ops cocci_id/* drivers/rtc/rtc-max8997.c 358 */;
	struct max8997_rtc_info *cocci_id/* drivers/rtc/rtc-max8997.c 349 */;
	irqreturn_t cocci_id/* drivers/rtc/rtc-max8997.c 347 */;
	void *cocci_id/* drivers/rtc/rtc-max8997.c 347 */;
	int cocci_id/* drivers/rtc/rtc-max8997.c 347 */;
	unsigned int cocci_id/* drivers/rtc/rtc-max8997.c 332 */;
	struct device *cocci_id/* drivers/rtc/rtc-max8997.c 331 */;
	u8 cocci_id/* drivers/rtc/rtc-max8997.c 181 */[RTC_NR_TIME];
	struct rtc_wkalrm *cocci_id/* drivers/rtc/rtc-max8997.c 178 */;
}
