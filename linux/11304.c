cocci_test_suite() {
	const struct drm_crtc_funcs cocci_id/* drivers/gpu/drm/meson/meson_crtc.c 62 */;
	int cocci_id/* drivers/gpu/drm/meson/meson_crtc.c 557 */;
	struct meson_crtc cocci_id/* drivers/gpu/drm/meson/meson_crtc.c 40 */;
	struct meson_crtc {
		struct drm_crtc base;
		struct drm_pending_vblank_event *event;
		struct meson_drm *priv;
		void (*enable_osd1)(struct meson_drm *priv);
		void (*enable_vd1)(struct meson_drm *priv);
		unsigned int viu_offset;
	} cocci_id/* drivers/gpu/drm/meson/meson_crtc.c 32 */;
	const struct drm_crtc_helper_funcs cocci_id/* drivers/gpu/drm/meson/meson_crtc.c 219 */;
	unsigned long cocci_id/* drivers/gpu/drm/meson/meson_crtc.c 197 */;
	struct meson_crtc *cocci_id/* drivers/gpu/drm/meson/meson_crtc.c 196 */;
	struct drm_crtc_state *cocci_id/* drivers/gpu/drm/meson/meson_crtc.c 194 */;
	struct drm_crtc *cocci_id/* drivers/gpu/drm/meson/meson_crtc.c 193 */;
	void cocci_id/* drivers/gpu/drm/meson/meson_crtc.c 193 */;
	struct meson_drm *cocci_id/* drivers/gpu/drm/meson/meson_crtc.c 167 */;
}
