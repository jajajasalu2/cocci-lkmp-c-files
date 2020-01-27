cocci_test_suite() {
	void __init cocci_id/* drivers/clk/clk-qoriq.c 993 */(struct device_node *np);
	void cocci_id/* drivers/clk/clk-qoriq.c 99 */;
	struct clockgen cocci_id/* drivers/clk/clk-qoriq.c 97 */;
	u64 cocci_id/* drivers/clk/clk-qoriq.c 911 */;
	char cocci_id/* drivers/clk/clk-qoriq.c 857 */[32];
	const char *cocci_id/* drivers/clk/clk-qoriq.c 856 */[NUM_MUX_PARENTS];
	const struct clockgen_pll_div *cocci_id/* drivers/clk/clk-qoriq.c 855 */;
	struct clk_init_data cocci_id/* drivers/clk/clk-qoriq.c 853 */;
	struct clockgen {
		struct device_node *node;
		void __iomem *regs;
		struct clockgen_chipinfo info;
		struct clk *sysclk,*coreclk;
		struct clockgen_pll pll[6];
		struct clk *cmux[NUM_CMUX];
		struct clk *hwaccel[NUM_HWACCEL];
		struct clk *fman[2];
		struct ccsr_guts __iomem *guts;
	} cocci_id/* drivers/clk/clk-qoriq.c 85 */;
	unsigned long cocci_id/* drivers/clk/clk-qoriq.c 848 */;
	const struct clk_ops *cocci_id/* drivers/clk/clk-qoriq.c 847 */;
	struct mux_hwclock *cocci_id/* drivers/clk/clk-qoriq.c 846 */;
	const struct clk_ops cocci_id/* drivers/clk/clk-qoriq.c 817 */;
	s8 cocci_id/* drivers/clk/clk-qoriq.c 804 */;
	u8 cocci_id/* drivers/clk/clk-qoriq.c 800 */;
	struct clk_hw *cocci_id/* drivers/clk/clk-qoriq.c 800 */;
	struct mux_hwclock cocci_id/* drivers/clk/clk-qoriq.c 782 */;
	struct mux_hwclock {
		struct clk_hw hw;
		struct clockgen *cg;
		const struct clockgen_muxinfo *info;
		u32 __iomem *reg;
		u8 parent_to_clksel[NUM_MUX_PARENTS];
		s8 clksel_to_parent[NUM_MUX_PARENTS];
		int num_parents;
	} cocci_id/* drivers/clk/clk-qoriq.c 772 */;
	struct clockgen_chipinfo {
		const char *compat,*guts_compat;
		const struct clockgen_muxinfo *cmux_groups[2];
		const struct clockgen_muxinfo *hwaccel[NUM_HWACCEL];
		void (*init_periph)(struct clockgen *cg);
		int cmux_to_group[NUM_CMUX + 1];
		u32 pll_mask;
		u32 flags;
	} cocci_id/* drivers/clk/clk-qoriq.c 75 */;
	struct clockgen_muxinfo {
		struct clockgen_sourceinfo clksel[NUM_MUX_PARENTS];
	} cocci_id/* drivers/clk/clk-qoriq.c 56 */;
	const struct clockgen_chipinfo cocci_id/* drivers/clk/clk-qoriq.c 517 */[];
	struct clockgen_sourceinfo {
		u32 flags;
		int pll;
		int div;
	} cocci_id/* drivers/clk/clk-qoriq.c 48 */;
	struct clockgen_pll {
		struct clockgen_pll_div div[MAX_PLL_DIV];
	} cocci_id/* drivers/clk/clk-qoriq.c 41 */;
	struct clockgen_pll_div {
		struct clk *clk;
		char name[32];
	} cocci_id/* drivers/clk/clk-qoriq.c 36 */;
	const struct clockgen_muxinfo cocci_id/* drivers/clk/clk-qoriq.c 206 */;
	bool cocci_id/* drivers/clk/clk-qoriq.c 1424 */;
	int cocci_id/* drivers/clk/clk-qoriq.c 1423 */;
	struct device_node *cocci_id/* drivers/clk/clk-qoriq.c 1421 */;
	void __init cocci_id/* drivers/clk/clk-qoriq.c 1421 */;
	bool __init cocci_id/* drivers/clk/clk-qoriq.c 1400 */;
	const u32 cocci_id/* drivers/clk/clk-qoriq.c 1382 */[]__initconst;
	struct clockgen_pll *cocci_id/* drivers/clk/clk-qoriq.c 1321 */;
	struct of_phandle_args *cocci_id/* drivers/clk/clk-qoriq.c 1317 */;
	struct clk *cocci_id/* drivers/clk/clk-qoriq.c 1317 */;
	void *cocci_id/* drivers/clk/clk-qoriq.c 1317 */;
	struct clk **cocci_id/* drivers/clk/clk-qoriq.c 1245 */;
	struct clk_onecell_data *cocci_id/* drivers/clk/clk-qoriq.c 1244 */;
	const char *cocci_id/* drivers/clk/clk-qoriq.c 1107 */;
	struct clk *__initcocci_id/* drivers/clk/clk-qoriq.c 1107 */;
	u32 cocci_id/* drivers/clk/clk-qoriq.c 107 */;
	u32 __iomem *cocci_id/* drivers/clk/clk-qoriq.c 107 */;
	struct clockgen *cocci_id/* drivers/clk/clk-qoriq.c 107 */;
	struct clk __init *cocci_id/* drivers/clk/clk-qoriq.c 1041 */;
	struct clk __init *cocci_id/* drivers/clk/clk-qoriq.c 1030 */;
	struct resource cocci_id/* drivers/clk/clk-qoriq.c 1011 */;
}
