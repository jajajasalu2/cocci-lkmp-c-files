cocci_test_suite() {
	struct failed_ddw_pdn *cocci_id/* arch/powerpc/platforms/pseries/iommu.c 980 */;
	struct dynamic_dma_window_prop *cocci_id/* arch/powerpc/platforms/pseries/iommu.c 979 */;
	struct property *cocci_id/* arch/powerpc/platforms/pseries/iommu.c 978 */;
	struct direct_window *cocci_id/* arch/powerpc/platforms/pseries/iommu.c 977 */;
	u32 cocci_id/* arch/powerpc/platforms/pseries/iommu.c 976 */[3];
	struct ddw_create_response cocci_id/* arch/powerpc/platforms/pseries/iommu.c 972 */;
	struct ddw_query_response cocci_id/* arch/powerpc/platforms/pseries/iommu.c 971 */;
	__be64 *cocci_id/* arch/powerpc/platforms/pseries/iommu.c 95 */;
	const __be32 *cocci_id/* arch/powerpc/platforms/pseries/iommu.c 937 */;
	unsigned long cocci_id/* arch/powerpc/platforms/pseries/iommu.c 935 */;
	phys_addr_t cocci_id/* arch/powerpc/platforms/pseries/iommu.c 929 */;
	void cocci_id/* arch/powerpc/platforms/pseries/iommu.c 929 */;
	struct failed_ddw_pdn {
		struct device_node *pdn;
		struct list_head list;
	} cocci_id/* arch/powerpc/platforms/pseries/iommu.c 922 */;
	enum dma_data_direction cocci_id/* arch/powerpc/platforms/pseries/iommu.c 91 */;
	u32 *cocci_id/* arch/powerpc/platforms/pseries/iommu.c 909 */;
	u64 cocci_id/* arch/powerpc/platforms/pseries/iommu.c 893 */;
	u32 cocci_id/* arch/powerpc/platforms/pseries/iommu.c 892 */;
	struct pci_dn *cocci_id/* arch/powerpc/platforms/pseries/iommu.c 891 */;
	struct device_node *cocci_id/* arch/powerpc/platforms/pseries/iommu.c 890 */;
	long cocci_id/* arch/powerpc/platforms/pseries/iommu.c 89 */;
	struct ddw_create_response *cocci_id/* arch/powerpc/platforms/pseries/iommu.c 887 */;
	const u32 *cocci_id/* arch/powerpc/platforms/pseries/iommu.c 886 */;
	struct pci_dev *cocci_id/* arch/powerpc/platforms/pseries/iommu.c 886 */;
	int cocci_id/* arch/powerpc/platforms/pseries/iommu.c 886 */;
	struct ddw_query_response *cocci_id/* arch/powerpc/platforms/pseries/iommu.c 859 */;
	struct dynamic_dma_window_prop cocci_id/* arch/powerpc/platforms/pseries/iommu.c 841 */;
	const struct dynamic_dma_window_prop *cocci_id/* arch/powerpc/platforms/pseries/iommu.c 808 */;
	char *cocci_id/* arch/powerpc/platforms/pseries/iommu.c 746 */;
	int __init cocci_id/* arch/powerpc/platforms/pseries/iommu.c 746 */;
	int __read_mostly cocci_id/* arch/powerpc/platforms/pseries/iommu.c 744 */;
	const char *cocci_id/* arch/powerpc/platforms/pseries/iommu.c 70 */;
	struct iommu_table_ops cocci_id/* arch/powerpc/platforms/pseries/iommu.c 651 */;
	enum dma_data_direction *cocci_id/* arch/powerpc/platforms/pseries/iommu.c 625 */;
	unsigned long *cocci_id/* arch/powerpc/platforms/pseries/iommu.c 624 */;
	struct pci_bus *cocci_id/* arch/powerpc/platforms/pseries/iommu.c 544 */;
	struct iommu_table cocci_id/* arch/powerpc/platforms/pseries/iommu.c 53 */;
	struct iommu_table_group cocci_id/* arch/powerpc/platforms/pseries/iommu.c 48 */;
	const unsigned long *cocci_id/* arch/powerpc/platforms/pseries/iommu.c 471 */;
	struct pci_controller *cocci_id/* arch/powerpc/platforms/pseries/iommu.c 466 */;
	struct iommu_table *cocci_id/* arch/powerpc/platforms/pseries/iommu.c 46 */;
	struct iommu_table_group *cocci_id/* arch/powerpc/platforms/pseries/iommu.c 43 */;
	const void *cocci_id/* arch/powerpc/platforms/pseries/iommu.c 355 */;
	struct ddw_create_response {
		u32 liobn;
		u32 addr_hi;
		u32 addr_lo;
	} cocci_id/* arch/powerpc/platforms/pseries/iommu.c 341 */;
	struct ddw_query_response {
		u32 windows_available;
		u32 largest_available_block;
		u32 page_size;
		u32 migration_capable;
	} cocci_id/* arch/powerpc/platforms/pseries/iommu.c 334 */;
	struct direct_window {
		struct device_node *device;
		const struct dynamic_dma_window_prop *prop;
		struct list_head list;
	} cocci_id/* arch/powerpc/platforms/pseries/iommu.c 327 */;
	struct dynamic_dma_window_prop {
		__be32 liobn;
		__be64 dma_base;
		__be32 tce_shift;
		__be32 window_shift;
	} cocci_id/* arch/powerpc/platforms/pseries/iommu.c 320 */;
	void cocci_id/* arch/powerpc/platforms/pseries/iommu.c 136 */(struct iommu_table *,
								      long,
								      long);
	struct device *cocci_id/* arch/powerpc/platforms/pseries/iommu.c 1350 */;
	struct of_reconfig_data *cocci_id/* arch/powerpc/platforms/pseries/iommu.c 1262 */;
	struct notifier_block cocci_id/* arch/powerpc/platforms/pseries/iommu.c 1255 */;
	struct memory_notify *cocci_id/* arch/powerpc/platforms/pseries/iommu.c 1223 */;
	void *cocci_id/* arch/powerpc/platforms/pseries/iommu.c 1220 */;
	struct notifier_block *cocci_id/* arch/powerpc/platforms/pseries/iommu.c 1219 */;
	bool cocci_id/* arch/powerpc/platforms/pseries/iommu.c 1186 */;
	struct property cocci_id/* arch/powerpc/platforms/pseries/iommu.c 1054 */;
	__typeof__(__be64 *) cocci_id/* /home/jaskaran/lkmp/coccinelle/standard.h 437 */;
}
