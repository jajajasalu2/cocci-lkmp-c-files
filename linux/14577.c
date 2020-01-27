cocci_test_suite() {
	int cocci_id/* drivers/clk/ti/clk-dra7-atl.c 80 */;
	struct dra7_atl_clock_info *cocci_id/* drivers/clk/ti/clk-dra7-atl.c 75 */;
	struct dra7_atl_desc cocci_id/* drivers/clk/ti/clk-dra7-atl.c 67 */;
	struct dra7_atl_clock_info {
		struct device *dev;
		void __iomem *iobase;
		struct dra7_atl_desc *cdesc;
	} cocci_id/* drivers/clk/ti/clk-dra7-atl.c 60 */;
	struct dra7_atl_desc {
		struct clk *clk;
		struct clk_hw hw;
		struct dra7_atl_clock_info *cinfo;
		int id;
		bool probed;
		bool valid;
		bool enabled;
		u32 bws;
		u32 aws;
		u32 divider;
	} cocci_id/* drivers/clk/ti/clk-dra7-atl.c 46 */;
	struct dra7_atl_clock_info cocci_id/* drivers/clk/ti/clk-dra7-atl.c 44 */;
	struct platform_driver cocci_id/* drivers/clk/ti/clk-dra7-atl.c 305 */;
	const struct of_device_id cocci_id/* drivers/clk/ti/clk-dra7-atl.c 300 */[];
	struct clk *cocci_id/* drivers/clk/ti/clk-dra7-atl.c 246 */;
	struct of_phandle_args cocci_id/* drivers/clk/ti/clk-dra7-atl.c 245 */;
	char cocci_id/* drivers/clk/ti/clk-dra7-atl.c 243 */[5];
	struct device_node *cocci_id/* drivers/clk/ti/clk-dra7-atl.c 221 */;
	struct platform_device *cocci_id/* drivers/clk/ti/clk-dra7-atl.c 219 */;
	char *cocci_id/* drivers/clk/ti/clk-dra7-atl.c 197 */;
	const char **cocci_id/* drivers/clk/ti/clk-dra7-atl.c 175 */;
	struct clk_init_data cocci_id/* drivers/clk/ti/clk-dra7-atl.c 174 */;
	void __init cocci_id/* drivers/clk/ti/clk-dra7-atl.c 171 */;
	const struct clk_ops cocci_id/* drivers/clk/ti/clk-dra7-atl.c 162 */;
	u32 cocci_id/* drivers/clk/ti/clk-dra7-atl.c 147 */;
	unsigned cocci_id/* drivers/clk/ti/clk-dra7-atl.c 134 */;
	unsigned long *cocci_id/* drivers/clk/ti/clk-dra7-atl.c 132 */;
	long cocci_id/* drivers/clk/ti/clk-dra7-atl.c 131 */;
	unsigned long cocci_id/* drivers/clk/ti/clk-dra7-atl.c 123 */;
	struct dra7_atl_desc *cocci_id/* drivers/clk/ti/clk-dra7-atl.c 104 */;
	struct clk_hw *cocci_id/* drivers/clk/ti/clk-dra7-atl.c 102 */;
	void cocci_id/* drivers/clk/ti/clk-dra7-atl.c 102 */;
}
