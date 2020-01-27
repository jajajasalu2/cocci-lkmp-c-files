cocci_test_suite() {
	unsigned long cocci_id/* arch/arm/mach-omap2/omap-mpuss-lowpower.c 95 */;
	int cocci_id/* arch/arm/mach-omap2/omap-mpuss-lowpower.c 95 */;
	struct powerdomain *cocci_id/* arch/arm/mach-omap2/omap-mpuss-lowpower.c 92 */;
	struct cpu_pm_ops {
		int (*finish_suspend)(unsigned long cpu_state);
		void (*resume)(void);
		void (*scu_prepare)(unsigned int cpu_id,
				    unsigned int cpu_state);
		void (*hotplug_restart)(void);
	} cocci_id/* arch/arm/mach-omap2/omap-mpuss-lowpower.c 84 */;
	struct omap4_cpu_pm_info {
		struct powerdomain *pwrdm;
		void __iomem *scu_sar_addr;
		void __iomem *wkup_sar_addr;
		void __iomem *l2x0_sar_addr;
	} cocci_id/* arch/arm/mach-omap2/omap-mpuss-lowpower.c 67 */;
	void __iomem *cocci_id/* arch/arm/mach-omap2/omap-mpuss-lowpower.c 463 */;
	void __init cocci_id/* arch/arm/mach-omap2/omap-mpuss-lowpower.c 460 */;
	int __init cocci_id/* arch/arm/mach-omap2/omap-mpuss-lowpower.c 356 */;
	struct omap4_cpu_pm_info *cocci_id/* arch/arm/mach-omap2/omap-mpuss-lowpower.c 185 */;
	u32 cocci_id/* arch/arm/mach-omap2/omap-mpuss-lowpower.c 165 */;
	unsigned int cocci_id/* arch/arm/mach-omap2/omap-mpuss-lowpower.c 163 */;
	void cocci_id/* arch/arm/mach-omap2/omap-mpuss-lowpower.c 163 */;
	struct cpu_pm_ops cocci_id/* arch/arm/mach-omap2/omap-mpuss-lowpower.c 107 */;
	__typeof__(struct omap4_cpu_pm_info) cocci_id/* /home/jaskaran/lkmp/coccinelle/standard.h 437 */;
}
