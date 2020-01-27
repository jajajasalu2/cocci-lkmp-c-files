cocci_test_suite() {
	struct platform_driver cocci_id/* drivers/gpu/drm/mediatek/mtk_drm_ddp.c 664 */;
	const struct of_device_id cocci_id/* drivers/gpu/drm/mediatek/mtk_drm_ddp.c 653 */[];
	struct resource *cocci_id/* drivers/gpu/drm/mediatek/mtk_drm_ddp.c 616 */;
	struct mtk_ddp *cocci_id/* drivers/gpu/drm/mediatek/mtk_drm_ddp.c 615 */;
	struct device *cocci_id/* drivers/gpu/drm/mediatek/mtk_drm_ddp.c 614 */;
	struct platform_device *cocci_id/* drivers/gpu/drm/mediatek/mtk_drm_ddp.c 612 */;
	int cocci_id/* drivers/gpu/drm/mediatek/mtk_drm_ddp.c 612 */;
	u32 cocci_id/* drivers/gpu/drm/mediatek/mtk_drm_ddp.c 595 */;
	struct mtk_ddp cocci_id/* drivers/gpu/drm/mediatek/mtk_drm_ddp.c 593 */;
	struct mtk_disp_mutex *cocci_id/* drivers/gpu/drm/mediatek/mtk_drm_ddp.c 591 */;
	unsigned int cocci_id/* drivers/gpu/drm/mediatek/mtk_drm_ddp.c 407 */;
	enum mtk_ddp_comp_id cocci_id/* drivers/gpu/drm/mediatek/mtk_drm_ddp.c 404 */;
	void __iomem *cocci_id/* drivers/gpu/drm/mediatek/mtk_drm_ddp.c 403 */;
	void cocci_id/* drivers/gpu/drm/mediatek/mtk_drm_ddp.c 403 */;
	unsigned int *cocci_id/* drivers/gpu/drm/mediatek/mtk_drm_ddp.c 251 */;
	const struct mtk_ddp_data cocci_id/* drivers/gpu/drm/mediatek/mtk_drm_ddp.c 228 */;
	const unsigned int cocci_id/* drivers/gpu/drm/mediatek/mtk_drm_ddp.c 218 */[DDP_MUTEX_SOF_DSI3 + 1];
	const unsigned int cocci_id/* drivers/gpu/drm/mediatek/mtk_drm_ddp.c 171 */[DDP_COMPONENT_ID_MAX];
	struct mtk_ddp {
		struct device *dev;
		struct clk *clk;
		void __iomem *regs;
		struct mtk_disp_mutex mutex[10];
		const struct mtk_ddp_data *data;
	} cocci_id/* drivers/gpu/drm/mediatek/mtk_drm_ddp.c 163 */;
	struct mtk_ddp_data {
		const unsigned int *mutex_mod;
		const unsigned int *mutex_sof;
		const unsigned int mutex_mod_reg;
		const unsigned int mutex_sof_reg;
		const bool no_clk;
	} cocci_id/* drivers/gpu/drm/mediatek/mtk_drm_ddp.c 155 */;
	enum mtk_ddp_mutex_sof_id{DDP_MUTEX_SOF_SINGLE_MODE, DDP_MUTEX_SOF_DSI0, DDP_MUTEX_SOF_DSI1, DDP_MUTEX_SOF_DPI0, DDP_MUTEX_SOF_DPI1, DDP_MUTEX_SOF_DSI2, DDP_MUTEX_SOF_DSI3,} cocci_id/* drivers/gpu/drm/mediatek/mtk_drm_ddp.c 145 */;
	struct mtk_disp_mutex {
		int id;
		bool claimed;
	} cocci_id/* drivers/gpu/drm/mediatek/mtk_drm_ddp.c 140 */;
}
