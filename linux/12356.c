cocci_test_suite() {
	enum rot_irq_status cocci_id/* drivers/gpu/drm/exynos/exynos_drm_rotator.c 94 */;
	irqreturn_t cocci_id/* drivers/gpu/drm/exynos/exynos_drm_rotator.c 91 */;
	bool cocci_id/* drivers/gpu/drm/exynos/exynos_drm_rotator.c 67 */;
	struct rot_context {
		struct exynos_drm_ipp ipp;
		struct drm_device *drm_dev;
		struct device *dev;
		void __iomem *regs;
		struct clk *clock;
		const struct exynos_drm_ipp_formats *formats;
		unsigned int num_formats;
		struct exynos_drm_ipp_task *task;
	} cocci_id/* drivers/gpu/drm/exynos/exynos_drm_rotator.c 56 */;
	struct platform_driver cocci_id/* drivers/gpu/drm/exynos/exynos_drm_rotator.c 458 */;
	const struct of_device_id cocci_id/* drivers/gpu/drm/exynos/exynos_drm_rotator.c 433 */[];
	struct rot_variant {
		const struct exynos_drm_ipp_formats *formats;
		unsigned int num_formats;
	} cocci_id/* drivers/gpu/drm/exynos/exynos_drm_rotator.c 43 */;
	const struct rot_variant cocci_id/* drivers/gpu/drm/exynos/exynos_drm_rotator.c 418 */;
	const struct exynos_drm_ipp_formats cocci_id/* drivers/gpu/drm/exynos/exynos_drm_rotator.c 398 */[];
	enum rot_irq_status{ROT_IRQ_STATUS_COMPLETE=8, ROT_IRQ_STATUS_ILLEGAL=9,} cocci_id/* drivers/gpu/drm/exynos/exynos_drm_rotator.c 38 */;
	const struct drm_exynos_ipp_limit cocci_id/* drivers/gpu/drm/exynos/exynos_drm_rotator.c 363 */[];
	const struct rot_variant *cocci_id/* drivers/gpu/drm/exynos/exynos_drm_rotator.c 277 */;
	struct resource *cocci_id/* drivers/gpu/drm/exynos/exynos_drm_rotator.c 275 */;
	struct platform_device *cocci_id/* drivers/gpu/drm/exynos/exynos_drm_rotator.c 272 */;
	const struct component_ops cocci_id/* drivers/gpu/drm/exynos/exynos_drm_rotator.c 267 */;
	struct exynos_drm_ipp *cocci_id/* drivers/gpu/drm/exynos/exynos_drm_rotator.c 242 */;
	struct drm_device *cocci_id/* drivers/gpu/drm/exynos/exynos_drm_rotator.c 241 */;
	struct rot_context *cocci_id/* drivers/gpu/drm/exynos/exynos_drm_rotator.c 240 */;
	struct device *cocci_id/* drivers/gpu/drm/exynos/exynos_drm_rotator.c 238 */;
	void *cocci_id/* drivers/gpu/drm/exynos/exynos_drm_rotator.c 238 */;
	int cocci_id/* drivers/gpu/drm/exynos/exynos_drm_rotator.c 238 */;
	const struct exynos_drm_ipp_funcs cocci_id/* drivers/gpu/drm/exynos/exynos_drm_rotator.c 234 */;
	struct rot_context cocci_id/* drivers/gpu/drm/exynos/exynos_drm_rotator.c 220 */;
	struct exynos_drm_ipp_task *cocci_id/* drivers/gpu/drm/exynos/exynos_drm_rotator.c 217 */;
	u32 cocci_id/* drivers/gpu/drm/exynos/exynos_drm_rotator.c 188 */;
	struct exynos_drm_ipp_buffer *cocci_id/* drivers/gpu/drm/exynos/exynos_drm_rotator.c 186 */;
	void cocci_id/* drivers/gpu/drm/exynos/exynos_drm_rotator.c 185 */;
	unsigned int cocci_id/* drivers/gpu/drm/exynos/exynos_drm_rotator.c 160 */;
}
