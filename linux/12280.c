cocci_test_suite() {
	const struct reg_sequence cocci_id/* drivers/gpu/drm/panel/panel-novatek-nt39016.c 75 */[];
	struct nt39016 cocci_id/* drivers/gpu/drm/panel/panel-novatek-nt39016.c 71 */;
	struct nt39016 {
		struct drm_panel drm_panel;
		struct device *dev;
		struct regmap *map;
		struct regulator *supply;
		const struct nt39016_panel_info *panel_info;
		struct gpio_desc *reset_gpio;
		struct backlight_device *backlight;
	} cocci_id/* drivers/gpu/drm/panel/panel-novatek-nt39016.c 57 */;
	struct nt39016_panel_info {
		struct drm_display_mode display_mode;
		u16 width_mm,height_mm;
		u32 bus_format,bus_flags;
	} cocci_id/* drivers/gpu/drm/panel/panel-novatek-nt39016.c 51 */;
	struct spi_driver cocci_id/* drivers/gpu/drm/panel/panel-novatek-nt39016.c 345 */;
	const struct of_device_id cocci_id/* drivers/gpu/drm/panel/panel-novatek-nt39016.c 339 */[];
	const struct nt39016_panel_info cocci_id/* drivers/gpu/drm/panel/panel-novatek-nt39016.c 319 */;
	struct device *cocci_id/* drivers/gpu/drm/panel/panel-novatek-nt39016.c 246 */;
	struct spi_device *cocci_id/* drivers/gpu/drm/panel/panel-novatek-nt39016.c 244 */;
	enum nt39016_regs{NT39016_REG_SYSTEM, NT39016_REG_TIMING, NT39016_REG_OP, NT39016_REG_DATA_IN, NT39016_REG_SRC_TIMING_DELAY, NT39016_REG_GATE_TIMING_DELAY, NT39016_REG_RESERVED, NT39016_REG_INITIAL_FUNC, NT39016_REG_CONTRAST, NT39016_REG_BRIGHTNESS, NT39016_REG_HUE_SATURATION, NT39016_REG_RB_SUBCONTRAST, NT39016_REG_R_SUBBRIGHTNESS, NT39016_REG_B_SUBBRIGHTNESS, NT39016_REG_VCOMDC, NT39016_REG_VCOMAC, NT39016_REG_VGAM2, NT39016_REG_VGAM34, NT39016_REG_VGAM56, NT39016_REG_VCOMDC_TRIM=0x1e, NT39016_REG_DISPLAY_MODE=0x20,} cocci_id/* drivers/gpu/drm/panel/panel-novatek-nt39016.c 24 */;
	const struct drm_panel_funcs cocci_id/* drivers/gpu/drm/panel/panel-novatek-nt39016.c 236 */;
	struct drm_display_mode *cocci_id/* drivers/gpu/drm/panel/panel-novatek-nt39016.c 214 */;
	struct drm_connector *cocci_id/* drivers/gpu/drm/panel/panel-novatek-nt39016.c 213 */;
	const struct nt39016_panel_info *cocci_id/* drivers/gpu/drm/panel/panel-novatek-nt39016.c 212 */;
	struct nt39016 *cocci_id/* drivers/gpu/drm/panel/panel-novatek-nt39016.c 194 */;
	struct drm_panel *cocci_id/* drivers/gpu/drm/panel/panel-novatek-nt39016.c 192 */;
	int cocci_id/* drivers/gpu/drm/panel/panel-novatek-nt39016.c 192 */;
	const struct regmap_config cocci_id/* drivers/gpu/drm/panel/panel-novatek-nt39016.c 110 */;
	const struct regmap_access_table cocci_id/* drivers/gpu/drm/panel/panel-novatek-nt39016.c 105 */;
	const struct regmap_range cocci_id/* drivers/gpu/drm/panel/panel-novatek-nt39016.c 100 */[];
}
