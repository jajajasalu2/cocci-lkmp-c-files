cocci_test_suite() {
	struct pci_io_addr_cache *cocci_id/* arch/powerpc/kernel/eeh_cache.c 98 */;
	struct pci_io_addr_range cocci_id/* arch/powerpc/kernel/eeh_cache.c 60 */;
	struct pci_io_addr_range *cocci_id/* arch/powerpc/kernel/eeh_cache.c 59 */;
	struct rb_node *cocci_id/* arch/powerpc/kernel/eeh_cache.c 56 */;
	struct eeh_dev *cocci_id/* arch/powerpc/kernel/eeh_cache.c 54 */;
	unsigned long cocci_id/* arch/powerpc/kernel/eeh_cache.c 54 */;
	struct pci_io_addr_cache {
		struct rb_root rb_root;
		spinlock_t piar_lock;
	} cocci_id/* arch/powerpc/kernel/eeh_cache.c 49 */;
	struct pci_io_addr_range {
		struct rb_node rb_node;
		resource_size_t addr_lo;
		resource_size_t addr_hi;
		struct eeh_dev *edev;
		struct pci_dev *pcidev;
		unsigned long flags;
	} cocci_id/* arch/powerpc/kernel/eeh_cache.c 40 */;
	struct seq_file *cocci_id/* arch/powerpc/kernel/eeh_cache.c 271 */;
	void *cocci_id/* arch/powerpc/kernel/eeh_cache.c 271 */;
	resource_size_t cocci_id/* arch/powerpc/kernel/eeh_cache.c 191 */;
	int cocci_id/* arch/powerpc/kernel/eeh_cache.c 164 */;
	struct pci_dn *cocci_id/* arch/powerpc/kernel/eeh_cache.c 162 */;
	struct pci_dev *cocci_id/* arch/powerpc/kernel/eeh_cache.c 160 */;
	void cocci_id/* arch/powerpc/kernel/eeh_cache.c 160 */;
	struct rb_node **cocci_id/* arch/powerpc/kernel/eeh_cache.c 121 */;
}
