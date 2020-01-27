cocci_test_suite() {
	struct platform_driver cocci_id/* drivers/gpu/drm/exynos/exynos_drm_scaler.c 727 */;
	const struct of_device_id cocci_id/* drivers/gpu/drm/exynos/exynos_drm_scaler.c 715 */[];
	const struct scaler_data cocci_id/* drivers/gpu/drm/exynos/exynos_drm_scaler.c 701 */;
	const struct exynos_drm_ipp_formats cocci_id/* drivers/gpu/drm/exynos/exynos_drm_scaler.c 624 */[];
	const struct drm_exynos_ipp_limit cocci_id/* drivers/gpu/drm/exynos/exynos_drm_scaler.c 608 */[];
	int (*cocci_id/* drivers/gpu/drm/exynos/exynos_drm_scaler.c 563 */)(struct clk *clk);
	bool cocci_id/* drivers/gpu/drm/exynos/exynos_drm_scaler.c 561 */;
	const struct scaler_format cocci_id/* drivers/gpu/drm/exynos/exynos_drm_scaler.c 56 */[];
	struct clk *cocci_id/* drivers/gpu/drm/exynos/exynos_drm_scaler.c 554 */;
	int cocci_id/* drivers/gpu/drm/exynos/exynos_drm_scaler.c 554 */;
	struct scaler_data *cocci_id/* drivers/gpu/drm/exynos/exynos_drm_scaler.c 494 */;
	struct scaler_format {
		u32 drm_fmt;
		u32 internal_fmt;
		u32 chroma_tile_w;
		u32 chroma_tile_h;
	} cocci_id/* drivers/gpu/drm/exynos/exynos_drm_scaler.c 49 */;
	struct resource *cocci_id/* drivers/gpu/drm/exynos/exynos_drm_scaler.c 484 */;
	struct platform_device *cocci_id/* drivers/gpu/drm/exynos/exynos_drm_scaler.c 481 */;
	const struct component_ops cocci_id/* drivers/gpu/drm/exynos/exynos_drm_scaler.c 476 */;
	struct exynos_drm_ipp *cocci_id/* drivers/gpu/drm/exynos/exynos_drm_scaler.c 449 */;
	struct drm_device *cocci_id/* drivers/gpu/drm/exynos/exynos_drm_scaler.c 448 */;
	struct scaler_context *cocci_id/* drivers/gpu/drm/exynos/exynos_drm_scaler.c 447 */;
	struct device *cocci_id/* drivers/gpu/drm/exynos/exynos_drm_scaler.c 445 */;
	void *cocci_id/* drivers/gpu/drm/exynos/exynos_drm_scaler.c 445 */;
	irqreturn_t cocci_id/* drivers/gpu/drm/exynos/exynos_drm_scaler.c 425 */;
	void cocci_id/* drivers/gpu/drm/exynos/exynos_drm_scaler.c 406 */;
	struct exynos_drm_ipp_funcs cocci_id/* drivers/gpu/drm/exynos/exynos_drm_scaler.c 402 */;
	struct scaler_context {
		struct exynos_drm_ipp ipp;
		struct drm_device *drm_dev;
		struct device *dev;
		void __iomem *regs;
		struct clk *clock[SCALER_MAX_CLK];
		struct exynos_drm_ipp_task *task;
		const struct scaler_data *scaler_data;
	} cocci_id/* drivers/gpu/drm/exynos/exynos_drm_scaler.c 39 */;
	const struct scaler_format *cocci_id/* drivers/gpu/drm/exynos/exynos_drm_scaler.c 363 */;
	struct drm_exynos_ipp_task_rect *cocci_id/* drivers/gpu/drm/exynos/exynos_drm_scaler.c 361 */;
	struct scaler_context cocci_id/* drivers/gpu/drm/exynos/exynos_drm_scaler.c 359 */;
	struct exynos_drm_ipp_task *cocci_id/* drivers/gpu/drm/exynos/exynos_drm_scaler.c 356 */;
	struct scaler_data {
		const char *clk_name[SCALER_MAX_CLK];
		unsigned int num_clk;
		const struct exynos_drm_ipp_formats *formats;
		unsigned int num_formats;
	} cocci_id/* drivers/gpu/drm/exynos/exynos_drm_scaler.c 32 */;
	const u32 cocci_id/* drivers/gpu/drm/exynos/exynos_drm_scaler.c 304 */[2][3][3];
	const struct drm_format_info *cocci_id/* drivers/gpu/drm/exynos/exynos_drm_scaler.c 302 */;
	unsigned int cocci_id/* drivers/gpu/drm/exynos/exynos_drm_scaler.c 262 */;
	unsigned int cocci_id/* drivers/gpu/drm/exynos/exynos_drm_scaler.c 216 */[];
	struct exynos_drm_ipp_buffer *cocci_id/* drivers/gpu/drm/exynos/exynos_drm_scaler.c 214 */;
	u32 cocci_id/* drivers/gpu/drm/exynos/exynos_drm_scaler.c 110 */;
}
