cocci_test_suite() {
	struct platform_driver cocci_id/* drivers/rtc/rtc-bd70528.c 482 */;
	struct bd70528_rtc {
		struct rohm_regmap_dev *mfd;
		struct device *dev;
	} cocci_id/* drivers/rtc/rtc-bd70528.c 45 */;
	struct rtc_time cocci_id/* drivers/rtc/rtc-bd70528.c 432 */;
	struct platform_device *cocci_id/* drivers/rtc/rtc-bd70528.c 397 */;
	struct rtc_device *cocci_id/* drivers/rtc/rtc-bd70528.c 391 */;
	struct bd70528_rtc_alm {
		struct bd70528_rtc_data data;
		u8 alm_mask;
		u8 alm_repeat;
	}__packed cocci_id/* drivers/rtc/rtc-bd70528.c 39 */;
	irqreturn_t cocci_id/* drivers/rtc/rtc-bd70528.c 389 */;
	void *cocci_id/* drivers/rtc/rtc-bd70528.c 389 */;
	int cocci_id/* drivers/rtc/rtc-bd70528.c 389 */;
	const struct rtc_class_ops cocci_id/* drivers/rtc/rtc-bd70528.c 381 */;
	struct bd70528_rtc *cocci_id/* drivers/rtc/rtc-bd70528.c 360 */;
	struct device *cocci_id/* drivers/rtc/rtc-bd70528.c 356 */;
	unsigned int cocci_id/* drivers/rtc/rtc-bd70528.c 356 */;
	struct bd70528_rtc_wake {
		struct bd70528_rtc_day time;
		u8 ctrl;
	}__packed cocci_id/* drivers/rtc/rtc-bd70528.c 34 */;
	struct bd70528_rtc_data cocci_id/* drivers/rtc/rtc-bd70528.c 339 */;
	struct rohm_regmap_dev *cocci_id/* drivers/rtc/rtc-bd70528.c 338 */;
	struct rtc_time *cocci_id/* drivers/rtc/rtc-bd70528.c 335 */;
	struct bd70528_rtc_alm cocci_id/* drivers/rtc/rtc-bd70528.c 266 */;
	struct rtc_wkalrm *cocci_id/* drivers/rtc/rtc-bd70528.c 264 */;
	struct bd70528_rtc_data {
		struct bd70528_rtc_day time;
		u8 week;
		u8 day;
		u8 month;
		u8 year;
	}__packed cocci_id/* drivers/rtc/rtc-bd70528.c 26 */;
	struct bd70528_rtc_wake cocci_id/* drivers/rtc/rtc-bd70528.c 218 */;
	struct bd70528_rtc_day {
		u8 sec;
		u8 min;
		u8 hour;
	}__packed cocci_id/* drivers/rtc/rtc-bd70528.c 20 */;
	struct bd70528_rtc_data *cocci_id/* drivers/rtc/rtc-bd70528.c 196 */;
	void cocci_id/* drivers/rtc/rtc-bd70528.c 196 */;
	struct bd70528_rtc_day *cocci_id/* drivers/rtc/rtc-bd70528.c 164 */;
	int *cocci_id/* drivers/rtc/rtc-bd70528.c 159 */;
}
