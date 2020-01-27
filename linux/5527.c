cocci_test_suite() {
	struct rtc_time *cocci_id/* drivers/rtc/rtc-coh901331.c 77 */;
	irqreturn_t cocci_id/* drivers/rtc/rtc-coh901331.c 54 */;
	void *cocci_id/* drivers/rtc/rtc-coh901331.c 54 */;
	struct coh901331_port {
		struct rtc_device *rtc;
		struct clk *clk;
		void __iomem *virtbase;
		int irq;
#ifdef CONFIG_PM_SLEEP
		u32 irqmaskstore;
#endif
	} cocci_id/* drivers/rtc/rtc-coh901331.c 44 */;
	struct platform_driver cocci_id/* drivers/rtc/rtc-coh901331.c 276 */;
	const struct of_device_id cocci_id/* drivers/rtc/rtc-coh901331.c 270 */[];
	void cocci_id/* drivers/rtc/rtc-coh901331.c 261 */;
	struct coh901331_port cocci_id/* drivers/rtc/rtc-coh901331.c 169 */;
	struct platform_device *cocci_id/* drivers/rtc/rtc-coh901331.c 163 */;
	int __init cocci_id/* drivers/rtc/rtc-coh901331.c 163 */;
	int __exit cocci_id/* drivers/rtc/rtc-coh901331.c 152 */;
	const struct rtc_class_ops cocci_id/* drivers/rtc/rtc-coh901331.c 144 */;
	struct coh901331_port *cocci_id/* drivers/rtc/rtc-coh901331.c 132 */;
	struct device *cocci_id/* drivers/rtc/rtc-coh901331.c 130 */;
	unsigned int cocci_id/* drivers/rtc/rtc-coh901331.c 130 */;
	int cocci_id/* drivers/rtc/rtc-coh901331.c 130 */;
	unsigned long cocci_id/* drivers/rtc/rtc-coh901331.c 120 */;
	struct rtc_wkalrm *cocci_id/* drivers/rtc/rtc-coh901331.c 104 */;
}
