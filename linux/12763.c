cocci_test_suite() {
	struct device *cocci_id/* drivers/iommu/fsl_pamu.c 999 */;
	const struct {
		u32 svr;
		u32 port_id;
	} cocci_id/* drivers/iommu/fsl_pamu.c 976 */[];
	unsigned int cocci_id/* drivers/iommu/fsl_pamu.c 845 */;
	u32 __iomem *cocci_id/* drivers/iommu/fsl_pamu.c 844 */;
	struct ccsr_law __iomem *cocci_id/* drivers/iommu/fsl_pamu.c 842 */;
	void __iomem *cocci_id/* drivers/iommu/fsl_pamu.c 841 */;
	const __be32 *cocci_id/* drivers/iommu/fsl_pamu.c 840 */;
	struct device_node *cocci_id/* drivers/iommu/fsl_pamu.c 839 */;
	u32 cocci_id/* drivers/iommu/fsl_pamu.c 837 */;
	phys_addr_t cocci_id/* drivers/iommu/fsl_pamu.c 837 */;
	int cocci_id/* drivers/iommu/fsl_pamu.c 837 */;
	size_t cocci_id/* drivers/iommu/fsl_pamu.c 837 */;
	struct ccsr_law {
		u32 lawbarh;
		u32 lawbarl;
		u32 lawar;
		u32 reserved;
	} cocci_id/* drivers/iommu/fsl_pamu.c 827 */;
	struct paace *cocci_id/* drivers/iommu/fsl_pamu.c 764 */;
	irqreturn_t cocci_id/* drivers/iommu/fsl_pamu.c 750 */;
	struct pamu_mmap_regs *cocci_id/* drivers/iommu/fsl_pamu.c 672 */;
	struct gen_pool *cocci_id/* drivers/iommu/fsl_pamu.c 67 */;
	const u32 *cocci_id/* drivers/iommu/fsl_pamu.c 511 */;
	u32 *cocci_id/* drivers/iommu/fsl_pamu.c 492 */;
	const struct of_device_id cocci_id/* drivers/iommu/fsl_pamu.c 42 */[];
	bool cocci_id/* drivers/iommu/fsl_pamu.c 33 */;
	struct pamu_isr_data {
		void __iomem *pamu_reg_base;
		unsigned int count;
	} cocci_id/* drivers/iommu/fsl_pamu.c 25 */;
	struct platform_device *cocci_id/* drivers/iommu/fsl_pamu.c 1205 */;
	void cocci_id/* drivers/iommu/fsl_pamu.c 1203 */;
	struct platform_driver cocci_id/* drivers/iommu/fsl_pamu.c 1196 */;
	struct pamu_isr_data cocci_id/* drivers/iommu/fsl_pamu.c 1178 */;
	struct paace cocci_id/* drivers/iommu/fsl_pamu.c 1132 */;
	void *cocci_id/* drivers/iommu/fsl_pamu.c 1101 */;
	unsigned cocci_id/* drivers/iommu/fsl_pamu.c 1018 */;
	struct ome *cocci_id/* drivers/iommu/fsl_pamu.c 1013 */;
	struct page *cocci_id/* drivers/iommu/fsl_pamu.c 1008 */;
	u64 cocci_id/* drivers/iommu/fsl_pamu.c 1007 */;
	struct pamu_isr_data *cocci_id/* drivers/iommu/fsl_pamu.c 1005 */;
	unsigned long cocci_id/* drivers/iommu/fsl_pamu.c 1003 */;
	struct ccsr_guts __iomem *cocci_id/* drivers/iommu/fsl_pamu.c 1001 */;
}
