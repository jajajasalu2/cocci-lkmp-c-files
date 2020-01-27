cocci_test_suite() {
	struct pm8xxx_rtc {
		struct rtc_device *rtc;
		struct regmap *regmap;
		bool allow_set_time;
		int rtc_alarm_irq;
		const struct pm8xxx_rtc_regs *regs;
		struct device *rtc_dev;
		spinlock_t ctrl_reg_lock;
	} cocci_id/* drivers/rtc/rtc-pm8xxx.c 56 */;
	struct platform_driver cocci_id/* drivers/rtc/rtc-pm8xxx.c 538 */;
	const struct of_device_id *cocci_id/* drivers/rtc/rtc-pm8xxx.c 451 */;
	struct platform_device *cocci_id/* drivers/rtc/rtc-pm8xxx.c 447 */;
	const struct of_device_id cocci_id/* drivers/rtc/rtc-pm8xxx.c 438 */[];
	const struct pm8xxx_rtc_regs cocci_id/* drivers/rtc/rtc-pm8xxx.c 415 */;
	struct pm8xxx_rtc_regs {
		unsigned int ctrl;
		unsigned int write;
		unsigned int read;
		unsigned int alarm_ctrl;
		unsigned int alarm_ctrl2;
		unsigned int alarm_rw;
		unsigned int alarm_en;
	} cocci_id/* drivers/rtc/rtc-pm8xxx.c 36 */;
	unsigned long cocci_id/* drivers/rtc/rtc-pm8xxx.c 341 */;
	unsigned int cocci_id/* drivers/rtc/rtc-pm8xxx.c 339 */;
	const struct pm8xxx_rtc_regs *cocci_id/* drivers/rtc/rtc-pm8xxx.c 338 */;
	struct pm8xxx_rtc *cocci_id/* drivers/rtc/rtc-pm8xxx.c 337 */;
	irqreturn_t cocci_id/* drivers/rtc/rtc-pm8xxx.c 335 */;
	void *cocci_id/* drivers/rtc/rtc-pm8xxx.c 335 */;
	int cocci_id/* drivers/rtc/rtc-pm8xxx.c 335 */;
	const struct rtc_class_ops cocci_id/* drivers/rtc/rtc-pm8xxx.c 327 */;
	struct device *cocci_id/* drivers/rtc/rtc-pm8xxx.c 297 */;
	u8 cocci_id/* drivers/rtc/rtc-pm8xxx.c 268 */[NUM_8_BIT_RTC_REGS];
	struct rtc_wkalrm *cocci_id/* drivers/rtc/rtc-pm8xxx.c 265 */;
	struct rtc_time *cocci_id/* drivers/rtc/rtc-pm8xxx.c 174 */;
}
