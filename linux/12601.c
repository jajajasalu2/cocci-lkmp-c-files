cocci_test_suite() {
	enum dpu_enc_rc_events{DPU_ENC_RC_EVENT_KICKOFF=1, DPU_ENC_RC_EVENT_FRAME_DONE, DPU_ENC_RC_EVENT_PRE_STOP, DPU_ENC_RC_EVENT_STOP, DPU_ENC_RC_EVENT_ENTER_IDLE,} cocci_id/* drivers/gpu/drm/msm/disp/dpu1/dpu_encoder.c 97 */;
	struct dpu_hw_mixer *cocci_id/* drivers/gpu/drm/msm/disp/dpu1/dpu_encoder.c 952 */[MAX_CHANNELS_PER_ENC];
	struct dpu_hw_ctl *cocci_id/* drivers/gpu/drm/msm/disp/dpu1/dpu_encoder.c 951 */[MAX_CHANNELS_PER_ENC];
	struct dpu_rm_hw_iter cocci_id/* drivers/gpu/drm/msm/disp/dpu1/dpu_encoder.c 949 */;
	struct dpu_crtc_state *cocci_id/* drivers/gpu/drm/msm/disp/dpu1/dpu_encoder.c 948 */;
	struct list_head *cocci_id/* drivers/gpu/drm/msm/disp/dpu1/dpu_encoder.c 945 */;
	struct dpu_kms *cocci_id/* drivers/gpu/drm/msm/disp/dpu1/dpu_encoder.c 695 */;
	struct msm_drm_private *cocci_id/* drivers/gpu/drm/msm/disp/dpu1/dpu_encoder.c 694 */;
	struct dpu_encoder_phys *cocci_id/* drivers/gpu/drm/msm/disp/dpu1/dpu_encoder.c 683 */;
	bool cocci_id/* drivers/gpu/drm/msm/disp/dpu1/dpu_encoder.c 669 */;
	struct dpu_hw_mdp *cocci_id/* drivers/gpu/drm/msm/disp/dpu1/dpu_encoder.c 628 */;
	struct dpu_vsync_source_cfg cocci_id/* drivers/gpu/drm/msm/disp/dpu1/dpu_encoder.c 625 */;
	struct msm_display_info *cocci_id/* drivers/gpu/drm/msm/disp/dpu1/dpu_encoder.c 623 */;
	const struct drm_display_mode *cocci_id/* drivers/gpu/drm/msm/disp/dpu1/dpu_encoder.c 552 */;
	struct drm_connector_state *cocci_id/* drivers/gpu/drm/msm/disp/dpu1/dpu_encoder.c 547 */;
	struct drm_crtc_state *cocci_id/* drivers/gpu/drm/msm/disp/dpu1/dpu_encoder.c 546 */;
	struct msm_display_topology cocci_id/* drivers/gpu/drm/msm/disp/dpu1/dpu_encoder.c 525 */;
	struct drm_display_mode *cocci_id/* drivers/gpu/drm/msm/disp/dpu1/dpu_encoder.c 508 */;
	struct drm_connector *cocci_id/* drivers/gpu/drm/msm/disp/dpu1/dpu_encoder.c 507 */;
	void cocci_id/* drivers/gpu/drm/msm/disp/dpu1/dpu_encoder.c 507 */;
	struct split_pipe_cfg cocci_id/* drivers/gpu/drm/msm/disp/dpu1/dpu_encoder.c 463 */;
	struct dpu_encoder_hw_resources *cocci_id/* drivers/gpu/drm/msm/disp/dpu1/dpu_encoder.c 404 */;
	struct dpu_encoder_irq *cocci_id/* drivers/gpu/drm/msm/disp/dpu1/dpu_encoder.c 308 */;
	enum dpu_intr_idx cocci_id/* drivers/gpu/drm/msm/disp/dpu1/dpu_encoder.c 306 */;
	enum dpu_intf_mode cocci_id/* drivers/gpu/drm/msm/disp/dpu1/dpu_encoder.c 2274 */;
	int cocci_id/* drivers/gpu/drm/msm/disp/dpu1/dpu_encoder.c 225 */(int32_t drm_id,
									  int32_t hw_id,
									  struct dpu_encoder_wait_info *info);
	int (*cocci_id/* drivers/gpu/drm/msm/disp/dpu1/dpu_encoder.c 2230 */)(struct dpu_encoder_phys *phys_enc);
	enum msm_event_wait cocci_id/* drivers/gpu/drm/msm/disp/dpu1/dpu_encoder.c 2228 */;
	struct drm_device *cocci_id/* drivers/gpu/drm/msm/disp/dpu1/dpu_encoder.c 2202 */;
	const struct drm_encoder_funcs cocci_id/* drivers/gpu/drm/msm/disp/dpu1/dpu_encoder.c 2146 */;
	const struct drm_encoder_helper_funcs cocci_id/* drivers/gpu/drm/msm/disp/dpu1/dpu_encoder.c 2136 */;
	struct timer_list *cocci_id/* drivers/gpu/drm/msm/disp/dpu1/dpu_encoder.c 2108 */;
	struct dpu_enc_phys_init_params cocci_id/* drivers/gpu/drm/msm/disp/dpu1/dpu_encoder.c 2021 */;
	const struct dpu_encoder_virt_ops cocci_id/* drivers/gpu/drm/msm/disp/dpu1/dpu_encoder.c 2008 */;
	struct dpu_enc_phys_init_params *cocci_id/* drivers/gpu/drm/msm/disp/dpu1/dpu_encoder.c 1957 */;
	char cocci_id/* drivers/gpu/drm/msm/disp/dpu1/dpu_encoder.c 1909 */[DPU_NAME_SIZE];
	const struct file_operations cocci_id/* drivers/gpu/drm/msm/disp/dpu1/dpu_encoder.c 1902 */;
	struct drm_encoder *cocci_id/* drivers/gpu/drm/msm/disp/dpu1/dpu_encoder.c 1897 */;
	struct file *cocci_id/* drivers/gpu/drm/msm/disp/dpu1/dpu_encoder.c 1892 */;
	struct inode *cocci_id/* drivers/gpu/drm/msm/disp/dpu1/dpu_encoder.c 1891 */;
	int cocci_id/* drivers/gpu/drm/msm/disp/dpu1/dpu_encoder.c 1891 */;
	struct seq_file *cocci_id/* drivers/gpu/drm/msm/disp/dpu1/dpu_encoder.c 1857 */;
	void *cocci_id/* drivers/gpu/drm/msm/disp/dpu1/dpu_encoder.c 1857 */;
	ktime_t cocci_id/* drivers/gpu/drm/msm/disp/dpu1/dpu_encoder.c 1800 */;
	struct kthread_work *cocci_id/* drivers/gpu/drm/msm/disp/dpu1/dpu_encoder.c 1742 */;
	struct msm_drm_thread *cocci_id/* drivers/gpu/drm/msm/disp/dpu1/dpu_encoder.c 1719 */;
	struct dpu_encoder_virt {
		struct drm_encoder base;
		spinlock_t enc_spinlock;
		uint32_t bus_scaling_client;
		bool enabled;
		unsigned int num_phys_encs;
		struct dpu_encoder_phys *phys_encs[MAX_PHYS_ENCODERS_PER_VIRTUAL];
		struct dpu_encoder_phys *cur_master;
		struct dpu_encoder_phys *cur_slave;
		struct dpu_hw_pingpong *hw_pp[MAX_CHANNELS_PER_ENC];
		bool intfs_swapped;
		struct drm_crtc *crtc;
		struct dentry *debugfs_root;
		struct mutex enc_lock;
	DECLARE_BITMAP(frame_busy_mask,MAX_PHYS_ENCODERS_PER_VIRTUAL)
		;
		void (*crtc_frame_event_cb)(void *, u32 event);
		void *crtc_frame_event_cb_data;
		atomic_t frame_done_timeout_ms;
		struct timer_list frame_done_timer;
		struct timer_list vsync_event_timer;
		struct msm_display_info disp_info;
		bool idle_pc_supported;
		struct mutex rc_lock;
		enum dpu_enc_rc_states rc_state;
		struct delayed_work delayed_off_work;
		struct kthread_work vsync_event_work;
		struct msm_display_topology topology;
		bool mode_set_complete;
		u32 idle_timeout;
	} cocci_id/* drivers/gpu/drm/msm/disp/dpu1/dpu_encoder.c 170 */;
	ktime_t *cocci_id/* drivers/gpu/drm/msm/disp/dpu1/dpu_encoder.c 1667 */;
	u64 cocci_id/* drivers/gpu/drm/msm/disp/dpu1/dpu_encoder.c 1623 */;
	u32 cocci_id/* drivers/gpu/drm/msm/disp/dpu1/dpu_encoder.c 1620 */;
	struct dpu_encoder_virt *cocci_id/* drivers/gpu/drm/msm/disp/dpu1/dpu_encoder.c 1620 */;
	unsigned long cocci_id/* drivers/gpu/drm/msm/disp/dpu1/dpu_encoder.c 1542 */;
	uint32_t cocci_id/* drivers/gpu/drm/msm/disp/dpu1/dpu_encoder.c 1541 */;
	struct dpu_hw_ctl *cocci_id/* drivers/gpu/drm/msm/disp/dpu1/dpu_encoder.c 1540 */;
	s64 cocci_id/* drivers/gpu/drm/msm/disp/dpu1/dpu_encoder.c 1484 */;
	struct dpu_encoder_wait_info *cocci_id/* drivers/gpu/drm/msm/disp/dpu1/dpu_encoder.c 1481 */;
	int32_t cocci_id/* drivers/gpu/drm/msm/disp/dpu1/dpu_encoder.c 1479 */;
	struct dpu_encoder_virt cocci_id/* drivers/gpu/drm/msm/disp/dpu1/dpu_encoder.c 1389 */;
	struct work_struct *cocci_id/* drivers/gpu/drm/msm/disp/dpu1/dpu_encoder.c 1386 */;
	unsigned int cocci_id/* drivers/gpu/drm/msm/disp/dpu1/dpu_encoder.c 1342 */;
	void (*cocci_id/* drivers/gpu/drm/msm/disp/dpu1/dpu_encoder.c 1316 */)(void *,
									       u32 event);
	struct drm_crtc *cocci_id/* drivers/gpu/drm/msm/disp/dpu1/dpu_encoder.c 1279 */;
	enum dpu_intf_type cocci_id/* drivers/gpu/drm/msm/disp/dpu1/dpu_encoder.c 1231 */;
	enum dpu_intf cocci_id/* drivers/gpu/drm/msm/disp/dpu1/dpu_encoder.c 1230 */;
	struct dpu_mdss_cfg *cocci_id/* drivers/gpu/drm/msm/disp/dpu1/dpu_encoder.c 1230 */;
	enum dpu_enc_rc_states{DPU_ENC_RC_STATE_OFF, DPU_ENC_RC_STATE_PRE_OFF, DPU_ENC_RC_STATE_ON, DPU_ENC_RC_STATE_IDLE,} cocci_id/* drivers/gpu/drm/msm/disp/dpu1/dpu_encoder.c 113 */;
	struct dpu_hw_intf *cocci_id/* drivers/gpu/drm/msm/disp/dpu1/dpu_encoder.c 1054 */;
	struct dpu_hw_mixer *cocci_id/* drivers/gpu/drm/msm/disp/dpu1/dpu_encoder.c 1017 */;
	struct dpu_hw_pingpong *cocci_id/* drivers/gpu/drm/msm/disp/dpu1/dpu_encoder.c 1002 */;
}
