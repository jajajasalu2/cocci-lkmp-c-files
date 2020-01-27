cocci_test_suite() {
	enum pte_status{PTE_FREE, PTE_INUSE,} cocci_id/* drivers/staging/gasket/gasket_page_table.c 92 */;
	u64 __iomem *cocci_id/* drivers/staging/gasket/gasket_page_table.c 914 */;
	struct gasket_page_table_entry *cocci_id/* drivers/staging/gasket/gasket_page_table.c 913 */;
	uint cocci_id/* drivers/staging/gasket/gasket_page_table.c 909 */;
	struct gasket_page_table_entry cocci_id/* drivers/staging/gasket/gasket_page_table.c 866 */;
	ulong cocci_id/* drivers/staging/gasket/gasket_page_table.c 674 */;
	bool cocci_id/* drivers/staging/gasket/gasket_page_table.c 673 */;
	struct gasket_page_table *cocci_id/* drivers/staging/gasket/gasket_page_table.c 673 */;
	u64 __force *cocci_id/* drivers/staging/gasket/gasket_page_table.c 525 */;
	struct page *cocci_id/* drivers/staging/gasket/gasket_page_table.c 472 */;
	struct pci_dev *cocci_id/* drivers/staging/gasket/gasket_page_table.c 229 */;
	struct device *cocci_id/* drivers/staging/gasket/gasket_page_table.c 229 */;
	const struct gasket_page_table_config *cocci_id/* drivers/staging/gasket/gasket_page_table.c 228 */;
	const struct gasket_bar_data *cocci_id/* drivers/staging/gasket/gasket_page_table.c 227 */;
	struct gasket_page_table **cocci_id/* drivers/staging/gasket/gasket_page_table.c 226 */;
	struct gasket_page_table {
		struct gasket_page_table_config config;
		uint num_simple_entries;
		uint num_extended_entries;
		struct gasket_page_table_entry *entries;
		uint num_active_pages;
		u64 __iomem *base_slot;
		u64 __iomem *extended_offset_reg;
		struct device *device;
		struct pci_dev *pci_dev;
		u64 extended_flag;
		struct mutex mutex;
		int num_coherent_pages;
		struct gasket_coherent_page_entry *coherent_pages;
	} cocci_id/* drivers/staging/gasket/gasket_page_table.c 169 */;
	struct gasket_coherent_page_entry {
		dma_addr_t paddr;
		u64 user_virt;
		u64 kernel_virt;
		u32 in_use;
	} cocci_id/* drivers/staging/gasket/gasket_page_table.c 146 */;
	void cocci_id/* drivers/staging/gasket/gasket_page_table.c 1345 */;
	const struct gasket_driver_desc *cocci_id/* drivers/staging/gasket/gasket_page_table.c 1259 */;
	unsigned int cocci_id/* drivers/staging/gasket/gasket_page_table.c 1258 */;
	void *cocci_id/* drivers/staging/gasket/gasket_page_table.c 1256 */;
	dma_addr_t cocci_id/* drivers/staging/gasket/gasket_page_table.c 1255 */;
	dma_addr_t *cocci_id/* drivers/staging/gasket/gasket_page_table.c 1253 */;
	u64 cocci_id/* drivers/staging/gasket/gasket_page_table.c 1252 */;
	struct gasket_dev *cocci_id/* drivers/staging/gasket/gasket_page_table.c 1252 */;
	int cocci_id/* drivers/staging/gasket/gasket_page_table.c 1252 */;
	struct gasket_page_table_entry {
		enum pte_status status;
		int offset;
		dma_addr_t dma_addr;
		struct page *page;
		struct gasket_page_table_entry *sublevel;
	} cocci_id/* drivers/staging/gasket/gasket_page_table.c 110 */;
	ulong *cocci_id/* drivers/staging/gasket/gasket_page_table.c 1090 */;
	struct page **cocci_id/* drivers/staging/gasket/gasket_page_table.c 1089 */;
}
