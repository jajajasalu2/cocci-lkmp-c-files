cocci_test_suite() {
	struct device_node *cocci_id/* arch/arm/mach-sunxi/mc_smp.c 90 */;
	bool cocci_id/* arch/arm/mach-sunxi/mc_smp.c 86 */;
	void cocci_id/* arch/arm/mach-sunxi/mc_smp.c 85 */(void);
	void __iomem *cocci_id/* arch/arm/mach-sunxi/mc_smp.c 79 */;
	struct resource cocci_id/* arch/arm/mach-sunxi/mc_smp.c 784 */;
	struct sunxi_mc_smp_nodes cocci_id/* arch/arm/mach-sunxi/mc_smp.c 782 */;
	const struct sunxi_mc_smp_data cocci_id/* arch/arm/mach-sunxi/mc_smp.c 768 */[]__initconst;
	struct sunxi_mc_smp_nodes *cocci_id/* arch/arm/mach-sunxi/mc_smp.c 742 */;
	void __init cocci_id/* arch/arm/mach-sunxi/mc_smp.c 707 */;
	struct sunxi_mc_smp_data {
		const char *enable_method;
		int (*get_smp_nodes)(struct sunxi_mc_smp_nodes *nodes);
		bool is_a83t;
	} cocci_id/* arch/arm/mach-sunxi/mc_smp.c 701 */;
	struct sunxi_mc_smp_nodes {
		struct device_node *prcm_node;
		struct device_node *cpucfg_node;
		struct device_node *sram_node;
		struct device_node *r_cpucfg_node;
	} cocci_id/* arch/arm/mach-sunxi/mc_smp.c 693 */;
	unsigned long cocci_id/* arch/arm/mach-sunxi/mc_smp.c 659 */;
	phys_reset_t cocci_id/* arch/arm/mach-sunxi/mc_smp.c 654 */;
	unsigned long __unused cocci_id/* arch/arm/mach-sunxi/mc_smp.c 652 */;
	int __init cocci_id/* arch/arm/mach-sunxi/mc_smp.c 652 */;
	typeof(cpu_reset) cocci_id/* arch/arm/mach-sunxi/mc_smp.c 650 */;
	bool __init cocci_id/* arch/arm/mach-sunxi/mc_smp.c 629 */;
	const struct smp_operations cocci_id/* arch/arm/mach-sunxi/mc_smp.c 619 */;
	int cocci_id/* arch/arm/mach-sunxi/mc_smp.c 505 */;
	u32 cocci_id/* arch/arm/mach-sunxi/mc_smp.c 432 */;
	unsigned int cocci_id/* arch/arm/mach-sunxi/mc_smp.c 431 */;
	void cocci_id/* arch/arm/mach-sunxi/mc_smp.c 429 */;
	struct task_struct *cocci_id/* arch/arm/mach-sunxi/mc_smp.c 392 */;
	int cocci_id/* arch/arm/mach-sunxi/mc_smp.c 370 */[SUNXI_NR_CLUSTERS][SUNXI_CPUS_PER_CLUSTER];
}
