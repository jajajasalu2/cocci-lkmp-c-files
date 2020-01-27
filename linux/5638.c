cocci_test_suite() {
	struct platform_driver cocci_id/* drivers/rtc/rtc-twl.c 643 */;
	const struct of_device_id cocci_id/* drivers/rtc/rtc-twl.c 637 */[];
	const u8 cocci_id/* drivers/rtc/rtc-twl.c 63 */[];
	void cocci_id/* drivers/rtc/rtc-twl.c 606 */;
	u8 *cocci_id/* drivers/rtc/rtc-twl.c 514 */;
	struct device_node *cocci_id/* drivers/rtc/rtc-twl.c 495 */;
	const struct rtc_class_ops cocci_id/* drivers/rtc/rtc-twl.c 482 */;
	u8 cocci_id/* drivers/rtc/rtc-twl.c 435 */;
	unsigned long cocci_id/* drivers/rtc/rtc-twl.c 432 */;
	irqreturn_t cocci_id/* drivers/rtc/rtc-twl.c 429 */;
	void *cocci_id/* drivers/rtc/rtc-twl.c 429 */;
	enum{REG_SECONDS_REG=0, REG_MINUTES_REG, REG_HOURS_REG, REG_DAYS_REG, REG_MONTHS_REG, REG_YEARS_REG, REG_WEEKS_REG, REG_ALARM_SECONDS_REG, REG_ALARM_MINUTES_REG, REG_ALARM_HOURS_REG, REG_ALARM_DAYS_REG, REG_ALARM_MONTHS_REG, REG_ALARM_YEARS_REG, REG_RTC_CTRL_REG, REG_RTC_STATUS_REG, REG_RTC_INTERRUPTS_REG, REG_RTC_COMP_LSB_REG, REG_RTC_COMP_MSB_REG,} cocci_id/* drivers/rtc/rtc-twl.c 40 */;
	unsigned char cocci_id/* drivers/rtc/rtc-twl.c 372 */[ALL_TIME_REGS];
	struct rtc_wkalrm *cocci_id/* drivers/rtc/rtc-twl.c 369 */;
	enum twl_class{TWL_4030=0, TWL_6030,} cocci_id/* drivers/rtc/rtc-twl.c 32 */;
	struct rtc_time *cocci_id/* drivers/rtc/rtc-twl.c 258 */;
	struct platform_device *cocci_id/* drivers/rtc/rtc-twl.c 225 */;
	struct device *cocci_id/* drivers/rtc/rtc-twl.c 223 */;
	unsigned cocci_id/* drivers/rtc/rtc-twl.c 223 */;
	struct twl_rtc *cocci_id/* drivers/rtc/rtc-twl.c 206 */;
	unsigned char cocci_id/* drivers/rtc/rtc-twl.c 206 */;
	int cocci_id/* drivers/rtc/rtc-twl.c 206 */;
	struct twl_rtc {
		struct device *dev;
		struct rtc_device *rtc;
		u8 *reg_map;
		unsigned char rtc_irq_bits;
		bool wake_enabled;
#ifdef CONFIG_PM_SLEEP
		unsigned char irqstat;
#endif
		enum twl_class class;
	} cocci_id/* drivers/rtc/rtc-twl.c 139 */;
}
