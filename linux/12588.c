cocci_test_suite() {
	void cocci_id/* drivers/gpu/drm/msm/disp/mdp5/mdp5_ctl.c 96 */;
	struct mdp5_kms *cocci_id/* drivers/gpu/drm/msm/disp/mdp5/mdp5_ctl.c 94 */;
	u32 cocci_id/* drivers/gpu/drm/msm/disp/mdp5/mdp5_ctl.c 92 */;
	struct mdp5_ctl *cocci_id/* drivers/gpu/drm/msm/disp/mdp5/mdp5_ctl.c 92 */;
	struct msm_drm_private *cocci_id/* drivers/gpu/drm/msm/disp/mdp5/mdp5_ctl.c 77 */;
	const struct mdp5_ctl_block *cocci_id/* drivers/gpu/drm/msm/disp/mdp5/mdp5_ctl.c 687 */;
	unsigned cocci_id/* drivers/gpu/drm/msm/disp/mdp5/mdp5_ctl.c 686 */;
	const struct mdp5_cfg_hw *cocci_id/* drivers/gpu/drm/msm/disp/mdp5/mdp5_ctl.c 684 */;
	struct mdp5_cfg_handler *cocci_id/* drivers/gpu/drm/msm/disp/mdp5/mdp5_ctl.c 681 */;
	void __iomem *cocci_id/* drivers/gpu/drm/msm/disp/mdp5/mdp5_ctl.c 681 */;
	struct drm_device *cocci_id/* drivers/gpu/drm/msm/disp/mdp5/mdp5_ctl.c 680 */;
	const u32 cocci_id/* drivers/gpu/drm/msm/disp/mdp5/mdp5_ctl.c 627 */;
	struct mdp5_ctl_manager {
		struct drm_device *dev;
		u32 nlm;
		u32 nctl;
		u32 flush_hw_mask;
		bool single_flush_supported;
		u32 single_flush_pending_mask;
		spinlock_t pool_lock;
		struct mdp5_ctl ctls[MAX_CTL];
	} cocci_id/* drivers/gpu/drm/msm/disp/mdp5/mdp5_ctl.c 55 */;
	bool cocci_id/* drivers/gpu/drm/msm/disp/mdp5/mdp5_ctl.c 528 */;
	struct mdp5_ctl_manager *cocci_id/* drivers/gpu/drm/msm/disp/mdp5/mdp5_ctl.c 488 */;
	u32 *cocci_id/* drivers/gpu/drm/msm/disp/mdp5/mdp5_ctl.c 485 */;
	struct mdp5_pipeline *cocci_id/* drivers/gpu/drm/msm/disp/mdp5/mdp5_ctl.c 470 */;
	unsigned long cocci_id/* drivers/gpu/drm/msm/disp/mdp5/mdp5_ctl.c 354 */;
	struct mdp5_hw_mixer *cocci_id/* drivers/gpu/drm/msm/disp/mdp5/mdp5_ctl.c 352 */;
	enum mdp5_pipe cocci_id/* drivers/gpu/drm/msm/disp/mdp5/mdp5_ctl.c 348 */[][MAX_PIPE_STAGE];
	int cocci_id/* drivers/gpu/drm/msm/disp/mdp5/mdp5_ctl.c 347 */;
	enum mdp_mixer_stage_id cocci_id/* drivers/gpu/drm/msm/disp/mdp5/mdp5_ctl.c 307 */;
	enum mdp5_pipe cocci_id/* drivers/gpu/drm/msm/disp/mdp5/mdp5_ctl.c 306 */;
	struct mdp5_ctl {
		struct mdp5_ctl_manager *ctlm;
		u32 id;
		u32 status;
		bool encoder_enabled;
		u32 flush_mask;
		spinlock_t hw_lock;
		u32 reg_offset;
		u32 pending_ctl_trigger;
		bool cursor_on;
		bool flush_pending;
		struct mdp5_ctl *pair;
	} cocci_id/* drivers/gpu/drm/msm/disp/mdp5/mdp5_ctl.c 27 */;
	struct mdp5_interface *cocci_id/* drivers/gpu/drm/msm/disp/mdp5/mdp5_ctl.c 228 */;
}
