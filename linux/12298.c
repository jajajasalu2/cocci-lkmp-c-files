cocci_test_suite() {
	const struct drm_display_mode *cocci_id/* drivers/gpu/drm/panel/panel-seiko-43wvf1g.c 93 */;
	struct videomode cocci_id/* drivers/gpu/drm/panel/panel-seiko-43wvf1g.c 71 */;
	const struct display_timing *cocci_id/* drivers/gpu/drm/panel/panel-seiko-43wvf1g.c 70 */;
	unsigned int cocci_id/* drivers/gpu/drm/panel/panel-seiko-43wvf1g.c 64 */;
	struct drm_display_mode *cocci_id/* drivers/gpu/drm/panel/panel-seiko-43wvf1g.c 63 */;
	struct drm_device *cocci_id/* drivers/gpu/drm/panel/panel-seiko-43wvf1g.c 62 */;
	struct drm_connector *cocci_id/* drivers/gpu/drm/panel/panel-seiko-43wvf1g.c 61 */;
	struct seiko_panel cocci_id/* drivers/gpu/drm/panel/panel-seiko-43wvf1g.c 56 */;
	struct seiko_panel {
		struct drm_panel base;
		bool prepared;
		bool enabled;
		const struct seiko_panel_desc *desc;
		struct backlight_device *backlight;
		struct regulator *dvdd;
		struct regulator *avdd;
	} cocci_id/* drivers/gpu/drm/panel/panel-seiko-43wvf1g.c 44 */;
	struct platform_driver cocci_id/* drivers/gpu/drm/panel/panel-seiko-43wvf1g.c 356 */;
	const struct of_device_id *cocci_id/* drivers/gpu/drm/panel/panel-seiko-43wvf1g.c 347 */;
	struct platform_device *cocci_id/* drivers/gpu/drm/panel/panel-seiko-43wvf1g.c 345 */;
	const struct of_device_id cocci_id/* drivers/gpu/drm/panel/panel-seiko-43wvf1g.c 335 */[];
	const struct seiko_panel_desc cocci_id/* drivers/gpu/drm/panel/panel-seiko-43wvf1g.c 323 */;
	const struct display_timing cocci_id/* drivers/gpu/drm/panel/panel-seiko-43wvf1g.c 310 */;
	void cocci_id/* drivers/gpu/drm/panel/panel-seiko-43wvf1g.c 303 */;
	struct device_node *cocci_id/* drivers/gpu/drm/panel/panel-seiko-43wvf1g.c 248 */;
	const struct seiko_panel_desc *cocci_id/* drivers/gpu/drm/panel/panel-seiko-43wvf1g.c 246 */;
	struct device *cocci_id/* drivers/gpu/drm/panel/panel-seiko-43wvf1g.c 245 */;
	const struct drm_panel_funcs cocci_id/* drivers/gpu/drm/panel/panel-seiko-43wvf1g.c 236 */;
	struct seiko_panel_desc {
		const struct drm_display_mode *modes;
		unsigned int num_modes;
		const struct display_timing *timings;
		unsigned int num_timings;
		unsigned int bpc;
		struct {
			unsigned int width;
			unsigned int height;
		} size;
		u32 bus_format;
		u32 bus_flags;
	} cocci_id/* drivers/gpu/drm/panel/panel-seiko-43wvf1g.c 23 */;
	struct display_timing *cocci_id/* drivers/gpu/drm/panel/panel-seiko-43wvf1g.c 221 */;
	struct seiko_panel *cocci_id/* drivers/gpu/drm/panel/panel-seiko-43wvf1g.c 126 */;
	struct drm_panel *cocci_id/* drivers/gpu/drm/panel/panel-seiko-43wvf1g.c 124 */;
	int cocci_id/* drivers/gpu/drm/panel/panel-seiko-43wvf1g.c 124 */;
}
