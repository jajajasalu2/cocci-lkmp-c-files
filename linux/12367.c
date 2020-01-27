cocci_test_suite() {
	struct drm_bridge *cocci_id/* drivers/gpu/drm/exynos/exynos_dp.c 99 */;
	struct analogix_dp_plat_data *cocci_id/* drivers/gpu/drm/exynos/exynos_dp.c 98 */;
	struct drm_display_mode *cocci_id/* drivers/gpu/drm/exynos/exynos_dp.c 74 */;
	bool cocci_id/* drivers/gpu/drm/exynos/exynos_dp.c 47 */;
	struct exynos_dp_device {
		struct drm_encoder encoder;
		struct drm_connector *connector;
		struct drm_bridge *ptn_bridge;
		struct drm_device *drm_dev;
		struct device *dev;
		struct videomode vm;
		struct analogix_dp_device *adp;
		struct analogix_dp_plat_data plat_data;
	} cocci_id/* drivers/gpu/drm/exynos/exynos_dp.c 34 */;
	struct platform_driver cocci_id/* drivers/gpu/drm/exynos/exynos_dp.c 292 */;
	const struct of_device_id cocci_id/* drivers/gpu/drm/exynos/exynos_dp.c 286 */[];
	struct exynos_dp_device cocci_id/* drivers/gpu/drm/exynos/exynos_dp.c 220 */;
	struct drm_panel *cocci_id/* drivers/gpu/drm/exynos/exynos_dp.c 216 */;
	struct device_node *cocci_id/* drivers/gpu/drm/exynos/exynos_dp.c 214 */;
	struct platform_device *cocci_id/* drivers/gpu/drm/exynos/exynos_dp.c 211 */;
	const struct component_ops cocci_id/* drivers/gpu/drm/exynos/exynos_dp.c 206 */;
	struct drm_device *cocci_id/* drivers/gpu/drm/exynos/exynos_dp.c 159 */;
	struct drm_encoder *cocci_id/* drivers/gpu/drm/exynos/exynos_dp.c 158 */;
	struct exynos_dp_device *cocci_id/* drivers/gpu/drm/exynos/exynos_dp.c 157 */;
	struct device *cocci_id/* drivers/gpu/drm/exynos/exynos_dp.c 155 */;
	void *cocci_id/* drivers/gpu/drm/exynos/exynos_dp.c 155 */;
	int cocci_id/* drivers/gpu/drm/exynos/exynos_dp.c 155 */;
	const struct drm_encoder_funcs cocci_id/* drivers/gpu/drm/exynos/exynos_dp.c 138 */;
	const struct drm_encoder_helper_funcs cocci_id/* drivers/gpu/drm/exynos/exynos_dp.c 132 */;
	void cocci_id/* drivers/gpu/drm/exynos/exynos_dp.c 121 */;
	struct drm_connector *cocci_id/* drivers/gpu/drm/exynos/exynos_dp.c 100 */;
}
