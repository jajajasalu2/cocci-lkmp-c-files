cocci_test_suite() {
	irqreturn_t cocci_id/* drivers/rtc/rtc-max8925.c 72 */;
	void *cocci_id/* drivers/rtc/rtc-max8925.c 72 */;
	struct max8925_rtc_info {
		struct rtc_device *rtc_dev;
		struct max8925_chip *chip;
		struct i2c_client *rtc;
		struct device *dev;
		int irq;
	} cocci_id/* drivers/rtc/rtc-max8925.c 64 */;
	struct platform_driver cocci_id/* drivers/rtc/rtc-max8925.c 309 */;
	struct max8925_rtc_info cocci_id/* drivers/rtc/rtc-max8925.c 251 */;
	struct max8925_rtc_info *cocci_id/* drivers/rtc/rtc-max8925.c 248 */;
	struct max8925_chip *cocci_id/* drivers/rtc/rtc-max8925.c 247 */;
	struct platform_device *cocci_id/* drivers/rtc/rtc-max8925.c 245 */;
	const struct rtc_class_ops cocci_id/* drivers/rtc/rtc-max8925.c 238 */;
	unsigned char cocci_id/* drivers/rtc/rtc-max8925.c 182 */[TIME_NUM];
	struct rtc_wkalrm *cocci_id/* drivers/rtc/rtc-max8925.c 179 */;
	struct device *cocci_id/* drivers/rtc/rtc-max8925.c 179 */;
	enum{RTC_SEC=0, RTC_MIN, RTC_HOUR, RTC_WEEKDAY, RTC_DATE, RTC_MONTH, RTC_YEAR1, RTC_YEAR2,} cocci_id/* drivers/rtc/rtc-max8925.c 16 */;
	unsigned char cocci_id/* drivers/rtc/rtc-max8925.c 113 */;
	struct rtc_time *cocci_id/* drivers/rtc/rtc-max8925.c 111 */;
	unsigned char *cocci_id/* drivers/rtc/rtc-max8925.c 111 */;
	int cocci_id/* drivers/rtc/rtc-max8925.c 111 */;
}
