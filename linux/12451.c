cocci_test_suite() {
	struct drm_ctx_list {
		struct list_head head;
		drm_context_t handle;
		struct drm_file *tag;
	} cocci_id/* drivers/gpu/drm/drm_context.c 40 */;
	struct drm_ctx *cocci_id/* drivers/gpu/drm/drm_context.c 369 */;
	struct drm_ctx_list *cocci_id/* drivers/gpu/drm/drm_context.c 368 */;
	void *cocci_id/* drivers/gpu/drm/drm_context.c 365 */;
	struct drm_ctx cocci_id/* drivers/gpu/drm/drm_context.c 334 */;
	struct drm_ctx_res *cocci_id/* drivers/gpu/drm/drm_context.c 333 */;
	struct drm_file *cocci_id/* drivers/gpu/drm/drm_context.c 305 */;
	struct drm_device *cocci_id/* drivers/gpu/drm/drm_context.c 276 */;
	int cocci_id/* drivers/gpu/drm/drm_context.c 276 */;
	unsigned long cocci_id/* drivers/gpu/drm/drm_context.c 201 */;
	struct drm_map_list *cocci_id/* drivers/gpu/drm/drm_context.c 183 */;
	struct drm_local_map *cocci_id/* drivers/gpu/drm/drm_context.c 182 */;
	struct drm_ctx_priv_map *cocci_id/* drivers/gpu/drm/drm_context.c 181 */;
	void cocci_id/* drivers/gpu/drm/drm_context.c 115 */;
}
