cocci_test_suite() {
	struct ti_sn_bridge {
		struct device *dev;
		struct regmap *regmap;
		struct drm_dp_aux aux;
		struct drm_bridge bridge;
		struct drm_connector connector;
		struct dentry *debugfs;
		struct device_node *host_node;
		struct mipi_dsi_device *dsi;
		struct clk *refclk;
		struct drm_panel *panel;
		struct gpio_desc *enable_gpio;
		struct regulator_bulk_data supplies[SN_REGULATOR_SUPPLY_NUM];
	} cocci_id/* drivers/gpu/drm/bridge/ti-sn65dsi86.c 90 */;
	struct i2c_driver cocci_id/* drivers/gpu/drm/bridge/ti-sn65dsi86.c 813 */;
	const struct of_device_id cocci_id/* drivers/gpu/drm/bridge/ti-sn65dsi86.c 807 */[];
	struct i2c_device_id cocci_id/* drivers/gpu/drm/bridge/ti-sn65dsi86.c 801 */[];
	const struct i2c_device_id *cocci_id/* drivers/gpu/drm/bridge/ti-sn65dsi86.c 699 */;
	struct i2c_client *cocci_id/* drivers/gpu/drm/bridge/ti-sn65dsi86.c 698 */;
	struct device_node *cocci_id/* drivers/gpu/drm/bridge/ti-sn65dsi86.c 686 */;
	u8 cocci_id/* drivers/gpu/drm/bridge/ti-sn65dsi86.c 678 */;
	u8 *cocci_id/* drivers/gpu/drm/bridge/ti-sn65dsi86.c 619 */;
	u32 cocci_id/* drivers/gpu/drm/bridge/ti-sn65dsi86.c 617 */;
	struct drm_dp_aux_msg *cocci_id/* drivers/gpu/drm/bridge/ti-sn65dsi86.c 614 */;
	ssize_t cocci_id/* drivers/gpu/drm/bridge/ti-sn65dsi86.c 613 */;
	struct ti_sn_bridge cocci_id/* drivers/gpu/drm/bridge/ti-sn65dsi86.c 610 */;
	struct ti_sn_bridge *cocci_id/* drivers/gpu/drm/bridge/ti-sn65dsi86.c 608 */;
	struct drm_dp_aux *cocci_id/* drivers/gpu/drm/bridge/ti-sn65dsi86.c 608 */;
	const struct drm_bridge_funcs cocci_id/* drivers/gpu/drm/bridge/ti-sn65dsi86.c 600 */;
	const unsigned int cocci_id/* drivers/gpu/drm/bridge/ti-sn65dsi86.c 425 */[];
	size_t cocci_id/* drivers/gpu/drm/bridge/ti-sn65dsi86.c 398 */;
	const u32 *cocci_id/* drivers/gpu/drm/bridge/ti-sn65dsi86.c 397 */;
	const u32 cocci_id/* drivers/gpu/drm/bridge/ti-sn65dsi86.c 385 */[];
	void cocci_id/* drivers/gpu/drm/bridge/ti-sn65dsi86.c 346 */;
	const struct mipi_dsi_device_info cocci_id/* drivers/gpu/drm/bridge/ti-sn65dsi86.c 273 */;
	struct mipi_dsi_device *cocci_id/* drivers/gpu/drm/bridge/ti-sn65dsi86.c 272 */;
	struct mipi_dsi_host *cocci_id/* drivers/gpu/drm/bridge/ti-sn65dsi86.c 271 */;
	const char *const cocci_id/* drivers/gpu/drm/bridge/ti-sn65dsi86.c 256 */[];
	struct drm_bridge *cocci_id/* drivers/gpu/drm/bridge/ti-sn65dsi86.c 248 */;
	const struct drm_connector_funcs cocci_id/* drivers/gpu/drm/bridge/ti-sn65dsi86.c 239 */;
	bool cocci_id/* drivers/gpu/drm/bridge/ti-sn65dsi86.c 229 */;
	enum drm_connector_status cocci_id/* drivers/gpu/drm/bridge/ti-sn65dsi86.c 228 */;
	struct drm_connector_helper_funcs cocci_id/* drivers/gpu/drm/bridge/ti-sn65dsi86.c 223 */;
	struct drm_display_mode *cocci_id/* drivers/gpu/drm/bridge/ti-sn65dsi86.c 214 */;
	enum drm_mode_status cocci_id/* drivers/gpu/drm/bridge/ti-sn65dsi86.c 212 */;
	struct drm_connector *cocci_id/* drivers/gpu/drm/bridge/ti-sn65dsi86.c 200 */;
	unsigned int cocci_id/* drivers/gpu/drm/bridge/ti-sn65dsi86.c 165 */;
	struct seq_file *cocci_id/* drivers/gpu/drm/bridge/ti-sn65dsi86.c 162 */;
	void *cocci_id/* drivers/gpu/drm/bridge/ti-sn65dsi86.c 162 */;
	int cocci_id/* drivers/gpu/drm/bridge/ti-sn65dsi86.c 162 */;
	const struct dev_pm_ops cocci_id/* drivers/gpu/drm/bridge/ti-sn65dsi86.c 158 */;
	struct device *cocci_id/* drivers/gpu/drm/bridge/ti-sn65dsi86.c 128 */;
	int __maybe_unused cocci_id/* drivers/gpu/drm/bridge/ti-sn65dsi86.c 128 */;
	u16 cocci_id/* drivers/gpu/drm/bridge/ti-sn65dsi86.c 122 */;
	const struct regmap_config cocci_id/* drivers/gpu/drm/bridge/ti-sn65dsi86.c 114 */;
	const struct regmap_access_table cocci_id/* drivers/gpu/drm/bridge/ti-sn65dsi86.c 109 */;
	const struct regmap_range cocci_id/* drivers/gpu/drm/bridge/ti-sn65dsi86.c 105 */[];
}
