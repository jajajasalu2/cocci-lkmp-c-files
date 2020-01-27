cocci_test_suite() {
	const struct feiyang_init_cmd *cocci_id/* drivers/gpu/drm/panel/panel-feiyang-fy07024di26a30d.c 85 */;
	unsigned int cocci_id/* drivers/gpu/drm/panel/panel-feiyang-fy07024di26a30d.c 54 */;
	const struct feiyang_init_cmd cocci_id/* drivers/gpu/drm/panel/panel-feiyang-fy07024di26a30d.c 40 */[];
	struct feiyang_init_cmd {
		u8 data[FEIYANG_INIT_CMD_LEN];
	} cocci_id/* drivers/gpu/drm/panel/panel-feiyang-fy07024di26a30d.c 36 */;
	struct feiyang cocci_id/* drivers/gpu/drm/panel/panel-feiyang-fy07024di26a30d.c 33 */;
	struct mipi_dsi_driver cocci_id/* drivers/gpu/drm/panel/panel-feiyang-fy07024di26a30d.c 259 */;
	const struct of_device_id cocci_id/* drivers/gpu/drm/panel/panel-feiyang-fy07024di26a30d.c 253 */[];
	struct feiyang {
		struct drm_panel panel;
		struct mipi_dsi_device *dsi;
		struct backlight_device *backlight;
		struct regulator *dvdd;
		struct regulator *avdd;
		struct gpio_desc *reset;
	} cocci_id/* drivers/gpu/drm/panel/panel-feiyang-fy07024di26a30d.c 21 */;
	struct mipi_dsi_device *cocci_id/* drivers/gpu/drm/panel/panel-feiyang-fy07024di26a30d.c 195 */;
	const struct drm_panel_funcs cocci_id/* drivers/gpu/drm/panel/panel-feiyang-fy07024di26a30d.c 187 */;
	struct drm_display_mode *cocci_id/* drivers/gpu/drm/panel/panel-feiyang-fy07024di26a30d.c 169 */;
	struct drm_connector *cocci_id/* drivers/gpu/drm/panel/panel-feiyang-fy07024di26a30d.c 167 */;
	const struct drm_display_mode cocci_id/* drivers/gpu/drm/panel/panel-feiyang-fy07024di26a30d.c 148 */;
	struct feiyang *cocci_id/* drivers/gpu/drm/panel/panel-feiyang-fy07024di26a30d.c 112 */;
	struct drm_panel *cocci_id/* drivers/gpu/drm/panel/panel-feiyang-fy07024di26a30d.c 110 */;
	int cocci_id/* drivers/gpu/drm/panel/panel-feiyang-fy07024di26a30d.c 110 */;
}
