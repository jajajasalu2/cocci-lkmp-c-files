cocci_test_suite() {
	int cocci_id/* arch/powerpc/platforms/cell/axon_msi.c 97 */;
	u32 cocci_id/* arch/powerpc/platforms/cell/axon_msi.c 96 */;
	struct axon_msic *cocci_id/* arch/powerpc/platforms/cell/axon_msi.c 95 */;
	struct irq_chip *cocci_id/* arch/powerpc/platforms/cell/axon_msi.c 94 */;
	struct irq_desc *cocci_id/* arch/powerpc/platforms/cell/axon_msi.c 92 */;
	void cocci_id/* arch/powerpc/platforms/cell/axon_msi.c 92 */;
	struct device_node *cocci_id/* arch/powerpc/platforms/cell/axon_msi.c 80 */;
	void cocci_id/* arch/powerpc/platforms/cell/axon_msi.c 78 */(struct device_node *dn,
								     struct axon_msic *msic);
	struct axon_msic {
		struct irq_domain *irq_domain;
		__le32 *fifo_virt;
		dma_addr_t fifo_phys;
		dcr_host_t dcr_host;
		u32 read_offset;
#ifdef DEBUG
		u32 __iomem *trigger;
#endif
	} cocci_id/* arch/powerpc/platforms/cell/axon_msi.c 66 */;
	u64 cocci_id/* arch/powerpc/platforms/cell/axon_msi.c 467 */;
	char cocci_id/* arch/powerpc/platforms/cell/axon_msi.c 466 */[8];
	u64 *cocci_id/* arch/powerpc/platforms/cell/axon_msi.c 456 */;
	void *cocci_id/* arch/powerpc/platforms/cell/axon_msi.c 456 */;
	int __init cocci_id/* arch/powerpc/platforms/cell/axon_msi.c 441 */;
	struct platform_driver cocci_id/* arch/powerpc/platforms/cell/axon_msi.c 432 */;
	const struct of_device_id cocci_id/* arch/powerpc/platforms/cell/axon_msi.c 425 */[];
	unsigned int cocci_id/* arch/powerpc/platforms/cell/axon_msi.c 336 */;
	struct platform_device *cocci_id/* arch/powerpc/platforms/cell/axon_msi.c 332 */;
	const struct irq_domain_ops cocci_id/* arch/powerpc/platforms/cell/axon_msi.c 316 */;
	irq_hw_number_t cocci_id/* arch/powerpc/platforms/cell/axon_msi.c 308 */;
	struct irq_chip cocci_id/* arch/powerpc/platforms/cell/axon_msi.c 300 */;
	struct msi_msg cocci_id/* arch/powerpc/platforms/cell/axon_msi.c 257 */;
	struct msi_desc *cocci_id/* arch/powerpc/platforms/cell/axon_msi.c 256 */;
	struct pci_dev *cocci_id/* arch/powerpc/platforms/cell/axon_msi.c 253 */;
	const u32 *cocci_id/* arch/powerpc/platforms/cell/axon_msi.c 204 */;
	struct msi_msg *cocci_id/* arch/powerpc/platforms/cell/axon_msi.c 199 */;
	const phandle *cocci_id/* arch/powerpc/platforms/cell/axon_msi.c 154 */;
	struct irq_domain *cocci_id/* arch/powerpc/platforms/cell/axon_msi.c 152 */;
	__le32 cocci_id/* arch/powerpc/platforms/cell/axon_msi.c 107 */;
}
