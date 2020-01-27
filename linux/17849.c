cocci_test_suite() {
	enum dma_data_direction cocci_id/* arch/ia64/hp/common/sba_iommu.c 914 */;
	struct page *cocci_id/* arch/ia64/hp/common/sba_iommu.c 815 */;
	size_t cocci_id/* arch/ia64/hp/common/sba_iommu.c 808 */;
	uint cocci_id/* arch/ia64/hp/common/sba_iommu.c 705 */;
	u8 *cocci_id/* arch/ia64/hp/common/sba_iommu.c 698 */;
	struct sba_dma_pair *cocci_id/* arch/ia64/hp/common/sba_iommu.c 654 */;
	ulong *cocci_id/* arch/ia64/hp/common/sba_iommu.c 500 */;
	long cocci_id/* arch/ia64/hp/common/sba_iommu.c 448 */;
	long double cocci_id/* arch/ia64/hp/common/sba_iommu.c 447 */;
	unsigned long cocci_id/* arch/ia64/hp/common/sba_iommu.c 445 */;
	struct scatterlist *cocci_id/* arch/ia64/hp/common/sba_iommu.c 398 */;
	u32 cocci_id/* arch/ia64/hp/common/sba_iommu.c 356 */;
	unsigned long long cocci_id/* arch/ia64/hp/common/sba_iommu.c 324 */;
	void cocci_id/* arch/ia64/hp/common/sba_iommu.c 245 */(struct ioc *,
							       dma_addr_t,
							       size_t);
	int __init cocci_id/* arch/ia64/hp/common/sba_iommu.c 2116 */;
	const struct dma_map_ops cocci_id/* arch/ia64/hp/common/sba_iommu.c 2064 */;
	int __init cocci_id/* arch/ia64/hp/common/sba_iommu.c 2051 */;
	void cocci_id/* arch/ia64/hp/common/sba_iommu.c 2051 */;
	struct acpi_scan_handler cocci_id/* arch/ia64/hp/common/sba_iommu.c 2046 */;
	const struct acpi_device_id *cocci_id/* arch/ia64/hp/common/sba_iommu.c 2031 */;
	struct acpi_device *cocci_id/* arch/ia64/hp/common/sba_iommu.c 2030 */;
	int cocci_id/* arch/ia64/hp/common/sba_iommu.c 2030 */;
	const struct acpi_device_id cocci_id/* arch/ia64/hp/common/sba_iommu.c 2024 */[];
	struct acpi_device_info *cocci_id/* arch/ia64/hp/common/sba_iommu.c 1985 */;
	u64 cocci_id/* arch/ia64/hp/common/sba_iommu.c 1984 */;
	acpi_status cocci_id/* arch/ia64/hp/common/sba_iommu.c 1983 */;
	acpi_handle cocci_id/* arch/ia64/hp/common/sba_iommu.c 1982 */;
	struct ioc *cocci_id/* arch/ia64/hp/common/sba_iommu.c 1980 */;
	void __init cocci_id/* arch/ia64/hp/common/sba_iommu.c 1980 */;
	struct pci_bus *cocci_id/* arch/ia64/hp/common/sba_iommu.c 1931 */;
	struct proc_dir_entry *cocci_id/* arch/ia64/hp/common/sba_iommu.c 1920 */;
	void __init cocci_id/* arch/ia64/hp/common/sba_iommu.c 1917 */;
	const struct seq_operations cocci_id/* arch/ia64/hp/common/sba_iommu.c 1910 */;
	loff_t *cocci_id/* arch/ia64/hp/common/sba_iommu.c 1855 */;
	struct seq_file *cocci_id/* arch/ia64/hp/common/sba_iommu.c 1855 */;
	loff_t cocci_id/* arch/ia64/hp/common/sba_iommu.c 1845 */;
	char *cocci_id/* arch/ia64/hp/common/sba_iommu.c 1813 */;
	struct ioc_iommu *cocci_id/* arch/ia64/hp/common/sba_iommu.c 1785 */;
	struct ioc_iommu cocci_id/* arch/ia64/hp/common/sba_iommu.c 1776 */[]__initdata;
	struct ioc_iommu {
		u32 func_id;
		char *name;
		initfunc *init;
	} cocci_id/* arch/ia64/hp/common/sba_iommu.c 1770 */;
	void cocci_id/* arch/ia64/hp/common/sba_iommu.c 1768 */(struct ioc *);
	unsigned int cocci_id/* arch/ia64/hp/common/sba_iommu.c 1747 */;
	struct pci_controller *cocci_id/* arch/ia64/hp/common/sba_iommu.c 1721 */;
	unsigned long *cocci_id/* arch/ia64/hp/common/sba_iommu.c 1699 */;
	u64 *cocci_id/* arch/ia64/hp/common/sba_iommu.c 1639 */;
	void *cocci_id/* arch/ia64/hp/common/sba_iommu.c 1611 */;
	struct pci_dev *cocci_id/* arch/ia64/hp/common/sba_iommu.c 1579 */;
	void cocci_id/* arch/ia64/hp/common/sba_iommu.c 1417 */(struct device *dev,
								struct scatterlist *sglist,
								int nents,
								enum dma_data_direction dir,
								unsigned long attrs);
	dma_addr_t cocci_id/* arch/ia64/hp/common/sba_iommu.c 1409 */;
	gfp_t cocci_id/* arch/ia64/hp/common/sba_iommu.c 1112 */;
	dma_addr_t *cocci_id/* arch/ia64/hp/common/sba_iommu.c 1111 */;
	struct device *cocci_id/* arch/ia64/hp/common/sba_iommu.c 1111 */;
	struct ioc {
		void __iomem *ioc_hpa;
		char *res_map;
		u64 *pdir_base;
		unsigned long ibase;
		unsigned long imask;
		unsigned long *res_hint;
		unsigned long dma_mask;
		spinlock_t res_lock;
		unsigned int res_bitshift;
		unsigned int res_size;
#ifdef CONFIG_NUMA
		unsigned int node;
#endif
#if DELAYED_RESOURCE_CNT > 0
		spinlock_t saved_lock;
		int saved_cnt;
		struct sba_dma_pair {
			dma_addr_t iova;
			size_t size;
		} saved[DELAYED_RESOURCE_CNT];
#endif
#ifdef PDIR_SEARCH_TIMING
#define SBA_SEARCH_SAMPLE 0x100
		unsigned long avg_search[SBA_SEARCH_SAMPLE];
		unsigned long avg_idx;
#endif
		struct ioc *next;
		acpi_handle handle;
		const char *name;
		unsigned int func_id;
		unsigned int rev;
		u32 iov_size;
		unsigned int pdir_size;
		struct pci_dev *sac_only_dev;
	} cocci_id/*  1 */;
}
