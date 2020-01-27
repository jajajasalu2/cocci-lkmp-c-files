cocci_test_suite() {
	enum{MTK_YEA, MTK_MON, MTK_DOM, MTK_DOW, MTK_HOU, MTK_MIN, MTK_SEC,} cocci_id/* drivers/rtc/rtc-mt7622.c 91 */;
	enum{MTK_TC, MTK_AL,} cocci_id/* drivers/rtc/rtc-mt7622.c 85 */;
	struct platform_driver cocci_id/* drivers/rtc/rtc-mt7622.c 397 */;
	struct platform_device *cocci_id/* drivers/rtc/rtc-mt7622.c 303 */;
	const struct of_device_id cocci_id/* drivers/rtc/rtc-mt7622.c 296 */[];
	const struct rtc_class_ops cocci_id/* drivers/rtc/rtc-mt7622.c 289 */;
	struct rtc_wkalrm *cocci_id/* drivers/rtc/rtc-mt7622.c 247 */;
	struct device *cocci_id/* drivers/rtc/rtc-mt7622.c 247 */;
	irqreturn_t cocci_id/* drivers/rtc/rtc-mt7622.c 201 */;
	void *cocci_id/* drivers/rtc/rtc-mt7622.c 201 */;
	int cocci_id/* drivers/rtc/rtc-mt7622.c 201 */;
	struct rtc_time *cocci_id/* drivers/rtc/rtc-mt7622.c 152 */;
	u32 cocci_id/* drivers/rtc/rtc-mt7622.c 133 */;
	struct mtk_rtc *cocci_id/* drivers/rtc/rtc-mt7622.c 133 */;
	void cocci_id/* drivers/rtc/rtc-mt7622.c 133 */;
	struct mtk_rtc {
		struct rtc_device *rtc;
		void __iomem *base;
		int irq;
		struct clk *clk;
	} cocci_id/* drivers/rtc/rtc-mt7622.c 101 */;
}
