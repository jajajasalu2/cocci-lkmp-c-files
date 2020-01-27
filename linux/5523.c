cocci_test_suite() {
	struct platform_driver cocci_id/* drivers/rtc/rtc-imxdi.c 852 */;
	const struct of_device_id cocci_id/* drivers/rtc/rtc-imxdi.c 844 */[];
	int __exit cocci_id/* drivers/rtc/rtc-imxdi.c 829 */;
	struct platform_device *cocci_id/* drivers/rtc/rtc-imxdi.c 741 */;
	int __init cocci_id/* drivers/rtc/rtc-imxdi.c 741 */;
	struct imxdi_dev cocci_id/* drivers/rtc/rtc-imxdi.c 729 */;
	struct work_struct *cocci_id/* drivers/rtc/rtc-imxdi.c 726 */;
	irqreturn_t cocci_id/* drivers/rtc/rtc-imxdi.c 659 */;
	void *cocci_id/* drivers/rtc/rtc-imxdi.c 659 */;
	const struct rtc_class_ops cocci_id/* drivers/rtc/rtc-imxdi.c 648 */;
	struct rtc_wkalrm *cocci_id/* drivers/rtc/rtc-imxdi.c 605 */;
	unsigned int cocci_id/* drivers/rtc/rtc-imxdi.c 589 */;
	struct device *cocci_id/* drivers/rtc/rtc-imxdi.c 588 */;
	struct rtc_time *cocci_id/* drivers/rtc/rtc-imxdi.c 539 */;
	int cocci_id/* drivers/rtc/rtc-imxdi.c 473 */;
	struct imxdi_dev *cocci_id/* drivers/rtc/rtc-imxdi.c 471 */;
	void cocci_id/* drivers/rtc/rtc-imxdi.c 471 */;
	unsigned long cocci_id/* drivers/rtc/rtc-imxdi.c 456 */;
	u32 cocci_id/* drivers/rtc/rtc-imxdi.c 241 */;
	const char *cocci_id/* drivers/rtc/rtc-imxdi.c 235 */;
	unsigned cocci_id/* drivers/rtc/rtc-imxdi.c 171 */;
	const struct imxdi_dev *cocci_id/* drivers/rtc/rtc-imxdi.c 170 */;
	struct imxdi_dev {
		struct platform_device *pdev;
		struct rtc_device *rtc;
		void __iomem *ioaddr;
		struct clk *clk;
		u32 dsr;
		spinlock_t irq_lock;
		wait_queue_head_t write_wait;
		struct mutex write_mutex;
		struct work_struct work;
	} cocci_id/* drivers/rtc/rtc-imxdi.c 108 */;
}
