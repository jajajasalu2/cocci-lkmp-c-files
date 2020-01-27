cocci_test_suite() {
	struct exynos_mic {
		struct device *dev;
		void __iomem *reg;
		struct regmap *sysreg;
		struct clk *clks[NUM_CLKS];
		bool i80_mode;
		struct videomode vm;
		struct drm_encoder *encoder;
		struct drm_bridge bridge;
		bool enabled;
	} cocci_id/* drivers/gpu/drm/exynos/exynos_drm_mic.c 95 */;
	char *cocci_id/* drivers/gpu/drm/exynos/exynos_drm_mic.c 91 */[];
	struct platform_driver cocci_id/* drivers/gpu/drm/exynos/exynos_drm_mic.c 464 */;
	const struct of_device_id cocci_id/* drivers/gpu/drm/exynos/exynos_drm_mic.c 458 */[];
	struct resource cocci_id/* drivers/gpu/drm/exynos/exynos_drm_mic.c 380 */;
	struct platform_device *cocci_id/* drivers/gpu/drm/exynos/exynos_drm_mic.c 376 */;
	const struct component_ops cocci_id/* drivers/gpu/drm/exynos/exynos_drm_mic.c 334 */;
	void cocci_id/* drivers/gpu/drm/exynos/exynos_drm_mic.c 319 */;
	struct exynos_mic *cocci_id/* drivers/gpu/drm/exynos/exynos_drm_mic.c 312 */;
	void *cocci_id/* drivers/gpu/drm/exynos/exynos_drm_mic.c 310 */;
	struct device *cocci_id/* drivers/gpu/drm/exynos/exynos_drm_mic.c 309 */;
	int cocci_id/* drivers/gpu/drm/exynos/exynos_drm_mic.c 309 */;
	const struct drm_bridge_funcs cocci_id/* drivers/gpu/drm/exynos/exynos_drm_mic.c 301 */;
	const struct drm_display_mode *cocci_id/* drivers/gpu/drm/exynos/exynos_drm_mic.c 251 */;
	struct drm_bridge *cocci_id/* drivers/gpu/drm/exynos/exynos_drm_mic.c 231 */;
	struct videomode cocci_id/* drivers/gpu/drm/exynos/exynos_drm_mic.c 192 */;
	u32 cocci_id/* drivers/gpu/drm/exynos/exynos_drm_mic.c 182 */;
	struct videomode *cocci_id/* drivers/gpu/drm/exynos/exynos_drm_mic.c 181 */;
	unsigned int cocci_id/* drivers/gpu/drm/exynos/exynos_drm_mic.c 112 */;
	bool cocci_id/* drivers/gpu/drm/exynos/exynos_drm_mic.c 109 */;
}
