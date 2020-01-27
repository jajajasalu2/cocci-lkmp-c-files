cocci_test_suite() {
	struct rtc_wkalrm *cocci_id/* drivers/rtc/rtc-lpc32xx.c 87 */;
	unsigned long cocci_id/* drivers/rtc/rtc-lpc32xx.c 57 */;
	struct rtc_time *cocci_id/* drivers/rtc/rtc-lpc32xx.c 55 */;
	struct lpc32xx_rtc {
		void __iomem *rtc_base;
		int irq;
		unsigned char alarm_enabled;
		struct rtc_device *rtc;
		spinlock_t lock;
	} cocci_id/* drivers/rtc/rtc-lpc32xx.c 47 */;
	struct platform_driver cocci_id/* drivers/rtc/rtc-lpc32xx.c 346 */;
	const struct of_device_id cocci_id/* drivers/rtc/rtc-lpc32xx.c 339 */[];
	const struct dev_pm_ops cocci_id/* drivers/rtc/rtc-lpc32xx.c 325 */;
	struct platform_device *cocci_id/* drivers/rtc/rtc-lpc32xx.c 186 */;
	const struct rtc_class_ops cocci_id/* drivers/rtc/rtc-lpc32xx.c 178 */;
	struct lpc32xx_rtc *cocci_id/* drivers/rtc/rtc-lpc32xx.c 154 */;
	irqreturn_t cocci_id/* drivers/rtc/rtc-lpc32xx.c 152 */;
	void *cocci_id/* drivers/rtc/rtc-lpc32xx.c 152 */;
	int cocci_id/* drivers/rtc/rtc-lpc32xx.c 152 */;
	u32 cocci_id/* drivers/rtc/rtc-lpc32xx.c 133 */;
	unsigned int cocci_id/* drivers/rtc/rtc-lpc32xx.c 130 */;
	struct device *cocci_id/* drivers/rtc/rtc-lpc32xx.c 129 */;
}
