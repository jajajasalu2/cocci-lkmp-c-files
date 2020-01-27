cocci_test_suite() {
	struct pcf50633_rtc *cocci_id/* drivers/rtc/rtc-pcf50633.c 87 */;
	struct device *cocci_id/* drivers/rtc/rtc-pcf50633.c 85 */;
	unsigned int cocci_id/* drivers/rtc/rtc-pcf50633.c 85 */;
	int cocci_id/* drivers/rtc/rtc-pcf50633.c 84 */;
	struct rtc_time *cocci_id/* drivers/rtc/rtc-pcf50633.c 62 */;
	struct pcf50633_time *cocci_id/* drivers/rtc/rtc-pcf50633.c 62 */;
	void cocci_id/* drivers/rtc/rtc-pcf50633.c 62 */;
	struct pcf50633_rtc {
		int alarm_enabled;
		int alarm_pending;
		struct pcf50633 *pcf;
		struct rtc_device *rtc_dev;
	} cocci_id/* drivers/rtc/rtc-pcf50633.c 54 */;
	struct pcf50633_time {
		u_int8_t time[PCF50633_TI_EXTENT];
	} cocci_id/* drivers/rtc/rtc-pcf50633.c 50 */;
	enum pcf50633_time_indexes{PCF50633_TI_SEC, PCF50633_TI_MIN, PCF50633_TI_HOUR, PCF50633_TI_WKDAY, PCF50633_TI_DAY, PCF50633_TI_MONTH, PCF50633_TI_YEAR, PCF50633_TI_EXTENT,} cocci_id/* drivers/rtc/rtc-pcf50633.c 39 */;
	struct platform_driver cocci_id/* drivers/rtc/rtc-pcf50633.c 273 */;
	struct platform_device *cocci_id/* drivers/rtc/rtc-pcf50633.c 242 */;
	void *cocci_id/* drivers/rtc/rtc-pcf50633.c 234 */;
	const struct rtc_class_ops cocci_id/* drivers/rtc/rtc-pcf50633.c 226 */;
	struct pcf50633_time cocci_id/* drivers/rtc/rtc-pcf50633.c 174 */;
	struct rtc_wkalrm *cocci_id/* drivers/rtc/rtc-pcf50633.c 171 */;
}
