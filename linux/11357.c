cocci_test_suite() {
	void cocci_id/* drivers/gpu/drm/bridge/thc63lvd1024.c 98 */;
	unsigned int cocci_id/* drivers/gpu/drm/bridge/thc63lvd1024.c 56 */;
	const struct drm_display_mode *cocci_id/* drivers/gpu/drm/bridge/thc63lvd1024.c 53 */;
	enum drm_mode_status cocci_id/* drivers/gpu/drm/bridge/thc63lvd1024.c 52 */;
	struct thc63_dev *cocci_id/* drivers/gpu/drm/bridge/thc63lvd1024.c 47 */;
	struct drm_bridge *cocci_id/* drivers/gpu/drm/bridge/thc63lvd1024.c 45 */;
	int cocci_id/* drivers/gpu/drm/bridge/thc63lvd1024.c 45 */;
	struct thc63_dev cocci_id/* drivers/gpu/drm/bridge/thc63lvd1024.c 42 */;
	struct thc63_dev {
		struct device *dev;
		struct regulator *vcc;
		struct gpio_desc *pdwn;
		struct gpio_desc *oe;
		struct drm_bridge bridge;
		struct drm_bridge *next;
		struct drm_bridge_timings timings;
	} cocci_id/* drivers/gpu/drm/bridge/thc63lvd1024.c 26 */;
	struct platform_driver cocci_id/* drivers/gpu/drm/bridge/thc63lvd1024.c 246 */;
	const struct of_device_id cocci_id/* drivers/gpu/drm/bridge/thc63lvd1024.c 240 */[];
	struct platform_device *cocci_id/* drivers/gpu/drm/bridge/thc63lvd1024.c 191 */;
	enum thc63_ports{THC63_LVDS_IN0, THC63_LVDS_IN1, THC63_RGB_OUT0, THC63_RGB_OUT1,} cocci_id/* drivers/gpu/drm/bridge/thc63lvd1024.c 19 */;
	struct device_node *cocci_id/* drivers/gpu/drm/bridge/thc63lvd1024.c 121 */;
	const struct drm_bridge_funcs cocci_id/* drivers/gpu/drm/bridge/thc63lvd1024.c 112 */;
}
