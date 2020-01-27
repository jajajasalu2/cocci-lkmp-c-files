cocci_test_suite() {
	const u16 cocci_id/* drivers/memory/tegra/tegra20-emc.c 90 */[];
	int __init cocci_id/* drivers/memory/tegra/tegra20-emc.c 575 */;
	void cocci_id/* drivers/memory/tegra/tegra20-emc.c 575 */;
	struct platform_driver cocci_id/* drivers/memory/tegra/tegra20-emc.c 566 */;
	const struct of_device_id cocci_id/* drivers/memory/tegra/tegra20-emc.c 561 */[];
	struct resource *cocci_id/* drivers/memory/tegra/tegra20-emc.c 485 */;
	struct platform_device *cocci_id/* drivers/memory/tegra/tegra20-emc.c 481 */;
	void *cocci_id/* drivers/memory/tegra/tegra20-emc.c 446 */;
	long cocci_id/* drivers/memory/tegra/tegra20-emc.c 443 */;
	u32 cocci_id/* drivers/memory/tegra/tegra20-emc.c 408 */;
	struct device *cocci_id/* drivers/memory/tegra/tegra20-emc.c 378 */;
	const struct emc_timing *cocci_id/* drivers/memory/tegra/tegra20-emc.c 322 */;
	const void *cocci_id/* drivers/memory/tegra/tegra20-emc.c 320 */;
	int cocci_id/* drivers/memory/tegra/tegra20-emc.c 320 */;
	struct device_node *cocci_id/* drivers/memory/tegra/tegra20-emc.c 281 */;
	struct clk_notifier_data *cocci_id/* drivers/memory/tegra/tegra20-emc.c 252 */;
	struct tegra_emc cocci_id/* drivers/memory/tegra/tegra20-emc.c 251 */;
	struct notifier_block *cocci_id/* drivers/memory/tegra/tegra20-emc.c 248 */;
	unsigned long cocci_id/* drivers/memory/tegra/tegra20-emc.c 227 */;
	bool cocci_id/* drivers/memory/tegra/tegra20-emc.c 225 */;
	struct tegra_emc *cocci_id/* drivers/memory/tegra/tegra20-emc.c 225 */;
	unsigned int cocci_id/* drivers/memory/tegra/tegra20-emc.c 204 */;
	struct emc_timing *cocci_id/* drivers/memory/tegra/tegra20-emc.c 203 */;
	irqreturn_t cocci_id/* drivers/memory/tegra/tegra20-emc.c 155 */;
	struct tegra_emc {
		struct device *dev;
		struct completion clk_handshake_complete;
		struct notifier_block clk_nb;
		struct clk *clk;
		void __iomem *regs;
		struct emc_timing *timings;
		unsigned int num_timings;
	} cocci_id/* drivers/memory/tegra/tegra20-emc.c 144 */;
	struct emc_timing {
		unsigned long rate;
		u32 data[ARRAY_SIZE(emc_timing_registers)];
	} cocci_id/* drivers/memory/tegra/tegra20-emc.c 139 */;
}
