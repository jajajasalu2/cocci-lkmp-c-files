cocci_test_suite() {
	struct versatile_panel_type {
		const char *name;
		u32 magic;
		struct drm_display_mode mode;
		u32 bus_flags;
		u32 width_mm;
		u32 height_mm;
		bool ib2;
	} cocci_id/* drivers/gpu/drm/panel/panel-arm-versatile.c 68 */;
	struct platform_driver cocci_id/* drivers/gpu/drm/panel/panel-arm-versatile.c 365 */;
	const struct of_device_id cocci_id/* drivers/gpu/drm/panel/panel-arm-versatile.c 359 */[];
	const struct versatile_panel_type *cocci_id/* drivers/gpu/drm/panel/panel-arm-versatile.c 324 */;
	u32 cocci_id/* drivers/gpu/drm/panel/panel-arm-versatile.c 297 */;
	struct regmap *cocci_id/* drivers/gpu/drm/panel/panel-arm-versatile.c 295 */;
	struct device *cocci_id/* drivers/gpu/drm/panel/panel-arm-versatile.c 292 */;
	struct platform_device *cocci_id/* drivers/gpu/drm/panel/panel-arm-versatile.c 290 */;
	const struct drm_panel_funcs cocci_id/* drivers/gpu/drm/panel/panel-arm-versatile.c 284 */;
	struct drm_display_mode *cocci_id/* drivers/gpu/drm/panel/panel-arm-versatile.c 267 */;
	struct drm_connector *cocci_id/* drivers/gpu/drm/panel/panel-arm-versatile.c 265 */;
	int cocci_id/* drivers/gpu/drm/panel/panel-arm-versatile.c 231 */;
	struct versatile_panel cocci_id/* drivers/gpu/drm/panel/panel-arm-versatile.c 228 */;
	struct drm_panel *cocci_id/* drivers/gpu/drm/panel/panel-arm-versatile.c 226 */;
	struct versatile_panel *cocci_id/* drivers/gpu/drm/panel/panel-arm-versatile.c 225 */;
	const struct versatile_panel_type cocci_id/* drivers/gpu/drm/panel/panel-arm-versatile.c 125 */[];
	struct versatile_panel {
		struct device *dev;
		struct drm_panel panel;
		const struct versatile_panel_type *panel_type;
		struct regmap *map;
		struct regmap *ib2_map;
	} cocci_id/* drivers/gpu/drm/panel/panel-arm-versatile.c 102 */;
}
