cocci_test_suite() {
	enum{MSTP030, MSTP029, MSTP026, MSTP025, MSTP024, MSTP023, MSTP022, MSTP021, MSTP019, MSTP016, MSTP015, MSTP014, MSTP012, MSTP011, MSTP010, MSTP009, MSTP008, MSTP007, MSTP115, MSTP114, MSTP111, MSTP109, MSTP108, MSTP107, MSTP106, MSTP103, MSTP100, MSTP331, MSTP330, MSTP323, MSTP322, MSTP321, MSTP320, MSTP319, MSTP318, MSTP317, MSTP316, MSTP315, MSTP314, MSTP313, MSTP312, MSTP304, MSTP303, MSTP302, MSTP301, MSTP300, MSTP_NR,} cocci_id/* arch/sh/kernel/cpu/sh4a/clock-sh7734.c 85 */;
	struct clk cocci_id/* arch/sh/kernel/cpu/sh4a/clock-sh7734.c 72 */[DIV4_NR];
	enum{DIV4_I, DIV4_S, DIV4_B, DIV4_M, DIV4_S1, DIV4_P, DIV4_NR,} cocci_id/* arch/sh/kernel/cpu/sh4a/clock-sh7734.c 67 */;
	struct clk_div4_table cocci_id/* arch/sh/kernel/cpu/sh4a/clock-sh7734.c 63 */;
	struct clk_div_mult_table cocci_id/* arch/sh/kernel/cpu/sh4a/clock-sh7734.c 56 */;
	int cocci_id/* arch/sh/kernel/cpu/sh4a/clock-sh7734.c 54 */[];
	struct clk *cocci_id/* arch/sh/kernel/cpu/sh4a/clock-sh7734.c 48 */[];
	struct sh_clk_ops cocci_id/* arch/sh/kernel/cpu/sh4a/clock-sh7734.c 38 */;
	u32 cocci_id/* arch/sh/kernel/cpu/sh4a/clock-sh7734.c 30 */;
	struct clk *cocci_id/* arch/sh/kernel/cpu/sh4a/clock-sh7734.c 27 */;
	unsigned long cocci_id/* arch/sh/kernel/cpu/sh4a/clock-sh7734.c 27 */;
	int cocci_id/* arch/sh/kernel/cpu/sh4a/clock-sh7734.c 241 */;
	int __init cocci_id/* arch/sh/kernel/cpu/sh4a/clock-sh7734.c 239 */;
	void cocci_id/* arch/sh/kernel/cpu/sh4a/clock-sh7734.c 239 */;
	struct clk cocci_id/* arch/sh/kernel/cpu/sh4a/clock-sh7734.c 19 */;
	struct clk_lookup cocci_id/* arch/sh/kernel/cpu/sh4a/clock-sh7734.c 178 */[];
	struct clk cocci_id/* arch/sh/kernel/cpu/sh4a/clock-sh7734.c 124 */[MSTP_NR];
}
