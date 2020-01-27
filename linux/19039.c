cocci_test_suite() {
	struct clk cocci_id/* arch/arm/mach-ep93xx/clock.c 98 */;
	int __init cocci_id/* arch/arm/mach-ep93xx/clock.c 542 */;
	void __init cocci_id/* arch/arm/mach-ep93xx/clock.c 526 */;
	unsigned long long cocci_id/* arch/arm/mach-ep93xx/clock.c 513 */;
	char cocci_id/* arch/arm/mach-ep93xx/clock.c 504 */[];
	long cocci_id/* arch/arm/mach-ep93xx/clock.c 483 */;
	unsigned cocci_id/* arch/arm/mach-ep93xx/clock.c 455 */;
	int cocci_id/* arch/arm/mach-ep93xx/clock.c 43 */(struct clk *clk,
							  unsigned long rate);
	unsigned long cocci_id/* arch/arm/mach-ep93xx/clock.c 40 */(struct clk *clk);
	int *cocci_id/* arch/arm/mach-ep93xx/clock.c 360 */;
	unsigned long cocci_id/* arch/arm/mach-ep93xx/clock.c 359 */;
	int cocci_id/* arch/arm/mach-ep93xx/clock.c 359 */;
	u32 cocci_id/* arch/arm/mach-ep93xx/clock.c 282 */;
	struct clk *cocci_id/* arch/arm/mach-ep93xx/clock.c 278 */;
	void cocci_id/* arch/arm/mach-ep93xx/clock.c 278 */;
	struct clk {
		struct clk *parent;
		unsigned long rate;
		int users;
		int sw_locked;
		void __iomem *enable_reg;
		u32 enable_mask;
		unsigned long (*get_rate)(struct clk *clk);
		int (*set_rate)(struct clk *clk, unsigned long rate);
	} cocci_id/* arch/arm/mach-ep93xx/clock.c 27 */;
	struct clk_lookup cocci_id/* arch/arm/mach-ep93xx/clock.c 209 */[];
}
