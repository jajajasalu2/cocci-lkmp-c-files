cocci_test_suite() {
	struct pmc_type {
		int has_deep_sleep;
	} cocci_id/* arch/powerpc/platforms/83xx/suspend.c 99 */;
	struct mpc83xx_saved {
		u32 sicrl;
		u32 sicrh;
		u32 sccr;
	} cocci_id/* arch/powerpc/platforms/83xx/suspend.c 93 */;
	struct mpc83xx_syscr {
		__be32 sgprl;
		__be32 sgprh;
		__be32 spridr;
		__be32:32;
		__be32 spcr;
		__be32 sicrl;
		__be32 sicrh;
	} cocci_id/* arch/powerpc/platforms/83xx/suspend.c 83 */;
	struct mpc83xx_clock {
		u32 spmr;
		u32 occr;
		u32 sccr;
	} cocci_id/* arch/powerpc/platforms/83xx/suspend.c 77 */;
	struct mpc83xx_rcw {
		u32 rcwlr;
		u32 rcwhr;
	} cocci_id/* arch/powerpc/platforms/83xx/suspend.c 72 */;
	struct platform_driver cocci_id/* arch/powerpc/platforms/83xx/suspend.c 433 */;
	struct mpc83xx_pmc {
		u32 config;
#define PMCCR_DLPEN 2
#define PMCCR_SLPEN 1
		u32 event;
		u32 mask;
#define PMCER_GPIO 0x100
#define PMCER_PCI 0x080
#define PMCER_USB 0x040
#define PMCER_ETSEC1 0x020
#define PMCER_ETSEC2 0x010
#define PMCER_TIMER 0x008
#define PMCER_INT1 0x004
#define PMCER_INT2 0x002
#define PMCER_PMCI 0x001
#define PMCER_ALL 0x1FF
		u32 config1;
#define PMCCR1_USE_STATE 0x80000000
#define PMCCR1_PME_EN 0x00000080
#define PMCCR1_ASSERT_PME 0x00000040
#define PMCCR1_POWER_OFF 0x00000020
		u32 config2;
	} cocci_id/* arch/powerpc/platforms/83xx/suspend.c 42 */;
	struct pmc_type cocci_id/* arch/powerpc/platforms/83xx/suspend.c 412 */[];
	void cocci_id/* arch/powerpc/platforms/83xx/suspend.c 40 */(phys_addr_t immrbase);
	const struct pmc_type *cocci_id/* arch/powerpc/platforms/83xx/suspend.c 328 */;
	struct resource cocci_id/* arch/powerpc/platforms/83xx/suspend.c 327 */;
	struct device_node *cocci_id/* arch/powerpc/platforms/83xx/suspend.c 326 */;
	const struct of_device_id *cocci_id/* arch/powerpc/platforms/83xx/suspend.c 325 */;
	const struct of_device_id cocci_id/* arch/powerpc/platforms/83xx/suspend.c 322 */[];
	const struct platform_suspend_ops cocci_id/* arch/powerpc/platforms/83xx/suspend.c 315 */;
	struct mpc83xx_rcw cocci_id/* arch/powerpc/platforms/83xx/suspend.c 304 */;
	struct mpc83xx_rcw __iomem *cocci_id/* arch/powerpc/platforms/83xx/suspend.c 300 */;
	void *cocci_id/* arch/powerpc/platforms/83xx/suspend.c 263 */;
	int cocci_id/* arch/powerpc/platforms/83xx/suspend.c 263 */;
	suspend_state_t cocci_id/* arch/powerpc/platforms/83xx/suspend.c 245 */;
	irqreturn_t cocci_id/* arch/powerpc/platforms/83xx/suspend.c 144 */;
	u32 cocci_id/* arch/powerpc/platforms/83xx/suspend.c 123 */;
	void cocci_id/* arch/powerpc/platforms/83xx/suspend.c 115 */;
	phys_addr_t cocci_id/* arch/powerpc/platforms/83xx/suspend.c 111 */;
	struct mpc83xx_saved cocci_id/* arch/powerpc/platforms/83xx/suspend.c 109 */;
	struct mpc83xx_syscr __iomem *cocci_id/* arch/powerpc/platforms/83xx/suspend.c 108 */;
	struct mpc83xx_clock __iomem *cocci_id/* arch/powerpc/platforms/83xx/suspend.c 107 */;
	struct mpc83xx_pmc __iomem *cocci_id/* arch/powerpc/platforms/83xx/suspend.c 106 */;
	struct platform_device *cocci_id/* arch/powerpc/platforms/83xx/suspend.c 103 */;
}
