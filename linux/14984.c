cocci_test_suite() {
	unsigned int cocci_id/* drivers/clk/bcm/clk-iproc-asiu.c 84 */;
	unsigned long cocci_id/* drivers/clk/bcm/clk-iproc-asiu.c 78 */;
	u32 cocci_id/* drivers/clk/bcm/clk-iproc-asiu.c 67 */;
	struct iproc_asiu *cocci_id/* drivers/clk/bcm/clk-iproc-asiu.c 66 */;
	struct iproc_asiu_clk *cocci_id/* drivers/clk/bcm/clk-iproc-asiu.c 65 */;
	struct clk_hw *cocci_id/* drivers/clk/bcm/clk-iproc-asiu.c 63 */;
	void cocci_id/* drivers/clk/bcm/clk-iproc-asiu.c 63 */;
	int cocci_id/* drivers/clk/bcm/clk-iproc-asiu.c 46 */;
	struct iproc_asiu_clk cocci_id/* drivers/clk/bcm/clk-iproc-asiu.c 44 */;
	struct iproc_asiu {
		void __iomem *div_base;
		void __iomem *gate_base;
		struct clk_hw_onecell_data *clk_data;
		struct iproc_asiu_clk *clks;
	} cocci_id/* drivers/clk/bcm/clk-iproc-asiu.c 36 */;
	struct iproc_asiu_clk {
		struct clk_hw hw;
		const char *name;
		struct iproc_asiu *asiu;
		unsigned long rate;
		struct iproc_asiu_div div;
		struct iproc_asiu_gate gate;
	} cocci_id/* drivers/clk/bcm/clk-iproc-asiu.c 27 */;
	struct iproc_asiu cocci_id/* drivers/clk/bcm/clk-iproc-asiu.c 25 */;
	const char *cocci_id/* drivers/clk/bcm/clk-iproc-asiu.c 220 */;
	struct clk_init_data cocci_id/* drivers/clk/bcm/clk-iproc-asiu.c 219 */;
	const struct iproc_asiu_gate *cocci_id/* drivers/clk/bcm/clk-iproc-asiu.c 187 */;
	const struct iproc_asiu_div *cocci_id/* drivers/clk/bcm/clk-iproc-asiu.c 186 */;
	struct device_node *cocci_id/* drivers/clk/bcm/clk-iproc-asiu.c 185 */;
	void __init cocci_id/* drivers/clk/bcm/clk-iproc-asiu.c 185 */;
	const struct clk_ops cocci_id/* drivers/clk/bcm/clk-iproc-asiu.c 177 */;
	unsigned long *cocci_id/* drivers/clk/bcm/clk-iproc-asiu.c 112 */;
	long cocci_id/* drivers/clk/bcm/clk-iproc-asiu.c 111 */;
}
