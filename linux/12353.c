cocci_test_suite() {
	const struct drm_connector_helper_funcs cocci_id/* drivers/gpu/drm/exynos/exynos_drm_dpi.c 93 */;
	struct drm_display_mode *cocci_id/* drivers/gpu/drm/exynos/exynos_drm_dpi.c 73 */;
	const struct drm_connector_funcs cocci_id/* drivers/gpu/drm/exynos/exynos_drm_dpi.c 58 */;
	struct drm_connector *cocci_id/* drivers/gpu/drm/exynos/exynos_drm_dpi.c 52 */;
	void cocci_id/* drivers/gpu/drm/exynos/exynos_drm_dpi.c 52 */;
	bool cocci_id/* drivers/gpu/drm/exynos/exynos_drm_dpi.c 42 */;
	enum drm_connector_status cocci_id/* drivers/gpu/drm/exynos/exynos_drm_dpi.c 41 */;
	struct exynos_dpi cocci_id/* drivers/gpu/drm/exynos/exynos_drm_dpi.c 38 */;
	struct exynos_dpi *cocci_id/* drivers/gpu/drm/exynos/exynos_drm_dpi.c 36 */;
	struct drm_encoder *cocci_id/* drivers/gpu/drm/exynos/exynos_drm_dpi.c 36 */;
	struct exynos_dpi {
		struct drm_encoder encoder;
		struct device *dev;
		struct device_node *panel_node;
		struct drm_panel *panel;
		struct drm_connector connector;
		struct videomode *vm;
	} cocci_id/* drivers/gpu/drm/exynos/exynos_drm_dpi.c 23 */;
	struct drm_device *cocci_id/* drivers/gpu/drm/exynos/exynos_drm_dpi.c 200 */;
	int cocci_id/* drivers/gpu/drm/exynos/exynos_drm_dpi.c 200 */;
	struct videomode *cocci_id/* drivers/gpu/drm/exynos/exynos_drm_dpi.c 174 */;
	struct device_node *cocci_id/* drivers/gpu/drm/exynos/exynos_drm_dpi.c 167 */;
	struct device *cocci_id/* drivers/gpu/drm/exynos/exynos_drm_dpi.c 166 */;
	enum{FIMD_PORT_IN0, FIMD_PORT_IN1, FIMD_PORT_IN2, FIMD_PORT_RGB, FIMD_PORT_WRB,} cocci_id/* drivers/gpu/drm/exynos/exynos_drm_dpi.c 156 */;
	const struct drm_encoder_funcs cocci_id/* drivers/gpu/drm/exynos/exynos_drm_dpi.c 152 */;
	const struct drm_encoder_helper_funcs cocci_id/* drivers/gpu/drm/exynos/exynos_drm_dpi.c 146 */;
}
