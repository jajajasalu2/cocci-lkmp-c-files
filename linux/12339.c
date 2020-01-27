cocci_test_suite() {
	struct platform_driver cocci_id/* drivers/gpu/drm/vc4/vc4_txp.c 449 */;
	const struct of_device_id cocci_id/* drivers/gpu/drm/vc4/vc4_txp.c 444 */[];
	const struct component_ops cocci_id/* drivers/gpu/drm/vc4/vc4_txp.c 428 */;
	struct vc4_dev *cocci_id/* drivers/gpu/drm/vc4/vc4_txp.c 373 */;
	struct drm_device *cocci_id/* drivers/gpu/drm/vc4/vc4_txp.c 372 */;
	struct platform_device *cocci_id/* drivers/gpu/drm/vc4/vc4_txp.c 371 */;
	struct device *cocci_id/* drivers/gpu/drm/vc4/vc4_txp.c 369 */;
	void *cocci_id/* drivers/gpu/drm/vc4/vc4_txp.c 369 */;
	int cocci_id/* drivers/gpu/drm/vc4/vc4_txp.c 369 */;
	irqreturn_t cocci_id/* drivers/gpu/drm/vc4/vc4_txp.c 358 */;
	const struct drm_encoder_helper_funcs cocci_id/* drivers/gpu/drm/vc4/vc4_txp.c 354 */;
	unsigned long cocci_id/* drivers/gpu/drm/vc4/vc4_txp.c 340 */;
	const struct drm_connector_funcs cocci_id/* drivers/gpu/drm/vc4/vc4_txp.c 326 */;
	bool cocci_id/* drivers/gpu/drm/vc4/vc4_txp.c 315 */;
	enum drm_connector_status cocci_id/* drivers/gpu/drm/vc4/vc4_txp.c 314 */;
	const struct drm_connector_helper_funcs cocci_id/* drivers/gpu/drm/vc4/vc4_txp.c 307 */;
	u32 cocci_id/* drivers/gpu/drm/vc4/vc4_txp.c 271 */;
	struct drm_display_mode *cocci_id/* drivers/gpu/drm/vc4/vc4_txp.c 269 */;
	struct drm_gem_cma_object *cocci_id/* drivers/gpu/drm/vc4/vc4_txp.c 268 */;
	void cocci_id/* drivers/gpu/drm/vc4/vc4_txp.c 264 */;
	struct drm_framebuffer *cocci_id/* drivers/gpu/drm/vc4/vc4_txp.c 230 */;
	struct drm_crtc_state *cocci_id/* drivers/gpu/drm/vc4/vc4_txp.c 229 */;
	struct drm_connector_state *cocci_id/* drivers/gpu/drm/vc4/vc4_txp.c 228 */;
	struct drm_atomic_state *cocci_id/* drivers/gpu/drm/vc4/vc4_txp.c 226 */;
	const u32 cocci_id/* drivers/gpu/drm/vc4/vc4_txp.c 199 */[];
	struct drm_mode_config *cocci_id/* drivers/gpu/drm/vc4/vc4_txp.c 187 */;
	enum drm_mode_status cocci_id/* drivers/gpu/drm/vc4/vc4_txp.c 182 */;
	const struct debugfs_reg32 cocci_id/* drivers/gpu/drm/vc4/vc4_txp.c 166 */[];
	struct vc4_txp cocci_id/* drivers/gpu/drm/vc4/vc4_txp.c 163 */;
	struct vc4_txp *cocci_id/* drivers/gpu/drm/vc4/vc4_txp.c 161 */;
	struct drm_connector *cocci_id/* drivers/gpu/drm/vc4/vc4_txp.c 161 */;
	struct drm_encoder *cocci_id/* drivers/gpu/drm/vc4/vc4_txp.c 156 */;
	struct vc4_txp {
		struct platform_device *pdev;
		struct drm_writeback_connector connector;
		void __iomem *regs;
		struct debugfs_regset32 regset;
	} cocci_id/* drivers/gpu/drm/vc4/vc4_txp.c 147 */;
}