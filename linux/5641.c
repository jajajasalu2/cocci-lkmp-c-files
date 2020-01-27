cocci_test_suite() {
	struct platform_driver cocci_id/* drivers/rtc/rtc-s5m.c 871 */;
	const struct platform_device_id cocci_id/* drivers/rtc/rtc-s5m.c 862 */[];
	const struct regmap_config *cocci_id/* drivers/rtc/rtc-s5m.c 718 */;
	struct sec_platform_data *cocci_id/* drivers/rtc/rtc-s5m.c 716 */;
	struct sec_pmic_dev *cocci_id/* drivers/rtc/rtc-s5m.c 715 */;
	struct platform_device *cocci_id/* drivers/rtc/rtc-s5m.c 713 */;
	u8 cocci_id/* drivers/rtc/rtc-s5m.c 662 */[2];
	struct s5m_rtc_info *cocci_id/* drivers/rtc/rtc-s5m.c 660 */;
	const struct rtc_class_ops cocci_id/* drivers/rtc/rtc-s5m.c 652 */;
	irqreturn_t cocci_id/* drivers/rtc/rtc-s5m.c 643 */;
	void *cocci_id/* drivers/rtc/rtc-s5m.c 643 */;
	struct device *cocci_id/* drivers/rtc/rtc-s5m.c 632 */;
	struct s5m_rtc_reg_config {
		unsigned int regs_count;
		unsigned int time;
		unsigned int ctrl;
		unsigned int alarm0;
		unsigned int alarm1;
		unsigned int udr_update;
		unsigned int autoclear_udr_mask;
		unsigned int read_time_udr_mask;
		unsigned int write_time_udr_mask;
		unsigned int write_alarm_udr_mask;
	} cocci_id/* drivers/rtc/rtc-s5m.c 60 */;
	struct rtc_time cocci_id/* drivers/rtc/rtc-s5m.c 543 */;
	u8 cocci_id/* drivers/rtc/rtc-s5m.c 542 */;
	u8 cocci_id/* drivers/rtc/rtc-s5m.c 452 */[RTC_MAX_NUM_TIME_REGS];
	u8 *cocci_id/* drivers/rtc/rtc-s5m.c 338 */;
	struct rtc_time *cocci_id/* drivers/rtc/rtc-s5m.c 338 */;
	void cocci_id/* drivers/rtc/rtc-s5m.c 338 */;
	enum{RTC_SEC=0, RTC_MIN, RTC_HOUR, RTC_WEEKDAY, RTC_DATE, RTC_MONTH, RTC_YEAR1, RTC_YEAR2, RTC_MAX_NUM_TIME_REGS,} cocci_id/* drivers/rtc/rtc-s5m.c 31 */;
	unsigned int cocci_id/* drivers/rtc/rtc-s5m.c 297 */;
	struct rtc_wkalrm *cocci_id/* drivers/rtc/rtc-s5m.c 238 */;
	int cocci_id/* drivers/rtc/rtc-s5m.c 174 */;
	const struct regmap_config cocci_id/* drivers/rtc/rtc-s5m.c 166 */;
	struct s5m_rtc_info {
		struct device *dev;
		struct i2c_client *i2c;
		struct sec_pmic_dev *s5m87xx;
		struct regmap *regmap;
		struct rtc_device *rtc_dev;
		int irq;
		enum sec_device_type device_type;
		int rtc_24hr_mode;
		const struct s5m_rtc_reg_config *regs;
	} cocci_id/* drivers/rtc/rtc-s5m.c 147 */;
	const struct s5m_rtc_reg_config cocci_id/* drivers/rtc/rtc-s5m.c 103 */;
}
