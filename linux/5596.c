cocci_test_suite() {
	u8 *cocci_id/* drivers/rtc/rtc-hid-sensor-time.c 91 */;
	char *cocci_id/* drivers/rtc/rtc-hid-sensor-time.c 78 */;
	void *cocci_id/* drivers/rtc/rtc-hid-sensor-time.c 78 */;
	size_t cocci_id/* drivers/rtc/rtc-hid-sensor-time.c 77 */;
	struct hid_sensor_hub_device *cocci_id/* drivers/rtc/rtc-hid-sensor-time.c 76 */;
	u32 *cocci_id/* drivers/rtc/rtc-hid-sensor-time.c 70 */;
	u16 *cocci_id/* drivers/rtc/rtc-hid-sensor-time.c 68 */;
	const char *const cocci_id/* drivers/rtc/rtc-hid-sensor-time.c 44 */[TIME_RTC_CHANNEL_MAX];
	const u32 cocci_id/* drivers/rtc/rtc-hid-sensor-time.c 34 */[TIME_RTC_CHANNEL_MAX];
	struct platform_driver cocci_id/* drivers/rtc/rtc-hid-sensor-time.c 316 */;
	const struct platform_device_id cocci_id/* drivers/rtc/rtc-hid-sensor-time.c 307 */[];
	struct hid_time_state {
		struct hid_sensor_hub_callbacks callbacks;
		struct hid_sensor_common common_attributes;
		struct hid_sensor_hub_attribute_info info[TIME_RTC_CHANNEL_MAX];
		struct rtc_time last_time;
		spinlock_t lock_last_time;
		struct completion comp_last_time;
		struct rtc_time time_buf;
		struct rtc_device *rtc;
	} cocci_id/* drivers/rtc/rtc-hid-sensor-time.c 23 */;
	struct hid_time_state cocci_id/* drivers/rtc/rtc-hid-sensor-time.c 227 */;
	const struct rtc_class_ops cocci_id/* drivers/rtc/rtc-hid-sensor-time.c 218 */;
	struct hid_time_state *cocci_id/* drivers/rtc/rtc-hid-sensor-time.c 195 */;
	unsigned long cocci_id/* drivers/rtc/rtc-hid-sensor-time.c 194 */;
	struct rtc_time *cocci_id/* drivers/rtc/rtc-hid-sensor-time.c 192 */;
	struct device *cocci_id/* drivers/rtc/rtc-hid-sensor-time.c 192 */;
	int cocci_id/* drivers/rtc/rtc-hid-sensor-time.c 192 */;
	struct platform_device *cocci_id/* drivers/rtc/rtc-hid-sensor-time.c 134 */;
	enum hid_time_channel{CHANNEL_SCAN_INDEX_YEAR, CHANNEL_SCAN_INDEX_MONTH, CHANNEL_SCAN_INDEX_DAY, CHANNEL_SCAN_INDEX_HOUR, CHANNEL_SCAN_INDEX_MINUTE, CHANNEL_SCAN_INDEX_SECOND, TIME_RTC_CHANNEL_MAX,} cocci_id/* drivers/rtc/rtc-hid-sensor-time.c 13 */;
	unsigned cocci_id/* drivers/rtc/rtc-hid-sensor-time.c 125 */;
	const char cocci_id/* drivers/rtc/rtc-hid-sensor-time.c 124 */[];
	u32 cocci_id/* drivers/rtc/rtc-hid-sensor-time.c 122 */;
	const char *cocci_id/* drivers/rtc/rtc-hid-sensor-time.c 122 */;
}
