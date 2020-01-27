cocci_test_suite() {
	struct vmw_user_context cocci_id/* drivers/gpu/drm/vmwgfx/vmwgfx_context.c 880 */;
	struct vmw_user_context *cocci_id/* drivers/gpu/drm/vmwgfx/vmwgfx_context.c 879 */;
	struct vmw_buffer_object *cocci_id/* drivers/gpu/drm/vmwgfx/vmwgfx_context.c 877 */;
	struct vmw_resource *cocci_id/* drivers/gpu/drm/vmwgfx/vmwgfx_context.c 876 */;
	int cocci_id/* drivers/gpu/drm/vmwgfx/vmwgfx_context.c 876 */;
	struct vmw_ctx_binding_state *cocci_id/* drivers/gpu/drm/vmwgfx/vmwgfx_context.c 858 */;
	SVGACOTableType cocci_id/* drivers/gpu/drm/vmwgfx/vmwgfx_context.c 840 */;
	struct vmw_cmdbuf_res_manager *cocci_id/* drivers/gpu/drm/vmwgfx/vmwgfx_context.c 834 */;
	struct list_head *cocci_id/* drivers/gpu/drm/vmwgfx/vmwgfx_context.c 826 */;
	typeof(arg) cocci_id/* drivers/gpu/drm/vmwgfx/vmwgfx_context.c 804 */;
	union drm_vmw_extended_context_arg *cocci_id/* drivers/gpu/drm/vmwgfx/vmwgfx_context.c 804 */;
	struct ttm_operation_ctx cocci_id/* drivers/gpu/drm/vmwgfx/vmwgfx_context.c 728 */;
	struct ttm_object_file *cocci_id/* drivers/gpu/drm/vmwgfx/vmwgfx_context.c 727 */;
	struct drm_vmw_context_arg *cocci_id/* drivers/gpu/drm/vmwgfx/vmwgfx_context.c 726 */;
	struct vmw_private *cocci_id/* drivers/gpu/drm/vmwgfx/vmwgfx_context.c 722 */;
	bool cocci_id/* drivers/gpu/drm/vmwgfx/vmwgfx_context.c 720 */;
	struct drm_file *cocci_id/* drivers/gpu/drm/vmwgfx/vmwgfx_context.c 720 */;
	struct drm_device *cocci_id/* drivers/gpu/drm/vmwgfx/vmwgfx_context.c 719 */;
	void *cocci_id/* drivers/gpu/drm/vmwgfx/vmwgfx_context.c 719 */;
	const struct vmw_user_resource_conv *cocci_id/* drivers/gpu/drm/vmwgfx/vmwgfx_context.c 71 */;
	struct ttm_base_object *cocci_id/* drivers/gpu/drm/vmwgfx/vmwgfx_context.c 701 */;
	struct ttm_base_object **cocci_id/* drivers/gpu/drm/vmwgfx/vmwgfx_context.c 699 */;
	const struct vmw_user_resource_conv cocci_id/* drivers/gpu/drm/vmwgfx/vmwgfx_context.c 65 */;
	struct {
		SVGA3dCmdHeader header;
		SVGA3dCmdDXDestroyContext body;
	} *cocci_id/* drivers/gpu/drm/vmwgfx/vmwgfx_context.c 644 */;
	uint64_t cocci_id/* drivers/gpu/drm/vmwgfx/vmwgfx_context.c 63 */;
	uint8_t *cocci_id/* drivers/gpu/drm/vmwgfx/vmwgfx_context.c 587 */;
	uint32_t cocci_id/* drivers/gpu/drm/vmwgfx/vmwgfx_context.c 586 */;
	int cocci_id/* drivers/gpu/drm/vmwgfx/vmwgfx_context.c 58 */(struct vmw_resource *res,
								     bool readback,
								     struct ttm_validate_buffer *val_buf);
	struct {
		SVGA3dCmdHeader header;
		SVGA3dCmdDXReadbackContext body;
	} *cocci_id/* drivers/gpu/drm/vmwgfx/vmwgfx_context.c 578 */;
	struct vmw_fence_obj *cocci_id/* drivers/gpu/drm/vmwgfx/vmwgfx_context.c 574 */;
	int cocci_id/* drivers/gpu/drm/vmwgfx/vmwgfx_context.c 56 */(struct vmw_resource *res,
								     struct ttm_validate_buffer *val_buf);
	int cocci_id/* drivers/gpu/drm/vmwgfx/vmwgfx_context.c 55 */(struct vmw_resource *res);
	struct ttm_buffer_object *cocci_id/* drivers/gpu/drm/vmwgfx/vmwgfx_context.c 509 */;
	struct {
		SVGA3dCmdHeader header;
		SVGA3dCmdDXBindContext body;
	} *cocci_id/* drivers/gpu/drm/vmwgfx/vmwgfx_context.c 505 */;
	struct ttm_validate_buffer *cocci_id/* drivers/gpu/drm/vmwgfx/vmwgfx_context.c 502 */;
	struct {
		SVGA3dCmdHeader header;
		SVGA3dCmdDXDefineContext body;
	} *cocci_id/* drivers/gpu/drm/vmwgfx/vmwgfx_context.c 462 */;
	struct vmw_resource *cocci_id/* drivers/gpu/drm/vmwgfx/vmwgfx_context.c 45 */(struct ttm_base_object *base);
	void cocci_id/* drivers/gpu/drm/vmwgfx/vmwgfx_context.c 44 */(struct vmw_resource *res);
	struct {
		SVGA3dCmdHeader header;
		SVGA3dCmdDestroyGBContext body;
	} *cocci_id/* drivers/gpu/drm/vmwgfx/vmwgfx_context.c 430 */;
	struct {
		SVGA3dCmdHeader header;
		SVGA3dCmdReadbackGBContext body;
	} *cocci_id/* drivers/gpu/drm/vmwgfx/vmwgfx_context.c 371 */;
	struct vmw_user_context {
		struct ttm_base_object base;
		struct vmw_resource res;
		struct vmw_ctx_binding_state *cbs;
		struct vmw_cmdbuf_res_manager *man;
		struct vmw_resource *cotables[SVGA_COTABLE_DX10_MAX];
		spinlock_t cotable_lock;
		struct vmw_buffer_object *dx_query_mob;
	} cocci_id/* drivers/gpu/drm/vmwgfx/vmwgfx_context.c 34 */;
	struct {
		SVGA3dCmdHeader header;
		SVGA3dCmdBindGBContext body;
	} *cocci_id/* drivers/gpu/drm/vmwgfx/vmwgfx_context.c 338 */;
	struct {
		SVGA3dCmdHeader header;
		SVGA3dCmdDefineGBContext body;
	} *cocci_id/* drivers/gpu/drm/vmwgfx/vmwgfx_context.c 295 */;
	struct {
		SVGA3dCmdHeader header;
		SVGA3dCmdDefineContext body;
	} *cocci_id/* drivers/gpu/drm/vmwgfx/vmwgfx_context.c 241 */;
	void (*cocci_id/* drivers/gpu/drm/vmwgfx/vmwgfx_context.c 236 */)(struct vmw_resource *res);
	struct {
		SVGA3dCmdHeader header;
		SVGA3dCmdDestroyContext body;
	} *cocci_id/* drivers/gpu/drm/vmwgfx/vmwgfx_context.c 140 */;
	void cocci_id/* drivers/gpu/drm/vmwgfx/vmwgfx_context.c 119 */;
	const struct vmw_res_func cocci_id/* drivers/gpu/drm/vmwgfx/vmwgfx_context.c 101 */;
}
