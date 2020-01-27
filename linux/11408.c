cocci_test_suite() {
	struct drm_crtc *cocci_id/* drivers/gpu/drm/vmwgfx/vmwgfx_ldu.c 83 */;
	struct drm_framebuffer *cocci_id/* drivers/gpu/drm/vmwgfx/vmwgfx_ldu.c 82 */;
	struct {
		uint32_t header;
		SVGAFifoCmdUpdate body;
	} *cocci_id/* drivers/gpu/drm/vmwgfx/vmwgfx_ldu.c 553 */;
	size_t cocci_id/* drivers/gpu/drm/vmwgfx/vmwgfx_ldu.c 550 */;
	struct vmw_legacy_display_unit {
		struct vmw_display_unit base;
		struct list_head active;
	} cocci_id/* drivers/gpu/drm/vmwgfx/vmwgfx_ldu.c 55 */;
	struct drm_clip_rect *cocci_id/* drivers/gpu/drm/vmwgfx/vmwgfx_ldu.c 547 */;
	unsigned int cocci_id/* drivers/gpu/drm/vmwgfx/vmwgfx_ldu.c 546 */;
	struct vmw_framebuffer *cocci_id/* drivers/gpu/drm/vmwgfx/vmwgfx_ldu.c 545 */;
	struct vmw_private *cocci_id/* drivers/gpu/drm/vmwgfx/vmwgfx_ldu.c 531 */;
	int cocci_id/* drivers/gpu/drm/vmwgfx/vmwgfx_ldu.c 531 */;
	struct drm_device *cocci_id/* drivers/gpu/drm/vmwgfx/vmwgfx_ldu.c 486 */;
	struct vmw_legacy_display {
		struct list_head active;
		unsigned num_active;
		unsigned last_num_active;
		struct vmw_framebuffer *fb;
	} cocci_id/* drivers/gpu/drm/vmwgfx/vmwgfx_ldu.c 43 */;
	struct vmw_legacy_display_unit cocci_id/* drivers/gpu/drm/vmwgfx/vmwgfx_ldu.c 37 */;
	struct drm_plane *cocci_id/* drivers/gpu/drm/vmwgfx/vmwgfx_ldu.c 359 */;
	unsigned cocci_id/* drivers/gpu/drm/vmwgfx/vmwgfx_ldu.c 353 */;
	const struct drm_crtc_helper_funcs cocci_id/* drivers/gpu/drm/vmwgfx/vmwgfx_ldu.c 343 */;
	const struct drm_plane_helper_funcs cocci_id/* drivers/gpu/drm/vmwgfx/vmwgfx_ldu.c 329 */;
	const struct drm_plane_funcs cocci_id/* drivers/gpu/drm/vmwgfx/vmwgfx_ldu.c 317 */;
	struct drm_plane_state *cocci_id/* drivers/gpu/drm/vmwgfx/vmwgfx_ldu.c 284 */;
	const struct drm_connector_helper_funcs cocci_id/* drivers/gpu/drm/vmwgfx/vmwgfx_ldu.c 274 */;
	const struct drm_connector_funcs cocci_id/* drivers/gpu/drm/vmwgfx/vmwgfx_ldu.c 264 */;
	struct drm_connector *cocci_id/* drivers/gpu/drm/vmwgfx/vmwgfx_ldu.c 259 */;
	void cocci_id/* drivers/gpu/drm/vmwgfx/vmwgfx_ldu.c 259 */;
	const struct drm_encoder_funcs cocci_id/* drivers/gpu/drm/vmwgfx/vmwgfx_ldu.c 251 */;
	struct drm_encoder *cocci_id/* drivers/gpu/drm/vmwgfx/vmwgfx_ldu.c 246 */;
	const struct drm_crtc_funcs cocci_id/* drivers/gpu/drm/vmwgfx/vmwgfx_ldu.c 232 */;
	struct drm_crtc_state *cocci_id/* drivers/gpu/drm/vmwgfx/vmwgfx_ldu.c 228 */;
	struct list_head *cocci_id/* drivers/gpu/drm/vmwgfx/vmwgfx_ldu.c 166 */;
	struct vmw_legacy_display *cocci_id/* drivers/gpu/drm/vmwgfx/vmwgfx_ldu.c 164 */;
	struct vmw_legacy_display_unit *cocci_id/* drivers/gpu/drm/vmwgfx/vmwgfx_ldu.c 161 */;
	typeof(*entry) cocci_id/* drivers/gpu/drm/vmwgfx/vmwgfx_ldu.c 108 */;
}
