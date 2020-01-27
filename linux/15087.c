cocci_test_suite() {
	bool cocci_id/* drivers/clk/ingenic/tcu.c 95 */;
	const struct ingenic_tcu_clk_info *cocci_id/* drivers/clk/ingenic/tcu.c 78 */;
	struct ingenic_tcu_clk *cocci_id/* drivers/clk/ingenic/tcu.c 77 */;
	struct clk_hw *cocci_id/* drivers/clk/ingenic/tcu.c 75 */;
	void cocci_id/* drivers/clk/ingenic/tcu.c 75 */;
	int cocci_id/* drivers/clk/ingenic/tcu.c 64 */;
	struct ingenic_tcu_clk cocci_id/* drivers/clk/ingenic/tcu.c 61 */;
	struct ingenic_tcu *cocci_id/* drivers/clk/ingenic/tcu.c 57 */;
	struct ingenic_tcu {
		const struct ingenic_soc_info *soc_info;
		struct regmap *map;
		struct clk *clk;
		struct clk_hw_onecell_data *clocks;
	} cocci_id/* drivers/clk/ingenic/tcu.c 49 */;
	struct device_node *cocci_id/* drivers/clk/ingenic/tcu.c 460 */;
	void __init cocci_id/* drivers/clk/ingenic/tcu.c 460 */;
	struct syscore_ops __maybe_unused cocci_id/* drivers/clk/ingenic/tcu.c 455 */;
	void __maybe_unused cocci_id/* drivers/clk/ingenic/tcu.c 447 */;
	int __maybe_unused cocci_id/* drivers/clk/ingenic/tcu.c 437 */;
	struct ingenic_tcu_clk {
		struct clk_hw hw;
		unsigned int idx;
		struct ingenic_tcu *tcu;
		const struct ingenic_tcu_clk_info *info;
	} cocci_id/* drivers/clk/ingenic/tcu.c 42 */;
	struct ingenic_tcu_clk_info {
		struct clk_init_data init_data;
		u8 gate_bit;
		u8 tcsr_reg;
	} cocci_id/* drivers/clk/ingenic/tcu.c 36 */;
	struct regmap *cocci_id/* drivers/clk/ingenic/tcu.c 331 */;
	const struct of_device_id *cocci_id/* drivers/clk/ingenic/tcu.c 329 */;
	int __init cocci_id/* drivers/clk/ingenic/tcu.c 327 */;
	const struct of_device_id cocci_id/* drivers/clk/ingenic/tcu.c 320 */[]__initconst;
	const struct ingenic_soc_info cocci_id/* drivers/clk/ingenic/tcu.c 308 */;
	struct ingenic_soc_info {
		unsigned int num_channels;
		bool has_ost;
		bool has_tcu_clk;
	} cocci_id/* drivers/clk/ingenic/tcu.c 30 */;
	struct clk_hw_onecell_data *cocci_id/* drivers/clk/ingenic/tcu.c 272 */;
	enum tcu_clk_parent cocci_id/* drivers/clk/ingenic/tcu.c 270 */;
	const struct ingenic_tcu_clk_info cocci_id/* drivers/clk/ingenic/tcu.c 265 */;
	const struct ingenic_tcu_clk_info cocci_id/* drivers/clk/ingenic/tcu.c 252 */[];
	enum tcu_clk_parent{TCU_PARENT_PCLK, TCU_PARENT_RTC, TCU_PARENT_EXT,} cocci_id/* drivers/clk/ingenic/tcu.c 24 */;
	const char *const cocci_id/* drivers/clk/ingenic/tcu.c 234 */[];
	const struct clk_ops cocci_id/* drivers/clk/ingenic/tcu.c 221 */;
	unsigned long *cocci_id/* drivers/clk/ingenic/tcu.c 186 */;
	long cocci_id/* drivers/clk/ingenic/tcu.c 185 */;
	unsigned long cocci_id/* drivers/clk/ingenic/tcu.c 174 */;
	unsigned int cocci_id/* drivers/clk/ingenic/tcu.c 130 */;
	u8 cocci_id/* drivers/clk/ingenic/tcu.c 126 */;
}
