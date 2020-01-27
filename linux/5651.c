cocci_test_suite() {
	struct platform_device *cocci_id/* drivers/rtc/rtc-meson-vrtc.c 65 */;
	const struct rtc_class_ops cocci_id/* drivers/rtc/rtc-meson-vrtc.c 59 */;
	struct meson_vrtc_data *cocci_id/* drivers/rtc/rtc-meson-vrtc.c 53 */;
	struct device *cocci_id/* drivers/rtc/rtc-meson-vrtc.c 51 */;
	unsigned int cocci_id/* drivers/rtc/rtc-meson-vrtc.c 51 */;
	int cocci_id/* drivers/rtc/rtc-meson-vrtc.c 51 */;
	struct rtc_wkalrm *cocci_id/* drivers/rtc/rtc-meson-vrtc.c 38 */;
	unsigned long cocci_id/* drivers/rtc/rtc-meson-vrtc.c 33 */;
	void cocci_id/* drivers/rtc/rtc-meson-vrtc.c 32 */;
	struct timespec64 cocci_id/* drivers/rtc/rtc-meson-vrtc.c 23 */;
	struct rtc_time *cocci_id/* drivers/rtc/rtc-meson-vrtc.c 21 */;
	struct platform_driver cocci_id/* drivers/rtc/rtc-meson-vrtc.c 143 */;
	struct meson_vrtc_data {
		void __iomem *io_alarm;
		struct rtc_device *rtc;
		unsigned long alarm_time;
		bool enabled;
	} cocci_id/* drivers/rtc/rtc-meson-vrtc.c 14 */;
	const struct of_device_id cocci_id/* drivers/rtc/rtc-meson-vrtc.c 137 */[];
	int __maybe_unused cocci_id/* drivers/rtc/rtc-meson-vrtc.c 123 */;
	long cocci_id/* drivers/rtc/rtc-meson-vrtc.c 101 */;
}
