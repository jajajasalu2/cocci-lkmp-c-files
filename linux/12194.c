cocci_test_suite() {
	struct drm_display_mode *cocci_id/* drivers/gpu/drm/tegra/rgb.c 98 */;
	struct drm_connector *cocci_id/* drivers/gpu/drm/tegra/rgb.c 97 */;
	enum drm_mode_status cocci_id/* drivers/gpu/drm/tegra/rgb.c 96 */;
	const struct drm_connector_funcs cocci_id/* drivers/gpu/drm/tegra/rgb.c 87 */;
	unsigned int cocci_id/* drivers/gpu/drm/tegra/rgb.c 79 */;
	const struct reg_entry *cocci_id/* drivers/gpu/drm/tegra/rgb.c 78 */;
	void cocci_id/* drivers/gpu/drm/tegra/rgb.c 77 */;
	const struct reg_entry cocci_id/* drivers/gpu/drm/tegra/rgb.c 55 */[];
	struct tegra_dc *cocci_id/* drivers/gpu/drm/tegra/rgb.c 309 */;
	int cocci_id/* drivers/gpu/drm/tegra/rgb.c 309 */;
	struct reg_entry {
		unsigned long offset;
		unsigned long value;
	} cocci_id/* drivers/gpu/drm/tegra/rgb.c 28 */;
	struct tegra_output *cocci_id/* drivers/gpu/drm/tegra/rgb.c 272 */;
	struct drm_device *cocci_id/* drivers/gpu/drm/tegra/rgb.c 270 */;
	struct tegra_rgb cocci_id/* drivers/gpu/drm/tegra/rgb.c 25 */;
	struct tegra_rgb *cocci_id/* drivers/gpu/drm/tegra/rgb.c 217 */;
	struct device_node *cocci_id/* drivers/gpu/drm/tegra/rgb.c 216 */;
	const struct drm_encoder_helper_funcs cocci_id/* drivers/gpu/drm/tegra/rgb.c 208 */;
	unsigned long cocci_id/* drivers/gpu/drm/tegra/rgb.c 174 */;
	struct drm_connector_state *cocci_id/* drivers/gpu/drm/tegra/rgb.c 170 */;
	struct drm_crtc_state *cocci_id/* drivers/gpu/drm/tegra/rgb.c 169 */;
	struct drm_encoder *cocci_id/* drivers/gpu/drm/tegra/rgb.c 168 */;
	struct tegra_rgb {
		struct tegra_output output;
		struct tegra_dc *dc;
		struct clk *clk_parent;
		struct clk *clk;
	} cocci_id/* drivers/gpu/drm/tegra/rgb.c 15 */;
	u32 cocci_id/* drivers/gpu/drm/tegra/rgb.c 136 */;
	const struct drm_encoder_funcs cocci_id/* drivers/gpu/drm/tegra/rgb.c 113 */;
	const struct drm_connector_helper_funcs cocci_id/* drivers/gpu/drm/tegra/rgb.c 108 */;
}
