cocci_test_suite() {
	struct sh_rtc {
		void __iomem *regbase;
		unsigned long regsize;
		struct resource *res;
		int alarm_irq;
		int periodic_irq;
		int carry_irq;
		struct clk *clk;
		struct rtc_device *rtc_dev;
		spinlock_t lock;
		unsigned long capabilities;
		unsigned short periodic_freq;
	} cocci_id/* drivers/rtc/rtc-sh.c 96 */;
	struct platform_driver cocci_id/* drivers/rtc/rtc-sh.c 672 */;
	const struct of_device_id cocci_id/* drivers/rtc/rtc-sh.c 666 */[];
	int __maybe_unused cocci_id/* drivers/rtc/rtc-sh.c 656 */;
	void cocci_id/* drivers/rtc/rtc-sh.c 636 */;
	int __exit cocci_id/* drivers/rtc/rtc-sh.c 624 */;
	struct sh_rtc_platform_info *cocci_id/* drivers/rtc/rtc-sh.c 543 */;
	char cocci_id/* drivers/rtc/rtc-sh.c 472 */[6];
	struct resource *cocci_id/* drivers/rtc/rtc-sh.c 471 */;
	struct platform_device *cocci_id/* drivers/rtc/rtc-sh.c 468 */;
	int __init cocci_id/* drivers/rtc/rtc-sh.c 468 */;
	const struct rtc_class_ops cocci_id/* drivers/rtc/rtc-sh.c 459 */;
	struct rtc_time *cocci_id/* drivers/rtc/rtc-sh.c 394 */;
	struct rtc_wkalrm *cocci_id/* drivers/rtc/rtc-sh.c 391 */;
	struct device *cocci_id/* drivers/rtc/rtc-sh.c 268 */;
	struct seq_file *cocci_id/* drivers/rtc/rtc-sh.c 234 */;
	irqreturn_t cocci_id/* drivers/rtc/rtc-sh.c 177 */;
	void *cocci_id/* drivers/rtc/rtc-sh.c 177 */;
	unsigned int cocci_id/* drivers/rtc/rtc-sh.c 128 */;
	struct sh_rtc *cocci_id/* drivers/rtc/rtc-sh.c 126 */;
	int cocci_id/* drivers/rtc/rtc-sh.c 126 */;
}
