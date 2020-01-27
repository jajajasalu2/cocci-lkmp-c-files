cocci_test_suite() {
	struct platform_driver cocci_id/* drivers/rtc/rtc-sc27xx.c 670 */;
	const struct of_device_id cocci_id/* drivers/rtc/rtc-sc27xx.c 664 */[];
	struct device_node *cocci_id/* drivers/rtc/rtc-sc27xx.c 598 */;
	struct platform_device *cocci_id/* drivers/rtc/rtc-sc27xx.c 596 */;
	u32 cocci_id/* drivers/rtc/rtc-sc27xx.c 572 */;
	irqreturn_t cocci_id/* drivers/rtc/rtc-sc27xx.c 539 */;
	void *cocci_id/* drivers/rtc/rtc-sc27xx.c 539 */;
	const struct rtc_class_ops cocci_id/* drivers/rtc/rtc-sc27xx.c 531 */;
	struct sprd_rtc *cocci_id/* drivers/rtc/rtc-sc27xx.c 509 */;
	struct device *cocci_id/* drivers/rtc/rtc-sc27xx.c 507 */;
	unsigned int cocci_id/* drivers/rtc/rtc-sc27xx.c 507 */;
	int cocci_id/* drivers/rtc/rtc-sc27xx.c 507 */;
	struct rtc_time cocci_id/* drivers/rtc/rtc-sc27xx.c 452 */;
	struct rtc_wkalrm *cocci_id/* drivers/rtc/rtc-sc27xx.c 410 */;
	struct rtc_time *cocci_id/* drivers/rtc/rtc-sc27xx.c 359 */;
	time64_t cocci_id/* drivers/rtc/rtc-sc27xx.c 219 */;
	time64_t *cocci_id/* drivers/rtc/rtc-sc27xx.c 167 */;
	enum sprd_rtc_reg_types cocci_id/* drivers/rtc/rtc-sc27xx.c 166 */;
	bool cocci_id/* drivers/rtc/rtc-sc27xx.c 132 */;
	enum sprd_rtc_reg_types{SPRD_RTC_TIME, SPRD_RTC_ALARM, SPRD_RTC_AUX_ALARM,} cocci_id/* drivers/rtc/rtc-sc27xx.c 120 */;
	struct sprd_rtc {
		struct rtc_device *rtc;
		struct regmap *regmap;
		struct device *dev;
		u32 base;
		int irq;
		bool valid;
	} cocci_id/* drivers/rtc/rtc-sc27xx.c 103 */;
}
