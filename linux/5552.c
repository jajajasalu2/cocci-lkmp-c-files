cocci_test_suite() {
	struct platform_driver cocci_id/* drivers/rtc/rtc-sunxi.c 476 */;
	struct platform_device *cocci_id/* drivers/rtc/rtc-sunxi.c 422 */;
	const struct of_device_id cocci_id/* drivers/rtc/rtc-sunxi.c 415 */[];
	const struct rtc_class_ops cocci_id/* drivers/rtc/rtc-sunxi.c 407 */;
	struct sunxi_rtc_dev *cocci_id/* drivers/rtc/rtc-sunxi.c 399 */;
	struct device *cocci_id/* drivers/rtc/rtc-sunxi.c 397 */;
	unsigned int cocci_id/* drivers/rtc/rtc-sunxi.c 397 */;
	int cocci_id/* drivers/rtc/rtc-sunxi.c 397 */;
	const unsigned long cocci_id/* drivers/rtc/rtc-sunxi.c 313 */;
	unsigned long cocci_id/* drivers/rtc/rtc-sunxi.c 261 */;
	time64_t cocci_id/* drivers/rtc/rtc-sunxi.c 260 */;
	struct rtc_time cocci_id/* drivers/rtc/rtc-sunxi.c 258 */;
	struct rtc_time *cocci_id/* drivers/rtc/rtc-sunxi.c 188 */;
	struct rtc_wkalrm *cocci_id/* drivers/rtc/rtc-sunxi.c 185 */;
	void cocci_id/* drivers/rtc/rtc-sunxi.c 165 */;
	u32 cocci_id/* drivers/rtc/rtc-sunxi.c 149 */;
	irqreturn_t cocci_id/* drivers/rtc/rtc-sunxi.c 146 */;
	void *cocci_id/* drivers/rtc/rtc-sunxi.c 146 */;
	struct sunxi_rtc_dev {
		struct rtc_device *rtc;
		struct device *dev;
		const struct sunxi_rtc_data_year *data_year;
		void __iomem *base;
		int irq;
	} cocci_id/* drivers/rtc/rtc-sunxi.c 138 */;
	const struct sunxi_rtc_data_year cocci_id/* drivers/rtc/rtc-sunxi.c 123 */[];
	struct sunxi_rtc_data_year {
		unsigned int min;
		unsigned int max;
		unsigned int mask;
		unsigned char leap_shift;
	} cocci_id/* drivers/rtc/rtc-sunxi.c 116 */;
}
