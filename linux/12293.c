cocci_test_suite() {
	struct mipi_dsi_device *cocci_id/* drivers/gpu/drm/panel/panel-orisetech-otm8009a.c 98 */;
	size_t cocci_id/* drivers/gpu/drm/panel/panel-orisetech-otm8009a.c 96 */;
	const void *cocci_id/* drivers/gpu/drm/panel/panel-orisetech-otm8009a.c 95 */;
	void cocci_id/* drivers/gpu/drm/panel/panel-orisetech-otm8009a.c 95 */;
	struct otm8009a cocci_id/* drivers/gpu/drm/panel/panel-orisetech-otm8009a.c 92 */;
	const struct drm_display_mode cocci_id/* drivers/gpu/drm/panel/panel-orisetech-otm8009a.c 74 */;
	struct otm8009a {
		struct device *dev;
		struct drm_panel panel;
		struct backlight_device *bl_dev;
		struct gpio_desc *reset_gpio;
		struct regulator *supply;
		bool prepared;
		bool enabled;
	} cocci_id/* drivers/gpu/drm/panel/panel-orisetech-otm8009a.c 64 */;
	struct mipi_dsi_driver cocci_id/* drivers/gpu/drm/panel/panel-orisetech-otm8009a.c 505 */;
	const struct of_device_id cocci_id/* drivers/gpu/drm/panel/panel-orisetech-otm8009a.c 499 */[];
	struct device *cocci_id/* drivers/gpu/drm/panel/panel-orisetech-otm8009a.c 427 */;
	const struct backlight_ops cocci_id/* drivers/gpu/drm/panel/panel-orisetech-otm8009a.c 421 */;
	u8 cocci_id/* drivers/gpu/drm/panel/panel-orisetech-otm8009a.c 390 */[2];
	struct otm8009a *cocci_id/* drivers/gpu/drm/panel/panel-orisetech-otm8009a.c 389 */;
	struct backlight_device *cocci_id/* drivers/gpu/drm/panel/panel-orisetech-otm8009a.c 387 */;
	int cocci_id/* drivers/gpu/drm/panel/panel-orisetech-otm8009a.c 387 */;
	const struct drm_panel_funcs cocci_id/* drivers/gpu/drm/panel/panel-orisetech-otm8009a.c 375 */;
	struct drm_display_mode *cocci_id/* drivers/gpu/drm/panel/panel-orisetech-otm8009a.c 354 */;
	struct drm_panel *cocci_id/* drivers/gpu/drm/panel/panel-orisetech-otm8009a.c 262 */;
	const u8 cocci_id/* drivers/gpu/drm/panel/panel-orisetech-otm8009a.c 120 */[];
}
