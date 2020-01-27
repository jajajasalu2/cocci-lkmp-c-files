cocci_test_suite() {
	struct lpc18xx_clk_branch cocci_id/* drivers/clk/nxp/clk-lpc18xx-ccu.c 46 */[];
	struct lpc18xx_clk_branch {
		const char *base_name;
		const char *name;
		u16 offset;
		u16 flags;
		struct clk *clk;
		struct clk_gate gate;
	} cocci_id/* drivers/clk/nxp/clk-lpc18xx-ccu.c 37 */;
	struct lpc18xx_branch_clk_data {
		const char **name;
		int num;
	} cocci_id/* drivers/clk/nxp/clk-lpc18xx-ccu.c 32 */;
	char *cocci_id/* drivers/clk/nxp/clk-lpc18xx-ccu.c 287 */;
	void __iomem *cocci_id/* drivers/clk/nxp/clk-lpc18xx-ccu.c 271 */;
	struct device_node *cocci_id/* drivers/clk/nxp/clk-lpc18xx-ccu.c 268 */;
	void __init cocci_id/* drivers/clk/nxp/clk-lpc18xx-ccu.c 268 */;
	const char *cocci_id/* drivers/clk/nxp/clk-lpc18xx-ccu.c 251 */;
	struct clk_divider *cocci_id/* drivers/clk/nxp/clk-lpc18xx-ccu.c 210 */;
	const struct clk_ops *cocci_id/* drivers/clk/nxp/clk-lpc18xx-ccu.c 209 */;
	struct lpc18xx_clk_branch *cocci_id/* drivers/clk/nxp/clk-lpc18xx-ccu.c 205 */;
	const struct clk_ops cocci_id/* drivers/clk/nxp/clk-lpc18xx-ccu.c 199 */;
	const struct clk_hw *cocci_id/* drivers/clk/nxp/clk-lpc18xx-ccu.c 181 */;
	struct clk_hw *cocci_id/* drivers/clk/nxp/clk-lpc18xx-ccu.c 174 */;
	void cocci_id/* drivers/clk/nxp/clk-lpc18xx-ccu.c 174 */;
	u32 cocci_id/* drivers/clk/nxp/clk-lpc18xx-ccu.c 140 */;
	struct clk_gate *cocci_id/* drivers/clk/nxp/clk-lpc18xx-ccu.c 139 */;
	bool cocci_id/* drivers/clk/nxp/clk-lpc18xx-ccu.c 137 */;
	int cocci_id/* drivers/clk/nxp/clk-lpc18xx-ccu.c 120 */;
	unsigned int cocci_id/* drivers/clk/nxp/clk-lpc18xx-ccu.c 119 */;
	struct lpc18xx_branch_clk_data *cocci_id/* drivers/clk/nxp/clk-lpc18xx-ccu.c 118 */;
	void *cocci_id/* drivers/clk/nxp/clk-lpc18xx-ccu.c 116 */;
	struct of_phandle_args *cocci_id/* drivers/clk/nxp/clk-lpc18xx-ccu.c 115 */;
	struct clk *cocci_id/* drivers/clk/nxp/clk-lpc18xx-ccu.c 115 */;
}
