cocci_test_suite() {
	struct platform_driver cocci_id/* drivers/gpu/drm/exynos/exynos7_drm_decon.c 837 */;
	const enum drm_plane_type cocci_id/* drivers/gpu/drm/exynos/exynos7_drm_decon.c 78 */[WINDOWS_NR];
	struct resource *cocci_id/* drivers/gpu/drm/exynos/exynos7_drm_decon.c 674 */;
	struct device_node *cocci_id/* drivers/gpu/drm/exynos/exynos7_drm_decon.c 673 */;
	struct platform_device *cocci_id/* drivers/gpu/drm/exynos/exynos7_drm_decon.c 669 */;
	const struct component_ops cocci_id/* drivers/gpu/drm/exynos/exynos7_drm_decon.c 664 */;
	const uint32_t cocci_id/* drivers/gpu/drm/exynos/exynos7_drm_decon.c 66 */[];
	unsigned int cocci_id/* drivers/gpu/drm/exynos/exynos7_drm_decon.c 615 */;
	struct exynos_drm_plane *cocci_id/* drivers/gpu/drm/exynos/exynos7_drm_decon.c 614 */;
	struct drm_device *cocci_id/* drivers/gpu/drm/exynos/exynos7_drm_decon.c 613 */;
	struct device *cocci_id/* drivers/gpu/drm/exynos/exynos7_drm_decon.c 610 */;
	void *cocci_id/* drivers/gpu/drm/exynos/exynos7_drm_decon.c 610 */;
	const struct of_device_id cocci_id/* drivers/gpu/drm/exynos/exynos7_drm_decon.c 60 */[];
	irqreturn_t cocci_id/* drivers/gpu/drm/exynos/exynos7_drm_decon.c 582 */;
	const struct exynos_drm_crtc_ops cocci_id/* drivers/gpu/drm/exynos/exynos7_drm_decon.c 570 */;
	struct decon_context {
		struct device *dev;
		struct drm_device *drm_dev;
		struct exynos_drm_crtc *crtc;
		struct exynos_drm_plane planes[WINDOWS_NR];
		struct exynos_drm_plane_config configs[WINDOWS_NR];
		struct clk *pclk;
		struct clk *aclk;
		struct clk *eclk;
		struct clk *vclk;
		void __iomem *regs;
		unsigned long irq_flags;
		bool i80_if;
		bool suspended;
		wait_queue_head_t wait_vsync_queue;
		atomic_t wait_vsync_event;
		struct drm_encoder *encoder;
	} cocci_id/* drivers/gpu/drm/exynos/exynos7_drm_decon.c 40 */;
	struct drm_framebuffer *cocci_id/* drivers/gpu/drm/exynos/exynos7_drm_decon.c 384 */;
	struct exynos_drm_plane_state *cocci_id/* drivers/gpu/drm/exynos/exynos7_drm_decon.c 381 */;
	int cocci_id/* drivers/gpu/drm/exynos/exynos7_drm_decon.c 369 */;
	struct decon_context *cocci_id/* drivers/gpu/drm/exynos/exynos7_drm_decon.c 368 */;
	struct exynos_drm_crtc *cocci_id/* drivers/gpu/drm/exynos/exynos7_drm_decon.c 366 */;
	void cocci_id/* drivers/gpu/drm/exynos/exynos7_drm_decon.c 366 */;
	bool cocci_id/* drivers/gpu/drm/exynos/exynos7_drm_decon.c 352 */;
	struct drm_display_mode *cocci_id/* drivers/gpu/drm/exynos/exynos7_drm_decon.c 154 */;
	unsigned long cocci_id/* drivers/gpu/drm/exynos/exynos7_drm_decon.c 142 */;
	const struct drm_display_mode *cocci_id/* drivers/gpu/drm/exynos/exynos7_drm_decon.c 140 */;
	u32 cocci_id/* drivers/gpu/drm/exynos/exynos7_drm_decon.c 139 */;
}
