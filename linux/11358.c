cocci_test_suite() {
	u8 cocci_id/* drivers/gpu/drm/bridge/tc358767.c 899 */[DP_LINK_STATUS_SIZE];
	struct device *cocci_id/* drivers/gpu/drm/bridge/tc358767.c 895 */;
	unsigned int cocci_id/* drivers/gpu/drm/bridge/tc358767.c 669 */;
	u32 cocci_id/* drivers/gpu/drm/bridge/tc358767.c 620 */;
	int cocci_id/* drivers/gpu/drm/bridge/tc358767.c 617 */;
	int cocci_id/* drivers/gpu/drm/bridge/tc358767.c 472 */[];
	const char *const cocci_id/* drivers/gpu/drm/bridge/tc358767.c 413 */[];
	u8 cocci_id/* drivers/gpu/drm/bridge/tc358767.c 349 */;
	struct drm_dp_aux_msg *cocci_id/* drivers/gpu/drm/bridge/tc358767.c 345 */;
	ssize_t cocci_id/* drivers/gpu/drm/bridge/tc358767.c 344 */;
	u32 cocci_id/* drivers/gpu/drm/bridge/tc358767.c 320 */[DP_AUX_MAX_PAYLOAD_BYTES / sizeof(u32)];
	void *cocci_id/* drivers/gpu/drm/bridge/tc358767.c 318 */;
	size_t cocci_id/* drivers/gpu/drm/bridge/tc358767.c 318 */;
	const void *cocci_id/* drivers/gpu/drm/bridge/tc358767.c 303 */;
	u64 cocci_id/* drivers/gpu/drm/bridge/tc358767.c 289 */;
	unsigned long cocci_id/* drivers/gpu/drm/bridge/tc358767.c 289 */;
	struct drm_connector *cocci_id/* drivers/gpu/drm/bridge/tc358767.c 281 */;
	struct drm_bridge *cocci_id/* drivers/gpu/drm/bridge/tc358767.c 276 */;
	struct tc_data cocci_id/* drivers/gpu/drm/bridge/tc358767.c 273 */;
	struct tc_data *cocci_id/* drivers/gpu/drm/bridge/tc358767.c 271 */;
	struct drm_dp_aux *cocci_id/* drivers/gpu/drm/bridge/tc358767.c 271 */;
	struct tc_data {
		struct device *dev;
		struct regmap *regmap;
		struct drm_dp_aux aux;
		struct drm_bridge bridge;
		struct drm_connector connector;
		struct drm_panel *panel;
		struct tc_edp_link link;
		struct edid *edid;
		struct drm_display_mode mode;
		u32 rev;
		u8 assr;
		struct gpio_desc *sd_gpio;
		struct gpio_desc *reset_gpio;
		struct clk *refclk;
		bool have_irq;
		int hpd_pin;
	} cocci_id/* drivers/gpu/drm/bridge/tc358767.c 240 */;
	struct tc_edp_link {
		u8 dpcd[DP_RECEIVER_CAP_SIZE];
		unsigned int rate;
		u8 num_lanes;
		u8 assr;
		bool scrambler_dis;
		bool spread;
	} cocci_id/* drivers/gpu/drm/bridge/tc358767.c 231 */;
	bool cocci_id/* drivers/gpu/drm/bridge/tc358767.c 229 */;
	struct i2c_driver cocci_id/* drivers/gpu/drm/bridge/tc358767.c 1705 */;
	const struct of_device_id cocci_id/* drivers/gpu/drm/bridge/tc358767.c 1699 */[];
	const struct i2c_device_id cocci_id/* drivers/gpu/drm/bridge/tc358767.c 1693 */[];
	const struct i2c_device_id *cocci_id/* drivers/gpu/drm/bridge/tc358767.c 1539 */;
	struct i2c_client *cocci_id/* drivers/gpu/drm/bridge/tc358767.c 1539 */;
	irqreturn_t cocci_id/* drivers/gpu/drm/bridge/tc358767.c 1496 */;
	const struct regmap_config cocci_id/* drivers/gpu/drm/bridge/tc358767.c 1482 */;
	const struct regmap_access_table cocci_id/* drivers/gpu/drm/bridge/tc358767.c 1470 */;
	const struct regmap_range cocci_id/* drivers/gpu/drm/bridge/tc358767.c 1460 */[];
	const struct drm_bridge_funcs cocci_id/* drivers/gpu/drm/bridge/tc358767.c 1444 */;
	struct drm_device *cocci_id/* drivers/gpu/drm/bridge/tc358767.c 1410 */;
	const struct drm_connector_funcs cocci_id/* drivers/gpu/drm/bridge/tc358767.c 1397 */;
	enum drm_connector_status cocci_id/* drivers/gpu/drm/bridge/tc358767.c 1370 */;
	const struct drm_connector_helper_funcs cocci_id/* drivers/gpu/drm/bridge/tc358767.c 1366 */;
	struct edid *cocci_id/* drivers/gpu/drm/bridge/tc358767.c 1339 */;
	enum drm_mode_status cocci_id/* drivers/gpu/drm/bridge/tc358767.c 1307 */;
	struct drm_display_mode *cocci_id/* drivers/gpu/drm/bridge/tc358767.c 1297 */;
	const struct drm_display_mode *cocci_id/* drivers/gpu/drm/bridge/tc358767.c 1296 */;
	void cocci_id/* drivers/gpu/drm/bridge/tc358767.c 1272 */;
}
