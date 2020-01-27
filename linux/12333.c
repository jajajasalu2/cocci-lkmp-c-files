cocci_test_suite() {
	struct drm_modeset_acquire_ctx *cocci_id/* drivers/gpu/drm/vc4/vc4_crtc.c 967 */;
	struct vc4_bo *cocci_id/* drivers/gpu/drm/vc4/vc4_crtc.c 903 */;
	struct drm_gem_cma_object *cocci_id/* drivers/gpu/drm/vc4/vc4_crtc.c 902 */;
	struct vc4_async_flip_state *cocci_id/* drivers/gpu/drm/vc4/vc4_crtc.c 901 */;
	const struct drm_display_mode *cocci_id/* drivers/gpu/drm/vc4/vc4_crtc.c 90 */;
	struct drm_plane *cocci_id/* drivers/gpu/drm/vc4/vc4_crtc.c 899 */;
	uint32_t cocci_id/* drivers/gpu/drm/vc4/vc4_crtc.c 895 */;
	struct drm_pending_vblank_event *cocci_id/* drivers/gpu/drm/vc4/vc4_crtc.c 894 */;
	struct drm_framebuffer *cocci_id/* drivers/gpu/drm/vc4/vc4_crtc.c 893 */;
	struct drm_crtc *cocci_id/* drivers/gpu/drm/vc4/vc4_crtc.c 892 */;
	int cocci_id/* drivers/gpu/drm/vc4/vc4_crtc.c 892 */;
	ktime_t *cocci_id/* drivers/gpu/drm/vc4/vc4_crtc.c 89 */;
	int *cocci_id/* drivers/gpu/drm/vc4/vc4_crtc.c 88 */;
	unsigned int cocci_id/* drivers/gpu/drm/vc4/vc4_crtc.c 87 */;
	unsigned long cocci_id/* drivers/gpu/drm/vc4/vc4_crtc.c 855 */;
	struct vc4_async_flip_state cocci_id/* drivers/gpu/drm/vc4/vc4_crtc.c 847 */;
	struct vc4_seqno_cb *cocci_id/* drivers/gpu/drm/vc4/vc4_crtc.c 844 */;
	struct vc4_async_flip_state {
		struct drm_crtc *crtc;
		struct drm_framebuffer *fb;
		struct drm_framebuffer *old_fb;
		struct drm_pending_vblank_event *event;
		struct vc4_seqno_cb cb;
	} cocci_id/* drivers/gpu/drm/vc4/vc4_crtc.c 831 */;
	irqreturn_t cocci_id/* drivers/gpu/drm/vc4/vc4_crtc.c 816 */;
	const struct debugfs_reg32 cocci_id/* drivers/gpu/drm/vc4/vc4_crtc.c 71 */[];
	u32 __iomem *cocci_id/* drivers/gpu/drm/vc4/vc4_crtc.c 693 */;
	bool cocci_id/* drivers/gpu/drm/vc4/vc4_crtc.c 691 */;
	struct vc4_plane_state *cocci_id/* drivers/gpu/drm/vc4/vc4_crtc.c 690 */;
	u32 cocci_id/* drivers/gpu/drm/vc4/vc4_crtc.c 636 */;
	struct drm_connector_state *cocci_id/* drivers/gpu/drm/vc4/vc4_crtc.c 635 */;
	struct drm_connector *cocci_id/* drivers/gpu/drm/vc4/vc4_crtc.c 634 */;
	const struct drm_plane_state *cocci_id/* drivers/gpu/drm/vc4/vc4_crtc.c 633 */;
	struct drm_crtc_state *cocci_id/* drivers/gpu/drm/vc4/vc4_crtc.c 63 */;
	struct vc4_crtc_state *cocci_id/* drivers/gpu/drm/vc4/vc4_crtc.c 62 */;
	unsigned int *cocci_id/* drivers/gpu/drm/vc4/vc4_crtc.c 595 */;
	enum drm_mode_status cocci_id/* drivers/gpu/drm/vc4/vc4_crtc.c 581 */;
	struct drm_display_mode *cocci_id/* drivers/gpu/drm/vc4/vc4_crtc.c 552 */;
	struct vc4_crtc_state {
		struct drm_crtc_state base;
		struct drm_mm_node mm;
		bool feed_txp;
		bool txp_armed;
		struct {
			unsigned int left;
			unsigned int right;
			unsigned int top;
			unsigned int bottom;
		} margins;
	} cocci_id/* drivers/gpu/drm/vc4/vc4_crtc.c 47 */;
	struct vc4_crtc *cocci_id/* drivers/gpu/drm/vc4/vc4_crtc.c 457 */;
	struct vc4_dev *cocci_id/* drivers/gpu/drm/vc4/vc4_crtc.c 446 */;
	struct drm_device *cocci_id/* drivers/gpu/drm/vc4/vc4_crtc.c 444 */;
	void cocci_id/* drivers/gpu/drm/vc4/vc4_crtc.c 444 */;
	struct drm_printer cocci_id/* drivers/gpu/drm/vc4/vc4_crtc.c 393 */;
	struct vc4_encoder *cocci_id/* drivers/gpu/drm/vc4/vc4_crtc.c 296 */;
	struct drm_encoder *cocci_id/* drivers/gpu/drm/vc4/vc4_crtc.c 295 */;
	struct drm_connector_list_iter cocci_id/* drivers/gpu/drm/vc4/vc4_crtc.c 279 */;
	const u32 cocci_id/* drivers/gpu/drm/vc4/vc4_crtc.c 253 */;
	struct drm_color_lut *cocci_id/* drivers/gpu/drm/vc4/vc4_crtc.c 238 */;
	struct platform_driver cocci_id/* drivers/gpu/drm/vc4/vc4_crtc.c 1270 */;
	const struct component_ops cocci_id/* drivers/gpu/drm/vc4/vc4_crtc.c 1254 */;
	const struct of_device_id *cocci_id/* drivers/gpu/drm/vc4/vc4_crtc.c 1131 */;
	struct platform_device *cocci_id/* drivers/gpu/drm/vc4/vc4_crtc.c 1126 */;
	struct device *cocci_id/* drivers/gpu/drm/vc4/vc4_crtc.c 1124 */;
	void *cocci_id/* drivers/gpu/drm/vc4/vc4_crtc.c 1124 */;
	const enum vc4_encoder_type *cocci_id/* drivers/gpu/drm/vc4/vc4_crtc.c 1083 */;
	const struct vc4_crtc_data *cocci_id/* drivers/gpu/drm/vc4/vc4_crtc.c 1082 */;
	const struct of_device_id cocci_id/* drivers/gpu/drm/vc4/vc4_crtc.c 1071 */[];
	const struct vc4_crtc_data cocci_id/* drivers/gpu/drm/vc4/vc4_crtc.c 1044 */;
	const struct drm_crtc_helper_funcs cocci_id/* drivers/gpu/drm/vc4/vc4_crtc.c 1035 */;
	const struct drm_crtc_funcs cocci_id/* drivers/gpu/drm/vc4/vc4_crtc.c 1020 */;
	struct vc4_crtc_state cocci_id/* drivers/gpu/drm/vc4/vc4_crtc.c 1015 */;
}
