cocci_test_suite() {
	struct platform_driver cocci_id/* drivers/gpu/drm/sti/sti_tvout.c 890 */;
	const struct of_device_id cocci_id/* drivers/gpu/drm/sti/sti_tvout.c 884 */[];
	struct resource *cocci_id/* drivers/gpu/drm/sti/sti_tvout.c 844 */;
	struct device_node *cocci_id/* drivers/gpu/drm/sti/sti_tvout.c 842 */;
	struct platform_device *cocci_id/* drivers/gpu/drm/sti/sti_tvout.c 839 */;
	const struct component_ops cocci_id/* drivers/gpu/drm/sti/sti_tvout.c 834 */;
	struct drm_device *cocci_id/* drivers/gpu/drm/sti/sti_tvout.c 817 */;
	struct device *cocci_id/* drivers/gpu/drm/sti/sti_tvout.c 814 */;
	void *cocci_id/* drivers/gpu/drm/sti/sti_tvout.c 814 */;
	int cocci_id/* drivers/gpu/drm/sti/sti_tvout.c 814 */;
	struct sti_tvout_encoder *cocci_id/* drivers/gpu/drm/sti/sti_tvout.c 663 */;
	const struct drm_encoder_helper_funcs cocci_id/* drivers/gpu/drm/sti/sti_tvout.c 652 */;
	struct sti_tvout *cocci_id/* drivers/gpu/drm/sti/sti_tvout.c 646 */;
	struct drm_encoder *cocci_id/* drivers/gpu/drm/sti/sti_tvout.c 644 */;
	void cocci_id/* drivers/gpu/drm/sti/sti_tvout.c 644 */;
	const struct drm_encoder_funcs cocci_id/* drivers/gpu/drm/sti/sti_tvout.c 629 */;
	struct drm_display_mode *cocci_id/* drivers/gpu/drm/sti/sti_tvout.c 590 */;
	unsigned int cocci_id/* drivers/gpu/drm/sti/sti_tvout.c 575 */;
	struct drm_minor *cocci_id/* drivers/gpu/drm/sti/sti_tvout.c 573 */;
	struct drm_info_list cocci_id/* drivers/gpu/drm/sti/sti_tvout.c 569 */[];
	struct drm_crtc *cocci_id/* drivers/gpu/drm/sti/sti_tvout.c 501 */;
	struct drm_info_node *cocci_id/* drivers/gpu/drm/sti/sti_tvout.c 499 */;
	struct seq_file *cocci_id/* drivers/gpu/drm/sti/sti_tvout.c 491 */;
	char *constcocci_id/* drivers/gpu/drm/sti/sti_tvout.c 455 */[];
	u32 cocci_id/* drivers/gpu/drm/sti/sti_tvout.c 300 */;
	bool cocci_id/* drivers/gpu/drm/sti/sti_tvout.c 298 */;
	const u32 *cocci_id/* drivers/gpu/drm/sti/sti_tvout.c 276 */;
	enum sti_tvout_video_out_type cocci_id/* drivers/gpu/drm/sti/sti_tvout.c 222 */;
	const u32 cocci_id/* drivers/gpu/drm/sti/sti_tvout.c 134 */[8];
	struct sti_tvout_encoder cocci_id/* drivers/gpu/drm/sti/sti_tvout.c 129 */;
	struct sti_tvout_encoder {
		struct drm_encoder encoder;
		struct sti_tvout *tvout;
	} cocci_id/* drivers/gpu/drm/sti/sti_tvout.c 123 */;
	struct sti_tvout {
		struct device *dev;
		struct drm_device *drm_dev;
		void __iomem *regs;
		struct reset_control *reset;
		struct drm_encoder *hdmi;
		struct drm_encoder *hda;
		struct drm_encoder *dvo;
		bool debugfs_registered;
	} cocci_id/* drivers/gpu/drm/sti/sti_tvout.c 112 */;
	enum sti_tvout_video_out_type{STI_TVOUT_VIDEO_OUT_RGB, STI_TVOUT_VIDEO_OUT_YUV,} cocci_id/* drivers/gpu/drm/sti/sti_tvout.c 107 */;
}
