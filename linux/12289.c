cocci_test_suite() {
	struct tpg110 {
		struct device *dev;
		struct spi_device *spi;
		struct drm_panel panel;
		struct backlight_device *backlight;
		const struct tpg110_panel_mode *panel_mode;
		u32 width;
		u32 height;
		struct gpio_desc *grestb;
	} cocci_id/* drivers/gpu/drm/panel/panel-tpo-tpg110.c 66 */;
	struct spi_driver cocci_id/* drivers/gpu/drm/panel/panel-tpo-tpg110.c 481 */;
	const struct of_device_id cocci_id/* drivers/gpu/drm/panel/panel-tpo-tpg110.c 475 */[];
	struct tpg110_panel_mode {
		const char *name;
		u32 magic;
		struct drm_display_mode mode;
		u32 bus_flags;
	} cocci_id/* drivers/gpu/drm/panel/panel-tpo-tpg110.c 44 */;
	struct device_node *cocci_id/* drivers/gpu/drm/panel/panel-tpo-tpg110.c 418 */;
	struct device *cocci_id/* drivers/gpu/drm/panel/panel-tpo-tpg110.c 417 */;
	struct spi_device *cocci_id/* drivers/gpu/drm/panel/panel-tpo-tpg110.c 415 */;
	const struct drm_panel_funcs cocci_id/* drivers/gpu/drm/panel/panel-tpo-tpg110.c 409 */;
	struct drm_display_mode *cocci_id/* drivers/gpu/drm/panel/panel-tpo-tpg110.c 391 */;
	struct drm_connector *cocci_id/* drivers/gpu/drm/panel/panel-tpo-tpg110.c 389 */;
	u8 cocci_id/* drivers/gpu/drm/panel/panel-tpo-tpg110.c 352 */;
	int cocci_id/* drivers/gpu/drm/panel/panel-tpo-tpg110.c 349 */;
	const struct tpg110_panel_mode *cocci_id/* drivers/gpu/drm/panel/panel-tpo-tpg110.c 325 */;
	void cocci_id/* drivers/gpu/drm/panel/panel-tpo-tpg110.c 264 */;
	u8 cocci_id/* drivers/gpu/drm/panel/panel-tpo-tpg110.c 204 */[2];
	struct spi_transfer cocci_id/* drivers/gpu/drm/panel/panel-tpo-tpg110.c 203 */[2];
	struct spi_message cocci_id/* drivers/gpu/drm/panel/panel-tpo-tpg110.c 202 */;
	bool cocci_id/* drivers/gpu/drm/panel/panel-tpo-tpg110.c 199 */;
	struct tpg110 cocci_id/* drivers/gpu/drm/panel/panel-tpo-tpg110.c 196 */;
	struct drm_panel *cocci_id/* drivers/gpu/drm/panel/panel-tpo-tpg110.c 194 */;
	struct tpg110 *cocci_id/* drivers/gpu/drm/panel/panel-tpo-tpg110.c 193 */;
	const struct tpg110_panel_mode cocci_id/* drivers/gpu/drm/panel/panel-tpo-tpg110.c 105 */[];
}
