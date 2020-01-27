cocci_test_suite() {
	struct clk *cocci_id/* drivers/clk/mmp/clk-of-pxa168.c 96 */;
	struct mmp_clk_factor_tbl cocci_id/* drivers/clk/mmp/clk-of-pxa168.c 90 */[];
	struct mmp_clk_factor_masks cocci_id/* drivers/clk/mmp/clk-of-pxa168.c 82 */;
	struct mmp_param_fixed_factor_clk cocci_id/* drivers/clk/mmp/clk-of-pxa168.c 65 */[];
	struct mmp_param_fixed_rate_clk cocci_id/* drivers/clk/mmp/clk-of-pxa168.c 58 */[];
	struct pxa168_clk_unit {
		struct mmp_clk_unit unit;
		void __iomem *mpmu_base;
		void __iomem *apmu_base;
		void __iomem *apbc_base;
	} cocci_id/* drivers/clk/mmp/clk-of-pxa168.c 51 */;
	struct device_node *cocci_id/* drivers/clk/mmp/clk-of-pxa168.c 250 */;
	void __init cocci_id/* drivers/clk/mmp/clk-of-pxa168.c 250 */;
	int cocci_id/* drivers/clk/mmp/clk-of-pxa168.c 232 */;
	struct mmp_clk_reset_cell *cocci_id/* drivers/clk/mmp/clk-of-pxa168.c 231 */;
	struct mmp_param_div_clk cocci_id/* drivers/clk/mmp/clk-of-pxa168.c 197 */[];
	const char *cocci_id/* drivers/clk/mmp/clk-of-pxa168.c 186 */[];
	struct mmp_clk_unit *cocci_id/* drivers/clk/mmp/clk-of-pxa168.c 166 */;
	struct pxa168_clk_unit *cocci_id/* drivers/clk/mmp/clk-of-pxa168.c 164 */;
	void cocci_id/* drivers/clk/mmp/clk-of-pxa168.c 164 */;
	struct mmp_param_gate_clk cocci_id/* drivers/clk/mmp/clk-of-pxa168.c 142 */[];
	struct mmp_param_mux_clk cocci_id/* drivers/clk/mmp/clk-of-pxa168.c 130 */[];
}
