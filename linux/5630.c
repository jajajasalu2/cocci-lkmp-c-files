cocci_test_suite() {
	struct pxa_rtc {
		struct sa1100_rtc sa1100_rtc;
		struct resource *ress;
		void __iomem *base;
		struct rtc_device *rtc;
		spinlock_t lock;
	} cocci_id/* drivers/rtc/rtc-pxa.c 76 */;
	struct platform_driver cocci_id/* drivers/rtc/rtc-pxa.c 405 */;
	const struct of_device_id cocci_id/* drivers/rtc/rtc-pxa.c 376 */[];
	int __exit cocci_id/* drivers/rtc/rtc-pxa.c 367 */;
	struct sa1100_rtc *cocci_id/* drivers/rtc/rtc-pxa.c 309 */;
	struct platform_device *cocci_id/* drivers/rtc/rtc-pxa.c 305 */;
	int __init cocci_id/* drivers/rtc/rtc-pxa.c 305 */;
	const struct rtc_class_ops cocci_id/* drivers/rtc/rtc-pxa.c 296 */;
	struct seq_file *cocci_id/* drivers/rtc/rtc-pxa.c 282 */;
	struct rtc_wkalrm *cocci_id/* drivers/rtc/rtc-pxa.c 245 */;
	struct rtc_time *cocci_id/* drivers/rtc/rtc-pxa.c 223 */;
	struct pxa_rtc *cocci_id/* drivers/rtc/rtc-pxa.c 210 */;
	struct device *cocci_id/* drivers/rtc/rtc-pxa.c 208 */;
	unsigned int cocci_id/* drivers/rtc/rtc-pxa.c 208 */;
	int cocci_id/* drivers/rtc/rtc-pxa.c 208 */;
	void cocci_id/* drivers/rtc/rtc-pxa.c 196 */;
	unsigned long cocci_id/* drivers/rtc/rtc-pxa.c 136 */;
	u32 cocci_id/* drivers/rtc/rtc-pxa.c 135 */;
	irqreturn_t cocci_id/* drivers/rtc/rtc-pxa.c 132 */;
	void *cocci_id/* drivers/rtc/rtc-pxa.c 132 */;
}
