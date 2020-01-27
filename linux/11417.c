cocci_test_suite() {
	struct vmw_cmdbuf_res cocci_id/* drivers/gpu/drm/vmwgfx/vmwgfx_cmdbuf_res.c 92 */;
	unsigned long cocci_id/* drivers/gpu/drm/vmwgfx/vmwgfx_cmdbuf_res.c 86 */;
	struct drm_hash_item *cocci_id/* drivers/gpu/drm/vmwgfx/vmwgfx_cmdbuf_res.c 84 */;
	struct vmw_cmdbuf_res_manager {
		struct drm_open_hash resources;
		struct list_head list;
		struct vmw_private *dev_priv;
	} cocci_id/* drivers/gpu/drm/vmwgfx/vmwgfx_cmdbuf_res.c 61 */;
	struct vmw_cmdbuf_res {
		struct vmw_resource *res;
		struct drm_hash_item hash;
		struct list_head head;
		enum vmw_cmdbuf_res_state state;
		struct vmw_cmdbuf_res_manager *man;
	} cocci_id/* drivers/gpu/drm/vmwgfx/vmwgfx_cmdbuf_res.c 43 */;
	struct hlist_head cocci_id/* drivers/gpu/drm/vmwgfx/vmwgfx_cmdbuf_res.c 342 */;
	struct vmw_cmdbuf_res_manager cocci_id/* drivers/gpu/drm/vmwgfx/vmwgfx_cmdbuf_res.c 341 */;
	size_t cocci_id/* drivers/gpu/drm/vmwgfx/vmwgfx_cmdbuf_res.c 335 */;
	struct vmw_private *cocci_id/* drivers/gpu/drm/vmwgfx/vmwgfx_cmdbuf_res.c 287 */;
	struct vmw_resource **cocci_id/* drivers/gpu/drm/vmwgfx/vmwgfx_cmdbuf_res.c 244 */;
	struct vmw_cmdbuf_res *cocci_id/* drivers/gpu/drm/vmwgfx/vmwgfx_cmdbuf_res.c 203 */;
	struct list_head *cocci_id/* drivers/gpu/drm/vmwgfx/vmwgfx_cmdbuf_res.c 201 */;
	struct vmw_resource *cocci_id/* drivers/gpu/drm/vmwgfx/vmwgfx_cmdbuf_res.c 200 */;
	u32 cocci_id/* drivers/gpu/drm/vmwgfx/vmwgfx_cmdbuf_res.c 199 */;
	enum vmw_cmdbuf_res_type cocci_id/* drivers/gpu/drm/vmwgfx/vmwgfx_cmdbuf_res.c 198 */;
	struct vmw_cmdbuf_res_manager *cocci_id/* drivers/gpu/drm/vmwgfx/vmwgfx_cmdbuf_res.c 197 */;
	int cocci_id/* drivers/gpu/drm/vmwgfx/vmwgfx_cmdbuf_res.c 197 */;
	void cocci_id/* drivers/gpu/drm/vmwgfx/vmwgfx_cmdbuf_res.c 123 */;
}
