cocci_test_suite() {
	struct cbe_pmd_regs __iomem *cocci_id/* arch/powerpc/platforms/cell/cbe_regs.c 91 */;
	cpumask_t cocci_id/* arch/powerpc/platforms/cell/cbe_regs.c 50 */;
	cpumask_t cocci_id/* arch/powerpc/platforms/cell/cbe_regs.c 49 */[MAX_CBE];
	struct cbe_thread_map {
		struct device_node *cpu_node;
		struct device_node *be_node;
		struct cbe_regs_map *regs;
		unsigned int thread_id;
		unsigned int cbe_id;
	} cocci_id/* arch/powerpc/platforms/cell/cbe_regs.c 40 */[NR_CPUS];
	struct cbe_regs_map {
		struct device_node *cpu_node;
		struct device_node *be_node;
		struct cbe_pmd_regs __iomem *pmd_regs;
		struct cbe_iic_regs __iomem *iic_regs;
		struct cbe_mic_tm_regs __iomem *mic_tm_regs;
		struct cbe_pmd_shadow_regs pmd_shadow_regs;
	} cocci_id/* arch/powerpc/platforms/cell/cbe_regs.c 29 */[MAX_CBE];
	struct cbe_thread_map *cocci_id/* arch/powerpc/platforms/cell/cbe_regs.c 267 */;
	unsigned int cocci_id/* arch/powerpc/platforms/cell/cbe_regs.c 239 */;
	void cocci_id/* arch/powerpc/platforms/cell/cbe_regs.c 236 */;
	const struct address_prop {
		unsigned long address;
		unsigned int len;
	}__attribute__((packed)) *cocci_id/* arch/powerpc/platforms/cell/cbe_regs.c 214 */;
	struct device_node *cocci_id/* arch/powerpc/platforms/cell/cbe_regs.c 196 */;
	struct cbe_regs_map *cocci_id/* arch/powerpc/platforms/cell/cbe_regs.c 193 */;
	void __init cocci_id/* arch/powerpc/platforms/cell/cbe_regs.c 193 */;
	const phandle *cocci_id/* arch/powerpc/platforms/cell/cbe_regs.c 174 */;
	u32 cocci_id/* arch/powerpc/platforms/cell/cbe_regs.c 155 */;
	int cocci_id/* arch/powerpc/platforms/cell/cbe_regs.c 155 */;
	struct cbe_mic_tm_regs __iomem *cocci_id/* arch/powerpc/platforms/cell/cbe_regs.c 140 */;
	struct cbe_iic_regs __iomem *cocci_id/* arch/powerpc/platforms/cell/cbe_regs.c 124 */;
	struct cbe_pmd_shadow_regs *cocci_id/* arch/powerpc/platforms/cell/cbe_regs.c 108 */;
}
