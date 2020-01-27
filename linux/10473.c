cocci_test_suite() {
	uint32_t *cocci_id/* drivers/gpu/drm/radeon/radeon_ttm.c 986 */;
	struct drm_info_list cocci_id/* drivers/gpu/drm/radeon/radeon_ttm.c 945 */[];
	struct drm_printer cocci_id/* drivers/gpu/drm/radeon/radeon_ttm.c 935 */;
	struct drm_device *cocci_id/* drivers/gpu/drm/radeon/radeon_ttm.c 932 */;
	int *cocci_id/* drivers/gpu/drm/radeon/radeon_ttm.c 931 */;
	struct drm_info_node *cocci_id/* drivers/gpu/drm/radeon/radeon_ttm.c 930 */;
	struct seq_file *cocci_id/* drivers/gpu/drm/radeon/radeon_ttm.c 928 */;
	void *cocci_id/* drivers/gpu/drm/radeon/radeon_ttm.c 928 */;
	struct drm_file *cocci_id/* drivers/gpu/drm/radeon/radeon_ttm.c 907 */;
	struct vm_area_struct *cocci_id/* drivers/gpu/drm/radeon/radeon_ttm.c 904 */;
	struct file *cocci_id/* drivers/gpu/drm/radeon/radeon_ttm.c 904 */;
	vm_fault_t cocci_id/* drivers/gpu/drm/radeon/radeon_ttm.c 887 */;
	struct vm_fault *cocci_id/* drivers/gpu/drm/radeon/radeon_ttm.c 887 */;
	const struct vm_operations_struct *cocci_id/* drivers/gpu/drm/radeon/radeon_ttm.c 885 */;
	struct vm_operations_struct cocci_id/* drivers/gpu/drm/radeon/radeon_ttm.c 884 */;
	struct ttm_bo_driver cocci_id/* drivers/gpu/drm/radeon/radeon_ttm.c 773 */;
	struct ttm_mem_type_manager *cocci_id/* drivers/gpu/drm/radeon/radeon_ttm.c 75 */;
	uint32_t cocci_id/* drivers/gpu/drm/radeon/radeon_ttm.c 74 */;
	struct sg_table cocci_id/* drivers/gpu/drm/radeon/radeon_ttm.c 674 */;
	struct radeon_device cocci_id/* drivers/gpu/drm/radeon/radeon_ttm.c 65 */;
	struct radeon_ttm_tt cocci_id/* drivers/gpu/drm/radeon/radeon_ttm.c 646 */;
	struct radeon_mman cocci_id/* drivers/gpu/drm/radeon/radeon_ttm.c 64 */;
	struct ttm_backend_func cocci_id/* drivers/gpu/drm/radeon/radeon_ttm.c 626 */;
	struct radeon_mman *cocci_id/* drivers/gpu/drm/radeon/radeon_ttm.c 61 */;
	struct ttm_bo_device *cocci_id/* drivers/gpu/drm/radeon/radeon_ttm.c 59 */;
	unsigned long cocci_id/* drivers/gpu/drm/radeon/radeon_ttm.c 589 */;
	struct radeon_ttm_tt *cocci_id/* drivers/gpu/drm/radeon/radeon_ttm.c 579 */;
	struct ttm_tt *cocci_id/* drivers/gpu/drm/radeon/radeon_ttm.c 576 */;
	void cocci_id/* drivers/gpu/drm/radeon/radeon_ttm.c 57 */(struct radeon_device *rdev);
	int cocci_id/* drivers/gpu/drm/radeon/radeon_ttm.c 56 */(struct radeon_device *rdev);
	struct sg_page_iter cocci_id/* drivers/gpu/drm/radeon/radeon_ttm.c 551 */;
	struct page **cocci_id/* drivers/gpu/drm/radeon/radeon_ttm.c 512 */;
	enum dma_data_direction cocci_id/* drivers/gpu/drm/radeon/radeon_ttm.c 493 */;
	struct radeon_ttm_tt {
		struct ttm_dma_tt ttm;
		struct radeon_device *rdev;
		u64 offset;
		uint64_t userptr;
		struct mm_struct *usermm;
		uint32_t userflags;
	} cocci_id/* drivers/gpu/drm/radeon/radeon_ttm.c 474 */;
	u64 cocci_id/* drivers/gpu/drm/radeon/radeon_ttm.c 398 */;
	struct radeon_bo cocci_id/* drivers/gpu/drm/radeon/radeon_ttm.c 353 */;
	struct radeon_bo *cocci_id/* drivers/gpu/drm/radeon/radeon_ttm.c 344 */;
	struct radeon_device *cocci_id/* drivers/gpu/drm/radeon/radeon_ttm.c 343 */;
	struct ttm_mem_reg *cocci_id/* drivers/gpu/drm/radeon/radeon_ttm.c 341 */;
	struct ttm_operation_ctx *cocci_id/* drivers/gpu/drm/radeon/radeon_ttm.c 340 */;
	bool cocci_id/* drivers/gpu/drm/radeon/radeon_ttm.c 339 */;
	struct ttm_buffer_object *cocci_id/* drivers/gpu/drm/radeon/radeon_ttm.c 339 */;
	int cocci_id/* drivers/gpu/drm/radeon/radeon_ttm.c 339 */;
	struct ttm_place cocci_id/* drivers/gpu/drm/radeon/radeon_ttm.c 310 */;
	struct ttm_placement cocci_id/* drivers/gpu/drm/radeon/radeon_ttm.c 309 */;
	struct ttm_mem_reg cocci_id/* drivers/gpu/drm/radeon/radeon_ttm.c 308 */;
	struct ttm_operation_ctx cocci_id/* drivers/gpu/drm/radeon/radeon_ttm.c 306 */;
	struct radeon_fence *cocci_id/* drivers/gpu/drm/radeon/radeon_ttm.c 208 */;
	uint64_t cocci_id/* drivers/gpu/drm/radeon/radeon_ttm.c 207 */;
	unsigned cocci_id/* drivers/gpu/drm/radeon/radeon_ttm.c 150 */;
	const struct ttm_place cocci_id/* drivers/gpu/drm/radeon/radeon_ttm.c 128 */;
	struct ttm_placement *cocci_id/* drivers/gpu/drm/radeon/radeon_ttm.c 126 */;
	void cocci_id/* drivers/gpu/drm/radeon/radeon_ttm.c 125 */;
	struct dentry *cocci_id/* drivers/gpu/drm/radeon/radeon_ttm.c 1068 */;
	struct drm_minor *cocci_id/* drivers/gpu/drm/radeon/radeon_ttm.c 1067 */;
	const struct file_operations cocci_id/* drivers/gpu/drm/radeon/radeon_ttm.c 1053 */;
	struct page *cocci_id/* drivers/gpu/drm/radeon/radeon_ttm.c 1025 */;
	loff_t cocci_id/* drivers/gpu/drm/radeon/radeon_ttm.c 1022 */;
	loff_t *cocci_id/* drivers/gpu/drm/radeon/radeon_ttm.c 1015 */;
	size_t cocci_id/* drivers/gpu/drm/radeon/radeon_ttm.c 1015 */;
	char __user *cocci_id/* drivers/gpu/drm/radeon/radeon_ttm.c 1014 */;
	ssize_t cocci_id/* drivers/gpu/drm/radeon/radeon_ttm.c 1014 */;
	struct inode *cocci_id/* drivers/gpu/drm/radeon/radeon_ttm.c 1006 */;
}
