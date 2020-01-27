cocci_test_suite() {
	struct clk *cocci_id/* drivers/clk/versatile/clk-impd1.c 87 */;
	void __iomem *cocci_id/* drivers/clk/versatile/clk-impd1.c 84 */;
	const struct clk_icst_desc cocci_id/* drivers/clk/versatile/clk-impd1.c 55 */;
	const struct icst_params cocci_id/* drivers/clk/versatile/clk-impd1.c 43 */;
	struct impd1_clk cocci_id/* drivers/clk/versatile/clk-impd1.c 37 */[4];
	struct impd1_clk {
		char *pclkname;
		struct clk *pclk;
		char *vco1name;
		struct clk *vco1clk;
		char *vco2name;
		struct clk *vco2clk;
		struct clk *mmciclk;
		char *uartname;
		struct clk *uartclk;
		char *spiname;
		struct clk *spiclk;
		char *scname;
		struct clk *scclk;
		struct clk_lookup *clks[15];
	} cocci_id/* drivers/clk/versatile/clk-impd1.c 19 */;
	struct impd1_clk *cocci_id/* drivers/clk/versatile/clk-impd1.c 157 */;
	int cocci_id/* drivers/clk/versatile/clk-impd1.c 156 */;
	unsigned int cocci_id/* drivers/clk/versatile/clk-impd1.c 154 */;
	void cocci_id/* drivers/clk/versatile/clk-impd1.c 154 */;
}
