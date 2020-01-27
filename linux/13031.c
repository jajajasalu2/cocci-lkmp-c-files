cocci_test_suite() {
	const struct of_device_id cocci_id/* drivers/soc/sunxi/sunxi_sram.c 85 */[];
	struct sunxi_sram_desc cocci_id/* drivers/soc/sunxi/sunxi_sram.c 61 */;
	struct sunxi_sram_func cocci_id/* drivers/soc/sunxi/sunxi_sram.c 57 */[];
	struct platform_driver cocci_id/* drivers/soc/sunxi/sunxi_sram.c 394 */;
	struct sunxi_sram_desc {
		struct sunxi_sram_data data;
		bool claimed;
	} cocci_id/* drivers/soc/sunxi/sunxi_sram.c 39 */;
	const struct sunxi_sramc_variant *cocci_id/* drivers/soc/sunxi/sunxi_sram.c 326 */;
	struct regmap *cocci_id/* drivers/soc/sunxi/sunxi_sram.c 325 */;
	struct dentry *cocci_id/* drivers/soc/sunxi/sunxi_sram.c 324 */;
	struct resource *cocci_id/* drivers/soc/sunxi/sunxi_sram.c 323 */;
	struct platform_device *cocci_id/* drivers/soc/sunxi/sunxi_sram.c 321 */;
	struct regmap_config cocci_id/* drivers/soc/sunxi/sunxi_sram.c 310 */;
	bool cocci_id/* drivers/soc/sunxi/sunxi_sram.c 302 */;
	struct sunxi_sram_data {
		char *name;
		u8 reg;
		u8 offset;
		u8 width;
		struct sunxi_sram_func *func;
		struct list_head list;
	} cocci_id/* drivers/soc/sunxi/sunxi_sram.c 30 */;
	const struct sunxi_sramc_variant cocci_id/* drivers/soc/sunxi/sunxi_sram.c 289 */;
	struct sunxi_sramc_variant {
		bool has_emac_clock;
	} cocci_id/* drivers/soc/sunxi/sunxi_sram.c 285 */;
	struct sunxi_sram_func {
		char *func;
		u8 val;
		u32 reg_val;
	} cocci_id/* drivers/soc/sunxi/sunxi_sram.c 24 */;
	u32 cocci_id/* drivers/soc/sunxi/sunxi_sram.c 226 */;
	unsigned int cocci_id/* drivers/soc/sunxi/sunxi_sram.c 225 */;
	struct sunxi_sram_desc *cocci_id/* drivers/soc/sunxi/sunxi_sram.c 224 */;
	const struct sunxi_sram_data *cocci_id/* drivers/soc/sunxi/sunxi_sram.c 223 */;
	int cocci_id/* drivers/soc/sunxi/sunxi_sram.c 221 */;
	u8 cocci_id/* drivers/soc/sunxi/sunxi_sram.c 172 */;
	struct of_phandle_args cocci_id/* drivers/soc/sunxi/sunxi_sram.c 171 */;
	struct sunxi_sram_func *cocci_id/* drivers/soc/sunxi/sunxi_sram.c 170 */;
	const struct of_device_id *cocci_id/* drivers/soc/sunxi/sunxi_sram.c 168 */;
	unsigned int *cocci_id/* drivers/soc/sunxi/sunxi_sram.c 166 */;
	struct device_node *cocci_id/* drivers/soc/sunxi/sunxi_sram.c 165 */;
	const __be32 *cocci_id/* drivers/soc/sunxi/sunxi_sram.c 116 */;
	struct seq_file *cocci_id/* drivers/soc/sunxi/sunxi_sram.c 110 */;
	void *cocci_id/* drivers/soc/sunxi/sunxi_sram.c 110 */;
	void __iomem *cocci_id/* drivers/soc/sunxi/sunxi_sram.c 108 */;
	struct device *cocci_id/* drivers/soc/sunxi/sunxi_sram.c 105 */;
}
