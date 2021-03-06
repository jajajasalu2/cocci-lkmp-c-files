cocci_test_suite() {
	struct fimc_context {
		struct exynos_drm_ipp ipp;
		struct drm_device *drm_dev;
		struct device *dev;
		struct exynos_drm_ipp_task *task;
		struct exynos_drm_ipp_formats *formats;
		unsigned int num_formats;
		struct resource *regs_res;
		void __iomem *regs;
		spinlock_t lock;
		struct clk *clocks[FIMC_CLKS_MAX];
		struct fimc_scaler sc;
		int id;
		int irq;
	} cocci_id/* drivers/gpu/drm/exynos/exynos_drm_fimc.c 97 */;
	irqreturn_t cocci_id/* drivers/gpu/drm/exynos/exynos_drm_fimc.c 947 */;
	void cocci_id/* drivers/gpu/drm/exynos/exynos_drm_fimc.c 945 */(struct fimc_context *ctx);
	struct exynos_drm_ipp_buffer *cocci_id/* drivers/gpu/drm/exynos/exynos_drm_fimc.c 936 */;
	unsigned long cocci_id/* drivers/gpu/drm/exynos/exynos_drm_fimc.c 908 */;
	unsigned int cocci_id/* drivers/gpu/drm/exynos/exynos_drm_fimc.c 848 */;
	struct fimc_scaler {
		bool range;
		bool bypass;
		bool up_h;
		bool up_v;
		u32 hratio;
		u32 vratio;
	} cocci_id/* drivers/gpu/drm/exynos/exynos_drm_fimc.c 76 */;
	struct drm_exynos_ipp_task_rect *cocci_id/* drivers/gpu/drm/exynos/exynos_drm_fimc.c 738 */;
	struct fimc_scaler *cocci_id/* drivers/gpu/drm/exynos/exynos_drm_fimc.c 737 */;
	const char *constcocci_id/* drivers/gpu/drm/exynos/exynos_drm_fimc.c 59 */[];
	enum{FIMC_CLK_LCLK, FIMC_CLK_GATE, FIMC_CLK_WB_A, FIMC_CLK_WB_B, FIMC_CLKS_MAX,} cocci_id/* drivers/gpu/drm/exynos/exynos_drm_fimc.c 51 */;
	u32 cocci_id/* drivers/gpu/drm/exynos/exynos_drm_fimc.c 244 */;
	bool cocci_id/* drivers/gpu/drm/exynos/exynos_drm_fimc.c 242 */;
	struct platform_driver cocci_id/* drivers/gpu/drm/exynos/exynos_drm_fimc.c 1415 */;
	const struct of_device_id cocci_id/* drivers/gpu/drm/exynos/exynos_drm_fimc.c 1408 */[];
	void __iomem *cocci_id/* drivers/gpu/drm/exynos/exynos_drm_fimc.c 133 */;
	struct resource *cocci_id/* drivers/gpu/drm/exynos/exynos_drm_fimc.c 1265 */;
	struct exynos_drm_ipp_formats *cocci_id/* drivers/gpu/drm/exynos/exynos_drm_fimc.c 1262 */;
	const struct drm_exynos_ipp_limit *cocci_id/* drivers/gpu/drm/exynos/exynos_drm_fimc.c 1261 */;
	struct platform_device *cocci_id/* drivers/gpu/drm/exynos/exynos_drm_fimc.c 1259 */;
	const struct drm_exynos_ipp_limit cocci_id/* drivers/gpu/drm/exynos/exynos_drm_fimc.c 1245 */[];
	const unsigned int cocci_id/* drivers/gpu/drm/exynos/exynos_drm_fimc.c 1217 */[];
	struct device *cocci_id/* drivers/gpu/drm/exynos/exynos_drm_fimc.c 1208 */;
	int cocci_id/* drivers/gpu/drm/exynos/exynos_drm_fimc.c 1208 */;
	const struct component_ops cocci_id/* drivers/gpu/drm/exynos/exynos_drm_fimc.c 1159 */;
	struct drm_device *cocci_id/* drivers/gpu/drm/exynos/exynos_drm_fimc.c 1131 */;
	void *cocci_id/* drivers/gpu/drm/exynos/exynos_drm_fimc.c 1128 */;
	struct exynos_drm_ipp_funcs cocci_id/* drivers/gpu/drm/exynos/exynos_drm_fimc.c 1123 */;
	struct fimc_context cocci_id/* drivers/gpu/drm/exynos/exynos_drm_fimc.c 1109 */;
	struct fimc_context *cocci_id/* drivers/gpu/drm/exynos/exynos_drm_fimc.c 1108 */;
	struct exynos_drm_ipp_task *cocci_id/* drivers/gpu/drm/exynos/exynos_drm_fimc.c 1106 */;
	struct exynos_drm_ipp *cocci_id/* drivers/gpu/drm/exynos/exynos_drm_fimc.c 1105 */;
	void cocci_id/* drivers/gpu/drm/exynos/exynos_drm_fimc.c 1105 */;
}
