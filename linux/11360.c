cocci_test_suite() {
	u8 cocci_id/* drivers/gpu/drm/bridge/parade-ps8622.c 78 */[];
	struct i2c_msg cocci_id/* drivers/gpu/drm/bridge/parade-ps8622.c 77 */;
	struct i2c_adapter *cocci_id/* drivers/gpu/drm/bridge/parade-ps8622.c 76 */;
	u8 cocci_id/* drivers/gpu/drm/bridge/parade-ps8622.c 73 */;
	struct drm_connector *cocci_id/* drivers/gpu/drm/bridge/parade-ps8622.c 68 */;
	struct ps8622_bridge cocci_id/* drivers/gpu/drm/bridge/parade-ps8622.c 64 */;
	struct drm_bridge *cocci_id/* drivers/gpu/drm/bridge/parade-ps8622.c 62 */;
	struct i2c_driver cocci_id/* drivers/gpu/drm/bridge/parade-ps8622.c 618 */;
	const struct i2c_device_id cocci_id/* drivers/gpu/drm/bridge/parade-ps8622.c 610 */[];
	struct ps8622_bridge *cocci_id/* drivers/gpu/drm/bridge/parade-ps8622.c 61 */;
	struct device *cocci_id/* drivers/gpu/drm/bridge/parade-ps8622.c 528 */;
	const struct i2c_device_id *cocci_id/* drivers/gpu/drm/bridge/parade-ps8622.c 526 */;
	struct i2c_client *cocci_id/* drivers/gpu/drm/bridge/parade-ps8622.c 525 */;
	const struct of_device_id cocci_id/* drivers/gpu/drm/bridge/parade-ps8622.c 518 */[];
	const struct drm_bridge_funcs cocci_id/* drivers/gpu/drm/bridge/parade-ps8622.c 510 */;
	int cocci_id/* drivers/gpu/drm/bridge/parade-ps8622.c 479 */;
	const struct drm_connector_funcs cocci_id/* drivers/gpu/drm/bridge/parade-ps8622.c 471 */;
	const struct drm_connector_helper_funcs cocci_id/* drivers/gpu/drm/bridge/parade-ps8622.c 467 */;
	struct ps8622_bridge {
		struct drm_connector connector;
		struct i2c_client *client;
		struct drm_bridge bridge;
		struct drm_panel *panel;
		struct regulator *v12;
		struct backlight_device *bl;
		struct gpio_desc *gpio_slp;
		struct gpio_desc *gpio_rst;
		u32 max_lane_count;
		u32 lane_count;
		bool enabled;
	} cocci_id/* drivers/gpu/drm/bridge/parade-ps8622.c 44 */;
	void cocci_id/* drivers/gpu/drm/bridge/parade-ps8622.c 412 */;
	const struct backlight_ops cocci_id/* drivers/gpu/drm/bridge/parade-ps8622.c 348 */;
	struct backlight_device *cocci_id/* drivers/gpu/drm/bridge/parade-ps8622.c 331 */;
}
