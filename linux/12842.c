cocci_test_suite() {
	struct platform_driver cocci_id/* drivers/memory/tegra/tegra186.c 585 */;
	const struct of_device_id cocci_id/* drivers/memory/tegra/tegra186.c 579 */[];
	u32 cocci_id/* drivers/memory/tegra/tegra186.c 555 */;
	const struct tegra_mc_client *cocci_id/* drivers/memory/tegra/tegra186.c 554 */;
	unsigned int cocci_id/* drivers/memory/tegra/tegra186.c 539 */;
	struct tegra_mc *cocci_id/* drivers/memory/tegra/tegra186.c 538 */;
	struct resource *cocci_id/* drivers/memory/tegra/tegra186.c 537 */;
	struct platform_device *cocci_id/* drivers/memory/tegra/tegra186.c 535 */;
	int cocci_id/* drivers/memory/tegra/tegra186.c 535 */;
	const struct tegra_mc_client cocci_id/* drivers/memory/tegra/tegra186.c 27 */[];
	struct tegra_mc_client {
		const char *name;
		unsigned int sid;
		struct {
			unsigned int override;
			unsigned int security;
		} regs;
	} cocci_id/* drivers/memory/tegra/tegra186.c 18 */;
	struct tegra_mc {
		struct device *dev;
		void __iomem *regs;
	} cocci_id/* drivers/memory/tegra/tegra186.c 13 */;
}
