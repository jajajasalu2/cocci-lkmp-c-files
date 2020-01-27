cocci_test_suite() {
	struct drm_file *cocci_id/* drivers/gpu/drm/msm/disp/mdp4/mdp4_crtc.c 97 */;
	struct msm_drm_private *cocci_id/* drivers/gpu/drm/msm/disp/mdp4/mdp4_crtc.c 63 */;
	enum mdp4_dma cocci_id/* drivers/gpu/drm/msm/disp/mdp4/mdp4_crtc.c 619 */;
	const char *cocci_id/* drivers/gpu/drm/msm/disp/mdp4/mdp4_crtc.c 612 */[];
	enum mdp4_intf cocci_id/* drivers/gpu/drm/msm/disp/mdp4/mdp4_crtc.c 563 */;
	struct mdp4_crtc cocci_id/* drivers/gpu/drm/msm/disp/mdp4/mdp4_crtc.c 518 */;
	struct mdp_irq *cocci_id/* drivers/gpu/drm/msm/disp/mdp4/mdp4_crtc.c 516 */;
	unsigned cocci_id/* drivers/gpu/drm/msm/disp/mdp4/mdp4_crtc.c 500 */;
	const struct drm_crtc_helper_funcs cocci_id/* drivers/gpu/drm/msm/disp/mdp4/mdp4_crtc.c 486 */;
	const struct drm_crtc_funcs cocci_id/* drivers/gpu/drm/msm/disp/mdp4/mdp4_crtc.c 475 */;
	uint64_t cocci_id/* drivers/gpu/drm/msm/disp/mdp4/mdp4_crtc.c 412 */;
	struct drm_gem_object *cocci_id/* drivers/gpu/drm/msm/disp/mdp4/mdp4_crtc.c 410 */;
	struct msm_kms *cocci_id/* drivers/gpu/drm/msm/disp/mdp4/mdp4_crtc.c 408 */;
	struct drm_crtc_state *cocci_id/* drivers/gpu/drm/msm/disp/mdp4/mdp4_crtc.c 319 */;
	struct drm_display_mode *cocci_id/* drivers/gpu/drm/msm/disp/mdp4/mdp4_crtc.c 230 */;
	uint32_t cocci_id/* drivers/gpu/drm/msm/disp/mdp4/mdp4_crtc.c 200 */;
	const struct mdp_format *cocci_id/* drivers/gpu/drm/msm/disp/mdp4/mdp4_crtc.c 193 */;
	enum mdp4_pipe cocci_id/* drivers/gpu/drm/msm/disp/mdp4/mdp4_crtc.c 190 */;
	bool cocci_id/* drivers/gpu/drm/msm/disp/mdp4/mdp4_crtc.c 182 */[4];
	int cocci_id/* drivers/gpu/drm/msm/disp/mdp4/mdp4_crtc.c 181 */;
	struct drm_plane *cocci_id/* drivers/gpu/drm/msm/disp/mdp4/mdp4_crtc.c 180 */;
	struct mdp4_kms *cocci_id/* drivers/gpu/drm/msm/disp/mdp4/mdp4_crtc.c 179 */;
	struct mdp4_crtc *cocci_id/* drivers/gpu/drm/msm/disp/mdp4/mdp4_crtc.c 178 */;
	struct drm_crtc *cocci_id/* drivers/gpu/drm/msm/disp/mdp4/mdp4_crtc.c 176 */;
	void cocci_id/* drivers/gpu/drm/msm/disp/mdp4/mdp4_crtc.c 176 */;
	const enum mdp_mixer_stage_id cocci_id/* drivers/gpu/drm/msm/disp/mdp4/mdp4_crtc.c 157 */[];
	struct drm_mode_config *cocci_id/* drivers/gpu/drm/msm/disp/mdp4/mdp4_crtc.c 154 */;
	struct mdp4_crtc {
		struct drm_crtc base;
		char name[8];
		int id;
		int ovlp;
		enum mdp4_dma dma;
		bool enabled;
		int mixer;
		struct {
			spinlock_t lock;
			bool stale;
			uint32_t width,height;
			uint32_t x,y;
			uint32_t next_iova;
			struct drm_gem_object *next_bo;
			struct drm_gem_object *scanout_bo;
		} cursor;
		struct drm_pending_vblank_event *event;
		u32 flushed_mask;
#define PENDING_CURSOR 0x1
#define PENDING_FLIP 0x2
		atomic_t pending;
		struct drm_flip_work unref_cursor_work;
		struct mdp_irq vblank;
		struct mdp_irq err;
	} cocci_id/* drivers/gpu/drm/msm/disp/mdp4/mdp4_crtc.c 15 */;
	const int cocci_id/* drivers/gpu/drm/msm/disp/mdp4/mdp4_crtc.c 136 */[];
	struct drm_flip_work *cocci_id/* drivers/gpu/drm/msm/disp/mdp4/mdp4_crtc.c 114 */;
	void *cocci_id/* drivers/gpu/drm/msm/disp/mdp4/mdp4_crtc.c 114 */;
	unsigned long cocci_id/* drivers/gpu/drm/msm/disp/mdp4/mdp4_crtc.c 102 */;
	struct drm_pending_vblank_event *cocci_id/* drivers/gpu/drm/msm/disp/mdp4/mdp4_crtc.c 101 */;
	struct drm_device *cocci_id/* drivers/gpu/drm/msm/disp/mdp4/mdp4_crtc.c 100 */;
}
