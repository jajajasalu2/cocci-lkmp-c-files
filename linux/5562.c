cocci_test_suite() {
	struct wilco_ec_message cocci_id/* drivers/rtc/rtc-wilco-ec.c 93 */;
	struct ec_rtc_read_response cocci_id/* drivers/rtc/rtc-wilco-ec.c 92 */;
	struct wilco_ec_device *cocci_id/* drivers/rtc/rtc-wilco-ec.c 91 */;
	struct rtc_time *cocci_id/* drivers/rtc/rtc-wilco-ec.c 89 */;
	struct device *cocci_id/* drivers/rtc/rtc-wilco-ec.c 89 */;
	struct ec_rtc_write_request {
		u8 command;
		u8 reserved;
		u8 param;
		u8 century;
		u8 year;
		u8 month;
		u8 day;
		u8 hour;
		u8 minute;
		u8 second;
		u8 weekday;
	}__packed cocci_id/* drivers/rtc/rtc-wilco-ec.c 75 */;
	struct ec_rtc_read_response {
		u8 reserved;
		u8 second;
		u8 minute;
		u8 hour;
		u8 day;
		u8 month;
		u8 year;
		u8 century;
	}__packed cocci_id/* drivers/rtc/rtc-wilco-ec.c 48 */;
	struct ec_rtc_read_request cocci_id/* drivers/rtc/rtc-wilco-ec.c 30 */;
	struct ec_rtc_read_request {
		u8 command;
		u8 reserved;
		u8 param;
	}__packed cocci_id/* drivers/rtc/rtc-wilco-ec.c 25 */;
	struct platform_driver cocci_id/* drivers/rtc/rtc-wilco-ec.c 182 */;
	struct rtc_device *cocci_id/* drivers/rtc/rtc-wilco-ec.c 167 */;
	struct platform_device *cocci_id/* drivers/rtc/rtc-wilco-ec.c 165 */;
	int cocci_id/* drivers/rtc/rtc-wilco-ec.c 165 */;
	const struct rtc_class_ops cocci_id/* drivers/rtc/rtc-wilco-ec.c 160 */;
	struct ec_rtc_write_request cocci_id/* drivers/rtc/rtc-wilco-ec.c 126 */;
}
