cocci_test_suite() {
	struct ttm_bo_driver cocci_id/* drivers/gpu/drm/vmwgfx/vmwgfx_ttm_buffer.c 865 */;
	struct ttm_mem_reg *cocci_id/* drivers/gpu/drm/vmwgfx/vmwgfx_ttm_buffer.c 846 */;
	struct vmw_private cocci_id/* drivers/gpu/drm/vmwgfx/vmwgfx_ttm_buffer.c 800 */;
	struct vmw_private *cocci_id/* drivers/gpu/drm/vmwgfx/vmwgfx_ttm_buffer.c 800 */;
	struct drm_file *cocci_id/* drivers/gpu/drm/vmwgfx/vmwgfx_ttm_buffer.c 792 */;
	struct ttm_object_file *cocci_id/* drivers/gpu/drm/vmwgfx/vmwgfx_ttm_buffer.c 791 */;
	struct file *cocci_id/* drivers/gpu/drm/vmwgfx/vmwgfx_ttm_buffer.c 789 */;
	struct ttm_placement *cocci_id/* drivers/gpu/drm/vmwgfx/vmwgfx_ttm_buffer.c 784 */;
	unsigned cocci_id/* drivers/gpu/drm/vmwgfx/vmwgfx_ttm_buffer.c 777 */;
	struct ttm_mem_type_manager *cocci_id/* drivers/gpu/drm/vmwgfx/vmwgfx_ttm_buffer.c 745 */;
	uint32_t cocci_id/* drivers/gpu/drm/vmwgfx/vmwgfx_ttm_buffer.c 744 */;
	struct ttm_bo_device *cocci_id/* drivers/gpu/drm/vmwgfx/vmwgfx_ttm_buffer.c 744 */;
	struct ttm_backend_func cocci_id/* drivers/gpu/drm/vmwgfx/vmwgfx_ttm_buffer.c 706 */;
	struct ttm_operation_ctx *cocci_id/* drivers/gpu/drm/vmwgfx/vmwgfx_ttm_buffer.c 654 */;
	const struct ttm_place cocci_id/* drivers/gpu/drm/vmwgfx/vmwgfx_ttm_buffer.c 63 */;
	struct ttm_tt *cocci_id/* drivers/gpu/drm/vmwgfx/vmwgfx_ttm_buffer.c 579 */;
	const struct vmw_sg_table *cocci_id/* drivers/gpu/drm/vmwgfx/vmwgfx_ttm_buffer.c 570 */;
	void cocci_id/* drivers/gpu/drm/vmwgfx/vmwgfx_ttm_buffer.c 550 */;
	struct vmw_ttm_tt cocci_id/* drivers/gpu/drm/vmwgfx/vmwgfx_ttm_buffer.c 536 */;
	struct vmw_ttm_tt *cocci_id/* drivers/gpu/drm/vmwgfx/vmwgfx_ttm_buffer.c 535 */;
	struct ttm_buffer_object *cocci_id/* drivers/gpu/drm/vmwgfx/vmwgfx_ttm_buffer.c 533 */;
	int cocci_id/* drivers/gpu/drm/vmwgfx/vmwgfx_ttm_buffer.c 533 */;
	uint64_t cocci_id/* drivers/gpu/drm/vmwgfx/vmwgfx_ttm_buffer.c 453 */;
	struct sg_table cocci_id/* drivers/gpu/drm/vmwgfx/vmwgfx_ttm_buffer.c 437 */;
	struct scatterlist cocci_id/* drivers/gpu/drm/vmwgfx/vmwgfx_ttm_buffer.c 436 */;
	size_t cocci_id/* drivers/gpu/drm/vmwgfx/vmwgfx_ttm_buffer.c 420 */;
	struct vmw_piter cocci_id/* drivers/gpu/drm/vmwgfx/vmwgfx_ttm_buffer.c 417 */;
	struct ttm_operation_ctx cocci_id/* drivers/gpu/drm/vmwgfx/vmwgfx_ttm_buffer.c 413 */;
	struct vmw_sg_table *cocci_id/* drivers/gpu/drm/vmwgfx/vmwgfx_ttm_buffer.c 412 */;
	struct ttm_mem_global *cocci_id/* drivers/gpu/drm/vmwgfx/vmwgfx_ttm_buffer.c 411 */;
	struct device *cocci_id/* drivers/gpu/drm/vmwgfx/vmwgfx_ttm_buffer.c 385 */;
	unsigned long cocci_id/* drivers/gpu/drm/vmwgfx/vmwgfx_ttm_buffer.c 325 */;
	dma_addr_t cocci_id/* drivers/gpu/drm/vmwgfx/vmwgfx_ttm_buffer.c 303 */;
	struct vmw_piter *cocci_id/* drivers/gpu/drm/vmwgfx/vmwgfx_ttm_buffer.c 303 */;
	struct page *cocci_id/* drivers/gpu/drm/vmwgfx/vmwgfx_ttm_buffer.c 284 */;
	bool cocci_id/* drivers/gpu/drm/vmwgfx/vmwgfx_ttm_buffer.c 262 */;
	const size_t cocci_id/* drivers/gpu/drm/vmwgfx/vmwgfx_ttm_buffer.c 251 */;
	struct vmw_ttm_tt {
		struct ttm_dma_tt dma_ttm;
		struct vmw_private *dev_priv;
		int gmr_id;
		struct vmw_mob *mob;
		int mem_type;
		struct sg_table sgt;
		struct vmw_sg_table vsgt;
		uint64_t sg_alloc_size;
		bool mapped;
	} cocci_id/* drivers/gpu/drm/vmwgfx/vmwgfx_ttm_buffer.c 239 */;
	struct ttm_placement cocci_id/* drivers/gpu/drm/vmwgfx/vmwgfx_ttm_buffer.c 204 */;
	const struct ttm_place cocci_id/* drivers/gpu/drm/vmwgfx/vmwgfx_ttm_buffer.c 168 */[];
}
