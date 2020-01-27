cocci_test_suite() {
	struct drm_connector *cocci_id/* drivers/gpu/drm/arm/malidp_mw.c 82 */;
	bool cocci_id/* drivers/gpu/drm/arm/malidp_mw.c 77 */;
	enum drm_connector_status cocci_id/* drivers/gpu/drm/arm/malidp_mw.c 76 */;
	const struct drm_connector_helper_funcs cocci_id/* drivers/gpu/drm/arm/malidp_mw.c 59 */;
	struct drm_mode_config *cocci_id/* drivers/gpu/drm/arm/malidp_mw.c 47 */;
	struct drm_display_mode *cocci_id/* drivers/gpu/drm/arm/malidp_mw.c 44 */;
	enum drm_mode_status cocci_id/* drivers/gpu/drm/arm/malidp_mw.c 42 */;
	struct drm_framebuffer *cocci_id/* drivers/gpu/drm/arm/malidp_mw.c 252 */;
	struct malidp_mw_connector_state *cocci_id/* drivers/gpu/drm/arm/malidp_mw.c 244 */;
	struct malidp_hw_device *cocci_id/* drivers/gpu/drm/arm/malidp_mw.c 243 */;
	struct drm_connector_state *cocci_id/* drivers/gpu/drm/arm/malidp_mw.c 242 */;
	struct drm_writeback_connector *cocci_id/* drivers/gpu/drm/arm/malidp_mw.c 241 */;
	struct malidp_mw_connector_state {
		struct drm_connector_state base;
		dma_addr_t addrs[2];
		s32 pitches[2];
		u8 format;
		u8 n_planes;
		bool rgb2yuv_initialized;
		const s16 *rgb2yuv_coeffs;
	} cocci_id/* drivers/gpu/drm/arm/malidp_mw.c 24 */;
	struct drm_atomic_state *cocci_id/* drivers/gpu/drm/arm/malidp_mw.c 238 */;
	struct drm_device *cocci_id/* drivers/gpu/drm/arm/malidp_mw.c 237 */;
	void cocci_id/* drivers/gpu/drm/arm/malidp_mw.c 237 */;
	int cocci_id/* drivers/gpu/drm/arm/malidp_mw.c 192 */;
	const struct malidp_hw_regmap *cocci_id/* drivers/gpu/drm/arm/malidp_mw.c 190 */;
	u32 *cocci_id/* drivers/gpu/drm/arm/malidp_mw.c 188 */;
	struct malidp_drm *cocci_id/* drivers/gpu/drm/arm/malidp_mw.c 188 */;
	int *cocci_id/* drivers/gpu/drm/arm/malidp_mw.c 188 */;
	const struct drm_encoder_helper_funcs cocci_id/* drivers/gpu/drm/arm/malidp_mw.c 184 */;
	u8 cocci_id/* drivers/gpu/drm/arm/malidp_mw.c 166 */;
	struct drm_gem_cma_object *cocci_id/* drivers/gpu/drm/arm/malidp_mw.c 164 */;
	struct drm_format_name_buf cocci_id/* drivers/gpu/drm/arm/malidp_mw.c 154 */;
	struct drm_crtc_state *cocci_id/* drivers/gpu/drm/arm/malidp_mw.c 126 */;
	struct drm_encoder *cocci_id/* drivers/gpu/drm/arm/malidp_mw.c 125 */;
	const s16 cocci_id/* drivers/gpu/drm/arm/malidp_mw.c 117 */[MALIDP_COLORADJ_NUM_COEFFS];
	const struct drm_connector_funcs cocci_id/* drivers/gpu/drm/arm/malidp_mw.c 108 */;
}
