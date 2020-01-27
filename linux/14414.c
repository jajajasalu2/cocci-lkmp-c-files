cocci_test_suite() {
	const char *const cocci_id/* drivers/media/radio/radio-si476x.c 96 */[];
	enum phase_diversity_modes_idx{SI476X_IDX_PHDIV_DISABLED, SI476X_IDX_PHDIV_PRIMARY_COMBINING, SI476X_IDX_PHDIV_PRIMARY_ANTENNA, SI476X_IDX_PHDIV_SECONDARY_ANTENNA, SI476X_IDX_PHDIV_SECONDARY_COMBINING,} cocci_id/* drivers/media/radio/radio-si476x.c 88 */;
	int cocci_id/* drivers/media/radio/radio-si476x.c 86 */(struct v4l2_ctrl *ctrl);
	const struct v4l2_hw_freq_seek *cocci_id/* drivers/media/radio/radio-si476x.c 736 */;
	u32 cocci_id/* drivers/media/radio/radio-si476x.c 72 */;
	const enum si476x_func cocci_id/* drivers/media/radio/radio-si476x.c 695 */;
	const int cocci_id/* drivers/media/radio/radio-si476x.c 693 */;
	const u32 cocci_id/* drivers/media/radio/radio-si476x.c 691 */;
	const struct v4l2_frequency *cocci_id/* drivers/media/radio/radio-si476x.c 684 */;
	struct si476x_rsq_status_args cocci_id/* drivers/media/radio/radio-si476x.c 662 */;
	struct si476x_rsq_status_report cocci_id/* drivers/media/radio/radio-si476x.c 661 */;
	struct v4l2_frequency *cocci_id/* drivers/media/radio/radio-si476x.c 649 */;
	bool cocci_id/* drivers/media/radio/radio-si476x.c 607 */;
	enum si476x_func cocci_id/* drivers/media/radio/radio-si476x.c 604 */;
	struct si476x_tune_freq_args cocci_id/* drivers/media/radio/radio-si476x.c 517 */;
	const struct v4l2_frequency_band cocci_id/* drivers/media/radio/radio-si476x.c 48 */[];
	const struct si476x_radio_ops cocci_id/* drivers/media/radio/radio-si476x.c 476 */;
	const struct v4l2_tuner *cocci_id/* drivers/media/radio/radio-si476x.c 457 */;
	enum si476x_freq_bands{SI476X_BAND_FM, SI476X_BAND_AM,} cocci_id/* drivers/media/radio/radio-si476x.c 43 */;
	struct v4l2_tuner *cocci_id/* drivers/media/radio/radio-si476x.c 380 */;
	struct v4l2_frequency_band *cocci_id/* drivers/media/radio/radio-si476x.c 343 */;
	struct file *cocci_id/* drivers/media/radio/radio-si476x.c 342 */;
	void *cocci_id/* drivers/media/radio/radio-si476x.c 342 */;
	struct v4l2_capability *cocci_id/* drivers/media/radio/radio-si476x.c 330 */;
	struct v4l2_ctrl_handler *cocci_id/* drivers/media/radio/radio-si476x.c 321 */;
	struct v4l2_device *cocci_id/* drivers/media/radio/radio-si476x.c 315 */;
	struct si476x_radio {
		struct v4l2_device v4l2dev;
		struct video_device videodev;
		struct v4l2_ctrl_handler ctrl_handler;
		struct si476x_core *core;
		const struct si476x_radio_ops *ops;
		struct dentry *debugfs;
		u32 audmode;
	} cocci_id/* drivers/media/radio/radio-si476x.c 301 */;
	struct si476x_radio_ops {
		int (*tune_freq)(struct si476x_core *,
				 struct si476x_tune_freq_args *);
		int (*seek_start)(struct si476x_core *, bool, bool);
		int (*rsq_status)(struct si476x_core *,
				  struct si476x_rsq_status_args *,
				  struct si476x_rsq_status_report *);
		int (*rds_blckcnt)(struct si476x_core *, bool,
				   struct si476x_rds_blockcount_report *);
		int (*phase_diversity)(struct si476x_core *,
				       enum si476x_phase_diversity_mode);
		int (*phase_div_status)(struct si476x_core *);
		int (*acf_status)(struct si476x_core *,
				  struct si476x_acf_status_report *);
		int (*agc_status)(struct si476x_core *,
				  struct si476x_agc_status_report *);
	} cocci_id/* drivers/media/radio/radio-si476x.c 270 */;
	struct si476x_radio cocci_id/* drivers/media/radio/radio-si476x.c 250 */;
	struct platform_driver cocci_id/* drivers/media/radio/radio-si476x.c 1563 */;
	struct v4l2_ctrl_config cocci_id/* drivers/media/radio/radio-si476x.c 150 */[];
	struct video_device cocci_id/* drivers/media/radio/radio-si476x.c 1445 */;
	atomic_t cocci_id/* drivers/media/radio/radio-si476x.c 1428 */;
	struct platform_device *cocci_id/* drivers/media/radio/radio-si476x.c 1422 */;
	enum si476x_ctrl_idx{SI476X_IDX_RSSI_THRESHOLD, SI476X_IDX_SNR_THRESHOLD, SI476X_IDX_MAX_TUNE_ERROR, SI476X_IDX_HARMONICS_COUNT, SI476X_IDX_DIVERSITY_MODE, SI476X_IDX_INTERCHIP_LINK,} cocci_id/* drivers/media/radio/radio-si476x.c 142 */;
	struct v4l2_ctrl *cocci_id/* drivers/media/radio/radio-si476x.c 1408 */;
	enum si476x_ctrl_idx cocci_id/* drivers/media/radio/radio-si476x.c 1405 */;
	struct si476x_radio *cocci_id/* drivers/media/radio/radio-si476x.c 1404 */;
	int cocci_id/* drivers/media/radio/radio-si476x.c 1404 */;
	const struct v4l2_ctrl_ops cocci_id/* drivers/media/radio/radio-si476x.c 136 */;
	struct dentry *cocci_id/* drivers/media/radio/radio-si476x.c 1349 */;
	struct si476x_agc_status_report cocci_id/* drivers/media/radio/radio-si476x.c 1254 */;
	const int cocci_id/* drivers/media/radio/radio-si476x.c 125 */[];
	enum phase_diversity_modes_idx cocci_id/* drivers/media/radio/radio-si476x.c 123 */;
	struct si476x_rds_blockcount_report cocci_id/* drivers/media/radio/radio-si476x.c 1225 */;
	enum si476x_phase_diversity_mode cocci_id/* drivers/media/radio/radio-si476x.c 122 */;
	const struct file_operations cocci_id/* drivers/media/radio/radio-si476x.c 1213 */;
	struct si476x_acf_status_report cocci_id/* drivers/media/radio/radio-si476x.c 1197 */;
	const struct video_device cocci_id/* drivers/media/radio/radio-si476x.c 1183 */;
	const struct v4l2_ioctl_ops cocci_id/* drivers/media/radio/radio-si476x.c 1163 */;
	const struct v4l2_file_operations cocci_id/* drivers/media/radio/radio-si476x.c 1153 */;
	struct poll_table_struct *cocci_id/* drivers/media/radio/radio-si476x.c 1133 */;
	__poll_t cocci_id/* drivers/media/radio/radio-si476x.c 1132 */;
	unsigned int cocci_id/* drivers/media/radio/radio-si476x.c 1098 */;
	loff_t *cocci_id/* drivers/media/radio/radio-si476x.c 1094 */;
	size_t cocci_id/* drivers/media/radio/radio-si476x.c 1094 */;
	char __user *cocci_id/* drivers/media/radio/radio-si476x.c 1093 */;
	ssize_t cocci_id/* drivers/media/radio/radio-si476x.c 1093 */;
	const struct v4l2_dbg_register *cocci_id/* drivers/media/radio/radio-si476x.c 1019 */;
	struct v4l2_dbg_register *cocci_id/* drivers/media/radio/radio-si476x.c 1003 */;
}
