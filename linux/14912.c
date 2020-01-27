cocci_test_suite() {
	char *cocci_id/* drivers/clk/sunxi/clk-sunxi.c 956 */;
	struct factors_data cocci_id/* drivers/clk/sunxi/clk-sunxi.c 955 */;
	struct clk_divider *cocci_id/* drivers/clk/sunxi/clk-sunxi.c 954 */;
	struct clk_fixed_factor *cocci_id/* drivers/clk/sunxi/clk-sunxi.c 953 */;
	struct clk_gate *cocci_id/* drivers/clk/sunxi/clk-sunxi.c 952 */;
	const struct clk_ops *cocci_id/* drivers/clk/sunxi/clk-sunxi.c 951 */;
	struct clk_hw *cocci_id/* drivers/clk/sunxi/clk-sunxi.c 950 */;
	struct clk **cocci_id/* drivers/clk/sunxi/clk-sunxi.c 949 */;
	struct clk_onecell_data *cocci_id/* drivers/clk/sunxi/clk-sunxi.c 946 */;
	const struct divs_data *cocci_id/* drivers/clk/sunxi/clk-sunxi.c 944 */;
	struct clk **__initcocci_id/* drivers/clk/sunxi/clk-sunxi.c 943 */;
	const struct divs_data cocci_id/* drivers/clk/sunxi/clk-sunxi.c 901 */;
	struct clk_div_table cocci_id/* drivers/clk/sunxi/clk-sunxi.c 893 */[];
	struct divs_data {
		const struct factors_data *factors;
		int ndivs;
		struct {
			u8 self;
			u8 fixed;
			struct clk_div_table *table;
			u8 shift;
			u8 pow;
			u8 gate;
			bool critical;
		} div[SUNXI_DIVS_MAX_QTY];
	} cocci_id/* drivers/clk/sunxi/clk-sunxi.c 873 */;
	struct gates_data {
	DECLARE_BITMAP(mask,SUNXI_GATES_MAX_SIZE)
		;
	} cocci_id/* drivers/clk/sunxi/clk-sunxi.c 862 */;
	struct device_node *cocci_id/* drivers/clk/sunxi/clk-sunxi.c 826 */;
	void __init cocci_id/* drivers/clk/sunxi/clk-sunxi.c 826 */;
	void __iomem *cocci_id/* drivers/clk/sunxi/clk-sunxi.c 781 */;
	const char *cocci_id/* drivers/clk/sunxi/clk-sunxi.c 779 */;
	struct clk *cocci_id/* drivers/clk/sunxi/clk-sunxi.c 778 */;
	const struct div_data *cocci_id/* drivers/clk/sunxi/clk-sunxi.c 776 */;
	const struct clk_div_table cocci_id/* drivers/clk/sunxi/clk-sunxi.c 760 */[]__initconst;
	const struct div_data cocci_id/* drivers/clk/sunxi/clk-sunxi.c 754 */;
	struct div_data {
		u8 shift;
		u8 pow;
		u8 width;
		const struct clk_div_table *table;
	} cocci_id/* drivers/clk/sunxi/clk-sunxi.c 724 */;
	const char *cocci_id/* drivers/clk/sunxi/clk-sunxi.c 656 */[SUNXI_MAX_PARENTS];
	unsigned long cocci_id/* drivers/clk/sunxi/clk-sunxi.c 652 */;
	const struct mux_data *cocci_id/* drivers/clk/sunxi/clk-sunxi.c 651 */;
	const struct mux_data cocci_id/* drivers/clk/sunxi/clk-sunxi.c 638 */;
	struct mux_data {
		u8 shift;
	} cocci_id/* drivers/clk/sunxi/clk-sunxi.c 634 */;
	const struct factors_data *cocci_id/* drivers/clk/sunxi/clk-sunxi.c 557 */;
	struct clk *__initcocci_id/* drivers/clk/sunxi/clk-sunxi.c 556 */;
	const struct factors_data cocci_id/* drivers/clk/sunxi/clk-sunxi.c 541 */;
	const struct clk_factors_config cocci_id/* drivers/clk/sunxi/clk-sunxi.c 475 */;
	int cocci_id/* drivers/clk/sunxi/clk-sunxi.c 348 */;
	u8 cocci_id/* drivers/clk/sunxi/clk-sunxi.c 347 */;
	struct factors_request *cocci_id/* drivers/clk/sunxi/clk-sunxi.c 345 */;
	void cocci_id/* drivers/clk/sunxi/clk-sunxi.c 345 */;
	u32 cocci_id/* drivers/clk/sunxi/clk-sunxi.c 251 */;
	struct clk_onecell_data cocci_id/* drivers/clk/sunxi/clk-sunxi.c 1005 */;
}
