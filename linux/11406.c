cocci_test_suite() {
	const struct vmw_res_func cocci_id/* drivers/gpu/drm/vmwgfx/vmwgfx_so.c 81 */;
	void cocci_id/* drivers/gpu/drm/vmwgfx/vmwgfx_so.c 78 */(struct vmw_resource *res,
								 enum vmw_cmdbuf_res_state state);
	void cocci_id/* drivers/gpu/drm/vmwgfx/vmwgfx_so.c 77 */(struct vmw_resource *res);
	int cocci_id/* drivers/gpu/drm/vmwgfx/vmwgfx_so.c 75 */(struct vmw_resource *res);
	struct vmw_view {
		struct rcu_head rcu;
		struct vmw_resource res;
		struct vmw_resource *ctx;
		struct vmw_resource *srf;
		struct vmw_resource *cotable;
		struct list_head srf_head;
		struct list_head cotable_head;
		unsigned view_type;
		unsigned view_id;
		u32 cmd_size;
		bool committed;
		u32 cmd[1];
	} cocci_id/* drivers/gpu/drm/vmwgfx/vmwgfx_so.c 60 */;
	struct vmw_view_define cocci_id/* drivers/gpu/drm/vmwgfx/vmwgfx_so.c 573 */;
	u32 cocci_id/* drivers/gpu/drm/vmwgfx/vmwgfx_so.c 564 */;
	union vmw_view_destroy cocci_id/* drivers/gpu/drm/vmwgfx/vmwgfx_so.c 564 */;
	void cocci_id/* drivers/gpu/drm/vmwgfx/vmwgfx_so.c 542 */(void)__attribute__((used));
	const SVGACOTableType cocci_id/* drivers/gpu/drm/vmwgfx/vmwgfx_so.c 531 */[];
	const u32 cocci_id/* drivers/gpu/drm/vmwgfx/vmwgfx_so.c 519 */[];
	u32 cocci_id/* drivers/gpu/drm/vmwgfx/vmwgfx_so.c 509 */[vmw_view_max];
	bool cocci_id/* drivers/gpu/drm/vmwgfx/vmwgfx_so.c 434 */;
	struct vmw_resource **cocci_id/* drivers/gpu/drm/vmwgfx/vmwgfx_so.c 408 */;
	SVGA3dCmdHeader cocci_id/* drivers/gpu/drm/vmwgfx/vmwgfx_so.c 336 */;
	struct ttm_operation_ctx cocci_id/* drivers/gpu/drm/vmwgfx/vmwgfx_so.c 328 */;
	const size_t cocci_id/* drivers/gpu/drm/vmwgfx/vmwgfx_so.c 319 */[];
	struct list_head *cocci_id/* drivers/gpu/drm/vmwgfx/vmwgfx_so.c 317 */;
	size_t cocci_id/* drivers/gpu/drm/vmwgfx/vmwgfx_so.c 316 */;
	const void *cocci_id/* drivers/gpu/drm/vmwgfx/vmwgfx_so.c 315 */;
	enum vmw_view_type cocci_id/* drivers/gpu/drm/vmwgfx/vmwgfx_so.c 313 */;
	struct vmw_cmdbuf_res_manager *cocci_id/* drivers/gpu/drm/vmwgfx/vmwgfx_so.c 310 */;
	int cocci_id/* drivers/gpu/drm/vmwgfx/vmwgfx_so.c 310 */;
	struct vmw_private *cocci_id/* drivers/gpu/drm/vmwgfx/vmwgfx_so.c 240 */;
	struct vmw_resource *cocci_id/* drivers/gpu/drm/vmwgfx/vmwgfx_so.c 238 */;
	void cocci_id/* drivers/gpu/drm/vmwgfx/vmwgfx_so.c 238 */;
	struct {
		SVGA3dCmdHeader header;
		union vmw_view_destroy body;
	} *cocci_id/* drivers/gpu/drm/vmwgfx/vmwgfx_so.c 205 */;
	struct {
		SVGA3dCmdHeader header;
		struct vmw_view_define body;
	} *cocci_id/* drivers/gpu/drm/vmwgfx/vmwgfx_so.c 162 */;
	struct vmw_surface *cocci_id/* drivers/gpu/drm/vmwgfx/vmwgfx_so.c 133 */;
	enum vmw_cmdbuf_res_state cocci_id/* drivers/gpu/drm/vmwgfx/vmwgfx_so.c 126 */;
	struct vmw_view cocci_id/* drivers/gpu/drm/vmwgfx/vmwgfx_so.c 114 */;
	struct vmw_view *cocci_id/* drivers/gpu/drm/vmwgfx/vmwgfx_so.c 112 */;
	struct vmw_view_define {
		uint32 view_id;
		uint32 sid;
	} cocci_id/* drivers/gpu/drm/vmwgfx/vmwgfx_so.c 100 */;
}
