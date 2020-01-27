cocci_test_suite() {
	const char *cocci_id/* drivers/clk/nxp/clk-lpc18xx-cgu.c 92 */[BASE_CLK_MAX];
	const char *cocci_id/* drivers/clk/nxp/clk-lpc18xx-cgu.c 75 */[CLK_SRC_MAX];
	void __iomem *cocci_id/* drivers/clk/nxp/clk-lpc18xx-cgu.c 658 */;
	struct device_node *cocci_id/* drivers/clk/nxp/clk-lpc18xx-cgu.c 656 */;
	void __init cocci_id/* drivers/clk/nxp/clk-lpc18xx-cgu.c 656 */;
	struct clk_onecell_data cocci_id/* drivers/clk/nxp/clk-lpc18xx-cgu.c 639 */;
	struct clk *cocci_id/* drivers/clk/nxp/clk-lpc18xx-cgu.c 638 */[BASE_CLK_MAX];
	struct lpc18xx_cgu_pll_clk *cocci_id/* drivers/clk/nxp/clk-lpc18xx-cgu.c 582 */;
	struct lpc18xx_cgu_base_clk *cocci_id/* drivers/clk/nxp/clk-lpc18xx-cgu.c 554 */;
	enum{CLK_SRC_OSC32, CLK_SRC_IRC, CLK_SRC_ENET_RX_CLK, CLK_SRC_ENET_TX_CLK, CLK_SRC_GP_CLKIN, CLK_SRC_RESERVED1, CLK_SRC_OSC, CLK_SRC_PLL0USB, CLK_SRC_PLL0AUDIO, CLK_SRC_PLL1, CLK_SRC_RESERVED2, CLK_SRC_RESERVED3, CLK_SRC_IDIVA, CLK_SRC_IDIVB, CLK_SRC_IDIVC, CLK_SRC_IDIVD, CLK_SRC_IDIVE, CLK_SRC_MAX,} cocci_id/* drivers/clk/nxp/clk-lpc18xx-cgu.c 54 */;
	const char *cocci_id/* drivers/clk/nxp/clk-lpc18xx-cgu.c 538 */;
	struct lpc18xx_cgu_src_clk_div *cocci_id/* drivers/clk/nxp/clk-lpc18xx-cgu.c 534 */;
	struct clk *cocci_id/* drivers/clk/nxp/clk-lpc18xx-cgu.c 534 */;
	u32 *cocci_id/* drivers/clk/nxp/clk-lpc18xx-cgu.c 526 */;
	const char **cocci_id/* drivers/clk/nxp/clk-lpc18xx-cgu.c 526 */;
	struct lpc18xx_cgu_pll_clk cocci_id/* drivers/clk/nxp/clk-lpc18xx-cgu.c 520 */[];
	const struct clk_ops cocci_id/* drivers/clk/nxp/clk-lpc18xx-cgu.c 514 */;
	const struct clk_hw *cocci_id/* drivers/clk/nxp/clk-lpc18xx-cgu.c 496 */;
	struct clk_hw *cocci_id/* drivers/clk/nxp/clk-lpc18xx-cgu.c 489 */;
	void cocci_id/* drivers/clk/nxp/clk-lpc18xx-cgu.c 489 */;
	int cocci_id/* drivers/clk/nxp/clk-lpc18xx-cgu.c 484 */;
	bool cocci_id/* drivers/clk/nxp/clk-lpc18xx-cgu.c 459 */;
	u16 cocci_id/* drivers/clk/nxp/clk-lpc18xx-cgu.c 458 */;
	unsigned long *cocci_id/* drivers/clk/nxp/clk-lpc18xx-cgu.c 378 */;
	long cocci_id/* drivers/clk/nxp/clk-lpc18xx-cgu.c 377 */;
	struct lpc18xx_pll *cocci_id/* drivers/clk/nxp/clk-lpc18xx-cgu.c 353 */;
	unsigned long cocci_id/* drivers/clk/nxp/clk-lpc18xx-cgu.c 350 */;
	u32 cocci_id/* drivers/clk/nxp/clk-lpc18xx-cgu.c 295 */;
	struct lpc18xx_cgu_pll_clk {
		u8 clk_id;
		u8 n_parents;
		u8 reg_offset;
		struct clk_mux mux;
		struct clk_gate gate;
		struct lpc18xx_pll pll;
		const struct clk_ops *pll_ops;
	} cocci_id/* drivers/clk/nxp/clk-lpc18xx-cgu.c 262 */;
	struct lpc18xx_pll cocci_id/* drivers/clk/nxp/clk-lpc18xx-cgu.c 260 */;
	struct lpc18xx_pll {
		struct clk_hw hw;
		void __iomem *reg;
		spinlock_t *lock;
		u8 flags;
	} cocci_id/* drivers/clk/nxp/clk-lpc18xx-cgu.c 253 */;
	struct lpc18xx_cgu_base_clk cocci_id/* drivers/clk/nxp/clk-lpc18xx-cgu.c 222 */[];
	struct lpc18xx_cgu_base_clk {
		u8 clk_id;
		u8 n_parents;
		struct clk_mux mux;
		struct clk_gate gate;
	} cocci_id/* drivers/clk/nxp/clk-lpc18xx-cgu.c 199 */;
	struct lpc18xx_cgu_src_clk_div cocci_id/* drivers/clk/nxp/clk-lpc18xx-cgu.c 191 */[];
	struct lpc18xx_cgu_src_clk_div {
		u8 clk_id;
		u8 n_parents;
		struct clk_divider div;
		struct clk_mux mux;
		struct clk_gate gate;
	} cocci_id/* drivers/clk/nxp/clk-lpc18xx-cgu.c 164 */;
	u32 cocci_id/* drivers/clk/nxp/clk-lpc18xx-cgu.c 156 */[];
}
