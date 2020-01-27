cocci_test_suite() {
	const struct sysc_regbits *cocci_id/* drivers/bus/ti-sysc.c 959 */;
	u32 cocci_id/* drivers/bus/ti-sysc.c 941 */;
	u32 *cocci_id/* drivers/bus/ti-sysc.c 941 */;
	char cocci_id/* drivers/bus/ti-sysc.c 845 */[128];
	char *cocci_id/* drivers/bus/ti-sysc.c 831 */;
	struct sysc {
		struct device *dev;
		u64 module_pa;
		u32 module_size;
		void __iomem *module_va;
		int offsets[SYSC_MAX_REGS];
		struct ti_sysc_module_data *mdata;
		struct clk **clocks;
		const char **clock_roles;
		int nr_clocks;
		struct reset_control *rsts;
		const char *legacy_mode;
		const struct sysc_capabilities *cap;
		struct sysc_config cfg;
		struct ti_sysc_cookie cookie;
		const char *name;
		u32 revision;
		unsigned int enabled:1;
		unsigned int needs_resume:1;
		unsigned int child_needs_resume:1;
		struct delayed_work idle_work;
		void (*clk_enable_quirk)(struct sysc *sysc);
		void (*clk_disable_quirk)(struct sysc *sysc);
		void (*reset_done_quirk)(struct sysc *sysc);
		void (*module_enable_quirk)(struct sysc *sysc);
		void (*module_disable_quirk)(struct sysc *sysc);
	} cocci_id/* drivers/bus/ti-sysc.c 79 */;
	enum sysc_registers cocci_id/* drivers/bus/ti-sysc.c 655 */;
	struct resource *cocci_id/* drivers/bus/ti-sysc.c 644 */;
	void cocci_id/* drivers/bus/ti-sysc.c 630 */;
	struct device_node *cocci_id/* drivers/bus/ti-sysc.c 564 */;
	struct ti_sysc_platform_data *cocci_id/* drivers/bus/ti-sysc.c 486 */;
	const char *constcocci_id/* drivers/bus/ti-sysc.c 42 */[SYSC_MAX_CLOCKS];
	struct property *cocci_id/* drivers/bus/ti-sysc.c 305 */;
	enum sysc_clocks{SYSC_FCK, SYSC_ICK, SYSC_OPTFCK0, SYSC_OPTFCK1, SYSC_OPTFCK2, SYSC_OPTFCK3, SYSC_OPTFCK4, SYSC_OPTFCK5, SYSC_OPTFCK6, SYSC_OPTFCK7, SYSC_MAX_CLOCKS,} cocci_id/* drivers/bus/ti-sysc.c 28 */;
	const char *constcocci_id/* drivers/bus/ti-sysc.c 26 */[];
	void __exit cocci_id/* drivers/bus/ti-sysc.c 2557 */;
	int __init cocci_id/* drivers/bus/ti-sysc.c 2549 */;
	struct platform_driver cocci_id/* drivers/bus/ti-sysc.c 2539 */;
	const struct of_device_id cocci_id/* drivers/bus/ti-sysc.c 2519 */[];
	struct platform_device *cocci_id/* drivers/bus/ti-sysc.c 2388 */;
	struct sysc cocci_id/* drivers/bus/ti-sysc.c 2356 */;
	struct work_struct *cocci_id/* drivers/bus/ti-sysc.c 2352 */;
	const struct sysc_capabilities *cocci_id/* drivers/bus/ti-sysc.c 2339 */;
	struct ti_sysc_module_data *cocci_id/* drivers/bus/ti-sysc.c 2313 */;
	const struct sysc_regbits cocci_id/* drivers/bus/ti-sysc.c 2292 */;
	const struct sysc_capabilities cocci_id/* drivers/bus/ti-sysc.c 2208 */;
	u8 cocci_id/* drivers/bus/ti-sysc.c 2054 */;
	const struct property *cocci_id/* drivers/bus/ti-sysc.c 2019 */;
	const struct sysc_dts_quirk cocci_id/* drivers/bus/ti-sysc.c 2007 */[];
	struct sysc_dts_quirk {
		const char *name;
		u32 mask;
	} cocci_id/* drivers/bus/ti-sysc.c 2002 */;
	struct notifier_block cocci_id/* drivers/bus/ti-sysc.c 1997 */;
	void *cocci_id/* drivers/bus/ti-sysc.c 1973 */;
	unsigned long cocci_id/* drivers/bus/ti-sysc.c 1973 */;
	struct notifier_block *cocci_id/* drivers/bus/ti-sysc.c 1972 */;
	struct clk *cocci_id/* drivers/bus/ti-sysc.c 192 */;
	struct clk_lookup *cocci_id/* drivers/bus/ti-sysc.c 191 */;
	const char *cocci_id/* drivers/bus/ti-sysc.c 186 */;
	int __maybe_unused cocci_id/* drivers/bus/ti-sysc.c 1853 */;
	struct sysc *cocci_id/* drivers/bus/ti-sysc.c 185 */;
	int cocci_id/* drivers/bus/ti-sysc.c 185 */;
	struct device_type cocci_id/* drivers/bus/ti-sysc.c 1823 */;
	struct device *cocci_id/* drivers/bus/ti-sysc.c 1804 */;
	const __be32 *cocci_id/* drivers/bus/ti-sysc.c 1707 */;
	u8 *cocci_id/* drivers/bus/ti-sysc.c 1702 */;
	bool cocci_id/* drivers/bus/ti-sysc.c 1416 */;
	u16 cocci_id/* drivers/bus/ti-sysc.c 1400 */;
	const struct sysc_revision_quirk *cocci_id/* drivers/bus/ti-sysc.c 1334 */;
	const struct sysc_revision_quirk cocci_id/* drivers/bus/ti-sysc.c 1209 */[];
	struct sysc_revision_quirk {
		const char *name;
		u32 base;
		int rev_offset;
		int sysc_offset;
		int syss_offset;
		u32 revision;
		u32 revision_mask;
		u32 quirks;
	} cocci_id/* drivers/bus/ti-sysc.c 1185 */;
	void cocci_id/* drivers/bus/ti-sysc.c 107 */(struct sysc *ddata,
						     struct device_node *np,
						     bool is_child);
}
