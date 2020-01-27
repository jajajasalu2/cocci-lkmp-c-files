cocci_test_suite() {
	struct rtc_wkalrm cocci_id/* drivers/rtc/rtc-sirfsoc.c 85 */;
	struct rtc_wkalrm *cocci_id/* drivers/rtc/rtc-sirfsoc.c 73 */;
	void cocci_id/* drivers/rtc/rtc-sirfsoc.c 66 */;
	u32 cocci_id/* drivers/rtc/rtc-sirfsoc.c 58 */;
	struct platform_driver cocci_id/* drivers/rtc/rtc-sirfsoc.c 439 */;
	struct sirfsoc_rtc_drv {
		struct rtc_device *rtc;
		u32 rtc_base;
		u32 irq;
		unsigned irq_wake;
		u32 overflow_rtc;
		spinlock_t lock;
		struct regmap *regmap;
#ifdef CONFIG_PM
		u32 saved_counter;
		u32 saved_overflow_rtc;
#endif
	} cocci_id/* drivers/rtc/rtc-sirfsoc.c 43 */;
	struct sirfsoc_rtc_drv cocci_id/* drivers/rtc/rtc-sirfsoc.c 297 */;
	struct device_node *cocci_id/* drivers/rtc/rtc-sirfsoc.c 294 */;
	struct platform_device *cocci_id/* drivers/rtc/rtc-sirfsoc.c 289 */;
	const struct regmap_config cocci_id/* drivers/rtc/rtc-sirfsoc.c 281 */;
	const struct of_device_id cocci_id/* drivers/rtc/rtc-sirfsoc.c 276 */[];
	irqreturn_t cocci_id/* drivers/rtc/rtc-sirfsoc.c 238 */;
	void *cocci_id/* drivers/rtc/rtc-sirfsoc.c 238 */;
	const struct rtc_class_ops cocci_id/* drivers/rtc/rtc-sirfsoc.c 230 */;
	struct sirfsoc_rtc_drv *cocci_id/* drivers/rtc/rtc-sirfsoc.c 210 */;
	unsigned long cocci_id/* drivers/rtc/rtc-sirfsoc.c 209 */;
	unsigned int cocci_id/* drivers/rtc/rtc-sirfsoc.c 207 */;
	struct device *cocci_id/* drivers/rtc/rtc-sirfsoc.c 206 */;
	int cocci_id/* drivers/rtc/rtc-sirfsoc.c 206 */;
	struct rtc_time *cocci_id/* drivers/rtc/rtc-sirfsoc.c 169 */;
}
