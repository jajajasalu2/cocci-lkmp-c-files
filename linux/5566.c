cocci_test_suite() {
	struct xgene_rtc_dev *cocci_id/* drivers/rtc/rtc-xgene.c 78 */;
	u32 cocci_id/* drivers/rtc/rtc-xgene.c 76 */;
	struct device *cocci_id/* drivers/rtc/rtc-xgene.c 76 */;
	int cocci_id/* drivers/rtc/rtc-xgene.c 76 */;
	struct rtc_wkalrm *cocci_id/* drivers/rtc/rtc-xgene.c 65 */;
	struct rtc_time *cocci_id/* drivers/rtc/rtc-xgene.c 43 */;
	struct xgene_rtc_dev {
		struct rtc_device *rtc;
		void __iomem *csr_base;
		struct clk *clk;
		unsigned int irq_wake;
		unsigned int irq_enabled;
	} cocci_id/* drivers/rtc/rtc-xgene.c 35 */;
	struct platform_driver cocci_id/* drivers/rtc/rtc-xgene.c 267 */;
	const struct of_device_id cocci_id/* drivers/rtc/rtc-xgene.c 260 */[];
	int __maybe_unused cocci_id/* drivers/rtc/rtc-xgene.c 231 */;
	struct platform_device *cocci_id/* drivers/rtc/rtc-xgene.c 136 */;
	irqreturn_t cocci_id/* drivers/rtc/rtc-xgene.c 120 */;
	void *cocci_id/* drivers/rtc/rtc-xgene.c 120 */;
	const struct rtc_class_ops cocci_id/* drivers/rtc/rtc-xgene.c 112 */;
}
