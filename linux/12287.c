cocci_test_suite() {
	const struct display_timing cocci_id/* drivers/gpu/drm/panel/panel-simple.c 614 */;
	struct panel_desc {
		const struct drm_display_mode *modes;
		unsigned int num_modes;
		const struct display_timing *timings;
		unsigned int num_timings;
		unsigned int bpc;
		struct {
			unsigned int width;
			unsigned int height;
		} size;
		struct {
			unsigned int prepare;
			unsigned int hpd_absent_delay;
			unsigned int enable;
			unsigned int disable;
			unsigned int unprepare;
		} delay;
		u32 bus_format;
		u32 bus_flags;
		int connector_type;
	} cocci_id/* drivers/gpu/drm/panel/panel-simple.c 57 */;
	const struct panel_desc cocci_id/* drivers/gpu/drm/panel/panel-simple.c 554 */;
	const struct drm_display_mode cocci_id/* drivers/gpu/drm/panel/panel-simple.c 540 */;
	struct display_timing cocci_id/* drivers/gpu/drm/panel/panel-simple.c 419 */;
	struct device_node *cocci_id/* drivers/gpu/drm/panel/panel-simple.c 417 */;
	void __exit cocci_id/* drivers/gpu/drm/panel/panel-simple.c 3774 */;
	int __init cocci_id/* drivers/gpu/drm/panel/panel-simple.c 3756 */;
	const struct panel_desc *cocci_id/* drivers/gpu/drm/panel/panel-simple.c 375 */;
	struct mipi_dsi_driver cocci_id/* drivers/gpu/drm/panel/panel-simple.c 3746 */;
	void cocci_id/* drivers/gpu/drm/panel/panel-simple.c 3741 */;
	struct device *cocci_id/* drivers/gpu/drm/panel/panel-simple.c 371 */;
	const struct of_device_id *cocci_id/* drivers/gpu/drm/panel/panel-simple.c 3703 */;
	const struct panel_desc_dsi *cocci_id/* drivers/gpu/drm/panel/panel-simple.c 3702 */;
	struct mipi_dsi_device *cocci_id/* drivers/gpu/drm/panel/panel-simple.c 3700 */;
	const struct of_device_id cocci_id/* drivers/gpu/drm/panel/panel-simple.c 3672 */[];
	const struct drm_panel_funcs cocci_id/* drivers/gpu/drm/panel/panel-simple.c 359 */;
	const struct panel_desc_dsi cocci_id/* drivers/gpu/drm/panel/panel-simple.c 3483 */;
	struct panel_desc_dsi {
		struct panel_desc desc;
		unsigned long flags;
		enum mipi_dsi_pixel_format format;
		unsigned int lanes;
	} cocci_id/* drivers/gpu/drm/panel/panel-simple.c 3462 */;
	struct platform_driver cocci_id/* drivers/gpu/drm/panel/panel-simple.c 3452 */;
	struct display_timing *cocci_id/* drivers/gpu/drm/panel/panel-simple.c 344 */;
	struct platform_device *cocci_id/* drivers/gpu/drm/panel/panel-simple.c 3431 */;
	struct edid *cocci_id/* drivers/gpu/drm/panel/panel-simple.c 328 */;
	const struct drm_display_mode cocci_id/* drivers/gpu/drm/panel/panel-simple.c 3073 */[];
	struct panel_simple *cocci_id/* drivers/gpu/drm/panel/panel-simple.c 234 */;
	struct drm_panel *cocci_id/* drivers/gpu/drm/panel/panel-simple.c 232 */;
	int cocci_id/* drivers/gpu/drm/panel/panel-simple.c 232 */;
	bool cocci_id/* drivers/gpu/drm/panel/panel-simple.c 191 */;
	const struct drm_display_mode *cocci_id/* drivers/gpu/drm/panel/panel-simple.c 163 */;
	struct drm_display_mode *cocci_id/* drivers/gpu/drm/panel/panel-simple.c 159 */;
	struct drm_device *cocci_id/* drivers/gpu/drm/panel/panel-simple.c 158 */;
	struct drm_connector *cocci_id/* drivers/gpu/drm/panel/panel-simple.c 157 */;
	unsigned int cocci_id/* drivers/gpu/drm/panel/panel-simple.c 155 */;
	struct videomode cocci_id/* drivers/gpu/drm/panel/panel-simple.c 131 */;
	const struct display_timing *cocci_id/* drivers/gpu/drm/panel/panel-simple.c 130 */;
	struct panel_simple cocci_id/* drivers/gpu/drm/panel/panel-simple.c 119 */;
	struct panel_simple {
		struct drm_panel base;
		bool prepared;
		bool enabled;
		bool no_hpd;
		const struct panel_desc *desc;
		struct backlight_device *backlight;
		struct regulator *supply;
		struct i2c_adapter *ddc;
		struct gpio_desc *enable_gpio;
		struct drm_display_mode override_mode;
	} cocci_id/* drivers/gpu/drm/panel/panel-simple.c 100 */;
}
