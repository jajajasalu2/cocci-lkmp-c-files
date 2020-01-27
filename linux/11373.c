cocci_test_suite() {
	enum{LVI_R0, LVI_R1, LVI_R2, LVI_R3, LVI_R4, LVI_R5, LVI_R6, LVI_R7, LVI_G0, LVI_G1, LVI_G2, LVI_G3, LVI_G4, LVI_G5, LVI_G6, LVI_G7, LVI_B0, LVI_B1, LVI_B2, LVI_B3, LVI_B4, LVI_B5, LVI_B6, LVI_B7, LVI_HS, LVI_VS, LVI_DE, LVI_L0,} cocci_id/* drivers/gpu/drm/bridge/tc358764.c 83 */;
	struct mipi_dsi_driver cocci_id/* drivers/gpu/drm/bridge/tc358764.c 490 */;
	const struct of_device_id cocci_id/* drivers/gpu/drm/bridge/tc358764.c 484 */[];
	struct mipi_dsi_device *cocci_id/* drivers/gpu/drm/bridge/tc358764.c 433 */;
	struct device *cocci_id/* drivers/gpu/drm/bridge/tc358764.c 401 */;
	const struct drm_bridge_funcs cocci_id/* drivers/gpu/drm/bridge/tc358764.c 390 */;
	void cocci_id/* drivers/gpu/drm/bridge/tc358764.c 378 */;
	struct drm_device *cocci_id/* drivers/gpu/drm/bridge/tc358764.c 355 */;
	int cocci_id/* drivers/gpu/drm/bridge/tc358764.c 352 */;
	const struct drm_connector_funcs cocci_id/* drivers/gpu/drm/bridge/tc358764.c 293 */;
	const struct drm_connector_helper_funcs cocci_id/* drivers/gpu/drm/bridge/tc358764.c 288 */;
	u32 cocci_id/* drivers/gpu/drm/bridge/tc358764.c 221 */;
	struct drm_connector *cocci_id/* drivers/gpu/drm/bridge/tc358764.c 214 */;
	struct tc358764 cocci_id/* drivers/gpu/drm/bridge/tc358764.c 210 */;
	struct tc358764 *cocci_id/* drivers/gpu/drm/bridge/tc358764.c 208 */;
	struct drm_bridge *cocci_id/* drivers/gpu/drm/bridge/tc358764.c 208 */;
	u8 cocci_id/* drivers/gpu/drm/bridge/tc358764.c 191 */[6];
	ssize_t cocci_id/* drivers/gpu/drm/bridge/tc358764.c 174 */;
	u16 cocci_id/* drivers/gpu/drm/bridge/tc358764.c 171 */;
	u32 *cocci_id/* drivers/gpu/drm/bridge/tc358764.c 171 */;
	struct tc358764 {
		struct device *dev;
		struct drm_bridge bridge;
		struct drm_connector connector;
		struct regulator_bulk_data supplies[ARRAY_SIZE(tc358764_supplies)];
		struct gpio_desc *gpio_reset;
		struct drm_panel *panel;
		int error;
	} cocci_id/* drivers/gpu/drm/bridge/tc358764.c 153 */;
	const char *const cocci_id/* drivers/gpu/drm/bridge/tc358764.c 149 */[];
}
