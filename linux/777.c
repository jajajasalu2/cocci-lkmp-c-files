cocci_test_suite() {
	struct pci_driver cocci_id/* drivers/pci/controller/vmd.c 877 */;
	struct vmd_dev {
		struct pci_dev *dev;
		spinlock_t cfg_lock;
		char __iomem *cfgbar;
		int msix_count;
		struct vmd_irq_list *irqs;
		struct pci_sysdata sysdata;
		struct resource resources[3];
		struct irq_domain *irq_domain;
		struct pci_bus *bus;
		u8 busn_start;
		struct dma_map_ops dma_ops;
		struct dma_domain dma_domain;
	} cocci_id/* drivers/pci/controller/vmd.c 87 */;
	const struct pci_device_id cocci_id/* drivers/pci/controller/vmd.c 866 */[];
	struct vmd_irq_list {
		struct list_head irq_list;
		struct srcu_struct srcu;
		unsigned int count;
	} cocci_id/* drivers/pci/controller/vmd.c 81 */;
	const struct pci_device_id *cocci_id/* drivers/pci/controller/vmd.c 747 */;
	irqreturn_t cocci_id/* drivers/pci/controller/vmd.c 733 */;
	struct vmd_irq {
		struct list_head node;
		struct vmd_irq_list *irq;
		bool enabled;
		unsigned int virq;
	} cocci_id/* drivers/pci/controller/vmd.c 67 */;
	struct resource cocci_id/* drivers/pci/controller/vmd.c 632 */;
	u16 cocci_id/* drivers/pci/controller/vmd.c 608 */;
	void __iomem *cocci_id/* drivers/pci/controller/vmd.c 590 */;
	resource_size_t cocci_id/* drivers/pci/controller/vmd.c 571 */;
	resource_size_t cocci_id/* drivers/pci/controller/vmd.c 570 */[2];
	u32 cocci_id/* drivers/pci/controller/vmd.c 567 */;
	struct resource *cocci_id/* drivers/pci/controller/vmd.c 566 */;
	struct fwnode_handle *cocci_id/* drivers/pci/controller/vmd.c 565 */;
	struct pci_sysdata *cocci_id/* drivers/pci/controller/vmd.c 564 */;
	void cocci_id/* drivers/pci/controller/vmd.c 534 */;
	struct pci_ops cocci_id/* drivers/pci/controller/vmd.c 529 */;
	u32 *cocci_id/* drivers/pci/controller/vmd.c 462 */;
	int cocci_id/* drivers/pci/controller/vmd.c 444 */;
	struct pci_bus *cocci_id/* drivers/pci/controller/vmd.c 443 */;
	char __iomem *cocci_id/* drivers/pci/controller/vmd.c 443 */;
	struct dma_domain *cocci_id/* drivers/pci/controller/vmd.c 418 */;
	struct dma_map_ops *cocci_id/* drivers/pci/controller/vmd.c 417 */;
	const struct dma_map_ops *cocci_id/* drivers/pci/controller/vmd.c 416 */;
	u64 cocci_id/* drivers/pci/controller/vmd.c 390 */;
	enum vmd_features{VMD_FEAT_HAS_MEMBAR_SHADOW=(1 << 0), VMD_FEAT_HAS_BUS_RESTRICTIONS=(1 << 1),} cocci_id/* drivers/pci/controller/vmd.c 37 */;
	struct scatterlist *cocci_id/* drivers/pci/controller/vmd.c 354 */;
	enum dma_data_direction cocci_id/* drivers/pci/controller/vmd.c 341 */;
	struct page *cocci_id/* drivers/pci/controller/vmd.c 339 */;
	struct sg_table *cocci_id/* drivers/pci/controller/vmd.c 331 */;
	struct vm_area_struct *cocci_id/* drivers/pci/controller/vmd.c 323 */;
	dma_addr_t cocci_id/* drivers/pci/controller/vmd.c 318 */;
	gfp_t cocci_id/* drivers/pci/controller/vmd.c 312 */;
	unsigned long cocci_id/* drivers/pci/controller/vmd.c 312 */;
	dma_addr_t *cocci_id/* drivers/pci/controller/vmd.c 311 */;
	void *cocci_id/* drivers/pci/controller/vmd.c 311 */;
	size_t cocci_id/* drivers/pci/controller/vmd.c 311 */;
	struct pci_dev *cocci_id/* drivers/pci/controller/vmd.c 305 */;
	struct device *cocci_id/* drivers/pci/controller/vmd.c 303 */;
	struct msi_domain_info cocci_id/* drivers/pci/controller/vmd.c 291 */;
	struct msi_domain_ops cocci_id/* drivers/pci/controller/vmd.c 283 */;
	struct irq_domain *cocci_id/* drivers/pci/controller/vmd.c 249 */;
	struct msi_desc *cocci_id/* drivers/pci/controller/vmd.c 230 */;
	msi_alloc_info_t *cocci_id/* drivers/pci/controller/vmd.c 188 */;
	irq_hw_number_t cocci_id/* drivers/pci/controller/vmd.c 187 */;
	struct msi_domain_info *cocci_id/* drivers/pci/controller/vmd.c 187 */;
	struct irq_chip cocci_id/* drivers/pci/controller/vmd.c 179 */;
	bool cocci_id/* drivers/pci/controller/vmd.c 174 */;
	const struct cpumask *cocci_id/* drivers/pci/controller/vmd.c 174 */;
	struct vmd_irq *cocci_id/* drivers/pci/controller/vmd.c 127 */;
	struct msi_msg *cocci_id/* drivers/pci/controller/vmd.c 125 */;
	struct irq_data *cocci_id/* drivers/pci/controller/vmd.c 125 */;
	struct vmd_irq_list *cocci_id/* drivers/pci/controller/vmd.c 112 */;
	struct vmd_dev *cocci_id/* drivers/pci/controller/vmd.c 111 */;
	unsigned int cocci_id/* drivers/pci/controller/vmd.c 111 */;
	struct vmd_dev cocci_id/* drivers/pci/controller/vmd.c 108 */;
}