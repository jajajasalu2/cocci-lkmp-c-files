cocci_test_suite() {
	struct drm_encoder *cocci_id/* drivers/gpu/drm/msm/disp/mdp4/mdp4_lcdc_encoder.c 87 */;
	struct drm_connector *cocci_id/* drivers/gpu/drm/msm/disp/mdp4/mdp4_lcdc_encoder.c 87 */;
	const struct drm_encoder_funcs cocci_id/* drivers/gpu/drm/msm/disp/mdp4/mdp4_lcdc_encoder.c 82 */;
	int cocci_id/* drivers/gpu/drm/msm/disp/mdp4/mdp4_lcdc_encoder.c 60 */;
	struct mdp4_lcdc_encoder *cocci_id/* drivers/gpu/drm/msm/disp/mdp4/mdp4_lcdc_encoder.c 52 */;
	void cocci_id/* drivers/gpu/drm/msm/disp/mdp4/mdp4_lcdc_encoder.c 52 */;
	struct regulator *cocci_id/* drivers/gpu/drm/msm/disp/mdp4/mdp4_lcdc_encoder.c 433 */;
	struct device_node *cocci_id/* drivers/gpu/drm/msm/disp/mdp4/mdp4_lcdc_encoder.c 429 */;
	long cocci_id/* drivers/gpu/drm/msm/disp/mdp4/mdp4_lcdc_encoder.c 420 */;
	const struct drm_encoder_helper_funcs cocci_id/* drivers/gpu/drm/msm/disp/mdp4/mdp4_lcdc_encoder.c 414 */;
	struct lcdc_platform_data *cocci_id/* drivers/gpu/drm/msm/disp/mdp4/mdp4_lcdc_encoder.c 38 */;
	struct drm_device *cocci_id/* drivers/gpu/drm/msm/disp/mdp4/mdp4_lcdc_encoder.c 37 */;
	uint32_t cocci_id/* drivers/gpu/drm/msm/disp/mdp4/mdp4_lcdc_encoder.c 364 */;
	unsigned long cocci_id/* drivers/gpu/drm/msm/disp/mdp4/mdp4_lcdc_encoder.c 361 */;
	struct drm_panel *cocci_id/* drivers/gpu/drm/msm/disp/mdp4/mdp4_lcdc_encoder.c 319 */;
	struct msm_drm_private *cocci_id/* drivers/gpu/drm/msm/disp/mdp4/mdp4_lcdc_encoder.c 29 */;
	struct mdp4_kms *cocci_id/* drivers/gpu/drm/msm/disp/mdp4/mdp4_lcdc_encoder.c 27 */;
	struct drm_display_mode *cocci_id/* drivers/gpu/drm/msm/disp/mdp4/mdp4_lcdc_encoder.c 255 */;
	struct mdp4_lcdc_encoder cocci_id/* drivers/gpu/drm/msm/disp/mdp4/mdp4_lcdc_encoder.c 25 */;
	struct mdp4_lcdc_encoder {
		struct drm_encoder base;
		struct device_node *panel_node;
		struct drm_panel *panel;
		struct clk *lcdc_clk;
		unsigned long int pixclock;
		struct regulator *regs[3];
		bool enabled;
		uint32_t bsc;
	} cocci_id/* drivers/gpu/drm/msm/disp/mdp4/mdp4_lcdc_encoder.c 15 */;
}
