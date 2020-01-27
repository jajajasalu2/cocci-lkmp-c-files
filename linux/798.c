cocci_test_suite() {
	struct pci_p2pdma *cocci_id/* drivers/pci/p2pdma.c 98 */;
	const char *cocci_id/* drivers/pci/p2pdma.c 928 */;
	struct pci_dev **cocci_id/* drivers/pci/p2pdma.c 928 */;
	const struct attribute_group cocci_id/* drivers/pci/p2pdma.c 90 */;
	enum dma_data_direction cocci_id/* drivers/pci/p2pdma.c 856 */;
	struct attribute *cocci_id/* drivers/pci/p2pdma.c 83 */[];
	phys_addr_t cocci_id/* drivers/pci/p2pdma.c 819 */;
	struct scatterlist *cocci_id/* drivers/pci/p2pdma.c 816 */;
	struct device *cocci_id/* drivers/pci/p2pdma.c 816 */;
	struct pci_p2pdma_pagemap *cocci_id/* drivers/pci/p2pdma.c 815 */;
	int cocci_id/* drivers/pci/p2pdma.c 815 */;
	u32 cocci_id/* drivers/pci/p2pdma.c 742 */;
	unsigned int *cocci_id/* drivers/pci/p2pdma.c 742 */;
	pci_bus_addr_t cocci_id/* drivers/pci/p2pdma.c 717 */;
	uintptr_t cocci_id/* drivers/pci/p2pdma.c 705 */;
	void cocci_id/* drivers/pci/p2pdma.c 701 */;
	void **cocci_id/* drivers/pci/p2pdma.c 680 */;
	struct percpu_ref *cocci_id/* drivers/pci/p2pdma.c 668 */;
	void *cocci_id/* drivers/pci/p2pdma.c 665 */;
	size_t cocci_id/* drivers/pci/p2pdma.c 64 */;
	const int cocci_id/* drivers/pci/p2pdma.c 617 */;
	char *cocci_id/* drivers/pci/p2pdma.c 61 */;
	struct device_attribute *cocci_id/* drivers/pci/p2pdma.c 60 */;
	ssize_t cocci_id/* drivers/pci/p2pdma.c 60 */;
	struct device **cocci_id/* drivers/pci/p2pdma.c 529 */;
	struct seq_buf cocci_id/* drivers/pci/p2pdma.c 483 */;
	struct pci_p2pdma_pagemap cocci_id/* drivers/pci/p2pdma.c 44 */;
	unsigned long cocci_id/* drivers/pci/p2pdma.c 413 */;
	struct pci_p2pdma_pagemap {
		struct dev_pagemap pgmap;
		struct pci_dev *provider;
		u64 bus_offset;
	} cocci_id/* drivers/pci/p2pdma.c 36 */;
	bool *cocci_id/* drivers/pci/p2pdma.c 342 */;
	struct seq_buf *cocci_id/* drivers/pci/p2pdma.c 342 */;
	int *cocci_id/* drivers/pci/p2pdma.c 342 */;
	enum pci_p2pdma_map_type cocci_id/* drivers/pci/p2pdma.c 340 */;
	unsigned short cocci_id/* drivers/pci/p2pdma.c 300 */;
	struct pci_p2pdma {
		struct gen_pool *pool;
		bool p2pmem_published;
		struct xarray map_types;
	} cocci_id/* drivers/pci/p2pdma.c 30 */;
	const struct pci_p2pdma_whitelist_entry *cocci_id/* drivers/pci/p2pdma.c 299 */;
	struct pci_dev *cocci_id/* drivers/pci/p2pdma.c 298 */;
	bool cocci_id/* drivers/pci/p2pdma.c 295 */;
	struct pci_host_bridge *cocci_id/* drivers/pci/p2pdma.c 295 */;
	const struct pci_p2pdma_whitelist_entry {
		unsigned short vendor;
		unsigned short device;
		enum{REQ_SAME_HOST_BRIDGE=1 << 0,} flags;
	} cocci_id/* drivers/pci/p2pdma.c 276 */[];
	u16 cocci_id/* drivers/pci/p2pdma.c 254 */;
	enum pci_p2pdma_map_type{PCI_P2PDMA_MAP_UNKNOWN=0, PCI_P2PDMA_MAP_NOT_SUPPORTED, PCI_P2PDMA_MAP_BUS_ADDR, PCI_P2PDMA_MAP_THRU_HOST_BRIDGE,} cocci_id/* drivers/pci/p2pdma.c 23 */;
	struct dev_pagemap *cocci_id/* drivers/pci/p2pdma.c 161 */;
	u64 cocci_id/* drivers/pci/p2pdma.c 158 */;
}
