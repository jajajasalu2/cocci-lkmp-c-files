cocci_test_suite() {
	struct clk *__initcocci_id/* drivers/clk/renesas/clk-r8a7779.c 89 */;
	const unsigned int cocci_id/* drivers/clk/renesas/clk-r8a7779.c 83 */[4]__initconst;
	const struct cpg_clk_config cocci_id/* drivers/clk/renesas/clk-r8a7779.c 64 */[4]__initconst;
	struct cpg_clk_config {
		unsigned int z_mult;
		unsigned int z_div;
		unsigned int zs_and_s_div;
		unsigned int s1_div;
		unsigned int p_div;
		unsigned int b_and_out_div;
	} cocci_id/* drivers/clk/renesas/clk-r8a7779.c 55 */;
	struct r8a7779_cpg {
		struct clk_onecell_data data;
		spinlock_t lock;
		void __iomem *reg;
	} cocci_id/* drivers/clk/renesas/clk-r8a7779.c 24 */;
	struct clk *cocci_id/* drivers/clk/renesas/clk-r8a7779.c 156 */;
	const char *cocci_id/* drivers/clk/renesas/clk-r8a7779.c 155 */;
	u32 cocci_id/* drivers/clk/renesas/clk-r8a7779.c 126 */;
	int cocci_id/* drivers/clk/renesas/clk-r8a7779.c 125 */;
	unsigned int cocci_id/* drivers/clk/renesas/clk-r8a7779.c 124 */;
	struct clk **cocci_id/* drivers/clk/renesas/clk-r8a7779.c 123 */;
	struct r8a7779_cpg *cocci_id/* drivers/clk/renesas/clk-r8a7779.c 122 */;
	const struct cpg_clk_config *cocci_id/* drivers/clk/renesas/clk-r8a7779.c 121 */;
	struct device_node *cocci_id/* drivers/clk/renesas/clk-r8a7779.c 119 */;
	void __init cocci_id/* drivers/clk/renesas/clk-r8a7779.c 119 */;
}
