cocci_test_suite() {
	struct vmwgfx_gmrid_man *cocci_id/* drivers/gpu/drm/vmwgfx/vmwgfx_gmrid_manager.c 52 */;
	struct ttm_mem_reg *cocci_id/* drivers/gpu/drm/vmwgfx/vmwgfx_gmrid_manager.c 50 */;
	const struct ttm_place *cocci_id/* drivers/gpu/drm/vmwgfx/vmwgfx_gmrid_manager.c 49 */;
	struct ttm_buffer_object *cocci_id/* drivers/gpu/drm/vmwgfx/vmwgfx_gmrid_manager.c 48 */;
	int cocci_id/* drivers/gpu/drm/vmwgfx/vmwgfx_gmrid_manager.c 47 */;
	struct vmwgfx_gmrid_man {
		spinlock_t lock;
		struct ida gmr_ida;
		uint32_t max_gmr_ids;
		uint32_t max_gmr_pages;
		uint32_t used_gmr_pages;
	} cocci_id/* drivers/gpu/drm/vmwgfx/vmwgfx_gmrid_manager.c 39 */;
	const struct ttm_mem_type_manager_func cocci_id/* drivers/gpu/drm/vmwgfx/vmwgfx_gmrid_manager.c 148 */;
	struct drm_printer *cocci_id/* drivers/gpu/drm/vmwgfx/vmwgfx_gmrid_manager.c 143 */;
	struct ttm_mem_type_manager *cocci_id/* drivers/gpu/drm/vmwgfx/vmwgfx_gmrid_manager.c 142 */;
	void cocci_id/* drivers/gpu/drm/vmwgfx/vmwgfx_gmrid_manager.c 142 */;
	void *cocci_id/* drivers/gpu/drm/vmwgfx/vmwgfx_gmrid_manager.c 126 */;
	struct vmw_private cocci_id/* drivers/gpu/drm/vmwgfx/vmwgfx_gmrid_manager.c 103 */;
	struct vmw_private *cocci_id/* drivers/gpu/drm/vmwgfx/vmwgfx_gmrid_manager.c 102 */;
	unsigned long cocci_id/* drivers/gpu/drm/vmwgfx/vmwgfx_gmrid_manager.c 100 */;
}
