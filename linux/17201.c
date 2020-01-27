cocci_test_suite() {
	struct platform_driver cocci_id/* arch/powerpc/sysdev/fsl_pmc.c 76 */;
	const struct of_device_id cocci_id/* arch/powerpc/sysdev/fsl_pmc.c 70 */[];
	struct platform_device *cocci_id/* arch/powerpc/sysdev/fsl_pmc.c 59 */;
	int cocci_id/* arch/powerpc/sysdev/fsl_pmc.c 59 */;
	const struct platform_suspend_ops cocci_id/* arch/powerpc/sysdev/fsl_pmc.c 54 */;
	suspend_state_t cocci_id/* arch/powerpc/sysdev/fsl_pmc.c 32 */;
	struct pmc_regs __iomem *cocci_id/* arch/powerpc/sysdev/fsl_pmc.c 30 */;
	struct device *cocci_id/* arch/powerpc/sysdev/fsl_pmc.c 29 */;
	struct pmc_regs {
		__be32 devdisr;
		__be32 devdisr2;
		__be32:32;
		__be32:32;
		__be32 pmcsr;
#define PMCSR_SLP (1 << 17)
		} cocci_id/* arch/powerpc/sysdev/fsl_pmc.c 20 */;
}
