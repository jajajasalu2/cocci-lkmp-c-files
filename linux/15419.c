cocci_test_suite() {
	irqreturn_t cocci_id/* drivers/watchdog/qcom-wdt.c 71 */;
	struct watchdog_device *cocci_id/* drivers/watchdog/qcom-wdt.c 61 */;
	int cocci_id/* drivers/watchdog/qcom-wdt.c 61 */;
	struct qcom_wdt cocci_id/* drivers/watchdog/qcom-wdt.c 58 */;
	enum wdt_reg cocci_id/* drivers/watchdog/qcom-wdt.c 50 */;
	void __iomem *cocci_id/* drivers/watchdog/qcom-wdt.c 50 */;
	struct qcom_wdt {
		struct watchdog_device wdd;
		unsigned long rate;
		void __iomem *base;
		const u32 *layout;
	} cocci_id/* drivers/watchdog/qcom-wdt.c 43 */;
	struct platform_driver cocci_id/* drivers/watchdog/qcom-wdt.c 321 */;
	const struct of_device_id cocci_id/* drivers/watchdog/qcom-wdt.c 313 */[];
	int __maybe_unused cocci_id/* drivers/watchdog/qcom-wdt.c 301 */;
	const u32 cocci_id/* drivers/watchdog/qcom-wdt.c 27 */[];
	struct clk *cocci_id/* drivers/watchdog/qcom-wdt.c 191 */;
	u32 cocci_id/* drivers/watchdog/qcom-wdt.c 189 */;
	const u32 *cocci_id/* drivers/watchdog/qcom-wdt.c 188 */;
	struct device_node *cocci_id/* drivers/watchdog/qcom-wdt.c 187 */;
	struct resource *cocci_id/* drivers/watchdog/qcom-wdt.c 186 */;
	struct device *cocci_id/* drivers/watchdog/qcom-wdt.c 184 */;
	struct platform_device *cocci_id/* drivers/watchdog/qcom-wdt.c 182 */;
	void *cocci_id/* drivers/watchdog/qcom-wdt.c 177 */;
	void cocci_id/* drivers/watchdog/qcom-wdt.c 177 */;
	const struct watchdog_info cocci_id/* drivers/watchdog/qcom-wdt.c 160 */;
	enum wdt_reg{WDT_RST, WDT_EN, WDT_STS, WDT_BARK_TIME, WDT_BITE_TIME,} cocci_id/* drivers/watchdog/qcom-wdt.c 16 */;
	const struct watchdog_ops cocci_id/* drivers/watchdog/qcom-wdt.c 150 */;
	unsigned long cocci_id/* drivers/watchdog/qcom-wdt.c 123 */;
	unsigned int cocci_id/* drivers/watchdog/qcom-wdt.c 117 */;
	struct qcom_wdt *cocci_id/* drivers/watchdog/qcom-wdt.c 103 */;
}
