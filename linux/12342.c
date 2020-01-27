cocci_test_suite() {
	struct platform_driver cocci_id/* drivers/gpu/drm/vc4/vc4_vec.c 624 */;
	const struct component_ops cocci_id/* drivers/gpu/drm/vc4/vc4_vec.c 608 */;
	struct vc4_vec *cocci_id/* drivers/gpu/drm/vc4/vc4_vec.c 530 */;
	struct vc4_dev *cocci_id/* drivers/gpu/drm/vc4/vc4_vec.c 529 */;
	struct drm_device *cocci_id/* drivers/gpu/drm/vc4/vc4_vec.c 528 */;
	struct platform_device *cocci_id/* drivers/gpu/drm/vc4/vc4_vec.c 527 */;
	struct device *cocci_id/* drivers/gpu/drm/vc4/vc4_vec.c 525 */;
	void *cocci_id/* drivers/gpu/drm/vc4/vc4_vec.c 525 */;
	int cocci_id/* drivers/gpu/drm/vc4/vc4_vec.c 525 */;
	const char *constcocci_id/* drivers/gpu/drm/vc4/vc4_vec.c 518 */[];
	const struct of_device_id cocci_id/* drivers/gpu/drm/vc4/vc4_vec.c 513 */[];
	const struct drm_encoder_helper_funcs cocci_id/* drivers/gpu/drm/vc4/vc4_vec.c 505 */;
	const struct vc4_vec_tv_mode *cocci_id/* drivers/gpu/drm/vc4/vc4_vec.c 494 */;
	struct drm_crtc_state *cocci_id/* drivers/gpu/drm/vc4/vc4_vec.c 491 */;
	const struct drm_display_mode *cocci_id/* drivers/gpu/drm/vc4/vc4_vec.c 474 */;
	const struct drm_encoder_funcs cocci_id/* drivers/gpu/drm/vc4/vc4_vec.c 377 */;
	const struct drm_connector_helper_funcs cocci_id/* drivers/gpu/drm/vc4/vc4_vec.c 342 */;
	const struct drm_connector_funcs cocci_id/* drivers/gpu/drm/vc4/vc4_vec.c 333 */;
	struct drm_display_mode *cocci_id/* drivers/gpu/drm/vc4/vc4_vec.c 319 */;
	struct drm_connector_state *cocci_id/* drivers/gpu/drm/vc4/vc4_vec.c 318 */;
	void cocci_id/* drivers/gpu/drm/vc4/vc4_vec.c 310 */;
	bool cocci_id/* drivers/gpu/drm/vc4/vc4_vec.c 305 */;
	enum drm_connector_status cocci_id/* drivers/gpu/drm/vc4/vc4_vec.c 304 */;
	const struct vc4_vec_tv_mode cocci_id/* drivers/gpu/drm/vc4/vc4_vec.c 285 */[];
	const struct drm_display_mode cocci_id/* drivers/gpu/drm/vc4/vc4_vec.c 256 */;
	const struct debugfs_reg32 cocci_id/* drivers/gpu/drm/vc4/vc4_vec.c 217 */[];
	struct vc4_vec_tv_mode {
		const struct drm_display_mode *mode;
		void (*mode_set)(struct vc4_vec *vec);
	} cocci_id/* drivers/gpu/drm/vc4/vc4_vec.c 212 */;
	enum vc4_vec_tv_mode_id{VC4_VEC_TV_MODE_NTSC, VC4_VEC_TV_MODE_NTSC_J, VC4_VEC_TV_MODE_PAL, VC4_VEC_TV_MODE_PAL_M,} cocci_id/* drivers/gpu/drm/vc4/vc4_vec.c 205 */;
	struct vc4_vec_connector cocci_id/* drivers/gpu/drm/vc4/vc4_vec.c 202 */;
	struct drm_connector *cocci_id/* drivers/gpu/drm/vc4/vc4_vec.c 200 */;
	struct vc4_vec_connector *cocci_id/* drivers/gpu/drm/vc4/vc4_vec.c 199 */;
	struct vc4_vec_connector {
		struct drm_connector base;
		struct vc4_vec *vec;
		struct drm_encoder *encoder;
	} cocci_id/* drivers/gpu/drm/vc4/vc4_vec.c 188 */;
	struct vc4_vec_encoder cocci_id/* drivers/gpu/drm/vc4/vc4_vec.c 184 */;
	struct drm_encoder *cocci_id/* drivers/gpu/drm/vc4/vc4_vec.c 182 */;
	struct vc4_vec_encoder *cocci_id/* drivers/gpu/drm/vc4/vc4_vec.c 181 */;
	struct vc4_vec_encoder {
		struct vc4_encoder base;
		struct vc4_vec *vec;
	} cocci_id/* drivers/gpu/drm/vc4/vc4_vec.c 176 */;
	struct vc4_vec {
		struct platform_device *pdev;
		struct drm_encoder *encoder;
		struct drm_connector *connector;
		void __iomem *regs;
		struct clk *clock;
		const struct vc4_vec_tv_mode *tv_mode;
		struct debugfs_regset32 regset;
	} cocci_id/* drivers/gpu/drm/vc4/vc4_vec.c 157 */;
}
