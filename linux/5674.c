cocci_test_suite() {
	irqreturn_t cocci_id/* drivers/rtc/rtc-pic32.c 85 */;
	void *cocci_id/* drivers/rtc/rtc-pic32.c 85 */;
	int cocci_id/* drivers/rtc/rtc-pic32.c 85 */;
	unsigned long cocci_id/* drivers/rtc/rtc-pic32.c 68 */;
	bool cocci_id/* drivers/rtc/rtc-pic32.c 66 */;
	struct pic32_rtc_dev *cocci_id/* drivers/rtc/rtc-pic32.c 65 */;
	void cocci_id/* drivers/rtc/rtc-pic32.c 65 */;
	struct pic32_rtc_dev {
		struct rtc_device *rtc;
		void __iomem *reg_base;
		struct clk *clk;
		spinlock_t alarm_lock;
		int alarm_irq;
		bool alarm_clk_enabled;
	} cocci_id/* drivers/rtc/rtc-pic32.c 56 */;
	struct platform_driver cocci_id/* drivers/rtc/rtc-pic32.c 374 */;
	const struct of_device_id cocci_id/* drivers/rtc/rtc-pic32.c 368 */[];
	struct platform_device *cocci_id/* drivers/rtc/rtc-pic32.c 298 */;
	void __iomem *cocci_id/* drivers/rtc/rtc-pic32.c 267 */;
	const struct rtc_class_ops cocci_id/* drivers/rtc/rtc-pic32.c 256 */;
	struct seq_file *cocci_id/* drivers/rtc/rtc-pic32.c 240 */;
	unsigned int cocci_id/* drivers/rtc/rtc-pic32.c 195 */;
	struct rtc_time *cocci_id/* drivers/rtc/rtc-pic32.c 193 */;
	struct rtc_wkalrm *cocci_id/* drivers/rtc/rtc-pic32.c 190 */;
	struct device *cocci_id/* drivers/rtc/rtc-pic32.c 190 */;
}
