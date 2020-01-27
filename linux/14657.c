cocci_test_suite() {
	struct clk_init_data *cocci_id/* drivers/clk/clk-s2mps11.c 98 */;
	struct platform_device *cocci_id/* drivers/clk/clk-s2mps11.c 97 */;
	struct device_node *cocci_id/* drivers/clk/clk-s2mps11.c 97 */;
	struct clk_init_data cocci_id/* drivers/clk/clk-s2mps11.c 82 */[S2MPS11_CLKS_NUM];
	const struct clk_ops cocci_id/* drivers/clk/clk-s2mps11.c 74 */;
	unsigned long cocci_id/* drivers/clk/clk-s2mps11.c 68 */;
	struct s2mps11_clk *cocci_id/* drivers/clk/clk-s2mps11.c 58 */;
	u32 cocci_id/* drivers/clk/clk-s2mps11.c 57 */;
	struct clk_hw *cocci_id/* drivers/clk/clk-s2mps11.c 54 */;
	int cocci_id/* drivers/clk/clk-s2mps11.c 54 */;
	struct s2mps11_clk cocci_id/* drivers/clk/clk-s2mps11.c 34 */;
	void __exit cocci_id/* drivers/clk/clk-s2mps11.c 277 */;
	void cocci_id/* drivers/clk/clk-s2mps11.c 277 */;
	int __init cocci_id/* drivers/clk/clk-s2mps11.c 271 */;
	struct platform_driver cocci_id/* drivers/clk/clk-s2mps11.c 262 */;
	void *cocci_id/* drivers/clk/clk-s2mps11.c 245 */;
	const struct of_device_id cocci_id/* drivers/clk/clk-s2mps11.c 242 */[]__used;
	const struct platform_device_id cocci_id/* drivers/clk/clk-s2mps11.c 223 */[];
	struct s2mps11_clk {
		struct sec_pmic_dev *iodev;
		struct device_node *clk_np;
		struct clk_hw hw;
		struct clk *clk;
		struct clk_lookup *lookup;
		u32 mask;
		unsigned int reg;
	} cocci_id/* drivers/clk/clk-s2mps11.c 22 */;
	enum sec_device_type cocci_id/* drivers/clk/clk-s2mps11.c 127 */;
	unsigned int cocci_id/* drivers/clk/clk-s2mps11.c 125 */;
	struct clk_hw_onecell_data *cocci_id/* drivers/clk/clk-s2mps11.c 124 */;
	struct sec_pmic_dev *cocci_id/* drivers/clk/clk-s2mps11.c 100 */;
}
