cocci_test_suite() {
	struct sbsa_gwdt {
		struct watchdog_device wdd;
		u32 clk;
		void __iomem *refresh_base;
		void __iomem *control_base;
	} cocci_id/* drivers/watchdog/sbsa_gwdt.c 83 */;
	struct platform_driver cocci_id/* drivers/watchdog/sbsa_gwdt.c 354 */;
	const struct platform_device_id cocci_id/* drivers/watchdog/sbsa_gwdt.c 348 */[];
	const struct of_device_id cocci_id/* drivers/watchdog/sbsa_gwdt.c 342 */[];
	const struct dev_pm_ops cocci_id/* drivers/watchdog/sbsa_gwdt.c 338 */;
	int __maybe_unused cocci_id/* drivers/watchdog/sbsa_gwdt.c 328 */;
	u32 cocci_id/* drivers/watchdog/sbsa_gwdt.c 226 */;
	struct device *cocci_id/* drivers/watchdog/sbsa_gwdt.c 222 */;
	void __iomem *cocci_id/* drivers/watchdog/sbsa_gwdt.c 221 */;
	struct platform_device *cocci_id/* drivers/watchdog/sbsa_gwdt.c 219 */;
	const struct watchdog_ops cocci_id/* drivers/watchdog/sbsa_gwdt.c 210 */;
	const struct watchdog_info cocci_id/* drivers/watchdog/sbsa_gwdt.c 202 */;
	irqreturn_t cocci_id/* drivers/watchdog/sbsa_gwdt.c 195 */;
	void *cocci_id/* drivers/watchdog/sbsa_gwdt.c 195 */;
	u64 cocci_id/* drivers/watchdog/sbsa_gwdt.c 143 */;
	struct sbsa_gwdt *cocci_id/* drivers/watchdog/sbsa_gwdt.c 142 */;
	struct watchdog_device *cocci_id/* drivers/watchdog/sbsa_gwdt.c 140 */;
	unsigned int cocci_id/* drivers/watchdog/sbsa_gwdt.c 140 */;
	bool cocci_id/* drivers/watchdog/sbsa_gwdt.c 109 */;
	int cocci_id/* drivers/watchdog/sbsa_gwdt.c 104 */;
}
