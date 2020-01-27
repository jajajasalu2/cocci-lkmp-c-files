cocci_test_suite() {
	struct panel_encoder *cocci_id/* drivers/gpu/drm/tilcdc/tilcdc_panel.c 91 */;
	const struct drm_encoder_helper_funcs cocci_id/* drivers/gpu/drm/tilcdc/tilcdc_panel.c 81 */;
	const struct drm_encoder_funcs cocci_id/* drivers/gpu/drm/tilcdc/tilcdc_panel.c 77 */;
	struct gpio_desc *cocci_id/* drivers/gpu/drm/tilcdc/tilcdc_panel.c 47 */;
	struct backlight_device *cocci_id/* drivers/gpu/drm/tilcdc/tilcdc_panel.c 46 */;
	void __exit cocci_id/* drivers/gpu/drm/tilcdc/tilcdc_panel.c 418 */;
	int __init cocci_id/* drivers/gpu/drm/tilcdc/tilcdc_panel.c 413 */;
	struct panel_encoder cocci_id/* drivers/gpu/drm/tilcdc/tilcdc_panel.c 41 */;
	struct platform_driver cocci_id/* drivers/gpu/drm/tilcdc/tilcdc_panel.c 403 */;
	const struct of_device_id cocci_id/* drivers/gpu/drm/tilcdc/tilcdc_panel.c 398 */[];
	struct panel_encoder {
		struct drm_encoder base;
		struct panel_module *mod;
	} cocci_id/* drivers/gpu/drm/tilcdc/tilcdc_panel.c 37 */;
	struct pinctrl *cocci_id/* drivers/gpu/drm/tilcdc/tilcdc_panel.c 309 */;
	struct platform_device *cocci_id/* drivers/gpu/drm/tilcdc/tilcdc_panel.c 304 */;
	struct panel_module cocci_id/* drivers/gpu/drm/tilcdc/tilcdc_panel.c 30 */;
	int cocci_id/* drivers/gpu/drm/tilcdc/tilcdc_panel.c 262 */;
	struct tilcdc_panel_info *cocci_id/* drivers/gpu/drm/tilcdc/tilcdc_panel.c 258 */;
	struct device_node *cocci_id/* drivers/gpu/drm/tilcdc/tilcdc_panel.c 258 */;
	const struct tilcdc_module_ops cocci_id/* drivers/gpu/drm/tilcdc/tilcdc_panel.c 249 */;
	struct panel_module {
		struct tilcdc_module base;
		struct tilcdc_panel_info *info;
		struct display_timings *timings;
		struct backlight_device *backlight;
		struct gpio_desc *enable_gpio;
	} cocci_id/* drivers/gpu/drm/tilcdc/tilcdc_panel.c 23 */;
	struct tilcdc_drm_private *cocci_id/* drivers/gpu/drm/tilcdc/tilcdc_panel.c 228 */;
	struct tilcdc_module *cocci_id/* drivers/gpu/drm/tilcdc/tilcdc_panel.c 225 */;
	struct panel_module *cocci_id/* drivers/gpu/drm/tilcdc/tilcdc_panel.c 187 */;
	struct drm_device *cocci_id/* drivers/gpu/drm/tilcdc/tilcdc_panel.c 186 */;
	const struct drm_connector_helper_funcs cocci_id/* drivers/gpu/drm/tilcdc/tilcdc_panel.c 181 */;
	const struct drm_connector_funcs cocci_id/* drivers/gpu/drm/tilcdc/tilcdc_panel.c 173 */;
	struct panel_connector *cocci_id/* drivers/gpu/drm/tilcdc/tilcdc_panel.c 169 */;
	struct drm_connector *cocci_id/* drivers/gpu/drm/tilcdc/tilcdc_panel.c 167 */;
	struct drm_encoder *cocci_id/* drivers/gpu/drm/tilcdc/tilcdc_panel.c 166 */;
	struct videomode cocci_id/* drivers/gpu/drm/tilcdc/tilcdc_panel.c 147 */;
	struct drm_display_mode *cocci_id/* drivers/gpu/drm/tilcdc/tilcdc_panel.c 146 */;
	struct display_timings *cocci_id/* drivers/gpu/drm/tilcdc/tilcdc_panel.c 142 */;
	void cocci_id/* drivers/gpu/drm/tilcdc/tilcdc_panel.c 132 */;
	struct panel_connector cocci_id/* drivers/gpu/drm/tilcdc/tilcdc_panel.c 129 */;
	struct panel_connector {
		struct drm_connector base;
		struct drm_encoder *encoder;
		struct panel_module *mod;
	} cocci_id/* drivers/gpu/drm/tilcdc/tilcdc_panel.c 123 */;
}
