cocci_test_suite() {
	const SVGACOTableType cocci_id/* drivers/gpu/drm/vmwgfx/vmwgfx_cotable.c 93 */[];
	const struct vmw_cotable_info cocci_id/* drivers/gpu/drm/vmwgfx/vmwgfx_cotable.c 74 */[];
	struct vmw_cotable_info {
		u32 min_initial_entries;
		u32 size;
		void (*unbind_func)(struct vmw_private *, struct list_head *,
				    bool);
	} cocci_id/* drivers/gpu/drm/vmwgfx/vmwgfx_cotable.c 67 */;
	struct list_head *cocci_id/* drivers/gpu/drm/vmwgfx/vmwgfx_cotable.c 655 */;
	void cocci_id/* drivers/gpu/drm/vmwgfx/vmwgfx_cotable.c 655 */;
	unsigned cocci_id/* drivers/gpu/drm/vmwgfx/vmwgfx_cotable.c 635 */;
	int cocci_id/* drivers/gpu/drm/vmwgfx/vmwgfx_cotable.c 574 */;
	struct ttm_operation_ctx cocci_id/* drivers/gpu/drm/vmwgfx/vmwgfx_cotable.c 570 */;
	u32 cocci_id/* drivers/gpu/drm/vmwgfx/vmwgfx_cotable.c 567 */;
	struct vmw_private *cocci_id/* drivers/gpu/drm/vmwgfx/vmwgfx_cotable.c 565 */;
	size_t cocci_id/* drivers/gpu/drm/vmwgfx/vmwgfx_cotable.c 542 */;
	struct vmw_cotable {
		struct vmw_resource res;
		struct vmw_resource *ctx;
		size_t size_read_back;
		int seen_entries;
		u32 type;
		bool scrubbed;
		struct list_head resource_list;
	} cocci_id/* drivers/gpu/drm/vmwgfx/vmwgfx_cotable.c 50 */;
	bool cocci_id/* drivers/gpu/drm/vmwgfx/vmwgfx_cotable.c 432 */;
	struct ttm_bo_kmap_obj cocci_id/* drivers/gpu/drm/vmwgfx/vmwgfx_cotable.c 391 */;
	struct ttm_buffer_object *cocci_id/* drivers/gpu/drm/vmwgfx/vmwgfx_cotable.c 387 */;
	struct vmw_buffer_object *cocci_id/* drivers/gpu/drm/vmwgfx/vmwgfx_cotable.c 386 */;
	struct vmw_fence_obj *cocci_id/* drivers/gpu/drm/vmwgfx/vmwgfx_cotable.c 347 */;
	struct {
		SVGA3dCmdHeader header;
		SVGA3dCmdDXReadbackCOTable body;
	} *cocci_id/* drivers/gpu/drm/vmwgfx/vmwgfx_cotable.c 343 */;
	void *cocci_id/* drivers/gpu/drm/vmwgfx/vmwgfx_cotable.c 270 */;
	struct {
		SVGA3dCmdHeader header;
		SVGA3dCmdDXSetCOTable body;
	} *cocci_id/* drivers/gpu/drm/vmwgfx/vmwgfx_cotable.c 248 */;
	struct ttm_validate_buffer *cocci_id/* drivers/gpu/drm/vmwgfx/vmwgfx_cotable.c 206 */;
	struct vmw_cotable cocci_id/* drivers/gpu/drm/vmwgfx/vmwgfx_cotable.c 137 */;
	struct vmw_resource *cocci_id/* drivers/gpu/drm/vmwgfx/vmwgfx_cotable.c 135 */;
	struct vmw_cotable *cocci_id/* drivers/gpu/drm/vmwgfx/vmwgfx_cotable.c 135 */;
	const struct vmw_res_func cocci_id/* drivers/gpu/drm/vmwgfx/vmwgfx_cotable.c 115 */;
	int cocci_id/* drivers/gpu/drm/vmwgfx/vmwgfx_cotable.c 112 */(struct vmw_resource *res);
	int cocci_id/* drivers/gpu/drm/vmwgfx/vmwgfx_cotable.c 109 */(struct vmw_resource *res,
								      bool readback,
								      struct ttm_validate_buffer *val_buf);
	int cocci_id/* drivers/gpu/drm/vmwgfx/vmwgfx_cotable.c 107 */(struct vmw_resource *res,
								      struct ttm_validate_buffer *val_buf);
}
