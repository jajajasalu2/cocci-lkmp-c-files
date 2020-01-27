cocci_test_suite() {
	struct msi_domain_info cocci_id/* drivers/pci/controller/pci-xgene-msi.c 55 */;
	int __init cocci_id/* drivers/pci/controller/pci-xgene-msi.c 539 */;
	struct platform_driver cocci_id/* drivers/pci/controller/pci-xgene-msi.c 530 */;
	struct xgene_msi cocci_id/* drivers/pci/controller/pci-xgene-msi.c 45 */;
	struct resource *cocci_id/* drivers/pci/controller/pci-xgene-msi.c 445 */;
	struct platform_device *cocci_id/* drivers/pci/controller/pci-xgene-msi.c 443 */;
	const struct of_device_id cocci_id/* drivers/pci/controller/pci-xgene-msi.c 438 */[];
	cpumask_var_t cocci_id/* drivers/pci/controller/pci-xgene-msi.c 378 */;
	struct xgene_msi_group *cocci_id/* drivers/pci/controller/pci-xgene-msi.c 377 */;
	enum cpuhp_state cocci_id/* drivers/pci/controller/pci-xgene-msi.c 354 */;
	struct xgene_msi {
		struct device_node *node;
		struct irq_domain *inner_domain;
		struct irq_domain *msi_domain;
		u64 msi_addr;
		void __iomem *msi_regs;
		unsigned long *bitmap;
		struct mutex bitmap_lock;
		struct xgene_msi_group *msi_groups;
		int num_cpus;
	} cocci_id/* drivers/pci/controller/pci-xgene-msi.c 32 */;
	struct irq_chip *cocci_id/* drivers/pci/controller/pci-xgene-msi.c 291 */;
	struct irq_desc *cocci_id/* drivers/pci/controller/pci-xgene-msi.c 289 */;
	struct xgene_msi_group cocci_id/* drivers/pci/controller/pci-xgene-msi.c 281 */;
	long cocci_id/* drivers/pci/controller/pci-xgene-msi.c 272 */;
	struct xgene_msi_group {
		struct xgene_msi *msi;
		int gic_irq;
		u32 msi_grp;
	} cocci_id/* drivers/pci/controller/pci-xgene-msi.c 26 */;
	struct xgene_msi *cocci_id/* drivers/pci/controller/pci-xgene-msi.c 243 */;
	const struct irq_domain_ops cocci_id/* drivers/pci/controller/pci-xgene-msi.c 238 */;
	void *cocci_id/* drivers/pci/controller/pci-xgene-msi.c 195 */;
	struct irq_domain *cocci_id/* drivers/pci/controller/pci-xgene-msi.c 194 */;
	unsigned int cocci_id/* drivers/pci/controller/pci-xgene-msi.c 194 */;
	struct irq_chip cocci_id/* drivers/pci/controller/pci-xgene-msi.c 188 */;
	bool cocci_id/* drivers/pci/controller/pci-xgene-msi.c 173 */;
	const struct cpumask *cocci_id/* drivers/pci/controller/pci-xgene-msi.c 173 */;
	unsigned long cocci_id/* drivers/pci/controller/pci-xgene-msi.c 167 */;
	int cocci_id/* drivers/pci/controller/pci-xgene-msi.c 162 */;
	u64 cocci_id/* drivers/pci/controller/pci-xgene-msi.c 146 */;
	struct msi_msg *cocci_id/* drivers/pci/controller/pci-xgene-msi.c 141 */;
	struct irq_data *cocci_id/* drivers/pci/controller/pci-xgene-msi.c 141 */;
	void cocci_id/* drivers/pci/controller/pci-xgene-msi.c 141 */;
	u32 cocci_id/* drivers/pci/controller/pci-xgene-msi.c 131 */;
}
