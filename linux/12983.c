cocci_test_suite() {
	struct platform_driver cocci_id/* drivers/soc/amlogic/meson-clk-measure.c 685 */;
	const struct of_device_id cocci_id/* drivers/soc/amlogic/meson-clk-measure.c 657 */[];
	struct meson_msr cocci_id/* drivers/soc/amlogic/meson-clk-measure.c 613 */;
	void __iomem *cocci_id/* drivers/soc/amlogic/meson-clk-measure.c 610 */;
	struct dentry *cocci_id/* drivers/soc/amlogic/meson-clk-measure.c 609 */;
	struct resource *cocci_id/* drivers/soc/amlogic/meson-clk-measure.c 608 */;
	const struct meson_msr_id *cocci_id/* drivers/soc/amlogic/meson-clk-measure.c 606 */;
	struct platform_device *cocci_id/* drivers/soc/amlogic/meson-clk-measure.c 604 */;
	const struct regmap_config cocci_id/* drivers/soc/amlogic/meson-clk-measure.c 597 */;
	unsigned int cocci_id/* drivers/soc/amlogic/meson-clk-measure.c 559 */;
	struct meson_msr_id *cocci_id/* drivers/soc/amlogic/meson-clk-measure.c 558 */;
	struct seq_file *cocci_id/* drivers/soc/amlogic/meson-clk-measure.c 556 */;
	void *cocci_id/* drivers/soc/amlogic/meson-clk-measure.c 556 */;
	int cocci_id/* drivers/soc/amlogic/meson-clk-measure.c 556 */;
	unsigned int *cocci_id/* drivers/soc/amlogic/meson-clk-measure.c 539 */;
	struct meson_msr *cocci_id/* drivers/soc/amlogic/meson-clk-measure.c 493 */;
	struct meson_msr {
		struct regmap *regmap;
		struct meson_msr_id msr_table[CLK_MSR_MAX];
	} cocci_id/* drivers/soc/amlogic/meson-clk-measure.c 43 */;
	struct meson_msr_id {
		struct meson_msr *priv;
		unsigned int id;
		const char *name;
	} cocci_id/* drivers/soc/amlogic/meson-clk-measure.c 37 */;
	struct meson_msr_id cocci_id/* drivers/soc/amlogic/meson-clk-measure.c 170 */[CLK_MSR_MAX];
}
