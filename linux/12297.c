cocci_test_suite() {
	struct device *cocci_id/* drivers/gpu/drm/panel/panel-rocktech-jh057n00900.c 74 */;
	struct jh057n cocci_id/* drivers/gpu/drm/panel/panel-rocktech-jh057n00900.c 60 */;
	struct jh057n {
		struct device *dev;
		struct drm_panel panel;
		struct gpio_desc *reset_gpio;
		struct backlight_device *backlight;
		struct regulator *vcc;
		struct regulator *iovcc;
		bool prepared;
		struct dentry *debugfs;
	} cocci_id/* drivers/gpu/drm/panel/panel-rocktech-jh057n00900.c 46 */;
	struct mipi_dsi_driver cocci_id/* drivers/gpu/drm/panel/panel-rocktech-jh057n00900.c 410 */;
	const struct of_device_id cocci_id/* drivers/gpu/drm/panel/panel-rocktech-jh057n00900.c 404 */[];
	void cocci_id/* drivers/gpu/drm/panel/panel-rocktech-jh057n00900.c 284 */;
	struct mipi_dsi_device *cocci_id/* drivers/gpu/drm/panel/panel-rocktech-jh057n00900.c 267 */;
	struct jh057n *cocci_id/* drivers/gpu/drm/panel/panel-rocktech-jh057n00900.c 266 */;
	u64 cocci_id/* drivers/gpu/drm/panel/panel-rocktech-jh057n00900.c 264 */;
	void *cocci_id/* drivers/gpu/drm/panel/panel-rocktech-jh057n00900.c 264 */;
	int cocci_id/* drivers/gpu/drm/panel/panel-rocktech-jh057n00900.c 264 */;
	const struct drm_panel_funcs cocci_id/* drivers/gpu/drm/panel/panel-rocktech-jh057n00900.c 256 */;
	struct drm_display_mode *cocci_id/* drivers/gpu/drm/panel/panel-rocktech-jh057n00900.c 236 */;
	const struct drm_display_mode cocci_id/* drivers/gpu/drm/panel/panel-rocktech-jh057n00900.c 217 */;
	struct drm_panel *cocci_id/* drivers/gpu/drm/panel/panel-rocktech-jh057n00900.c 158 */;
}
