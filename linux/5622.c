cocci_test_suite() {
	timeu64_t cocci_id/* drivers/rtc/rtc-ftrtc010.c 69 */;
	struct rtc_time *cocci_id/* drivers/rtc/rtc-ftrtc010.c 64 */;
	irqreturn_t cocci_id/* drivers/rtc/rtc-ftrtc010.c 50 */;
	void *cocci_id/* drivers/rtc/rtc-ftrtc010.c 50 */;
	int cocci_id/* drivers/rtc/rtc-ftrtc010.c 50 */;
	enum ftrtc010_rtc_offsets{FTRTC010_RTC_SECOND=0x00, FTRTC010_RTC_MINUTE=0x04, FTRTC010_RTC_HOUR=0x08, FTRTC010_RTC_DAYS=0x0C, FTRTC010_RTC_ALARM_SECOND=0x10, FTRTC010_RTC_ALARM_MINUTE=0x14, FTRTC010_RTC_ALARM_HOUR=0x18, FTRTC010_RTC_RECORD=0x1C, FTRTC010_RTC_CR=0x20,} cocci_id/* drivers/rtc/rtc-ftrtc010.c 38 */;
	struct ftrtc010_rtc {
		struct rtc_device *rtc_dev;
		void __iomem *rtc_base;
		int rtc_irq;
		struct clk *pclk;
		struct clk *extclk;
	} cocci_id/* drivers/rtc/rtc-ftrtc010.c 30 */;
	struct platform_driver cocci_id/* drivers/rtc/rtc-ftrtc010.c 201 */;
	const struct of_device_id cocci_id/* drivers/rtc/rtc-ftrtc010.c 194 */[];
	u64 cocci_id/* drivers/rtc/rtc-ftrtc010.c 170 */;
	struct resource *cocci_id/* drivers/rtc/rtc-ftrtc010.c 115 */;
	struct device *cocci_id/* drivers/rtc/rtc-ftrtc010.c 114 */;
	struct ftrtc010_rtc *cocci_id/* drivers/rtc/rtc-ftrtc010.c 113 */;
	u32 cocci_id/* drivers/rtc/rtc-ftrtc010.c 112 */;
	struct platform_device *cocci_id/* drivers/rtc/rtc-ftrtc010.c 110 */;
	const struct rtc_class_ops cocci_id/* drivers/rtc/rtc-ftrtc010.c 105 */;
}
