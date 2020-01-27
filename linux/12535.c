cocci_test_suite() {
	const struct sti_vtg_regs_offs cocci_id/* drivers/gpu/drm/sti/sti_vtg.c 96 */[VTG_MAX_SYNC_OUTPUT];
	struct sti_vtg_regs_offs {
		u32 h_hd;
		u32 top_v_vd;
		u32 bot_v_vd;
		u32 top_v_hd;
		u32 bot_v_hd;
	} cocci_id/* drivers/gpu/drm/sti/sti_vtg.c 87 */;
	struct platform_driver cocci_id/* drivers/gpu/drm/sti/sti_vtg.c 431 */;
	const struct of_device_id cocci_id/* drivers/gpu/drm/sti/sti_vtg.c 425 */[];
	struct resource *cocci_id/* drivers/gpu/drm/sti/sti_vtg.c 383 */;
	struct device *cocci_id/* drivers/gpu/drm/sti/sti_vtg.c 381 */;
	irqreturn_t cocci_id/* drivers/gpu/drm/sti/sti_vtg.c 365 */;
	void *cocci_id/* drivers/gpu/drm/sti/sti_vtg.c 365 */;
	struct drm_crtc *cocci_id/* drivers/gpu/drm/sti/sti_vtg.c 341 */;
	struct notifier_block *cocci_id/* drivers/gpu/drm/sti/sti_vtg.c 340 */;
	u32 cocci_id/* drivers/gpu/drm/sti/sti_vtg.c 315 */;
	struct drm_display_mode cocci_id/* drivers/gpu/drm/sti/sti_vtg.c 315 */;
	int cocci_id/* drivers/gpu/drm/sti/sti_vtg.c 315 */;
	const struct drm_display_mode *cocci_id/* drivers/gpu/drm/sti/sti_vtg.c 293 */;
	void cocci_id/* drivers/gpu/drm/sti/sti_vtg.c 292 */;
	unsigned int cocci_id/* drivers/gpu/drm/sti/sti_vtg.c 243 */;
	long cocci_id/* drivers/gpu/drm/sti/sti_vtg.c 189 */;
	struct sti_vtg_sync_params *cocci_id/* drivers/gpu/drm/sti/sti_vtg.c 185 */;
	void __iomem *cocci_id/* drivers/gpu/drm/sti/sti_vtg.c 159 */;
	struct platform_device *cocci_id/* drivers/gpu/drm/sti/sti_vtg.c 145 */;
	struct sti_vtg *cocci_id/* drivers/gpu/drm/sti/sti_vtg.c 143 */;
	struct device_node *cocci_id/* drivers/gpu/drm/sti/sti_vtg.c 143 */;
	struct sti_vtg {
		void __iomem *regs;
		struct sti_vtg_sync_params sync_params[VTG_MAX_SYNC_OUTPUT];
		int irq;
		u32 irq_status;
		struct raw_notifier_head notifier_list;
		struct drm_crtc *crtc;
	} cocci_id/* drivers/gpu/drm/sti/sti_vtg.c 134 */;
	struct sti_vtg_sync_params {
		u32 hsync;
		u32 vsync_line_top;
		u32 vsync_line_bot;
		u32 vsync_off_top;
		u32 vsync_off_bot;
	} cocci_id/* drivers/gpu/drm/sti/sti_vtg.c 116 */;
}
