cocci_test_suite() {
	s32 cocci_id/* drivers/platform/chrome/cros_usbpd_logger.c 90 */;
	struct rtc_time cocci_id/* drivers/platform/chrome/cros_usbpd_logger.c 88 */;
	char cocci_id/* drivers/platform/chrome/cros_usbpd_logger.c 87 */[BUF_SIZE + 1];
	struct mcdp_info *cocci_id/* drivers/platform/chrome/cros_usbpd_logger.c 85 */;
	struct usb_chg_measures *cocci_id/* drivers/platform/chrome/cros_usbpd_logger.c 84 */;
	struct cros_ec_command *cocci_id/* drivers/platform/chrome/cros_usbpd_logger.c 65 */;
	va_list cocci_id/* drivers/platform/chrome/cros_usbpd_logger.c 52 */;
	const char *cocci_id/* drivers/platform/chrome/cros_usbpd_logger.c 50 */;
	char *cocci_id/* drivers/platform/chrome/cros_usbpd_logger.c 50 */;
	int cocci_id/* drivers/platform/chrome/cros_usbpd_logger.c 50 */;
	const char *const cocci_id/* drivers/platform/chrome/cros_usbpd_logger.c 37 */[];
	struct logger_data {
		struct device *dev;
		struct cros_ec_dev *ec_dev;
		u8 ec_buffer[CROS_USBPD_BUFFER_SIZE];
		struct delayed_work log_work;
		struct workqueue_struct *log_workqueue;
	} cocci_id/* drivers/platform/chrome/cros_usbpd_logger.c 29 */;
	struct platform_driver cocci_id/* drivers/platform/chrome/cros_usbpd_logger.c 254 */;
	struct cros_ec_command cocci_id/* drivers/platform/chrome/cros_usbpd_logger.c 24 */;
	int __maybe_unused cocci_id/* drivers/platform/chrome/cros_usbpd_logger.c 232 */;
	struct ec_response_pd_log cocci_id/* drivers/platform/chrome/cros_usbpd_logger.c 22 */;
	struct cros_ec_dev *cocci_id/* drivers/platform/chrome/cros_usbpd_logger.c 197 */;
	struct platform_device *cocci_id/* drivers/platform/chrome/cros_usbpd_logger.c 195 */;
	ktime_t cocci_id/* drivers/platform/chrome/cros_usbpd_logger.c 176 */;
	struct ec_response_pd_log *cocci_id/* drivers/platform/chrome/cros_usbpd_logger.c 174 */;
	struct device *cocci_id/* drivers/platform/chrome/cros_usbpd_logger.c 173 */;
	struct logger_data cocci_id/* drivers/platform/chrome/cros_usbpd_logger.c 171 */;
	struct logger_data *cocci_id/* drivers/platform/chrome/cros_usbpd_logger.c 170 */;
	struct work_struct *cocci_id/* drivers/platform/chrome/cros_usbpd_logger.c 168 */;
	void cocci_id/* drivers/platform/chrome/cros_usbpd_logger.c 168 */;
}
