cocci_test_suite() {
	uint32_t cocci_id/* drivers/gpu/drm/msm/disp/mdp4/mdp4_dtv_encoder.c 90 */;
	struct drm_display_mode *cocci_id/* drivers/gpu/drm/msm/disp/mdp4/mdp4_dtv_encoder.c 85 */;
	const struct drm_encoder_funcs cocci_id/* drivers/gpu/drm/msm/disp/mdp4/mdp4_dtv_encoder.c 80 */;
	int cocci_id/* drivers/gpu/drm/msm/disp/mdp4/mdp4_dtv_encoder.c 59 */;
	struct mdp4_dtv_encoder *cocci_id/* drivers/gpu/drm/msm/disp/mdp4/mdp4_dtv_encoder.c 51 */;
	void cocci_id/* drivers/gpu/drm/msm/disp/mdp4/mdp4_dtv_encoder.c 51 */;
	struct lcdc_platform_data *cocci_id/* drivers/gpu/drm/msm/disp/mdp4/mdp4_dtv_encoder.c 34 */;
	struct drm_device *cocci_id/* drivers/gpu/drm/msm/disp/mdp4/mdp4_dtv_encoder.c 33 */;
	struct msm_drm_private *cocci_id/* drivers/gpu/drm/msm/disp/mdp4/mdp4_dtv_encoder.c 24 */;
	struct mdp4_kms *cocci_id/* drivers/gpu/drm/msm/disp/mdp4/mdp4_dtv_encoder.c 22 */;
	struct drm_encoder *cocci_id/* drivers/gpu/drm/msm/disp/mdp4/mdp4_dtv_encoder.c 22 */;
	long cocci_id/* drivers/gpu/drm/msm/disp/mdp4/mdp4_dtv_encoder.c 216 */;
	const struct drm_encoder_helper_funcs cocci_id/* drivers/gpu/drm/msm/disp/mdp4/mdp4_dtv_encoder.c 210 */;
	struct mdp4_dtv_encoder cocci_id/* drivers/gpu/drm/msm/disp/mdp4/mdp4_dtv_encoder.c 20 */;
	unsigned long cocci_id/* drivers/gpu/drm/msm/disp/mdp4/mdp4_dtv_encoder.c 175 */;
	struct mdp4_dtv_encoder {
		struct drm_encoder base;
		struct clk *hdmi_clk;
		struct clk *mdp_clk;
		unsigned long int pixclock;
		bool enabled;
		uint32_t bsc;
	} cocci_id/* drivers/gpu/drm/msm/disp/mdp4/mdp4_dtv_encoder.c 12 */;
}
