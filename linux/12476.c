cocci_test_suite() {
	struct platform_driver cocci_id/* drivers/gpu/drm/sun4i/sun4i_tv.c 670 */;
	const struct of_device_id cocci_id/* drivers/gpu/drm/sun4i/sun4i_tv.c 664 */[];
	const struct component_ops cocci_id/* drivers/gpu/drm/sun4i/sun4i_tv.c 647 */;
	void __iomem *cocci_id/* drivers/gpu/drm/sun4i/sun4i_tv.c 550 */;
	struct resource *cocci_id/* drivers/gpu/drm/sun4i/sun4i_tv.c 549 */;
	struct sun4i_drv *cocci_id/* drivers/gpu/drm/sun4i/sun4i_tv.c 547 */;
	struct drm_device *cocci_id/* drivers/gpu/drm/sun4i/sun4i_tv.c 546 */;
	struct platform_device *cocci_id/* drivers/gpu/drm/sun4i/sun4i_tv.c 545 */;
	void *cocci_id/* drivers/gpu/drm/sun4i/sun4i_tv.c 543 */;
	struct device *cocci_id/* drivers/gpu/drm/sun4i/sun4i_tv.c 542 */;
	int cocci_id/* drivers/gpu/drm/sun4i/sun4i_tv.c 542 */;
	struct regmap_config cocci_id/* drivers/gpu/drm/sun4i/sun4i_tv.c 534 */;
	const struct drm_connector_funcs cocci_id/* drivers/gpu/drm/sun4i/sun4i_tv.c 526 */;
	void cocci_id/* drivers/gpu/drm/sun4i/sun4i_tv.c 520 */;
	struct drm_connector_helper_funcs cocci_id/* drivers/gpu/drm/sun4i/sun4i_tv.c 515 */;
	const struct tv_mode *cocci_id/* drivers/gpu/drm/sun4i/sun4i_tv.c 491 */;
	struct drm_display_mode *cocci_id/* drivers/gpu/drm/sun4i/sun4i_tv.c 490 */;
	struct drm_encoder_funcs cocci_id/* drivers/gpu/drm/sun4i/sun4i_tv.c 481 */;
	struct drm_encoder_helper_funcs cocci_id/* drivers/gpu/drm/sun4i/sun4i_tv.c 470 */;
	struct sun4i_crtc *cocci_id/* drivers/gpu/drm/sun4i/sun4i_tv.c 344 */;
	const struct drm_display_mode *cocci_id/* drivers/gpu/drm/sun4i/sun4i_tv.c 291 */;
	struct sun4i_tv cocci_id/* drivers/gpu/drm/sun4i/sun4i_tv.c 280 */;
	struct drm_connector *cocci_id/* drivers/gpu/drm/sun4i/sun4i_tv.c 278 */;
	struct sun4i_tv *cocci_id/* drivers/gpu/drm/sun4i/sun4i_tv.c 277 */;
	struct drm_encoder *cocci_id/* drivers/gpu/drm/sun4i/sun4i_tv.c 271 */;
	const struct tv_mode cocci_id/* drivers/gpu/drm/sun4i/sun4i_tv.c 212 */[];
	const struct resync_parameters cocci_id/* drivers/gpu/drm/sun4i/sun4i_tv.c 204 */;
	const struct color_gains cocci_id/* drivers/gpu/drm/sun4i/sun4i_tv.c 196 */;
	const struct burst_levels cocci_id/* drivers/gpu/drm/sun4i/sun4i_tv.c 188 */;
	const struct video_levels cocci_id/* drivers/gpu/drm/sun4i/sun4i_tv.c 180 */;
	struct sun4i_tv {
		struct drm_connector connector;
		struct drm_encoder encoder;
		struct clk *clk;
		struct regmap *regs;
		struct reset_control *reset;
		struct sun4i_drv *drv;
	} cocci_id/* drivers/gpu/drm/sun4i/sun4i_tv.c 169 */;
	struct tv_mode {
		char *name;
		u32 mode;
		u32 chroma_freq;
		u16 back_porch;
		u16 front_porch;
		u16 line_number;
		u16 vblank_level;
		u32 hdisplay;
		u16 hfront_porch;
		u16 hsync_len;
		u16 hback_porch;
		u32 vdisplay;
		u16 vfront_porch;
		u16 vsync_len;
		u16 vback_porch;
		bool yc_en;
		bool dac3_en;
		bool dac_bit25_en;
		const struct color_gains *color_gains;
		const struct burst_levels *burst_levels;
		const struct video_levels *video_levels;
		const struct resync_parameters *resync_params;
	} cocci_id/* drivers/gpu/drm/sun4i/sun4i_tv.c 139 */;
	struct resync_parameters {
		bool field;
		u16 line;
		u16 pixel;
	} cocci_id/* drivers/gpu/drm/sun4i/sun4i_tv.c 133 */;
	struct video_levels {
		u16 black;
		u16 blank;
	} cocci_id/* drivers/gpu/drm/sun4i/sun4i_tv.c 128 */;
	struct burst_levels {
		u16 cb;
		u16 cr;
	} cocci_id/* drivers/gpu/drm/sun4i/sun4i_tv.c 123 */;
	struct color_gains {
		u16 cb;
		u16 cr;
	} cocci_id/* drivers/gpu/drm/sun4i/sun4i_tv.c 118 */;
}
