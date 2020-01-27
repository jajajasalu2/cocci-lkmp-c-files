cocci_test_suite() {
	struct rx6110_data {
		struct rtc_device *rtc;
		struct regmap *regmap;
	} cocci_id/* drivers/rtc/rtc-rx6110.c 98 */;
	enum{RTC_SEC=0, RTC_MIN, RTC_HOUR, RTC_WDAY, RTC_MDAY, RTC_MONTH, RTC_YEAR, RTC_NR_TIME,} cocci_id/* drivers/rtc/rtc-rx6110.c 85 */;
	struct spi_driver cocci_id/* drivers/rtc/rtc-rx6110.c 377 */;
	const struct of_device_id cocci_id/* drivers/rtc/rtc-rx6110.c 371 */[];
	const struct spi_device_id cocci_id/* drivers/rtc/rtc-rx6110.c 365 */[];
	struct spi_device *cocci_id/* drivers/rtc/rtc-rx6110.c 324 */;
	struct regmap_config cocci_id/* drivers/rtc/rtc-rx6110.c 313 */;
	const struct rtc_class_ops cocci_id/* drivers/rtc/rtc-rx6110.c 308 */;
	struct rtc_device *cocci_id/* drivers/rtc/rtc-rx6110.c 264 */;
	const struct reg_sequence cocci_id/* drivers/rtc/rtc-rx6110.c 246 */[];
	u8 cocci_id/* drivers/rtc/rtc-rx6110.c 217 */[RTC_NR_TIME];
	struct rx6110_data *cocci_id/* drivers/rtc/rtc-rx6110.c 216 */;
	struct device *cocci_id/* drivers/rtc/rtc-rx6110.c 214 */;
	u8 *cocci_id/* drivers/rtc/rtc-rx6110.c 138 */;
	struct rtc_time *cocci_id/* drivers/rtc/rtc-rx6110.c 138 */;
	int cocci_id/* drivers/rtc/rtc-rx6110.c 138 */;
}
