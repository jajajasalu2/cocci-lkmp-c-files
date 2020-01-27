cocci_test_suite() {
	struct ipu_soc *cocci_id/* drivers/gpu/drm/imx/ipuv3-crtc.c 85 */;
	struct ipu_crtc *cocci_id/* drivers/gpu/drm/imx/ipuv3-crtc.c 84 */;
	struct drm_plane *cocci_id/* drivers/gpu/drm/imx/ipuv3-crtc.c 66 */;
	bool cocci_id/* drivers/gpu/drm/imx/ipuv3-crtc.c 64 */;
	struct platform_driver cocci_id/* drivers/gpu/drm/imx/ipuv3-crtc.c 495 */;
	struct platform_device *cocci_id/* drivers/gpu/drm/imx/ipuv3-crtc.c 474 */;
	const struct component_ops cocci_id/* drivers/gpu/drm/imx/ipuv3-crtc.c 469 */;
	struct ipu_crtc cocci_id/* drivers/gpu/drm/imx/ipuv3-crtc.c 46 */;
	struct device *cocci_id/* drivers/gpu/drm/imx/ipuv3-crtc.c 436 */;
	void *cocci_id/* drivers/gpu/drm/imx/ipuv3-crtc.c 436 */;
	struct ipu_client_platformdata *cocci_id/* drivers/gpu/drm/imx/ipuv3-crtc.c 360 */;
	struct drm_device *cocci_id/* drivers/gpu/drm/imx/ipuv3-crtc.c 360 */;
	const struct drm_crtc_helper_funcs cocci_id/* drivers/gpu/drm/imx/ipuv3-crtc.c 316 */;
	struct ipu_crtc {
		struct device *dev;
		struct drm_crtc base;
		struct ipu_plane *plane[2];
		struct ipu_dc *dc;
		struct ipu_di *di;
		int irq;
		struct drm_pending_vblank_event *event;
	} cocci_id/* drivers/gpu/drm/imx/ipuv3-crtc.c 31 */;
	unsigned long cocci_id/* drivers/gpu/drm/imx/ipuv3-crtc.c 271 */;
	struct ipu_di_signal_cfg cocci_id/* drivers/gpu/drm/imx/ipuv3-crtc.c 270 */;
	struct drm_encoder *cocci_id/* drivers/gpu/drm/imx/ipuv3-crtc.c 266 */;
	u32 cocci_id/* drivers/gpu/drm/imx/ipuv3-crtc.c 235 */;
	int cocci_id/* drivers/gpu/drm/imx/ipuv3-crtc.c 232 */;
	struct videomode cocci_id/* drivers/gpu/drm/imx/ipuv3-crtc.c 215 */;
	struct drm_display_mode *cocci_id/* drivers/gpu/drm/imx/ipuv3-crtc.c 212 */;
	const struct drm_display_mode *cocci_id/* drivers/gpu/drm/imx/ipuv3-crtc.c 211 */;
	struct ipu_plane *cocci_id/* drivers/gpu/drm/imx/ipuv3-crtc.c 189 */;
	irqreturn_t cocci_id/* drivers/gpu/drm/imx/ipuv3-crtc.c 178 */;
	const struct drm_crtc_funcs cocci_id/* drivers/gpu/drm/imx/ipuv3-crtc.c 167 */;
	struct drm_crtc_state *cocci_id/* drivers/gpu/drm/imx/ipuv3-crtc.c 145 */;
	struct drm_crtc *cocci_id/* drivers/gpu/drm/imx/ipuv3-crtc.c 144 */;
	void cocci_id/* drivers/gpu/drm/imx/ipuv3-crtc.c 144 */;
	struct imx_crtc_state *cocci_id/* drivers/gpu/drm/imx/ipuv3-crtc.c 130 */;
}
