cocci_test_suite() {
	struct ac100_rtc_dev {
		struct rtc_device *rtc;
		struct device *dev;
		struct regmap *regmap;
		int irq;
		unsigned long alarm;
		struct clk_hw *rtc_32k_clk;
		struct ac100_clkout clks[AC100_CLKOUT_NUM];
		struct clk_hw_onecell_data *clk_data;
	} cocci_id/* drivers/rtc/rtc-ac100.c 90 */;
	const char *const cocci_id/* drivers/rtc/rtc-ac100.c 84 */[AC100_CLKOUT_NUM];
	struct ac100_clkout cocci_id/* drivers/rtc/rtc-ac100.c 78 */;
	struct ac100_clkout {
		struct clk_hw hw;
		struct regmap *regmap;
		u8 offset;
	} cocci_id/* drivers/rtc/rtc-ac100.c 72 */;
	struct platform_driver cocci_id/* drivers/rtc/rtc-ac100.c 631 */;
	const struct of_device_id cocci_id/* drivers/rtc/rtc-ac100.c 625 */[];
	struct ac100_dev *cocci_id/* drivers/rtc/rtc-ac100.c 568 */;
	struct platform_device *cocci_id/* drivers/rtc/rtc-ac100.c 566 */;
	const struct rtc_class_ops cocci_id/* drivers/rtc/rtc-ac100.c 558 */;
	irqreturn_t cocci_id/* drivers/rtc/rtc-ac100.c 524 */;
	void *cocci_id/* drivers/rtc/rtc-ac100.c 524 */;
	u16 cocci_id/* drivers/rtc/rtc-ac100.c 487 */[8];
	u16 cocci_id/* drivers/rtc/rtc-ac100.c 456 */[7];
	struct rtc_time *cocci_id/* drivers/rtc/rtc-ac100.c 455 */;
	struct rtc_wkalrm *cocci_id/* drivers/rtc/rtc-ac100.c 451 */;
	struct regmap *cocci_id/* drivers/rtc/rtc-ac100.c 443 */;
	struct ac100_rtc_dev *cocci_id/* drivers/rtc/rtc-ac100.c 442 */;
	struct device *cocci_id/* drivers/rtc/rtc-ac100.c 440 */;
	struct clk_init_data cocci_id/* drivers/rtc/rtc-ac100.c 338 */;
	const char *cocci_id/* drivers/rtc/rtc-ac100.c 309 */[2];
	struct device_node *cocci_id/* drivers/rtc/rtc-ac100.c 308 */;
	const struct clk_ops cocci_id/* drivers/rtc/rtc-ac100.c 295 */;
	unsigned int cocci_id/* drivers/rtc/rtc-ac100.c 279 */;
	struct ac100_clkout *cocci_id/* drivers/rtc/rtc-ac100.c 278 */;
	u8 cocci_id/* drivers/rtc/rtc-ac100.c 276 */;
	void cocci_id/* drivers/rtc/rtc-ac100.c 259 */;
	unsigned long cocci_id/* drivers/rtc/rtc-ac100.c 173 */;
	struct clk_rate_request *cocci_id/* drivers/rtc/rtc-ac100.c 170 */;
	struct clk_hw *cocci_id/* drivers/rtc/rtc-ac100.c 169 */;
	int cocci_id/* drivers/rtc/rtc-ac100.c 169 */;
	long cocci_id/* drivers/rtc/rtc-ac100.c 143 */;
	const struct clk_div_table cocci_id/* drivers/rtc/rtc-ac100.c 106 */[];
}
