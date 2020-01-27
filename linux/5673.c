cocci_test_suite() {
	size_t cocci_id/* drivers/rtc/rtc-jz4740.c 69 */;
	struct device *cocci_id/* drivers/rtc/rtc-jz4740.c 67 */;
	struct jz4740_rtc {
		void __iomem *base;
		enum jz4740_rtc_type type;
		struct rtc_device *rtc;
		struct clk *clk;
		int irq;
		spinlock_t lock;
		unsigned int min_wakeup_pin_assert_time;
		unsigned int reset_pin_assert_time;
	} cocci_id/* drivers/rtc/rtc-jz4740.c 52 */;
	enum jz4740_rtc_type{ID_JZ4740, ID_JZ4780,} cocci_id/* drivers/rtc/rtc-jz4740.c 47 */;
	struct platform_driver cocci_id/* drivers/rtc/rtc-jz4740.c 402 */;
	const struct platform_device_id cocci_id/* drivers/rtc/rtc-jz4740.c 395 */[];
	enum jz4740_rtc_type cocci_id/* drivers/rtc/rtc-jz4740.c 320 */;
	struct device_node *cocci_id/* drivers/rtc/rtc-jz4740.c 313 */;
	const struct of_device_id *cocci_id/* drivers/rtc/rtc-jz4740.c 311 */;
	const struct platform_device_id *cocci_id/* drivers/rtc/rtc-jz4740.c 310 */;
	struct platform_device *cocci_id/* drivers/rtc/rtc-jz4740.c 306 */;
	const struct of_device_id cocci_id/* drivers/rtc/rtc-jz4740.c 299 */[];
	void cocci_id/* drivers/rtc/rtc-jz4740.c 259 */;
	irqreturn_t cocci_id/* drivers/rtc/rtc-jz4740.c 232 */;
	void *cocci_id/* drivers/rtc/rtc-jz4740.c 232 */;
	const struct rtc_class_ops cocci_id/* drivers/rtc/rtc-jz4740.c 224 */;
	struct jz4740_rtc *cocci_id/* drivers/rtc/rtc-jz4740.c 220 */;
	unsigned int cocci_id/* drivers/rtc/rtc-jz4740.c 218 */;
	int cocci_id/* drivers/rtc/rtc-jz4740.c 218 */;
	struct rtc_wkalrm *cocci_id/* drivers/rtc/rtc-jz4740.c 186 */;
	struct rtc_time *cocci_id/* drivers/rtc/rtc-jz4740.c 145 */;
	unsigned long cocci_id/* drivers/rtc/rtc-jz4740.c 123 */;
	bool cocci_id/* drivers/rtc/rtc-jz4740.c 120 */;
	uint32_t cocci_id/* drivers/rtc/rtc-jz4740.c 119 */;
}
