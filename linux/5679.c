cocci_test_suite() {
	unsigned long long cocci_id/* drivers/rtc/rtc-st-lpc.c 83 */;
	struct rtc_time *cocci_id/* drivers/rtc/rtc-st-lpc.c 79 */;
	irqreturn_t cocci_id/* drivers/rtc/rtc-st-lpc.c 70 */;
	void *cocci_id/* drivers/rtc/rtc-st-lpc.c 70 */;
	void cocci_id/* drivers/rtc/rtc-st-lpc.c 52 */;
	struct st_rtc {
		struct rtc_device *rtc_dev;
		struct rtc_wkalrm alarm;
		struct clk *clk;
		unsigned long clkrate;
		void __iomem *ioaddr;
		bool irq_enabled:1;
		spinlock_t lock;
		short irq;
	} cocci_id/* drivers/rtc/rtc-st-lpc.c 41 */;
	struct platform_driver cocci_id/* drivers/rtc/rtc-st-lpc.c 307 */;
	const struct of_device_id cocci_id/* drivers/rtc/rtc-st-lpc.c 301 */[];
	struct st_rtc cocci_id/* drivers/rtc/rtc-st-lpc.c 201 */;
	uint32_t cocci_id/* drivers/rtc/rtc-st-lpc.c 188 */;
	struct device_node *cocci_id/* drivers/rtc/rtc-st-lpc.c 186 */;
	struct platform_device *cocci_id/* drivers/rtc/rtc-st-lpc.c 184 */;
	struct rtc_class_ops cocci_id/* drivers/rtc/rtc-st-lpc.c 176 */;
	struct rtc_time cocci_id/* drivers/rtc/rtc-st-lpc.c 155 */;
	struct st_rtc *cocci_id/* drivers/rtc/rtc-st-lpc.c 139 */;
	struct device *cocci_id/* drivers/rtc/rtc-st-lpc.c 137 */;
	unsigned int cocci_id/* drivers/rtc/rtc-st-lpc.c 137 */;
	int cocci_id/* drivers/rtc/rtc-st-lpc.c 137 */;
	struct rtc_wkalrm cocci_id/* drivers/rtc/rtc-st-lpc.c 130 */;
	unsigned long cocci_id/* drivers/rtc/rtc-st-lpc.c 126 */;
	struct rtc_wkalrm *cocci_id/* drivers/rtc/rtc-st-lpc.c 123 */;
}
