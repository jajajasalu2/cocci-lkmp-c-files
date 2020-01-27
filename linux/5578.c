cocci_test_suite() {
	struct tegra_rtc_info {
		struct platform_device *pdev;
		struct rtc_device *rtc;
		void __iomem *base;
		struct clk *clk;
		int irq;
		spinlock_t lock;
	} cocci_id/* drivers/rtc/rtc-tegra.c 48 */;
	struct platform_driver cocci_id/* drivers/rtc/rtc-tegra.c 402 */;
	void cocci_id/* drivers/rtc/rtc-tegra.c 396 */;
	struct platform_device *cocci_id/* drivers/rtc/rtc-tegra.c 277 */;
	const struct of_device_id cocci_id/* drivers/rtc/rtc-tegra.c 271 */[];
	const struct rtc_class_ops cocci_id/* drivers/rtc/rtc-tegra.c 262 */;
	irqreturn_t cocci_id/* drivers/rtc/rtc-tegra.c 231 */;
	void *cocci_id/* drivers/rtc/rtc-tegra.c 231 */;
	struct seq_file *cocci_id/* drivers/rtc/rtc-tegra.c 221 */;
	u32 cocci_id/* drivers/rtc/rtc-tegra.c 174 */;
	unsigned long cocci_id/* drivers/rtc/rtc-tegra.c 173 */;
	struct tegra_rtc_info *cocci_id/* drivers/rtc/rtc-tegra.c 172 */;
	struct device *cocci_id/* drivers/rtc/rtc-tegra.c 170 */;
	unsigned int cocci_id/* drivers/rtc/rtc-tegra.c 170 */;
	int cocci_id/* drivers/rtc/rtc-tegra.c 170 */;
	struct rtc_wkalrm *cocci_id/* drivers/rtc/rtc-tegra.c 148 */;
	struct rtc_time *cocci_id/* drivers/rtc/rtc-tegra.c 102 */;
}
