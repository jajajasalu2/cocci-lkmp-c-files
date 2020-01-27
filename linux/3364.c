cocci_test_suite() {
	unsigned long long cocci_id/* drivers/pwm/pwm-tegra.c 70 */;
	struct pwm_device *cocci_id/* drivers/pwm/pwm-tegra.c 66 */;
	struct pwm_chip *cocci_id/* drivers/pwm/pwm-tegra.c 66 */;
	int cocci_id/* drivers/pwm/pwm-tegra.c 66 */;
	unsigned long cocci_id/* drivers/pwm/pwm-tegra.c 61 */;
	void cocci_id/* drivers/pwm/pwm-tegra.c 60 */;
	u32 cocci_id/* drivers/pwm/pwm-tegra.c 55 */;
	struct tegra_pwm_chip *cocci_id/* drivers/pwm/pwm-tegra.c 55 */;
	unsigned int cocci_id/* drivers/pwm/pwm-tegra.c 55 */;
	struct tegra_pwm_chip cocci_id/* drivers/pwm/pwm-tegra.c 52 */;
	struct tegra_pwm_chip {
		struct pwm_chip chip;
		struct device *dev;
		struct clk *clk;
		struct reset_control *rst;
		unsigned long clk_rate;
		void __iomem *regs;
		const struct tegra_pwm_soc *soc;
	} cocci_id/* drivers/pwm/pwm-tegra.c 36 */;
	struct platform_driver cocci_id/* drivers/pwm/pwm-tegra.c 296 */;
	const struct dev_pm_ops cocci_id/* drivers/pwm/pwm-tegra.c 292 */;
	struct tegra_pwm_soc {
		unsigned int num_channels;
		unsigned long max_frequency;
	} cocci_id/* drivers/pwm/pwm-tegra.c 29 */;
	const struct of_device_id cocci_id/* drivers/pwm/pwm-tegra.c 285 */[];
	const struct tegra_pwm_soc cocci_id/* drivers/pwm/pwm-tegra.c 280 */;
	struct device *cocci_id/* drivers/pwm/pwm-tegra.c 269 */;
	struct resource *cocci_id/* drivers/pwm/pwm-tegra.c 173 */;
	struct platform_device *cocci_id/* drivers/pwm/pwm-tegra.c 170 */;
	const struct pwm_ops cocci_id/* drivers/pwm/pwm-tegra.c 163 */;
}
