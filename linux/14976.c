cocci_test_suite() {
	struct clk_init_data cocci_id/* drivers/clk/clk-npcm7xx.c 73 */;
	const char *cocci_id/* drivers/clk/clk-npcm7xx.c 69 */;
	const struct clk_ops cocci_id/* drivers/clk/clk-npcm7xx.c 64 */;
	const struct npcm7xx_clk_div_data *cocci_id/* drivers/clk/clk-npcm7xx.c 623 */;
	const struct npcm7xx_clk_mux_data *cocci_id/* drivers/clk/clk-npcm7xx.c 603 */;
	const struct npcm7xx_clk_pll_data *cocci_id/* drivers/clk/clk-npcm7xx.c 573 */;
	int cocci_id/* drivers/clk/clk-npcm7xx.c 547 */;
	struct clk_hw *cocci_id/* drivers/clk/clk-npcm7xx.c 546 */;
	struct resource cocci_id/* drivers/clk/clk-npcm7xx.c 545 */;
	void __iomem *cocci_id/* drivers/clk/clk-npcm7xx.c 544 */;
	struct clk_hw_onecell_data *cocci_id/* drivers/clk/clk-npcm7xx.c 543 */;
	struct device_node *cocci_id/* drivers/clk/clk-npcm7xx.c 541 */;
	void __init cocci_id/* drivers/clk/clk-npcm7xx.c 541 */;
	u64 cocci_id/* drivers/clk/clk-npcm7xx.c 44 */;
	const struct npcm7xx_clk_gate_data cocci_id/* drivers/clk/clk-npcm7xx.c 438 */[]__initconst;
	unsigned int cocci_id/* drivers/clk/clk-npcm7xx.c 43 */;
	struct npcm7xx_clk_pll *cocci_id/* drivers/clk/clk-npcm7xx.c 41 */;
	unsigned long cocci_id/* drivers/clk/clk-npcm7xx.c 38 */;
	const struct npcm7xx_clk_div_data cocci_id/* drivers/clk/clk-npcm7xx.c 372 */[]__initconst;
	const struct npcm7xx_clk_div_fixed_data cocci_id/* drivers/clk/clk-npcm7xx.c 365 */[]__initconst;
	const struct npcm7xx_clk_mux_data cocci_id/* drivers/clk/clk-npcm7xx.c 327 */[]__initconst;
	const struct npcm7xx_clk_pll_data cocci_id/* drivers/clk/clk-npcm7xx.c 314 */[]__initconst;
	const char *constcocci_id/* drivers/clk/clk-npcm7xx.c 294 */[]__initconst;
	u32 cocci_id/* drivers/clk/clk-npcm7xx.c 293 */[];
	struct npcm7xx_clk_pll cocci_id/* drivers/clk/clk-npcm7xx.c 28 */;
	struct npcm7xx_clk_pll {
		struct clk_hw hw;
		void __iomem *pllcon;
		u8 flags;
	} cocci_id/* drivers/clk/clk-npcm7xx.c 22 */;
	struct npcm7xx_clk_pll_data {
		u32 reg;
		const char *name;
		const char *parent_name;
		unsigned long flags;
		int onecell_idx;
	} cocci_id/* drivers/clk/clk-npcm7xx.c 194 */;
	struct npcm7xx_clk_div_data {
		u32 reg;
		u8 shift;
		u8 width;
		const char *name;
		const char *parent_name;
		u8 clk_divider_flags;
		unsigned long flags;
		int onecell_idx;
	} cocci_id/* drivers/clk/clk-npcm7xx.c 178 */;
	struct npcm7xx_clk_div_fixed_data {
		u8 mult;
		u8 div;
		const char *name;
		const char *parent_name;
		u8 clk_divider_flags;
		int onecell_idx;
	} cocci_id/* drivers/clk/clk-npcm7xx.c 163 */;
	struct npcm7xx_clk_mux_data {
		u8 shift;
		u8 mask;
		u32 *table;
		const char *name;
		const char *const*parent_names;
		u8 num_parents;
		unsigned long flags;
		int onecell_idx;
	} cocci_id/* drivers/clk/clk-npcm7xx.c 146 */;
	struct npcm7xx_clk_gate_data {
		u32 reg;
		u8 bit_idx;
		const char *name;
		const char *parent_name;
		unsigned long flags;
		int onecell_idx;
	} cocci_id/* drivers/clk/clk-npcm7xx.c 132 */;
}
