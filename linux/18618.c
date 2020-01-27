cocci_test_suite() {
	struct omap_hwmod_opt_clk *cocci_id/* arch/arm/mach-omap2/omap_hwmod.c 954 */;
	void cocci_id/* arch/arm/mach-omap2/omap_hwmod.c 952 */;
	struct clk *cocci_id/* arch/arm/mach-omap2/omap_hwmod.c 871 */;
	struct of_phandle_args cocci_id/* arch/arm/mach-omap2/omap_hwmod.c 790 */;
	struct clkctrl_provider *cocci_id/* arch/arm/mach-omap2/omap_hwmod.c 771 */;
	u64 cocci_id/* arch/arm/mach-omap2/omap_hwmod.c 708 */;
	const __be32 *cocci_id/* arch/arm/mach-omap2/omap_hwmod.c 706 */;
	const struct of_device_id cocci_id/* arch/arm/mach-omap2/omap_hwmod.c 699 */[]__initconst;
	struct clockdomain *cocci_id/* arch/arm/mach-omap2/omap_hwmod.c 656 */;
	struct omap_hwmod *cocci_id/* arch/arm/mach-omap2/omap_hwmod.c 654 */;
	int cocci_id/* arch/arm/mach-omap2/omap_hwmod.c 654 */;
	struct clk_hw_omap *cocci_id/* arch/arm/mach-omap2/omap_hwmod.c 628 */;
	struct omap_hwmod_class_sysconfig *cocci_id/* arch/arm/mach-omap2/omap_hwmod.c 493 */;
	u32 cocci_id/* arch/arm/mach-omap2/omap_hwmod.c 461 */;
	u32 *cocci_id/* arch/arm/mach-omap2/omap_hwmod.c 459 */;
	struct powerdomain *cocci_id/* arch/arm/mach-omap2/omap_hwmod.c 3987 */;
	int (*cocci_id/* arch/arm/mach-omap2/omap_hwmod.c 3904 */)(struct omap_hwmod *oh,
								   void *user);
	struct ti_sysc_cookie *cocci_id/* arch/arm/mach-omap2/omap_hwmod.c 3555 */;
	const struct omap_hwmod_reset *cocci_id/* arch/arm/mach-omap2/omap_hwmod.c 3514 */;
	const struct omap_hwmod_reset cocci_id/* arch/arm/mach-omap2/omap_hwmod.c 3500 */[];
	unsigned long cocci_id/* arch/arm/mach-omap2/omap_hwmod.c 3433 */;
	struct omap_hwmod_class *cocci_id/* arch/arm/mach-omap2/omap_hwmod.c 3430 */;
	s32 cocci_id/* arch/arm/mach-omap2/omap_hwmod.c 3425 */;
	struct sysc_regbits *cocci_id/* arch/arm/mach-omap2/omap_hwmod.c 3423 */;
	const struct ti_sysc_module_data *cocci_id/* arch/arm/mach-omap2/omap_hwmod.c 3422 */;
	struct device *cocci_id/* arch/arm/mach-omap2/omap_hwmod.c 3421 */;
	s32 *cocci_id/* arch/arm/mach-omap2/omap_hwmod.c 3228 */;
	struct sysc_regbits **cocci_id/* arch/arm/mach-omap2/omap_hwmod.c 3174 */;
	const struct sysc_regbits *cocci_id/* arch/arm/mach-omap2/omap_hwmod.c 3139 */;
	s8 cocci_id/* arch/arm/mach-omap2/omap_hwmod.c 3120 */;
	void __init cocci_id/* arch/arm/mach-omap2/omap_hwmod.c 3079 */;
	struct omap_hwmod_ocp_if **cocci_id/* arch/arm/mach-omap2/omap_hwmod.c 3045 */;
	int (*cocci_id/* arch/arm/mach-omap2/omap_hwmod.c 3016 */)(struct omap_hwmod *oh,
								   void *data);
	u16 cocci_id/* arch/arm/mach-omap2/omap_hwmod.c 2937 */;
	struct omap_hwmod_rst_info *cocci_id/* arch/arm/mach-omap2/omap_hwmod.c 2926 */;
	struct omap_hwmod_ocp_if *cocci_id/* arch/arm/mach-omap2/omap_hwmod.c 2648 */;
	struct omap_hwmod_soc_ops cocci_id/* arch/arm/mach-omap2/omap_hwmod.c 248 */;
	struct device_node *cocci_id/* arch/arm/mach-omap2/omap_hwmod.c 2361 */;
	void *cocci_id/* arch/arm/mach-omap2/omap_hwmod.c 2358 */;
	int __init cocci_id/* arch/arm/mach-omap2/omap_hwmod.c 2358 */;
	struct omap_hwmod_soc_ops {
		void (*enable_module)(struct omap_hwmod *oh);
		int (*disable_module)(struct omap_hwmod *oh);
		int (*wait_target_ready)(struct omap_hwmod *oh);
		int (*assert_hardreset)(struct omap_hwmod *oh,
					struct omap_hwmod_rst_info *ohri);
		int (*deassert_hardreset)(struct omap_hwmod *oh,
					  struct omap_hwmod_rst_info *ohri);
		int (*is_hardreset_asserted)(struct omap_hwmod *oh,
					     struct omap_hwmod_rst_info *ohri);
		int (*init_clkdm)(struct omap_hwmod *oh);
		void (*update_context_lost)(struct omap_hwmod *oh);
		int (*get_context_lost)(struct omap_hwmod *oh);
		int (*disable_direct_prcm)(struct omap_hwmod *oh);
		u32 (*xlate_clkctrl)(struct omap_hwmod *oh);
	} cocci_id/* arch/arm/mach-omap2/omap_hwmod.c 230 */;
	struct resource cocci_id/* arch/arm/mach-omap2/omap_hwmod.c 2292 */;
	void __iomem *cocci_id/* arch/arm/mach-omap2/omap_hwmod.c 2291 */;
	struct property *cocci_id/* arch/arm/mach-omap2/omap_hwmod.c 2211 */;
	struct resource *cocci_id/* arch/arm/mach-omap2/omap_hwmod.c 2181 */;
	struct omap_hwmod_reset {
		const char *match;
		int len;
		int (*reset)(struct omap_hwmod *oh);
	} cocci_id/* arch/arm/mach-omap2/omap_hwmod.c 215 */;
	struct device_node **cocci_id/* arch/arm/mach-omap2/omap_hwmod.c 2135 */;
	int *cocci_id/* arch/arm/mach-omap2/omap_hwmod.c 2134 */;
	struct clkctrl_provider {
		int num_addrs;
		u32 *addr;
		u32 *size;
		struct device_node *node;
		struct list_head link;
	} cocci_id/* arch/arm/mach-omap2/omap_hwmod.c 197 */;
	bool cocci_id/* arch/arm/mach-omap2/omap_hwmod.c 1599 */;
	struct omap_hwmod_rst_info cocci_id/* arch/arm/mach-omap2/omap_hwmod.c 1472 */;
	const char *cocci_id/* arch/arm/mach-omap2/omap_hwmod.c 1470 */;
	u8 cocci_id/* arch/arm/mach-omap2/omap_hwmod.c 1171 */;
}
