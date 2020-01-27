cocci_test_suite() {
	struct cpm2_gpio32_chip {
		struct of_mm_gpio_chip mm_gc;
		spinlock_t lock;
		u32 cpdata;
	} cocci_id/* arch/powerpc/sysdev/cpm_common.c 99 */;
	struct cpm2_ioports {
		u32 dir,par,sor,odr,dat;
		u32 res[3];
	} cocci_id/* arch/powerpc/sysdev/cpm_common.c 94 */;
	u8 __iomem __force *cocci_id/* arch/powerpc/sysdev/cpm_common.c 74 */;
	u32 __iomem __force *cocci_id/* arch/powerpc/sysdev/cpm_common.c 71 */;
	void __init cocci_id/* arch/powerpc/sysdev/cpm_common.c 68 */;
	char cocci_id/* arch/powerpc/sysdev/cpm_common.c 56 */;
	u8 __iomem *cocci_id/* arch/powerpc/sysdev/cpm_common.c 54 */;
	u32 __iomem *cocci_id/* arch/powerpc/sysdev/cpm_common.c 53 */;
	int __init cocci_id/* arch/powerpc/sysdev/cpm_common.c 37 */;
	struct device_node *cocci_id/* arch/powerpc/sysdev/cpm_common.c 192 */;
	struct device *cocci_id/* arch/powerpc/sysdev/cpm_common.c 190 */;
	unsigned long cocci_id/* arch/powerpc/sysdev/cpm_common.c 178 */;
	struct gpio_chip *cocci_id/* arch/powerpc/sysdev/cpm_common.c 173 */;
	unsigned int cocci_id/* arch/powerpc/sysdev/cpm_common.c 173 */;
	struct cpm2_ioports __iomem *cocci_id/* arch/powerpc/sysdev/cpm_common.c 131 */;
	struct cpm2_gpio32_chip *cocci_id/* arch/powerpc/sysdev/cpm_common.c 130 */;
	int cocci_id/* arch/powerpc/sysdev/cpm_common.c 128 */;
	u32 cocci_id/* arch/powerpc/sysdev/cpm_common.c 127 */;
	struct of_mm_gpio_chip *cocci_id/* arch/powerpc/sysdev/cpm_common.c 127 */;
	void cocci_id/* arch/powerpc/sysdev/cpm_common.c 127 */;
	struct cpm2_gpio32_chip cocci_id/* arch/powerpc/sysdev/cpm_common.c 110 */;
}
