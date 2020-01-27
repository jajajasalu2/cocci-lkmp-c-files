cocci_test_suite() {
	const struct asm9260_div_clk cocci_id/* drivers/clk/clk-asm9260.c 91 */[]__initconst;
	void __iomem *cocci_id/* drivers/clk/clk-asm9260.c 89 */;
	struct asm9260_mux_clock {
		u8 mask;
		u32 *table;
		const char *name;
		const char **parent_names;
		u8 num_parents;
		unsigned long offset;
		unsigned long flags;
	} cocci_id/* drivers/clk/clk-asm9260.c 79 */;
	struct asm9260_gate_data {
		unsigned int idx;
		const char *name;
		const char *parent_name;
		u32 reg;
		u8 bit_idx;
		unsigned long flags;
	} cocci_id/* drivers/clk/clk-asm9260.c 70 */;
	struct asm9260_div_clk {
		unsigned int idx;
		const char *name;
		const char *parent_name;
		u32 reg;
	} cocci_id/* drivers/clk/clk-asm9260.c 63 */;
	struct clk_hw_onecell_data *cocci_id/* drivers/clk/clk-asm9260.c 60 */;
	const struct asm9260_div_clk *cocci_id/* drivers/clk/clk-asm9260.c 307 */;
	const struct asm9260_gate_data *cocci_id/* drivers/clk/clk-asm9260.c 298 */;
	const struct asm9260_mux_clock *cocci_id/* drivers/clk/clk-asm9260.c 287 */;
	int cocci_id/* drivers/clk/clk-asm9260.c 262 */;
	u32 cocci_id/* drivers/clk/clk-asm9260.c 261 */;
	const char *cocci_id/* drivers/clk/clk-asm9260.c 260 */;
	struct clk_hw **cocci_id/* drivers/clk/clk-asm9260.c 259 */;
	struct clk_hw *cocci_id/* drivers/clk/clk-asm9260.c 258 */;
	struct device_node *cocci_id/* drivers/clk/clk-asm9260.c 256 */;
	void __init cocci_id/* drivers/clk/clk-asm9260.c 256 */;
	struct asm9260_mux_clock cocci_id/* drivers/clk/clk-asm9260.c 241 */[]__initdata;
	u32 cocci_id/* drivers/clk/clk-asm9260.c 239 */[];
	const char __initdata *cocci_id/* drivers/clk/clk-asm9260.c 238 */[];
	const struct asm9260_gate_data cocci_id/* drivers/clk/clk-asm9260.c 136 */[]__initconst;
}
