cocci_test_suite() {
	struct clk_sccg_pll cocci_id/* drivers/clk/imx/clk-sccg-pll.c 99 */;
	struct clk_sccg_pll {
		struct clk_hw hw;
		const struct clk_ops ops;
		void __iomem *base;
		struct clk_sccg_pll_setup setup;
		u8 parent;
		u8 bypass1;
		u8 bypass2;
	} cocci_id/* drivers/clk/imx/clk-sccg-pll.c 86 */;
	struct clk_sccg_pll_setup {
		int divr1,divf1;
		int divr2,divf2;
		int divq;
		int bypass;
		uint64_t vco1;
		uint64_t vco2;
		uint64_t fout;
		uint64_t ref;
		uint64_t ref_div1;
		uint64_t ref_div2;
		uint64_t fout_request;
		int fout_error;
	} cocci_id/* drivers/clk/imx/clk-sccg-pll.c 70 */;
	struct clk_init_data cocci_id/* drivers/clk/imx/clk-sccg-pll.c 517 */;
	void __iomem *cocci_id/* drivers/clk/imx/clk-sccg-pll.c 513 */;
	const char *const*cocci_id/* drivers/clk/imx/clk-sccg-pll.c 510 */;
	const char *cocci_id/* drivers/clk/imx/clk-sccg-pll.c 509 */;
	struct clk *cocci_id/* drivers/clk/imx/clk-sccg-pll.c 509 */;
	const struct clk_ops cocci_id/* drivers/clk/imx/clk-sccg-pll.c 498 */;
	struct clk_sccg_pll_setup *cocci_id/* drivers/clk/imx/clk-sccg-pll.c 428 */;
	struct clk_sccg_pll *cocci_id/* drivers/clk/imx/clk-sccg-pll.c 427 */;
	uint64_t cocci_id/* drivers/clk/imx/clk-sccg-pll.c 422 */;
	struct clk_rate_request *cocci_id/* drivers/clk/imx/clk-sccg-pll.c 421 */;
	struct clk_hw *cocci_id/* drivers/clk/imx/clk-sccg-pll.c 420 */;
	int cocci_id/* drivers/clk/imx/clk-sccg-pll.c 420 */;
	u32 cocci_id/* drivers/clk/imx/clk-sccg-pll.c 396 */;
	u8 cocci_id/* drivers/clk/imx/clk-sccg-pll.c 393 */;
	u64 cocci_id/* drivers/clk/imx/clk-sccg-pll.c 341 */;
	unsigned long cocci_id/* drivers/clk/imx/clk-sccg-pll.c 336 */;
	void cocci_id/* drivers/clk/imx/clk-sccg-pll.c 326 */;
	struct clk_sccg_pll_setup cocci_id/* drivers/clk/imx/clk-sccg-pll.c 123 */;
}
