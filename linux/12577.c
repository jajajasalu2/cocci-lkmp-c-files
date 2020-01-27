cocci_test_suite() {
	struct pixel_ext cocci_id/* drivers/gpu/drm/msm/disp/mdp5/mdp5_plane.c 925 */;
	struct phase_step cocci_id/* drivers/gpu/drm/msm/disp/mdp5/mdp5_plane.c 924 */;
	struct drm_rect *cocci_id/* drivers/gpu/drm/msm/disp/mdp5/mdp5_plane.c 915 */;
	unsigned int cocci_id/* drivers/gpu/drm/msm/disp/mdp5/mdp5_plane.c 824 */;
	u32 cocci_id/* drivers/gpu/drm/msm/disp/mdp5/mdp5_plane.c 821 */;
	struct pixel_ext *cocci_id/* drivers/gpu/drm/msm/disp/mdp5/mdp5_plane.c 820 */;
	struct phase_step *cocci_id/* drivers/gpu/drm/msm/disp/mdp5/mdp5_plane.c 819 */;
	struct drm_framebuffer *cocci_id/* drivers/gpu/drm/msm/disp/mdp5/mdp5_plane.c 818 */;
	struct mdp5_hw_pipe *cocci_id/* drivers/gpu/drm/msm/disp/mdp5/mdp5_plane.c 817 */;
	struct phase_step {
		u32 x[COMP_MAX];
		u32 y[COMP_MAX];
	} cocci_id/* drivers/gpu/drm/msm/disp/mdp5/mdp5_plane.c 811 */;
	struct pixel_ext {
		int left[COMP_MAX];
		int right[COMP_MAX];
		int top[COMP_MAX];
		int bottom[COMP_MAX];
	} cocci_id/* drivers/gpu/drm/msm/disp/mdp5/mdp5_plane.c 804 */;
	bool cocci_id/* drivers/gpu/drm/msm/disp/mdp5/mdp5_plane.c 725 */;
	int cocci_id/* drivers/gpu/drm/msm/disp/mdp5/mdp5_plane.c 724 */[COMP_MAX];
	uint32_t cocci_id/* drivers/gpu/drm/msm/disp/mdp5/mdp5_plane.c 723 */[2];
	const struct mdp_format *cocci_id/* drivers/gpu/drm/msm/disp/mdp5/mdp5_plane.c 722 */;
	void cocci_id/* drivers/gpu/drm/msm/disp/mdp5/mdp5_plane.c 722 */;
	struct device *cocci_id/* drivers/gpu/drm/msm/disp/mdp5/mdp5_plane.c 651 */;
	struct mdp5_kms *cocci_id/* drivers/gpu/drm/msm/disp/mdp5/mdp5_plane.c 650 */;
	const struct drm_format_info *cocci_id/* drivers/gpu/drm/msm/disp/mdp5/mdp5_plane.c 649 */;
	uint32_t cocci_id/* drivers/gpu/drm/msm/disp/mdp5/mdp5_plane.c 647 */[COMP_MAX];
	struct drm_plane *cocci_id/* drivers/gpu/drm/msm/disp/mdp5/mdp5_plane.c 645 */;
	uint32_t cocci_id/* drivers/gpu/drm/msm/disp/mdp5/mdp5_plane.c 623 */;
	uint32_t *cocci_id/* drivers/gpu/drm/msm/disp/mdp5/mdp5_plane.c 623 */;
	int cocci_id/* drivers/gpu/drm/msm/disp/mdp5/mdp5_plane.c 623 */;
	struct drm_mode_object *cocci_id/* drivers/gpu/drm/msm/disp/mdp5/mdp5_plane.c 59 */;
	struct csc_cfg *cocci_id/* drivers/gpu/drm/msm/disp/mdp5/mdp5_plane.c 569 */;
	enum mdp5_pipe cocci_id/* drivers/gpu/drm/msm/disp/mdp5/mdp5_plane.c 559 */;
	const struct drm_plane_helper_funcs cocci_id/* drivers/gpu/drm/msm/disp/mdp5/mdp5_plane.c 525 */;
	struct mdp5_pipeline *cocci_id/* drivers/gpu/drm/msm/disp/mdp5/mdp5_plane.c 506 */;
	struct mdp5_ctl *cocci_id/* drivers/gpu/drm/msm/disp/mdp5/mdp5_plane.c 505 */;
	struct drm_crtc_state *cocci_id/* drivers/gpu/drm/msm/disp/mdp5/mdp5_plane.c 444 */;
	struct mdp5_plane_state *cocci_id/* drivers/gpu/drm/msm/disp/mdp5/mdp5_plane.c 443 */;
	struct drm_plane_state *cocci_id/* drivers/gpu/drm/msm/disp/mdp5/mdp5_plane.c 441 */;
	struct drm_crtc *cocci_id/* drivers/gpu/drm/msm/disp/mdp5/mdp5_plane.c 408 */;
	struct mdp5_plane *cocci_id/* drivers/gpu/drm/msm/disp/mdp5/mdp5_plane.c 39 */;
	struct drm_rect cocci_id/* drivers/gpu/drm/msm/disp/mdp5/mdp5_plane.c 292 */;
	struct msm_drm_private *cocci_id/* drivers/gpu/drm/msm/disp/mdp5/mdp5_plane.c 28 */;
	struct mdp5_cfg *cocci_id/* drivers/gpu/drm/msm/disp/mdp5/mdp5_plane.c 259 */;
	struct msm_kms *cocci_id/* drivers/gpu/drm/msm/disp/mdp5/mdp5_plane.c 243 */;
	const struct drm_plane_funcs cocci_id/* drivers/gpu/drm/msm/disp/mdp5/mdp5_plane.c 227 */;
	int cocci_id/* drivers/gpu/drm/msm/disp/mdp5/mdp5_plane.c 22 */(struct drm_plane *plane,
									struct drm_crtc *crtc,
									struct drm_framebuffer *fb,
									struct drm_rect *src,
									struct drm_rect *dest);
	struct mdp5_plane cocci_id/* drivers/gpu/drm/msm/disp/mdp5/mdp5_plane.c 20 */;
	struct drm_printer *cocci_id/* drivers/gpu/drm/msm/disp/mdp5/mdp5_plane.c 156 */;
	struct mdp5_plane {
		struct drm_plane base;
		uint32_t nformats;
		uint32_t formats[32];
	} cocci_id/* drivers/gpu/drm/msm/disp/mdp5/mdp5_plane.c 14 */;
	struct drm_device *cocci_id/* drivers/gpu/drm/msm/disp/mdp5/mdp5_plane.c 131 */;
	uint64_t *cocci_id/* drivers/gpu/drm/msm/disp/mdp5/mdp5_plane.c 129 */;
	struct drm_property *cocci_id/* drivers/gpu/drm/msm/disp/mdp5/mdp5_plane.c 129 */;
	const struct drm_plane_state *cocci_id/* drivers/gpu/drm/msm/disp/mdp5/mdp5_plane.c 128 */;
	type cocci_id/* drivers/gpu/drm/msm/disp/mdp5/mdp5_plane.c 1067 */;
	uint64_t cocci_id/* drivers/gpu/drm/msm/disp/mdp5/mdp5_plane.c 101 */;
}
