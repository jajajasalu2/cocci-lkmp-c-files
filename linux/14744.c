cocci_test_suite() {
	const u32 cocci_id/* drivers/clk/mvebu/kirkwood.c 93 */[]__initconst;
	const struct coreclk_ratio cocci_id/* drivers/clk/mvebu/kirkwood.c 81 */[]__initconst;
	enum{KIRKWOOD_CPU_TO_L2, KIRKWOOD_CPU_TO_DDR,} cocci_id/* drivers/clk/mvebu/kirkwood.c 79 */;
	struct device_node *cocci_id/* drivers/clk/mvebu/kirkwood.c 333 */;
	void __init cocci_id/* drivers/clk/mvebu/kirkwood.c 333 */;
	void __iomem *cocci_id/* drivers/clk/mvebu/kirkwood.c 292 */;
	const struct clk_muxing_soc_desc *cocci_id/* drivers/clk/mvebu/kirkwood.c 289 */;
	struct clk_mux *cocci_id/* drivers/clk/mvebu/kirkwood.c 280 */;
	int cocci_id/* drivers/clk/mvebu/kirkwood.c 274 */;
	struct clk_muxing_ctrl *cocci_id/* drivers/clk/mvebu/kirkwood.c 273 */;
	struct of_phandle_args *cocci_id/* drivers/clk/mvebu/kirkwood.c 271 */;
	void *cocci_id/* drivers/clk/mvebu/kirkwood.c 271 */;
	struct clk *cocci_id/* drivers/clk/mvebu/kirkwood.c 270 */;
	const struct clk_muxing_soc_desc cocci_id/* drivers/clk/mvebu/kirkwood.c 265 */[]__initconst;
	const char *cocci_id/* drivers/clk/mvebu/kirkwood.c 260 */[];
	struct clk_muxing_ctrl {
		spinlock_t *lock;
		struct clk **muxes;
		int num_muxes;
	} cocci_id/* drivers/clk/mvebu/kirkwood.c 254 */;
	struct clk_muxing_soc_desc {
		const char *name;
		const char **parents;
		int num_parents;
		int shift;
		int width;
		unsigned long flags;
	} cocci_id/* drivers/clk/mvebu/kirkwood.c 245 */;
	const struct clk_gating_soc_desc cocci_id/* drivers/clk/mvebu/kirkwood.c 221 */[]__initconst;
	const struct coreclk_soc_desc cocci_id/* drivers/clk/mvebu/kirkwood.c 193 */;
	u32 cocci_id/* drivers/clk/mvebu/kirkwood.c 132 */;
	int *cocci_id/* drivers/clk/mvebu/kirkwood.c 127 */;
	const int cocci_id/* drivers/clk/mvebu/kirkwood.c 119 */[16][2]__initconst;
	const int cocci_id/* drivers/clk/mvebu/kirkwood.c 114 */[8][2]__initconst;
	u32 __init cocci_id/* drivers/clk/mvebu/kirkwood.c 108 */;
}
