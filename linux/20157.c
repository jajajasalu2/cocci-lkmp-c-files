cocci_test_suite() {
	const char *const *cocci_id/* arch/mips/alchemy/common/clock.c 952 */;
	int cocci_id/* arch/mips/alchemy/common/clock.c 946 */[];
	struct clk_rate_request *cocci_id/* arch/mips/alchemy/common/clock.c 920 */;
	u8 cocci_id/* arch/mips/alchemy/common/clock.c 870 */;
	struct clk_aliastable {
		char *alias;
		char *base;
		int cputype;
	} cocci_id/* arch/mips/alchemy/common/clock.c 87 */[]__initdata;
	unsigned long cocci_id/* arch/mips/alchemy/common/clock.c 822 */;
	struct alchemy_fgcs_clk *cocci_id/* arch/mips/alchemy/common/clock.c 820 */;
	void cocci_id/* arch/mips/alchemy/common/clock.c 820 */;
	const char *const cocci_id/* arch/mips/alchemy/common/clock.c 79 */[];
	unsigned long *cocci_id/* arch/mips/alchemy/common/clock.c 370 */;
	int cocci_id/* arch/mips/alchemy/common/clock.c 370 */;
	long cocci_id/* arch/mips/alchemy/common/clock.c 369 */;
	struct alchemy_fgcs_clk cocci_id/* arch/mips/alchemy/common/clock.c 367 */;
	struct alchemy_fgcs_clk {
		struct clk_hw hw;
		spinlock_t *reglock;
		unsigned long reg;
		int shift;
		int parent;
		int isen;
		int *dt;
	} cocci_id/* arch/mips/alchemy/common/clock.c 358 */;
	void __iomem *cocci_id/* arch/mips/alchemy/common/clock.c 296 */;
	struct clk_init_data cocci_id/* arch/mips/alchemy/common/clock.c 237 */;
	char *cocci_id/* arch/mips/alchemy/common/clock.c 234 */;
	const char *cocci_id/* arch/mips/alchemy/common/clock.c 233 */;
	struct clk __init *cocci_id/* arch/mips/alchemy/common/clock.c 233 */;
	const struct clk_ops cocci_id/* arch/mips/alchemy/common/clock.c 227 */;
	struct alchemy_auxpll_clk *cocci_id/* arch/mips/alchemy/common/clock.c 182 */;
	struct clk_hw *cocci_id/* arch/mips/alchemy/common/clock.c 179 */;
	struct alchemy_auxpll_clk cocci_id/* arch/mips/alchemy/common/clock.c 177 */;
	struct alchemy_auxpll_clk {
		struct clk_hw hw;
		unsigned long reg;
		int maxmult;
	} cocci_id/* arch/mips/alchemy/common/clock.c 172 */;
	void __init cocci_id/* arch/mips/alchemy/common/clock.c 140 */;
	spinlock_t cocci_id/* arch/mips/alchemy/common/clock.c 114 */;
	struct clk *cocci_id/* arch/mips/alchemy/common/clock.c 1043 */;
	struct clk_aliastable *cocci_id/* arch/mips/alchemy/common/clock.c 1042 */;
	int __init cocci_id/* arch/mips/alchemy/common/clock.c 1039 */;
}
