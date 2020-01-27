cocci_test_suite() {
	struct platform_driver cocci_id/* drivers/rtc/rtc-max77686.c 830 */;
	struct max77686_rtc_info {
		struct device *dev;
		struct i2c_client *rtc;
		struct rtc_device *rtc_dev;
		struct mutex lock;
		struct regmap *regmap;
		struct regmap *rtc_regmap;
		const struct max77686_rtc_driver_data *drv_data;
		struct regmap_irq_chip_data *rtc_irq_data;
		int rtc_irq;
		int virq;
		int rtc_24hr_mode;
	} cocci_id/* drivers/rtc/rtc-max77686.c 83 */;
	const struct platform_device_id cocci_id/* drivers/rtc/rtc-max77686.c 822 */[];
	const struct max77686_rtc_driver_data *cocci_id/* drivers/rtc/rtc-max77686.c 734 */;
	struct max77686_rtc_info cocci_id/* drivers/rtc/rtc-max77686.c 727 */;
	const struct platform_device_id *cocci_id/* drivers/rtc/rtc-max77686.c 724 */;
	struct platform_device *cocci_id/* drivers/rtc/rtc-max77686.c 673 */;
	struct i2c_client *cocci_id/* drivers/rtc/rtc-max77686.c 669 */;
	struct device *cocci_id/* drivers/rtc/rtc-max77686.c 668 */;
	struct max77686_rtc_info *cocci_id/* drivers/rtc/rtc-max77686.c 666 */;
	int cocci_id/* drivers/rtc/rtc-max77686.c 666 */;
	const struct regmap_config cocci_id/* drivers/rtc/rtc-max77686.c 661 */;
	u8 cocci_id/* drivers/rtc/rtc-max77686.c 640 */[2];
	struct max77686_rtc_driver_data {
		unsigned long delay;
		u8 mask;
		const unsigned int *map;
		bool alarm_enable_reg;
		int rtc_i2c_addr;
		bool rtc_irq_from_platform;
		int alarm_pending_status_reg;
		const struct regmap_irq_chip *rtc_irq_chip;
	} cocci_id/* drivers/rtc/rtc-max77686.c 64 */;
	const struct rtc_class_ops cocci_id/* drivers/rtc/rtc-max77686.c 630 */;
	irqreturn_t cocci_id/* drivers/rtc/rtc-max77686.c 619 */;
	void *cocci_id/* drivers/rtc/rtc-max77686.c 619 */;
	unsigned int cocci_id/* drivers/rtc/rtc-max77686.c 604 */;
	enum{RTC_SEC=0, RTC_MIN, RTC_HOUR, RTC_WEEKDAY, RTC_MONTH, RTC_YEAR, RTC_DATE, RTC_NR_TIME,} cocci_id/* drivers/rtc/rtc-max77686.c 53 */;
	struct rtc_time cocci_id/* drivers/rtc/rtc-max77686.c 519 */;
	const unsigned int *cocci_id/* drivers/rtc/rtc-max77686.c 398 */;
	u8 cocci_id/* drivers/rtc/rtc-max77686.c 396 */[RTC_NR_TIME];
	struct rtc_wkalrm *cocci_id/* drivers/rtc/rtc-max77686.c 393 */;
	unsigned long cocci_id/* drivers/rtc/rtc-max77686.c 318 */;
	enum MAX77686_RTC_OP cocci_id/* drivers/rtc/rtc-max77686.c 314 */;
	u8 cocci_id/* drivers/rtc/rtc-max77686.c 259 */;
	u8 *cocci_id/* drivers/rtc/rtc-max77686.c 256 */;
	struct rtc_time *cocci_id/* drivers/rtc/rtc-max77686.c 256 */;
	void cocci_id/* drivers/rtc/rtc-max77686.c 256 */;
	const struct max77686_rtc_driver_data cocci_id/* drivers/rtc/rtc-max77686.c 196 */;
	const struct regmap_irq_chip cocci_id/* drivers/rtc/rtc-max77686.c 176 */;
	const struct regmap_irq cocci_id/* drivers/rtc/rtc-max77686.c 166 */[];
	const unsigned int cocci_id/* drivers/rtc/rtc-max77686.c 137 */[REG_RTC_END];
	enum max77686_rtc_reg_offset{REG_RTC_CONTROLM=0, REG_RTC_CONTROL, REG_RTC_UPDATE0, REG_WTSR_SMPL_CNTL, REG_RTC_SEC, REG_RTC_MIN, REG_RTC_HOUR, REG_RTC_WEEKDAY, REG_RTC_MONTH, REG_RTC_YEAR, REG_RTC_DATE, REG_ALARM1_SEC, REG_ALARM1_MIN, REG_ALARM1_HOUR, REG_ALARM1_WEEKDAY, REG_ALARM1_MONTH, REG_ALARM1_YEAR, REG_ALARM1_DATE, REG_ALARM2_SEC, REG_ALARM2_MIN, REG_ALARM2_HOUR, REG_ALARM2_WEEKDAY, REG_ALARM2_MONTH, REG_ALARM2_YEAR, REG_ALARM2_DATE, REG_RTC_AE1, REG_RTC_END,} cocci_id/* drivers/rtc/rtc-max77686.c 106 */;
	enum MAX77686_RTC_OP{MAX77686_RTC_WRITE, MAX77686_RTC_READ,} cocci_id/* drivers/rtc/rtc-max77686.c 100 */;
}