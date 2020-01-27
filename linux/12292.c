cocci_test_suite() {
	const struct drm_display_mode cocci_id/* drivers/gpu/drm/panel/panel-sharp-ls037v7dw01.c 86 */;
	struct ls037v7dw01_panel *cocci_id/* drivers/gpu/drm/panel/panel-sharp-ls037v7dw01.c 41 */;
	struct drm_panel *cocci_id/* drivers/gpu/drm/panel/panel-sharp-ls037v7dw01.c 39 */;
	int cocci_id/* drivers/gpu/drm/panel/panel-sharp-ls037v7dw01.c 39 */;
	struct ls037v7dw01_panel cocci_id/* drivers/gpu/drm/panel/panel-sharp-ls037v7dw01.c 37 */;
	struct ls037v7dw01_panel {
		struct drm_panel panel;
		struct platform_device *pdev;
		struct regulator *vdd;
		struct gpio_desc *resb_gpio;
		struct gpio_desc *ini_gpio;
		struct gpio_desc *mo_gpio;
		struct gpio_desc *lr_gpio;
		struct gpio_desc *ud_gpio;
	} cocci_id/* drivers/gpu/drm/panel/panel-sharp-ls037v7dw01.c 24 */;
	struct platform_driver cocci_id/* drivers/gpu/drm/panel/panel-sharp-ls037v7dw01.c 212 */;
	const struct of_device_id cocci_id/* drivers/gpu/drm/panel/panel-sharp-ls037v7dw01.c 205 */[];
	struct platform_device *cocci_id/* drivers/gpu/drm/panel/panel-sharp-ls037v7dw01.c 138 */;
	const struct drm_panel_funcs cocci_id/* drivers/gpu/drm/panel/panel-sharp-ls037v7dw01.c 130 */;
	struct drm_display_mode *cocci_id/* drivers/gpu/drm/panel/panel-sharp-ls037v7dw01.c 106 */;
	struct drm_connector *cocci_id/* drivers/gpu/drm/panel/panel-sharp-ls037v7dw01.c 105 */;
}
