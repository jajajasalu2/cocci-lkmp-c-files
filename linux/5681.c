cocci_test_suite() {
	struct rtc_time *cocci_id/* drivers/rtc/rtc-cros-ec.c 86 */;
	struct platform_driver cocci_id/* drivers/rtc/rtc-cros-ec.c 387 */;
	struct {
		struct cros_ec_command msg;
		struct ec_response_rtc data;
	}__packed cocci_id/* drivers/rtc/rtc-cros-ec.c 37 */;
	u32 *cocci_id/* drivers/rtc/rtc-cros-ec.c 34 */;
	struct rtc_time cocci_id/* drivers/rtc/rtc-cros-ec.c 323 */;
	struct cros_ec_dev *cocci_id/* drivers/rtc/rtc-cros-ec.c 320 */;
	struct platform_device *cocci_id/* drivers/rtc/rtc-cros-ec.c 318 */;
	const struct rtc_class_ops cocci_id/* drivers/rtc/rtc-cros-ec.c 283 */;
	struct cros_ec_rtc cocci_id/* drivers/rtc/rtc-cros-ec.c 270 */;
	struct rtc_device *cocci_id/* drivers/rtc/rtc-cros-ec.c 266 */;
	void *cocci_id/* drivers/rtc/rtc-cros-ec.c 263 */;
	unsigned long cocci_id/* drivers/rtc/rtc-cros-ec.c 262 */;
	struct notifier_block *cocci_id/* drivers/rtc/rtc-cros-ec.c 261 */;
	struct cros_ec_rtc {
		struct cros_ec_device *cros_ec;
		struct rtc_device *rtc;
		struct notifier_block notifier;
		u32 saved_alarm;
	} cocci_id/* drivers/rtc/rtc-cros-ec.c 26 */;
	u32 cocci_id/* drivers/rtc/rtc-cros-ec.c 207 */;
	struct cros_ec_device *cocci_id/* drivers/rtc/rtc-cros-ec.c 205 */;
	struct cros_ec_rtc *cocci_id/* drivers/rtc/rtc-cros-ec.c 204 */;
	unsigned int cocci_id/* drivers/rtc/rtc-cros-ec.c 202 */;
	struct device *cocci_id/* drivers/rtc/rtc-cros-ec.c 201 */;
	int cocci_id/* drivers/rtc/rtc-cros-ec.c 201 */;
	time64_t cocci_id/* drivers/rtc/rtc-cros-ec.c 157 */;
	struct rtc_wkalrm *cocci_id/* drivers/rtc/rtc-cros-ec.c 122 */;
}
