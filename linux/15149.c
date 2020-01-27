cocci_test_suite() {
	struct vfio_iommu_spapr_register_memory cocci_id/* drivers/vfio/vfio_iommu_spapr_tce.c 967 */;
	struct vfio_iommu_type1_dma_unmap cocci_id/* drivers/vfio/vfio_iommu_spapr_tce.c 923 */;
	struct tce_iommu_prereg *cocci_id/* drivers/vfio/vfio_iommu_spapr_tce.c 88 */;
	struct vfio_iommu_type1_dma_map cocci_id/* drivers/vfio/vfio_iommu_spapr_tce.c 856 */;
	void __user *cocci_id/* drivers/vfio/vfio_iommu_spapr_tce.c 825 */;
	struct vfio_iommu_spapr_tce_info cocci_id/* drivers/vfio/vfio_iommu_spapr_tce.c 808 */;
	unsigned int cocci_id/* drivers/vfio/vfio_iommu_spapr_tce.c 777 */;
	struct tce_iommu_group cocci_id/* drivers/vfio/vfio_iommu_spapr_tce.c 761 */;
	__u64 cocci_id/* drivers/vfio/vfio_iommu_spapr_tce.c 750 */;
	__u64 *cocci_id/* drivers/vfio/vfio_iommu_spapr_tce.c 645 */;
	struct iommu_table **cocci_id/* drivers/vfio/vfio_iommu_spapr_tce.c 612 */;
	struct tce_container {
		struct mutex lock;
		bool enabled;
		bool v2;
		bool def_window_pending;
		unsigned long locked_pages;
		struct mm_struct *mm;
		struct iommu_table *tables[IOMMU_TABLE_GROUP_MAX_TABLES];
		struct list_head group_list;
		struct list_head prereg_list;
	} cocci_id/* drivers/vfio/vfio_iommu_spapr_tce.c 61 */;
	__u32 cocci_id/* drivers/vfio/vfio_iommu_spapr_tce.c 609 */;
	__be64 *cocci_id/* drivers/vfio/vfio_iommu_spapr_tce.c 558 */;
	struct mm_iommu_table_group_mem_t *cocci_id/* drivers/vfio/vfio_iommu_spapr_tce.c 557 */;
	struct tce_iommu_prereg {
		struct list_head next;
		struct mm_iommu_table_group_mem_t *mem;
	} cocci_id/* drivers/vfio/vfio_iommu_spapr_tce.c 51 */;
	enum dma_data_direction cocci_id/* drivers/vfio/vfio_iommu_spapr_tce.c 502 */;
	unsigned long cocci_id/* drivers/vfio/vfio_iommu_spapr_tce.c 501 */;
	struct iommu_table *cocci_id/* drivers/vfio/vfio_iommu_spapr_tce.c 500 */;
	long cocci_id/* drivers/vfio/vfio_iommu_spapr_tce.c 499 */;
	struct tce_iommu_group {
		struct list_head next;
		struct iommu_group *grp;
	} cocci_id/* drivers/vfio/vfio_iommu_spapr_tce.c 42 */;
	struct mm_iommu_table_group_mem_t **cocci_id/* drivers/vfio/vfio_iommu_spapr_tce.c 391 */;
	unsigned long *cocci_id/* drivers/vfio/vfio_iommu_spapr_tce.c 391 */;
	struct page *cocci_id/* drivers/vfio/vfio_iommu_spapr_tce.c 383 */;
	void cocci_id/* drivers/vfio/vfio_iommu_spapr_tce.c 339 */(struct tce_container *container,
								   struct iommu_table *tbl);
	int cocci_id/* drivers/vfio/vfio_iommu_spapr_tce.c 336 */(struct tce_container *container,
								  struct iommu_table *tbl,
								  unsigned long entry,
								  unsigned long pages);
	void cocci_id/* drivers/vfio/vfio_iommu_spapr_tce.c 32 */(void *iommu_data,
								  struct iommu_group *iommu_group);
	phys_addr_t cocci_id/* drivers/vfio/vfio_iommu_spapr_tce.c 202 */;
	bool cocci_id/* drivers/vfio/vfio_iommu_spapr_tce.c 196 */;
	struct tce_container *cocci_id/* drivers/vfio/vfio_iommu_spapr_tce.c 196 */;
	struct mm_struct *cocci_id/* drivers/vfio/vfio_iommu_spapr_tce.c 178 */;
	void __exit cocci_id/* drivers/vfio/vfio_iommu_spapr_tce.c 1377 */;
	void cocci_id/* drivers/vfio/vfio_iommu_spapr_tce.c 1377 */;
	int __init cocci_id/* drivers/vfio/vfio_iommu_spapr_tce.c 1372 */;
	const struct vfio_iommu_driver_ops cocci_id/* drivers/vfio/vfio_iommu_spapr_tce.c 1362 */;
	struct tce_iommu_group *cocci_id/* drivers/vfio/vfio_iommu_spapr_tce.c 1246 */;
	struct iommu_table_group *cocci_id/* drivers/vfio/vfio_iommu_spapr_tce.c 1245 */;
	struct iommu_group *cocci_id/* drivers/vfio/vfio_iommu_spapr_tce.c 1241 */;
	void *cocci_id/* drivers/vfio/vfio_iommu_spapr_tce.c 1240 */;
	int cocci_id/* drivers/vfio/vfio_iommu_spapr_tce.c 1240 */;
	struct vfio_iommu_spapr_tce_remove cocci_id/* drivers/vfio/vfio_iommu_spapr_tce.c 1099 */;
	struct vfio_iommu_spapr_tce_create cocci_id/* drivers/vfio/vfio_iommu_spapr_tce.c 1058 */;
}
