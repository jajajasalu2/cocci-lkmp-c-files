cocci_test_suite() {
	struct msm_kms *cocci_id/* drivers/gpu/drm/msm/disp/mdp4/mdp4_plane.c 97 */;
	struct mdp4_plane *cocci_id/* drivers/gpu/drm/msm/disp/mdp4/mdp4_plane.c 95 */;
	const struct drm_plane_funcs cocci_id/* drivers/gpu/drm/msm/disp/mdp4/mdp4_plane.c 82 */;
	uint64_t cocci_id/* drivers/gpu/drm/msm/disp/mdp4/mdp4_plane.c 76 */;
	struct drm_property *cocci_id/* drivers/gpu/drm/msm/disp/mdp4/mdp4_plane.c 76 */;
	struct drm_mode_object *cocci_id/* drivers/gpu/drm/msm/disp/mdp4/mdp4_plane.c 70 */;
	struct msm_drm_private *cocci_id/* drivers/gpu/drm/msm/disp/mdp4/mdp4_plane.c 55 */;
	struct mdp4_kms *cocci_id/* drivers/gpu/drm/msm/disp/mdp4/mdp4_plane.c 53 */;
	struct drm_plane *cocci_id/* drivers/gpu/drm/msm/disp/mdp4/mdp4_plane.c 53 */;
	int cocci_id/* drivers/gpu/drm/msm/disp/mdp4/mdp4_plane.c 46 */(struct drm_plane *plane,
									struct drm_crtc *crtc,
									struct drm_framebuffer *fb,
									int crtc_x,
									int crtc_y,
									unsigned int crtc_w,
									unsigned int crtc_h,
									uint32_t src_x,
									uint32_t src_y,
									uint32_t src_w,
									uint32_t src_h);
	void cocci_id/* drivers/gpu/drm/msm/disp/mdp4/mdp4_plane.c 44 */(struct drm_plane *plane,
									 struct drm_framebuffer *fb);
	enum drm_plane_type cocci_id/* drivers/gpu/drm/msm/disp/mdp4/mdp4_plane.c 357 */;
	enum mdp4_pipe cocci_id/* drivers/gpu/drm/msm/disp/mdp4/mdp4_plane.c 352 */;
	struct drm_device *cocci_id/* drivers/gpu/drm/msm/disp/mdp4/mdp4_plane.c 351 */;
	const char *cocci_id/* drivers/gpu/drm/msm/disp/mdp4/mdp4_plane.c 338 */[];
	bool cocci_id/* drivers/gpu/drm/msm/disp/mdp4/mdp4_plane.c 33 */;
	struct csc_cfg *cocci_id/* drivers/gpu/drm/msm/disp/mdp4/mdp4_plane.c 319 */;
	enum mdp4_frame_format cocci_id/* drivers/gpu/drm/msm/disp/mdp4/mdp4_plane.c 31 */;
	struct drm_framebuffer *cocci_id/* drivers/gpu/drm/msm/disp/mdp4/mdp4_plane.c 31 */;
	struct mdp4_plane cocci_id/* drivers/gpu/drm/msm/disp/mdp4/mdp4_plane.c 27 */;
	const struct mdp_format *cocci_id/* drivers/gpu/drm/msm/disp/mdp4/mdp4_plane.c 203 */;
	uint32_t cocci_id/* drivers/gpu/drm/msm/disp/mdp4/mdp4_plane.c 196 */;
	unsigned int cocci_id/* drivers/gpu/drm/msm/disp/mdp4/mdp4_plane.c 195 */;
	struct drm_crtc *cocci_id/* drivers/gpu/drm/msm/disp/mdp4/mdp4_plane.c 193 */;
	struct mdp4_plane {
		struct drm_plane base;
		const char *name;
		enum mdp4_pipe pipe;
		uint32_t caps;
		uint32_t nformats;
		uint32_t formats[32];
		bool enabled;
	} cocci_id/* drivers/gpu/drm/msm/disp/mdp4/mdp4_plane.c 15 */;
	const struct drm_plane_helper_funcs cocci_id/* drivers/gpu/drm/msm/disp/mdp4/mdp4_plane.c 130 */;
	void cocci_id/* drivers/gpu/drm/msm/disp/mdp4/mdp4_plane.c 114 */;
	struct drm_plane_state *cocci_id/* drivers/gpu/drm/msm/disp/mdp4/mdp4_plane.c 109 */;
	int cocci_id/* drivers/gpu/drm/msm/disp/mdp4/mdp4_plane.c 108 */;
}
