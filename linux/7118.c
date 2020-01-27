cocci_test_suite() {
	void cocci_id/* drivers/parisc/dino.c 902 */(struct parisc_device *dev,
						     u32 iovp);
	const char cocci_id/* drivers/parisc/dino.c 897 */[][4];
	struct gsc_irq cocci_id/* drivers/parisc/dino.c 809 */;
	int __init cocci_id/* drivers/parisc/dino.c 804 */;
	char *cocci_id/* drivers/parisc/dino.c 781 */;
	struct resource *cocci_id/* drivers/parisc/dino.c 743 */;
	unsigned long cocci_id/* drivers/parisc/dino.c 741 */;
	const char *cocci_id/* drivers/parisc/dino.c 739 */;
	int __init cocci_id/* drivers/parisc/dino.c 738 */;
	struct pci_bios_ops cocci_id/* drivers/parisc/dino.c 667 */;
	u32 cocci_id/* drivers/parisc/dino.c 529 */;
	struct pci_dev *cocci_id/* drivers/parisc/dino.c 527 */;
	char cocci_id/* drivers/parisc/dino.c 485 */[128];
	struct pci_bus *cocci_id/* drivers/parisc/dino.c 480 */;
	void __iomem *cocci_id/* drivers/parisc/dino.c 480 */;
	void __init cocci_id/* drivers/parisc/dino.c 465 */;
	u8 cocci_id/* drivers/parisc/dino.c 442 */;
	struct parisc_device *cocci_id/* drivers/parisc/dino.c 420 */;
	void *cocci_id/* drivers/parisc/dino.c 420 */;
	int *cocci_id/* drivers/parisc/dino.c 410 */;
	int cocci_id/* drivers/parisc/dino.c 410 */;
	void cocci_id/* drivers/parisc/dino.c 410 */;
	irqreturn_t cocci_id/* drivers/parisc/dino.c 368 */;
	struct irq_chip cocci_id/* drivers/parisc/dino.c 355 */;
	struct irq_data *cocci_id/* drivers/parisc/dino.c 306 */;
	struct pci_port_ops cocci_id/* drivers/parisc/dino.c 297 */;
	struct pci_ops cocci_id/* drivers/parisc/dino.c 248 */;
	u32 *cocci_id/* drivers/parisc/dino.c 182 */;
	unsigned int cocci_id/* drivers/parisc/dino.c 181 */;
	struct dino_device cocci_id/* drivers/parisc/dino.c 156 */;
	struct pci_hba_data *cocci_id/* drivers/parisc/dino.c 154 */;
	struct dino_device *cocci_id/* drivers/parisc/dino.c 154 */;
	struct dino_device {
		struct pci_hba_data hba;
		spinlock_t dinosaur_pen;
		unsigned long txn_addr;
		u32 txn_data;
		u32 imr;
		int global_irq[DINO_LOCAL_IRQS];
#ifdef DINO_DEBUG
		unsigned int dino_irr0;
#endif
	} cocci_id/* drivers/parisc/dino.c 141 */;
	struct parisc_driver cocci_id/* drivers/parisc/dino.c 1053 */;
	const struct parisc_device_id cocci_id/* drivers/parisc/dino.c 1044 */[]__initconst;
}
