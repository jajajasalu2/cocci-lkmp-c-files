cocci_test_suite() {
	char cocci_id/* drivers/gpu/drm/bridge/nxp-ptn3460.c 76 */[2];
	char cocci_id/* drivers/gpu/drm/bridge/nxp-ptn3460.c 52 */;
	struct drm_connector *cocci_id/* drivers/gpu/drm/bridge/nxp-ptn3460.c 47 */;
	struct ptn3460_bridge cocci_id/* drivers/gpu/drm/bridge/nxp-ptn3460.c 43 */;
	struct drm_bridge *cocci_id/* drivers/gpu/drm/bridge/nxp-ptn3460.c 41 */;
	struct ptn3460_bridge *cocci_id/* drivers/gpu/drm/bridge/nxp-ptn3460.c 40 */;
	struct i2c_driver cocci_id/* drivers/gpu/drm/bridge/nxp-ptn3460.c 353 */;
	const struct of_device_id cocci_id/* drivers/gpu/drm/bridge/nxp-ptn3460.c 347 */[];
	const struct i2c_device_id cocci_id/* drivers/gpu/drm/bridge/nxp-ptn3460.c 341 */[];
	struct device *cocci_id/* drivers/gpu/drm/bridge/nxp-ptn3460.c 281 */;
	struct ptn3460_bridge {
		struct drm_connector connector;
		struct i2c_client *client;
		struct drm_bridge bridge;
		struct edid *edid;
		struct drm_panel *panel;
		struct gpio_desc *gpio_pd_n;
		struct gpio_desc *gpio_rst_n;
		u32 edid_emulation;
		bool enabled;
	} cocci_id/* drivers/gpu/drm/bridge/nxp-ptn3460.c 28 */;
	const struct i2c_device_id *cocci_id/* drivers/gpu/drm/bridge/nxp-ptn3460.c 279 */;
	struct i2c_client *cocci_id/* drivers/gpu/drm/bridge/nxp-ptn3460.c 278 */;
	const struct drm_bridge_funcs cocci_id/* drivers/gpu/drm/bridge/nxp-ptn3460.c 270 */;
	int cocci_id/* drivers/gpu/drm/bridge/nxp-ptn3460.c 239 */;
	const struct drm_connector_funcs cocci_id/* drivers/gpu/drm/bridge/nxp-ptn3460.c 231 */;
	const struct drm_connector_helper_funcs cocci_id/* drivers/gpu/drm/bridge/nxp-ptn3460.c 227 */;
	struct edid *cocci_id/* drivers/gpu/drm/bridge/nxp-ptn3460.c 215 */;
	bool cocci_id/* drivers/gpu/drm/bridge/nxp-ptn3460.c 192 */;
	u8 *cocci_id/* drivers/gpu/drm/bridge/nxp-ptn3460.c 190 */;
	void cocci_id/* drivers/gpu/drm/bridge/nxp-ptn3460.c 159 */;
}
