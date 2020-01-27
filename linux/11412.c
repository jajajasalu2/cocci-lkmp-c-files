cocci_test_suite() {
	struct vmw_bo_dirty {
		unsigned long start;
		unsigned long end;
		enum vmw_bo_dirty_method method;
		unsigned int change_count;
		unsigned int ref_count;
		unsigned long bitmap_size;
		size_t size;
		unsigned long bitmap[0];
	} cocci_id/* drivers/gpu/drm/vmwgfx/vmwgfx_page_dirty.c 64 */;
	pgprot_t cocci_id/* drivers/gpu/drm/vmwgfx/vmwgfx_page_dirty.c 443 */;
	struct vmw_buffer_object cocci_id/* drivers/gpu/drm/vmwgfx/vmwgfx_page_dirty.c 441 */;
	struct ttm_buffer_object *cocci_id/* drivers/gpu/drm/vmwgfx/vmwgfx_page_dirty.c 438 */;
	struct vm_area_struct *cocci_id/* drivers/gpu/drm/vmwgfx/vmwgfx_page_dirty.c 437 */;
	vm_fault_t cocci_id/* drivers/gpu/drm/vmwgfx/vmwgfx_page_dirty.c 435 */;
	struct vm_fault *cocci_id/* drivers/gpu/drm/vmwgfx/vmwgfx_page_dirty.c 435 */;
	typeof(*vbo) cocci_id/* drivers/gpu/drm/vmwgfx/vmwgfx_page_dirty.c 402 */;
	unsigned int cocci_id/* drivers/gpu/drm/vmwgfx/vmwgfx_page_dirty.c 400 */;
	unsigned long cocci_id/* drivers/gpu/drm/vmwgfx/vmwgfx_page_dirty.c 372 */;
	struct vmw_resource *cocci_id/* drivers/gpu/drm/vmwgfx/vmwgfx_page_dirty.c 370 */;
	void cocci_id/* drivers/gpu/drm/vmwgfx/vmwgfx_page_dirty.c 370 */;
	enum vmw_bo_dirty_method{VMW_BO_DIRTY_PAGETABLE, VMW_BO_DIRTY_MKWRITE,} cocci_id/* drivers/gpu/drm/vmwgfx/vmwgfx_page_dirty.c 35 */;
	struct address_space *cocci_id/* drivers/gpu/drm/vmwgfx/vmwgfx_page_dirty.c 270 */;
	long cocci_id/* drivers/gpu/drm/vmwgfx/vmwgfx_page_dirty.c 248 */;
	struct ttm_operation_ctx cocci_id/* drivers/gpu/drm/vmwgfx/vmwgfx_page_dirty.c 238 */;
	size_t cocci_id/* drivers/gpu/drm/vmwgfx/vmwgfx_page_dirty.c 236 */;
	pgoff_t cocci_id/* drivers/gpu/drm/vmwgfx/vmwgfx_page_dirty.c 235 */;
	struct vmw_bo_dirty *cocci_id/* drivers/gpu/drm/vmwgfx/vmwgfx_page_dirty.c 234 */;
	struct vmw_buffer_object *cocci_id/* drivers/gpu/drm/vmwgfx/vmwgfx_page_dirty.c 232 */;
	int cocci_id/* drivers/gpu/drm/vmwgfx/vmwgfx_page_dirty.c 232 */;
}
