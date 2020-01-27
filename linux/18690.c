cocci_test_suite() {
	struct power_state *cocci_id/* arch/arm/mach-omap2/pm44xx.c 54 */;
	u32 cocci_id/* arch/arm/mach-omap2/pm44xx.c 47 */;
	struct static_dep_map {
		const char *from;
		const char *to;
	} cocci_id/* arch/arm/mach-omap2/pm44xx.c 42 */;
	struct power_state {
		struct powerdomain *pwrdm;
		u32 next_state;
		u32 next_logic_state;
#ifdef CONFIG_SUSPEND
		u32 saved_state;
		u32 saved_logic_state;
#endif
		struct list_head node;
	} cocci_id/* arch/arm/mach-omap2/pm44xx.c 26 */;
	int cocci_id/* arch/arm/mach-omap2/pm44xx.c 244 */;
	int __init cocci_id/* arch/arm/mach-omap2/pm44xx.c 242 */;
	void cocci_id/* arch/arm/mach-omap2/pm44xx.c 242 */;
	u16 cocci_id/* arch/arm/mach-omap2/pm44xx.c 24 */;
	struct clockdomain *cocci_id/* arch/arm/mach-omap2/pm44xx.c 193 */;
	const struct static_dep_map *cocci_id/* arch/arm/mach-omap2/pm44xx.c 190 */;
	const struct static_dep_map cocci_id/* arch/arm/mach-omap2/pm44xx.c 172 */[];
	struct power_state cocci_id/* arch/arm/mach-omap2/pm44xx.c 135 */;
	struct powerdomain *cocci_id/* arch/arm/mach-omap2/pm44xx.c 113 */;
	void *cocci_id/* arch/arm/mach-omap2/pm44xx.c 113 */;
}
