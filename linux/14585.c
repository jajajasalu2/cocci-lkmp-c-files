cocci_test_suite() {
	struct component_clk *cocci_id/* drivers/clk/ti/composite.c 89 */;
	struct of_phandle_args cocci_id/* drivers/clk/ti/composite.c 79 */;
	struct device_node *cocci_id/* drivers/clk/ti/composite.c 76 */;
	int cocci_id/* drivers/clk/ti/composite.c 76 */;
	const char *const cocci_id/* drivers/clk/ti/composite.c 70 */[]__initconst;
	struct component_clk {
		int num_parents;
		const char **parent_names;
		struct device_node *node;
		int type;
		struct clk_hw *hw;
		struct list_head link;
	} cocci_id/* drivers/clk/ti/composite.c 61 */;
	const struct clk_ops cocci_id/* drivers/clk/ti/composite.c 49 */;
	unsigned long *cocci_id/* drivers/clk/ti/composite.c 38 */;
	long cocci_id/* drivers/clk/ti/composite.c 37 */;
	unsigned long cocci_id/* drivers/clk/ti/composite.c 31 */;
	char *cocci_id/* drivers/clk/ti/composite.c 255 */;
	int __init cocci_id/* drivers/clk/ti/composite.c 241 */;
	unsigned int cocci_id/* drivers/clk/ti/composite.c 207 */;
	const char **cocci_id/* drivers/clk/ti/composite.c 127 */;
	struct clk *cocci_id/* drivers/clk/ti/composite.c 123 */;
	void *cocci_id/* drivers/clk/ti/composite.c 119 */;
	void __init cocci_id/* drivers/clk/ti/composite.c 119 */;
	struct clk_hw_omap_comp cocci_id/* drivers/clk/ti/composite.c 117 */;
	struct clk_hw_omap_comp *cocci_id/* drivers/clk/ti/composite.c 106 */;
	struct clk_hw *cocci_id/* drivers/clk/ti/composite.c 106 */;
	struct clk_hw_omap_comp {
		struct clk_hw hw;
		struct device_node *comp_nodes[CLK_COMPONENT_TYPE_MAX];
		struct component_clk *comp_clks[CLK_COMPONENT_TYPE_MAX];
	} cocci_id/* drivers/clk/ti/composite.c 100 */;
}
