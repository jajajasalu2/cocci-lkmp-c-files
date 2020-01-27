cocci_test_suite() {
	struct tegra_mipi_soc {
		bool has_clk_lane;
		const struct tegra_mipi_pad *pads;
		unsigned int num_pads;
		bool clock_enable_override;
		bool needs_vclamp_ref;
		u8 pad_drive_down_ref;
		u8 pad_drive_up_ref;
		u8 pad_vclamp_level;
		u8 pad_vauxp_level;
		u8 hspdos;
		u8 hspuos;
		u8 termos;
		u8 hsclkpdos;
		u8 hsclkpuos;
	} cocci_id/* drivers/gpu/host1x/mipi.c 94 */;
	struct tegra_mipi_pad {
		unsigned long data;
		unsigned long clk;
	} cocci_id/* drivers/gpu/host1x/mipi.c 89 */;
	struct platform_driver cocci_id/* drivers/gpu/host1x/mipi.c 546 */;
	struct resource *cocci_id/* drivers/gpu/host1x/mipi.c 501 */;
	const struct of_device_id *cocci_id/* drivers/gpu/host1x/mipi.c 499 */;
	struct platform_device *cocci_id/* drivers/gpu/host1x/mipi.c 497 */;
	const struct of_device_id cocci_id/* drivers/gpu/host1x/mipi.c 489 */[];
	const struct tegra_mipi_soc cocci_id/* drivers/gpu/host1x/mipi.c 398 */;
	const struct tegra_mipi_pad cocci_id/* drivers/gpu/host1x/mipi.c 386 */[];
	u32 cocci_id/* drivers/gpu/host1x/mipi.c 317 */;
	unsigned int cocci_id/* drivers/gpu/host1x/mipi.c 316 */;
	const struct tegra_mipi_soc *cocci_id/* drivers/gpu/host1x/mipi.c 315 */;
	struct tegra_mipi_device *cocci_id/* drivers/gpu/host1x/mipi.c 313 */;
	int cocci_id/* drivers/gpu/host1x/mipi.c 313 */;
	void cocci_id/* drivers/gpu/host1x/mipi.c 257 */;
	struct of_phandle_args cocci_id/* drivers/gpu/host1x/mipi.c 213 */;
	struct device_node *cocci_id/* drivers/gpu/host1x/mipi.c 211 */;
	struct device *cocci_id/* drivers/gpu/host1x/mipi.c 209 */;
	struct tegra_mipi *cocci_id/* drivers/gpu/host1x/mipi.c 174 */;
	unsigned long cocci_id/* drivers/gpu/host1x/mipi.c 137 */;
	struct tegra_mipi_device {
		struct platform_device *pdev;
		struct tegra_mipi *mipi;
		struct device *device;
		unsigned long pads;
	} cocci_id/* drivers/gpu/host1x/mipi.c 129 */;
	struct tegra_mipi {
		const struct tegra_mipi_soc *soc;
		struct device *dev;
		void __iomem *regs;
		struct mutex lock;
		struct clk *clk;
		unsigned long usage_count;
	} cocci_id/* drivers/gpu/host1x/mipi.c 119 */;
}
