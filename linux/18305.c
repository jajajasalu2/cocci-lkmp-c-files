cocci_test_suite() {
	struct imx6_pm_socdata {
		u32 ddr_type;
		const char *mmdc_compat;
		const char *src_compat;
		const char *iomuxc_compat;
		const char *gpc_compat;
		const char *pl310_compat;
		const u32 mmdc_io_num;
		const u32 *mmdc_io_offset;
	} cocci_id/* arch/arm/mach-imx/pm-imx6.c 84 */;
	struct imx6_pm_base {
		phys_addr_t pbase;
		void __iomem *vbase;
	} cocci_id/* arch/arm/mach-imx/pm-imx6.c 79 */;
	struct device_node *cocci_id/* arch/arm/mach-imx/pm-imx6.c 641 */;
	const char *cocci_id/* arch/arm/mach-imx/pm-imx6.c 639 */;
	void __init cocci_id/* arch/arm/mach-imx/pm-imx6.c 639 */;
	void (*cocci_id/* arch/arm/mach-imx/pm-imx6.c 63 */)(void __iomem *ocram_vbase);
	void __iomem *cocci_id/* arch/arm/mach-imx/pm-imx6.c 61 */;
	int cocci_id/* arch/arm/mach-imx/pm-imx6.c 593 */;
	struct regmap *cocci_id/* arch/arm/mach-imx/pm-imx6.c 592 */;
	const struct imx6_pm_socdata *cocci_id/* arch/arm/mach-imx/pm-imx6.c 589 */;
	const u32 *cocci_id/* arch/arm/mach-imx/pm-imx6.c 470 */;
	struct gen_pool *cocci_id/* arch/arm/mach-imx/pm-imx6.c 467 */;
	struct platform_device *cocci_id/* arch/arm/mach-imx/pm-imx6.c 465 */;
	phys_addr_t cocci_id/* arch/arm/mach-imx/pm-imx6.c 463 */;
	struct resource cocci_id/* arch/arm/mach-imx/pm-imx6.c 440 */;
	struct imx6_pm_base *cocci_id/* arch/arm/mach-imx/pm-imx6.c 436 */;
	int __init cocci_id/* arch/arm/mach-imx/pm-imx6.c 436 */;
	const struct platform_suspend_ops cocci_id/* arch/arm/mach-imx/pm-imx6.c 431 */;
	suspend_state_t cocci_id/* arch/arm/mach-imx/pm-imx6.c 380 */;
	struct imx6_cpu_pm_info *cocci_id/* arch/arm/mach-imx/pm-imx6.c 371 */;
	unsigned long cocci_id/* arch/arm/mach-imx/pm-imx6.c 360 */;
	enum mxc_cpu_pwr_mode cocci_id/* arch/arm/mach-imx/pm-imx6.c 291 */;
	u32 cocci_id/* arch/arm/mach-imx/pm-imx6.c 243 */;
	bool cocci_id/* arch/arm/mach-imx/pm-imx6.c 241 */;
	void cocci_id/* arch/arm/mach-imx/pm-imx6.c 241 */;
	struct imx6_cpu_pm_info {
		phys_addr_t pbase;
		phys_addr_t resume_addr;
		u32 ddr_type;
		u32 pm_info_size;
		struct imx6_pm_base mmdc_base;
		struct imx6_pm_base src_base;
		struct imx6_pm_base iomuxc_base;
		struct imx6_pm_base ccm_base;
		struct imx6_pm_base gpc_base;
		struct imx6_pm_base l2_base;
		u32 mmdc_io_num;
		u32 mmdc_io_val[MX6_MAX_MMDC_IO_NUM][2];
	}__aligned(8) cocci_id/* arch/arm/mach-imx/pm-imx6.c 216 */;
	const struct imx6_pm_socdata cocci_id/* arch/arm/mach-imx/pm-imx6.c 159 */;
	const u32 cocci_id/* arch/arm/mach-imx/pm-imx6.c 107 */[]__initconst;
}
