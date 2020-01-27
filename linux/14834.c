cocci_test_suite() {
	struct clk *cocci_id/* drivers/clk/mmp/clk-of-pxa910.c 96 */;
	struct mmp_clk_factor_tbl cocci_id/* drivers/clk/mmp/clk-of-pxa910.c 90 */[];
	struct mmp_clk_factor_masks cocci_id/* drivers/clk/mmp/clk-of-pxa910.c 82 */;
	struct mmp_param_fixed_factor_clk cocci_id/* drivers/clk/mmp/clk-of-pxa910.c 65 */[];
	struct mmp_param_fixed_rate_clk cocci_id/* drivers/clk/mmp/clk-of-pxa910.c 58 */[];
	struct pxa910_clk_unit {
		struct mmp_clk_unit unit;
		void __iomem *mpmu_base;
		void __iomem *apmu_base;
		void __iomem *apbc_base;
		void __iomem *apbcp_base;
	} cocci_id/* drivers/clk/mmp/clk-of-pxa910.c 50 */;
	struct device_node *cocci_id/* drivers/clk/mmp/clk-of-pxa910.c 270 */;
	void __init cocci_id/* drivers/clk/mmp/clk-of-pxa910.c 270 */;
	int cocci_id/* drivers/clk/mmp/clk-of-pxa910.c 238 */;
	struct mmp_clk_reset_cell *cocci_id/* drivers/clk/mmp/clk-of-pxa910.c 237 */;
	struct mmp_param_div_clk cocci_id/* drivers/clk/mmp/clk-of-pxa910.c 203 */[];
	const char *cocci_id/* drivers/clk/mmp/clk-of-pxa910.c 192 */[];
	struct mmp_clk_unit *cocci_id/* drivers/clk/mmp/clk-of-pxa910.c 167 */;
	struct pxa910_clk_unit *cocci_id/* drivers/clk/mmp/clk-of-pxa910.c 165 */;
	void cocci_id/* drivers/clk/mmp/clk-of-pxa910.c 165 */;
	struct mmp_param_gate_clk cocci_id/* drivers/clk/mmp/clk-of-pxa910.c 141 */[];
	struct mmp_param_mux_clk cocci_id/* drivers/clk/mmp/clk-of-pxa910.c 128 */[];
}
