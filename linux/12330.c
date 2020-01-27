cocci_test_suite() {
	struct vc4_dpi {
		struct platform_device *pdev;
		struct drm_encoder *encoder;
		void __iomem *regs;
		struct clk *pixel_clock;
		struct clk *core_clock;
		struct debugfs_regset32 regset;
	} cocci_id/* drivers/gpu/drm/vc4/vc4_dpi.c 84 */;
	struct platform_driver cocci_id/* drivers/gpu/drm/vc4/vc4_dpi.c 366 */;
	const struct component_ops cocci_id/* drivers/gpu/drm/vc4/vc4_dpi.c 350 */;
	struct vc4_dpi *cocci_id/* drivers/gpu/drm/vc4/vc4_dpi.c 263 */;
	struct vc4_dev *cocci_id/* drivers/gpu/drm/vc4/vc4_dpi.c 262 */;
	struct drm_device *cocci_id/* drivers/gpu/drm/vc4/vc4_dpi.c 261 */;
	struct platform_device *cocci_id/* drivers/gpu/drm/vc4/vc4_dpi.c 260 */;
	struct device *cocci_id/* drivers/gpu/drm/vc4/vc4_dpi.c 258 */;
	void *cocci_id/* drivers/gpu/drm/vc4/vc4_dpi.c 258 */;
	int cocci_id/* drivers/gpu/drm/vc4/vc4_dpi.c 258 */;
	struct drm_bridge *cocci_id/* drivers/gpu/drm/vc4/vc4_dpi.c 236 */;
	struct drm_panel *cocci_id/* drivers/gpu/drm/vc4/vc4_dpi.c 235 */;
	const struct of_device_id cocci_id/* drivers/gpu/drm/vc4/vc4_dpi.c 224 */[];
	const struct drm_encoder_helper_funcs cocci_id/* drivers/gpu/drm/vc4/vc4_dpi.c 218 */;
	const struct drm_display_mode *cocci_id/* drivers/gpu/drm/vc4/vc4_dpi.c 210 */;
	enum drm_mode_status cocci_id/* drivers/gpu/drm/vc4/vc4_dpi.c 209 */;
	u32 cocci_id/* drivers/gpu/drm/vc4/vc4_dpi.c 137 */;
	struct drm_connector *cocci_id/* drivers/gpu/drm/vc4/vc4_dpi.c 136 */;
	struct drm_connector_list_iter cocci_id/* drivers/gpu/drm/vc4/vc4_dpi.c 135 */;
	struct drm_display_mode *cocci_id/* drivers/gpu/drm/vc4/vc4_dpi.c 132 */;
	void cocci_id/* drivers/gpu/drm/vc4/vc4_dpi.c 121 */;
	const struct drm_encoder_funcs cocci_id/* drivers/gpu/drm/vc4/vc4_dpi.c 117 */;
	const struct debugfs_reg32 cocci_id/* drivers/gpu/drm/vc4/vc4_dpi.c 112 */[];
	struct vc4_dpi_encoder cocci_id/* drivers/gpu/drm/vc4/vc4_dpi.c 109 */;
	struct drm_encoder *cocci_id/* drivers/gpu/drm/vc4/vc4_dpi.c 107 */;
	struct vc4_dpi_encoder *cocci_id/* drivers/gpu/drm/vc4/vc4_dpi.c 106 */;
	struct vc4_dpi_encoder {
		struct vc4_encoder base;
		struct vc4_dpi *dpi;
	} cocci_id/* drivers/gpu/drm/vc4/vc4_dpi.c 101 */;
}
