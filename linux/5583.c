cocci_test_suite() {
	struct spear_rtc_config {
		struct rtc_device *rtc;
		struct clk *clk;
		spinlock_t lock;
		void __iomem *ioaddr;
		unsigned int irq_wake;
	} cocci_id/* drivers/rtc/rtc-spear.c 80 */;
	struct platform_driver cocci_id/* drivers/rtc/rtc-spear.c 478 */;
	const struct of_device_id cocci_id/* drivers/rtc/rtc-spear.c 471 */[];
	struct platform_device *cocci_id/* drivers/rtc/rtc-spear.c 348 */;
	const struct rtc_class_ops cocci_id/* drivers/rtc/rtc-spear.c 340 */;
	struct device *cocci_id/* drivers/rtc/rtc-spear.c 316 */;
	unsigned int cocci_id/* drivers/rtc/rtc-spear.c 316 */;
	struct rtc_wkalrm *cocci_id/* drivers/rtc/rtc-spear.c 257 */;
	struct rtc_time *cocci_id/* drivers/rtc/rtc-spear.c 183 */;
	void cocci_id/* drivers/rtc/rtc-spear.c 183 */;
	irqreturn_t cocci_id/* drivers/rtc/rtc-spear.c 153 */;
	void *cocci_id/* drivers/rtc/rtc-spear.c 153 */;
	unsigned long cocci_id/* drivers/rtc/rtc-spear.c 126 */;
	struct spear_rtc_config *cocci_id/* drivers/rtc/rtc-spear.c 123 */;
	int cocci_id/* drivers/rtc/rtc-spear.c 123 */;
}
