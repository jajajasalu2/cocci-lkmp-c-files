cocci_test_suite() {
	struct pci_sun4v_msiq_entry cocci_id/* arch/sparc/kernel/pci_sun4v.c 987 */;
	struct pci_sun4v_msiq_entry *cocci_id/* arch/sparc/kernel/pci_sun4v.c 981 */;
	unsigned long *cocci_id/* arch/sparc/kernel/pci_sun4v.c 978 */;
	struct pci_sun4v_msiq_entry {
		u64 version_type;
#define MSIQ_VERSION_MASK 0xffffffff00000000UL
#define MSIQ_VERSION_SHIFT 32
#define MSIQ_TYPE_MASK 0x00000000000000ffUL
#define MSIQ_TYPE_SHIFT 0
#define MSIQ_TYPE_NONE 0x00
#define MSIQ_TYPE_MSG 0x01
#define MSIQ_TYPE_MSI32 0x02
#define MSIQ_TYPE_MSI64 0x03
#define MSIQ_TYPE_INTX 0x08
#define MSIQ_TYPE_NONE2 0xff
		u64 intx_sysino;
		u64 reserved1;
		u64 stick;
		u64 req_id;
#define MSIQ_REQID_BUS_MASK 0xff00UL
#define MSIQ_REQID_BUS_SHIFT 8
#define MSIQ_REQID_DEVICE_MASK 0x00f8UL
#define MSIQ_REQID_DEVICE_SHIFT 3
#define MSIQ_REQID_FUNC_MASK 0x0007UL
#define MSIQ_REQID_FUNC_SHIFT 0
		u64 msi_address;
		u64 msi_data;
		u64 reserved2;
	} cocci_id/* arch/sparc/kernel/pci_sun4v.c 917 */;
	const u32 cocci_id/* arch/sparc/kernel/pci_sun4v.c 869 */[];
	u64 *cocci_id/* arch/sparc/kernel/pci_sun4v.c 85 */;
	struct atu_ranges *cocci_id/* arch/sparc/kernel/pci_sun4v.c 836 */;
	const u32 *cocci_id/* arch/sparc/kernel/pci_sun4v.c 809 */;
	const u64 *cocci_id/* arch/sparc/kernel/pci_sun4v.c 806 */;
	bool cocci_id/* arch/sparc/kernel/pci_sun4v.c 76 */;
	struct atu_iotsb *cocci_id/* arch/sparc/kernel/pci_sun4v.c 744 */;
	struct iommu_pool *cocci_id/* arch/sparc/kernel/pci_sun4v.c 713 */;
	struct property *cocci_id/* arch/sparc/kernel/pci_sun4v.c 699 */;
	const struct dma_map_ops cocci_id/* arch/sparc/kernel/pci_sun4v.c 687 */;
	struct iommu_batch {
		struct device *dev;
		unsigned long prot;
		unsigned long entry;
		u64 *pglist;
		unsigned long npages;
	} cocci_id/* arch/sparc/kernel/pci_sun4v.c 54 */;
	struct scatterlist *cocci_id/* arch/sparc/kernel/pci_sun4v.c 467 */;
	struct vpci_version cocci_id/* arch/sparc/kernel/pci_sun4v.c 44 */[];
	struct vpci_version {
		unsigned long major;
		unsigned long minor;
	} cocci_id/* arch/sparc/kernel/pci_sun4v.c 38 */;
	enum dma_data_direction cocci_id/* arch/sparc/kernel/pci_sun4v.c 355 */;
	u32 cocci_id/* arch/sparc/kernel/pci_sun4v.c 330 */;
	struct atu *cocci_id/* arch/sparc/kernel/pci_sun4v.c 326 */;
	struct pci_pbm_info *cocci_id/* arch/sparc/kernel/pci_sun4v.c 324 */;
	dma_addr_t cocci_id/* arch/sparc/kernel/pci_sun4v.c 322 */;
	void cocci_id/* arch/sparc/kernel/pci_sun4v.c 321 */;
	unsigned int cocci_id/* arch/sparc/kernel/pci_sun4v.c 263 */;
	struct pci_dev *cocci_id/* arch/sparc/kernel/pci_sun4v.c 261 */;
	struct pci_bus *cocci_id/* arch/sparc/kernel/pci_sun4v.c 259 */;
	char *cocci_id/* arch/sparc/kernel/pci_sun4v.c 209 */;
	int cocci_id/* arch/sparc/kernel/pci_sun4v.c 191 */;
	long cocci_id/* arch/sparc/kernel/pci_sun4v.c 190 */;
	struct page *cocci_id/* arch/sparc/kernel/pci_sun4v.c 188 */;
	struct iommu_map_table *cocci_id/* arch/sparc/kernel/pci_sun4v.c 187 */;
	struct iommu *cocci_id/* arch/sparc/kernel/pci_sun4v.c 186 */;
	u64 cocci_id/* arch/sparc/kernel/pci_sun4v.c 183 */;
	unsigned long cocci_id/* arch/sparc/kernel/pci_sun4v.c 181 */;
	gfp_t cocci_id/* arch/sparc/kernel/pci_sun4v.c 180 */;
	dma_addr_t *cocci_id/* arch/sparc/kernel/pci_sun4v.c 180 */;
	struct device *cocci_id/* arch/sparc/kernel/pci_sun4v.c 179 */;
	void *cocci_id/* arch/sparc/kernel/pci_sun4v.c 179 */;
	size_t cocci_id/* arch/sparc/kernel/pci_sun4v.c 179 */;
	struct iommu_batch *cocci_id/* arch/sparc/kernel/pci_sun4v.c 158 */;
	int __init cocci_id/* arch/sparc/kernel/pci_sun4v.c 1346 */;
	struct platform_driver cocci_id/* arch/sparc/kernel/pci_sun4v.c 1338 */;
	const struct of_device_id cocci_id/* arch/sparc/kernel/pci_sun4v.c 1330 */[];
	struct iommu cocci_id/* arch/sparc/kernel/pci_sun4v.c 1295 */;
	const struct linux_prom64_registers *cocci_id/* arch/sparc/kernel/pci_sun4v.c 1224 */;
	struct device_node *cocci_id/* arch/sparc/kernel/pci_sun4v.c 1173 */;
	struct platform_device *cocci_id/* arch/sparc/kernel/pci_sun4v.c 1171 */;
	const struct sparc64_msiq_ops cocci_id/* arch/sparc/kernel/pci_sun4v.c 1149 */;
	__typeof__(struct iommu_batch) cocci_id/* /home/jaskaran/lkmp/coccinelle/standard.h 437 */;
}
