cocci_test_suite() {
	const struct exynos_wkup_irq cocci_id/* arch/arm/mach-exynos/suspend.c 79 */[];
	struct exynos_pm_state cocci_id/* arch/arm/mach-exynos/suspend.c 71 */;
	const struct exynos_pm_data *cocci_id/* arch/arm/mach-exynos/suspend.c 677 */;
	struct device_node *cocci_id/* arch/arm/mach-exynos/suspend.c 661 */;
	const struct of_device_id *cocci_id/* arch/arm/mach-exynos/suspend.c 660 */;
	void __init cocci_id/* arch/arm/mach-exynos/suspend.c 658 */;
	struct syscore_ops cocci_id/* arch/arm/mach-exynos/suspend.c 656 */;
	const struct of_device_id cocci_id/* arch/arm/mach-exynos/suspend.c 636 */[]__initconst;
	struct exynos_pm_state {
		int cpu_state;
		unsigned int pmu_spare3;
		void __iomem *sysram_base;
		phys_addr_t sysram_phys;
		bool secure_firmware;
	} cocci_id/* arch/arm/mach-exynos/suspend.c 62 */;
	const struct exynos_pm_data cocci_id/* arch/arm/mach-exynos/suspend.c 599 */;
	const struct platform_suspend_ops cocci_id/* arch/arm/mach-exynos/suspend.c 592 */;
	suspend_state_t cocci_id/* arch/arm/mach-exynos/suspend.c 524 */;
	struct exynos_pm_data {
		const struct exynos_wkup_irq *wkup_irq;
		unsigned int wake_disable_mask;
		void (*pm_prepare)(void);
		void (*pm_resume_prepare)(void);
		void (*pm_resume)(void);
		int (*pm_suspend)(void);
		int (*cpu_suspend)(unsigned long);
	} cocci_id/* arch/arm/mach-exynos/suspend.c 50 */;
	struct exynos_wkup_irq {
		unsigned int hwirq;
		u32 mask;
	} cocci_id/* arch/arm/mach-exynos/suspend.c 45 */;
	u32 cocci_id/* arch/arm/mach-exynos/suspend.c 434 */;
	unsigned int cocci_id/* arch/arm/mach-exynos/suspend.c 313 */;
	void cocci_id/* arch/arm/mach-exynos/suspend.c 311 */;
	unsigned long cocci_id/* arch/arm/mach-exynos/suspend.c 258 */;
	int cocci_id/* arch/arm/mach-exynos/suspend.c 258 */;
	int __init cocci_id/* arch/arm/mach-exynos/suspend.c 189 */;
	const struct irq_domain_ops cocci_id/* arch/arm/mach-exynos/suspend.c 183 */;
	irq_hw_number_t cocci_id/* arch/arm/mach-exynos/suspend.c 163 */;
	struct irq_fwspec cocci_id/* arch/arm/mach-exynos/suspend.c 162 */;
	struct irq_fwspec *cocci_id/* arch/arm/mach-exynos/suspend.c 161 */;
	void *cocci_id/* arch/arm/mach-exynos/suspend.c 159 */;
	struct irq_domain *cocci_id/* arch/arm/mach-exynos/suspend.c 157 */;
	unsigned int *cocci_id/* arch/arm/mach-exynos/suspend.c 139 */;
	unsigned long *cocci_id/* arch/arm/mach-exynos/suspend.c 138 */;
	struct irq_chip cocci_id/* arch/arm/mach-exynos/suspend.c 124 */;
	const struct exynos_wkup_irq *cocci_id/* arch/arm/mach-exynos/suspend.c 104 */;
	struct irq_data *cocci_id/* arch/arm/mach-exynos/suspend.c 102 */;
}
