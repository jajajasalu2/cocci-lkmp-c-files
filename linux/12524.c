cocci_test_suite() {
	struct platform_driver cocci_id/* drivers/gpu/drm/sti/sti_hda.c 810 */;
	const struct of_device_id cocci_id/* drivers/gpu/drm/sti/sti_hda.c 803 */[];
	struct resource *cocci_id/* drivers/gpu/drm/sti/sti_hda.c 746 */;
	struct platform_device *cocci_id/* drivers/gpu/drm/sti/sti_hda.c 742 */;
	const struct component_ops cocci_id/* drivers/gpu/drm/sti/sti_hda.c 737 */;
	struct drm_bridge *cocci_id/* drivers/gpu/drm/sti/sti_hda.c 682 */;
	struct drm_connector *cocci_id/* drivers/gpu/drm/sti/sti_hda.c 681 */;
	struct sti_hda_connector *cocci_id/* drivers/gpu/drm/sti/sti_hda.c 680 */;
	struct drm_encoder *cocci_id/* drivers/gpu/drm/sti/sti_hda.c 679 */;
	struct drm_device *cocci_id/* drivers/gpu/drm/sti/sti_hda.c 678 */;
	struct device *cocci_id/* drivers/gpu/drm/sti/sti_hda.c 675 */;
	const struct drm_connector_funcs cocci_id/* drivers/gpu/drm/sti/sti_hda.c 654 */;
	const struct drm_connector_helper_funcs cocci_id/* drivers/gpu/drm/sti/sti_hda.c 634 */;
	struct drm_display_mode *cocci_id/* drivers/gpu/drm/sti/sti_hda.c 584 */;
	const struct drm_bridge_funcs cocci_id/* drivers/gpu/drm/sti/sti_hda.c 565 */;
	const struct drm_display_mode *cocci_id/* drivers/gpu/drm/sti/sti_hda.c 516 */;
	u32 *cocci_id/* drivers/gpu/drm/sti/sti_hda.c 389 */;
	struct drm_minor *cocci_id/* drivers/gpu/drm/sti/sti_hda.c 370 */;
	struct drm_info_list cocci_id/* drivers/gpu/drm/sti/sti_hda.c 366 */[];
	struct sti_hda *cocci_id/* drivers/gpu/drm/sti/sti_hda.c 348 */;
	struct drm_info_node *cocci_id/* drivers/gpu/drm/sti/sti_hda.c 347 */;
	void *cocci_id/* drivers/gpu/drm/sti/sti_hda.c 345 */;
	u32 cocci_id/* drivers/gpu/drm/sti/sti_hda.c 338 */;
	unsigned int cocci_id/* drivers/gpu/drm/sti/sti_hda.c 326 */;
	struct seq_file *cocci_id/* drivers/gpu/drm/sti/sti_hda.c 324 */;
	void __iomem *cocci_id/* drivers/gpu/drm/sti/sti_hda.c 324 */;
	void cocci_id/* drivers/gpu/drm/sti/sti_hda.c 324 */;
	int cocci_id/* drivers/gpu/drm/sti/sti_hda.c 318 */;
	bool cocci_id/* drivers/gpu/drm/sti/sti_hda.c 300 */;
	struct drm_display_mode cocci_id/* drivers/gpu/drm/sti/sti_hda.c 282 */;
	int *cocci_id/* drivers/gpu/drm/sti/sti_hda.c 282 */;
	struct sti_hda_connector cocci_id/* drivers/gpu/drm/sti/sti_hda.c 262 */;
	struct sti_hda_connector {
		struct drm_connector drm_connector;
		struct drm_encoder *encoder;
		struct sti_hda *hda;
	} cocci_id/* drivers/gpu/drm/sti/sti_hda.c 255 */;
	struct sti_hda {
		struct device dev;
		struct drm_device *drm_dev;
		struct drm_display_mode mode;
		void __iomem *regs;
		void __iomem *video_dacs_ctrl;
		struct clk *clk_pix;
		struct clk *clk_hddac;
		bool enabled;
	} cocci_id/* drivers/gpu/drm/sti/sti_hda.c 244 */;
	const struct sti_hda_video_config cocci_id/* drivers/gpu/drm/sti/sti_hda.c 181 */[];
	struct sti_hda_video_config {
		struct drm_display_mode mode;
		u32 *awg_instr;
		int nb_instr;
		enum sti_hda_vid_cat vid_cat;
	} cocci_id/* drivers/gpu/drm/sti/sti_hda.c 171 */;
	enum sti_hda_vid_cat{VID_SD, VID_ED, VID_HD_74M, VID_HD_148M,} cocci_id/* drivers/gpu/drm/sti/sti_hda.c 164 */;
	u32 cocci_id/* drivers/gpu/drm/sti/sti_hda.c 144 */[];
}
