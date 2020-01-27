cocci_test_suite() {
	struct lpc24xx_rtc {
		void __iomem *rtc_base;
		struct rtc_device *rtc;
		struct clk *clk_rtc;
		struct clk *clk_reg;
	} cocci_id/* drivers/rtc/rtc-lpc24xx.c 62 */;
	struct platform_driver cocci_id/* drivers/rtc/rtc-lpc24xx.c 291 */;
	const struct of_device_id cocci_id/* drivers/rtc/rtc-lpc24xx.c 285 */[];
	struct platform_device *cocci_id/* drivers/rtc/rtc-lpc24xx.c 194 */;
	const struct rtc_class_ops cocci_id/* drivers/rtc/rtc-lpc24xx.c 186 */;
	u32 cocci_id/* drivers/rtc/rtc-lpc24xx.c 170 */;
	unsigned long cocci_id/* drivers/rtc/rtc-lpc24xx.c 168 */;
	irqreturn_t cocci_id/* drivers/rtc/rtc-lpc24xx.c 166 */;
	void *cocci_id/* drivers/rtc/rtc-lpc24xx.c 166 */;
	struct lpc24xx_rtc *cocci_id/* drivers/rtc/rtc-lpc24xx.c 156 */;
	struct device *cocci_id/* drivers/rtc/rtc-lpc24xx.c 154 */;
	unsigned int cocci_id/* drivers/rtc/rtc-lpc24xx.c 154 */;
	int cocci_id/* drivers/rtc/rtc-lpc24xx.c 154 */;
	struct rtc_time *cocci_id/* drivers/rtc/rtc-lpc24xx.c 114 */;
	struct rtc_wkalrm *cocci_id/* drivers/rtc/rtc-lpc24xx.c 111 */;
}
