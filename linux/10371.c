cocci_test_suite() {
	struct drm_crtc *cocci_id/* drivers/gpu/drm/mediatek/mtk_disp_ovl.c 98 */;
	irqreturn_t cocci_id/* drivers/gpu/drm/mediatek/mtk_disp_ovl.c 81 */;
	struct mtk_disp_ovl cocci_id/* drivers/gpu/drm/mediatek/mtk_disp_ovl.c 78 */;
	struct mtk_disp_ovl *cocci_id/* drivers/gpu/drm/mediatek/mtk_disp_ovl.c 76 */;
	struct mtk_ddp_comp *cocci_id/* drivers/gpu/drm/mediatek/mtk_disp_ovl.c 76 */;
	struct mtk_disp_ovl {
		struct mtk_ddp_comp ddp_comp;
		struct drm_crtc *crtc;
		const struct mtk_disp_ovl_data *data;
	} cocci_id/* drivers/gpu/drm/mediatek/mtk_disp_ovl.c 70 */;
	struct mtk_disp_ovl_data {
		unsigned int addr;
		unsigned int gmc_bits;
		unsigned int layer_nr;
		bool fmt_rgb565_is_0;
	} cocci_id/* drivers/gpu/drm/mediatek/mtk_disp_ovl.c 58 */;
	struct platform_driver cocci_id/* drivers/gpu/drm/mediatek/mtk_disp_ovl.c 435 */;
	const struct of_device_id cocci_id/* drivers/gpu/drm/mediatek/mtk_disp_ovl.c 426 */[];
	const struct mtk_disp_ovl_data cocci_id/* drivers/gpu/drm/mediatek/mtk_disp_ovl.c 412 */;
	struct platform_device *cocci_id/* drivers/gpu/drm/mediatek/mtk_disp_ovl.c 355 */;
	const struct component_ops cocci_id/* drivers/gpu/drm/mediatek/mtk_disp_ovl.c 350 */;
	void cocci_id/* drivers/gpu/drm/mediatek/mtk_disp_ovl.c 341 */;
	struct drm_device *cocci_id/* drivers/gpu/drm/mediatek/mtk_disp_ovl.c 328 */;
	void *cocci_id/* drivers/gpu/drm/mediatek/mtk_disp_ovl.c 325 */;
	struct device *cocci_id/* drivers/gpu/drm/mediatek/mtk_disp_ovl.c 324 */;
	int cocci_id/* drivers/gpu/drm/mediatek/mtk_disp_ovl.c 324 */;
	const struct mtk_ddp_comp_funcs cocci_id/* drivers/gpu/drm/mediatek/mtk_disp_ovl.c 308 */;
	unsigned int cocci_id/* drivers/gpu/drm/mediatek/mtk_disp_ovl.c 301 */;
	struct mtk_plane_pending_state *cocci_id/* drivers/gpu/drm/mediatek/mtk_disp_ovl.c 255 */;
	struct drm_plane_state *cocci_id/* drivers/gpu/drm/mediatek/mtk_disp_ovl.c 153 */;
	struct mtk_plane_state *cocci_id/* drivers/gpu/drm/mediatek/mtk_disp_ovl.c 151 */;
}
