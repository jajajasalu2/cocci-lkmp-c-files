cocci_test_suite() {
	struct rtc_time *cocci_id/* drivers/rtc/rtc-max8907.c 94 */;
	u8 cocci_id/* drivers/rtc/rtc-max8907.c 80 */;
	u8 *cocci_id/* drivers/rtc/rtc-max8907.c 58 */;
	void cocci_id/* drivers/rtc/rtc-max8907.c 58 */;
	struct max8907_rtc *cocci_id/* drivers/rtc/rtc-max8907.c 49 */;
	irqreturn_t cocci_id/* drivers/rtc/rtc-max8907.c 47 */;
	void *cocci_id/* drivers/rtc/rtc-max8907.c 47 */;
	int cocci_id/* drivers/rtc/rtc-max8907.c 47 */;
	struct max8907_rtc {
		struct max8907 *max8907;
		struct regmap *regmap;
		struct rtc_device *rtc_dev;
		int irq;
	} cocci_id/* drivers/rtc/rtc-max8907.c 40 */;
	struct platform_driver cocci_id/* drivers/rtc/rtc-max8907.c 212 */;
	enum{RTC_SEC=0, RTC_MIN, RTC_HOUR, RTC_WEEKDAY, RTC_DATE, RTC_MONTH, RTC_YEAR1, RTC_YEAR2,} cocci_id/* drivers/rtc/rtc-max8907.c 20 */;
	struct max8907 *cocci_id/* drivers/rtc/rtc-max8907.c 177 */;
	struct platform_device *cocci_id/* drivers/rtc/rtc-max8907.c 175 */;
	const struct rtc_class_ops cocci_id/* drivers/rtc/rtc-max8907.c 168 */;
	unsigned int cocci_id/* drivers/rtc/rtc-max8907.c 125 */;
	u8 cocci_id/* drivers/rtc/rtc-max8907.c 124 */[TIME_NUM];
	struct rtc_wkalrm *cocci_id/* drivers/rtc/rtc-max8907.c 121 */;
	struct device *cocci_id/* drivers/rtc/rtc-max8907.c 121 */;
}
