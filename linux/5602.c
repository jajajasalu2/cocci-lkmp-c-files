cocci_test_suite() {
	struct sam9_rtc {
		void __iomem *rtt;
		struct rtc_device *rtcdev;
		u32 imr;
		struct regmap *gpbr;
		unsigned int gpbr_offset;
		int irq;
		struct clk *sclk;
		bool suspended;
		unsigned long events;
		spinlock_t lock;
	} cocci_id/* drivers/rtc/rtc-at91sam9.c 68 */;
	struct platform_driver cocci_id/* drivers/rtc/rtc-at91sam9.c 532 */;
	const struct of_device_id cocci_id/* drivers/rtc/rtc-at91sam9.c 526 */[];
	unsigned long cocci_id/* drivers/rtc/rtc-at91sam9.c 506 */;
	struct of_phandle_args cocci_id/* drivers/rtc/rtc-at91sam9.c 341 */;
	struct platform_device *cocci_id/* drivers/rtc/rtc-at91sam9.c 335 */;
	const struct rtc_class_ops cocci_id/* drivers/rtc/rtc-at91sam9.c 323 */;
	void *cocci_id/* drivers/rtc/rtc-at91sam9.c 297 */;
	void cocci_id/* drivers/rtc/rtc-at91sam9.c 282 */;
	irqreturn_t cocci_id/* drivers/rtc/rtc-at91sam9.c 259 */;
	struct seq_file *cocci_id/* drivers/rtc/rtc-at91sam9.c 249 */;
	u32 cocci_id/* drivers/rtc/rtc-at91sam9.c 236 */;
	struct sam9_rtc *cocci_id/* drivers/rtc/rtc-at91sam9.c 235 */;
	struct device *cocci_id/* drivers/rtc/rtc-at91sam9.c 233 */;
	unsigned int cocci_id/* drivers/rtc/rtc-at91sam9.c 233 */;
	int cocci_id/* drivers/rtc/rtc-at91sam9.c 233 */;
	struct rtc_time *cocci_id/* drivers/rtc/rtc-at91sam9.c 178 */;
	struct rtc_wkalrm *cocci_id/* drivers/rtc/rtc-at91sam9.c 175 */;
}
