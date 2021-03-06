cocci_test_suite() {
	struct sti_dvo {
		struct device dev;
		struct drm_device *drm_dev;
		struct drm_display_mode mode;
		void __iomem *regs;
		struct clk *clk_pix;
		struct clk *clk;
		struct clk *clk_main_parent;
		struct clk *clk_aux_parent;
		struct device_node *panel_node;
		struct drm_panel *panel;
		struct dvo_config *config;
		bool enabled;
		struct drm_encoder *encoder;
		struct drm_bridge *bridge;
	} cocci_id/* drivers/gpu/drm/sti/sti_dvo.c 85 */;
	struct dvo_config cocci_id/* drivers/gpu/drm/sti/sti_dvo.c 61 */;
	struct platform_driver cocci_id/* drivers/gpu/drm/sti/sti_dvo.c 588 */;
	const struct of_device_id cocci_id/* drivers/gpu/drm/sti/sti_dvo.c 582 */[];
	struct device_node *cocci_id/* drivers/gpu/drm/sti/sti_dvo.c 520 */;
	struct resource *cocci_id/* drivers/gpu/drm/sti/sti_dvo.c 519 */;
	struct platform_device *cocci_id/* drivers/gpu/drm/sti/sti_dvo.c 515 */;
	const struct component_ops cocci_id/* drivers/gpu/drm/sti/sti_dvo.c 510 */;
	struct dvo_config {
		u32 flags;
		u32 lowbyte;
		u32 midbyte;
		u32 highbyte;
		int (*awg_fwgen_fct)(struct awg_code_generation_params *fw_gen_params,
				     struct awg_timing *timing);
	} cocci_id/* drivers/gpu/drm/sti/sti_dvo.c 51 */;
	struct drm_bridge *cocci_id/* drivers/gpu/drm/sti/sti_dvo.c 445 */;
	struct drm_connector *cocci_id/* drivers/gpu/drm/sti/sti_dvo.c 444 */;
	struct sti_dvo_connector *cocci_id/* drivers/gpu/drm/sti/sti_dvo.c 443 */;
	struct drm_encoder *cocci_id/* drivers/gpu/drm/sti/sti_dvo.c 442 */;
	struct drm_device *cocci_id/* drivers/gpu/drm/sti/sti_dvo.c 441 */;
	struct device *cocci_id/* drivers/gpu/drm/sti/sti_dvo.c 438 */;
	const struct drm_connector_funcs cocci_id/* drivers/gpu/drm/sti/sti_dvo.c 416 */;
	bool cocci_id/* drivers/gpu/drm/sti/sti_dvo.c 380 */;
	enum drm_connector_status cocci_id/* drivers/gpu/drm/sti/sti_dvo.c 379 */;
	const struct drm_connector_helper_funcs cocci_id/* drivers/gpu/drm/sti/sti_dvo.c 373 */;
	const struct drm_bridge_funcs cocci_id/* drivers/gpu/drm/sti/sti_dvo.c 327 */;
	struct drm_display_mode cocci_id/* drivers/gpu/drm/sti/sti_dvo.c 291 */;
	struct clk *cocci_id/* drivers/gpu/drm/sti/sti_dvo.c 286 */;
	struct sti_mixer *cocci_id/* drivers/gpu/drm/sti/sti_dvo.c 284 */;
	const struct drm_display_mode *cocci_id/* drivers/gpu/drm/sti/sti_dvo.c 280 */;
	u32 cocci_id/* drivers/gpu/drm/sti/sti_dvo.c 251 */[AWG_MAX_INST];
	u8 cocci_id/* drivers/gpu/drm/sti/sti_dvo.c 250 */;
	u32 cocci_id/* drivers/gpu/drm/sti/sti_dvo.c 238 */;
	struct drm_minor *cocci_id/* drivers/gpu/drm/sti/sti_dvo.c 199 */;
	struct drm_info_list cocci_id/* drivers/gpu/drm/sti/sti_dvo.c 195 */[];
	struct drm_info_node *cocci_id/* drivers/gpu/drm/sti/sti_dvo.c 181 */;
	void *cocci_id/* drivers/gpu/drm/sti/sti_dvo.c 179 */;
	unsigned int cocci_id/* drivers/gpu/drm/sti/sti_dvo.c 168 */;
	struct seq_file *cocci_id/* drivers/gpu/drm/sti/sti_dvo.c 166 */;
	void __iomem *cocci_id/* drivers/gpu/drm/sti/sti_dvo.c 166 */;
	u32 *cocci_id/* drivers/gpu/drm/sti/sti_dvo.c 148 */;
	struct sti_dvo *cocci_id/* drivers/gpu/drm/sti/sti_dvo.c 148 */;
	int cocci_id/* drivers/gpu/drm/sti/sti_dvo.c 148 */;
	void cocci_id/* drivers/gpu/drm/sti/sti_dvo.c 148 */;
	struct awg_timing cocci_id/* drivers/gpu/drm/sti/sti_dvo.c 117 */;
	struct awg_code_generation_params cocci_id/* drivers/gpu/drm/sti/sti_dvo.c 116 */;
	struct dvo_config *cocci_id/* drivers/gpu/drm/sti/sti_dvo.c 115 */;
	struct drm_display_mode *cocci_id/* drivers/gpu/drm/sti/sti_dvo.c 114 */;
	u8 *cocci_id/* drivers/gpu/drm/sti/sti_dvo.c 112 */;
	struct sti_dvo_connector cocci_id/* drivers/gpu/drm/sti/sti_dvo.c 109 */;
	struct sti_dvo_connector {
		struct drm_connector drm_connector;
		struct drm_encoder *encoder;
		struct sti_dvo *dvo;
	} cocci_id/* drivers/gpu/drm/sti/sti_dvo.c 102 */;
}
