cocci_test_suite() {
	struct file *cocci_id/* drivers/xen/gntdev.c 915 */;
	long cocci_id/* drivers/xen/gntdev.c 915 */;
	struct gntdev_grant_copy_segment cocci_id/* drivers/xen/gntdev.c 893 */;
	struct gntdev_copy_batch cocci_id/* drivers/xen/gntdev.c 882 */;
	struct ioctl_gntdev_grant_copy cocci_id/* drivers/xen/gntdev.c 881 */;
	size_t cocci_id/* drivers/xen/gntdev.c 816 */;
	struct gnttab_copy *cocci_id/* drivers/xen/gntdev.c 814 */;
	uint16_t cocci_id/* drivers/xen/gntdev.c 790 */;
	s16 __user *cocci_id/* drivers/xen/gntdev.c 788 */;
	struct gntdev_grant_copy_segment *cocci_id/* drivers/xen/gntdev.c 787 */;
	char *cocci_id/* drivers/xen/gntdev.c 78 */;
	s16 cocci_id/* drivers/xen/gntdev.c 766 */;
	struct gntdev_copy_batch *cocci_id/* drivers/xen/gntdev.c 754 */;
	struct page *cocci_id/* drivers/xen/gntdev.c 729 */;
	bool cocci_id/* drivers/xen/gntdev.c 726 */;
	unsigned long *cocci_id/* drivers/xen/gntdev.c 726 */;
	void __user *cocci_id/* drivers/xen/gntdev.c 725 */;
	struct gntdev_copy_batch {
		struct gnttab_copy ops[GNTDEV_COPY_BATCH];
		struct page *pages[GNTDEV_COPY_BATCH];
		s16 __user *status[GNTDEV_COPY_BATCH];
		unsigned int nr_ops;
		unsigned int nr_pages;
	} cocci_id/* drivers/xen/gntdev.c 717 */;
	uint64_t cocci_id/* drivers/xen/gntdev.c 681 */;
	struct miscdevice cocci_id/* drivers/xen/gntdev.c 68 */;
	struct ioctl_gntdev_unmap_notify cocci_id/* drivers/xen/gntdev.c 651 */;
	int cocci_id/* drivers/xen/gntdev.c 65 */(struct gntdev_grant_map *map,
						  int offset, int pages);
	struct vm_area_struct *cocci_id/* drivers/xen/gntdev.c 620 */;
	struct ioctl_gntdev_get_offset_for_vaddr cocci_id/* drivers/xen/gntdev.c 619 */;
	struct ioctl_gntdev_get_offset_for_vaddr __user *cocci_id/* drivers/xen/gntdev.c 617 */;
	struct ioctl_gntdev_unmap_grant_ref cocci_id/* drivers/xen/gntdev.c 596 */;
	struct ioctl_gntdev_unmap_grant_ref __user *cocci_id/* drivers/xen/gntdev.c 594 */;
	struct ioctl_gntdev_map_grant_ref cocci_id/* drivers/xen/gntdev.c 561 */;
	struct ioctl_gntdev_map_grant_ref __user *cocci_id/* drivers/xen/gntdev.c 559 */;
	struct inode *cocci_id/* drivers/xen/gntdev.c 503 */;
	const struct mmu_interval_notifier_ops cocci_id/* drivers/xen/gntdev.c 497 */;
	struct gntdev_grant_map cocci_id/* drivers/xen/gntdev.c 466 */;
	const struct mmu_notifier_range *cocci_id/* drivers/xen/gntdev.c 462 */;
	struct mmu_interval_notifier *cocci_id/* drivers/xen/gntdev.c 461 */;
	const struct vm_operations_struct cocci_id/* drivers/xen/gntdev.c 453 */;
	uint8_t *cocci_id/* drivers/xen/gntdev.c 364 */;
	struct gntab_unmap_queue_data cocci_id/* drivers/xen/gntdev.c 358 */;
	struct gntdev_grant_map *cocci_id/* drivers/xen/gntdev.c 354 */;
	int cocci_id/* drivers/xen/gntdev.c 354 */;
	u64 cocci_id/* drivers/xen/gntdev.c 260 */;
	unsigned int cocci_id/* drivers/xen/gntdev.c 258 */;
	pte_t *cocci_id/* drivers/xen/gntdev.c 255 */;
	void *cocci_id/* drivers/xen/gntdev.c 255 */;
	unsigned long cocci_id/* drivers/xen/gntdev.c 255 */;
	struct gntdev_priv *cocci_id/* drivers/xen/gntdev.c 203 */;
	void cocci_id/* drivers/xen/gntdev.c 203 */;
	struct gnttab_dma_alloc_args cocci_id/* drivers/xen/gntdev.c 159 */;
	void __exit cocci_id/* drivers/xen/gntdev.c 1112 */;
	int __init cocci_id/* drivers/xen/gntdev.c 1095 */;
	const struct file_operations cocci_id/* drivers/xen/gntdev.c 1079 */;
}
