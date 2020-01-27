cocci_test_suite() {
	struct tilcdc_crtc *cocci_id/* drivers/gpu/drm/tilcdc/tilcdc_crtc.c 979 */;
	struct drm_pending_vblank_event *cocci_id/* drivers/gpu/drm/tilcdc/tilcdc_crtc.c 897 */;
	ktime_t cocci_id/* drivers/gpu/drm/tilcdc/tilcdc_crtc.c 878 */;
	bool cocci_id/* drivers/gpu/drm/tilcdc/tilcdc_crtc.c 877 */;
	uint32_t cocci_id/* drivers/gpu/drm/tilcdc/tilcdc_crtc.c 870 */;
	irqreturn_t cocci_id/* drivers/gpu/drm/tilcdc/tilcdc_crtc.c 865 */;
	const struct drm_crtc_helper_funcs cocci_id/* drivers/gpu/drm/tilcdc/tilcdc_crtc.c 819 */;
	unsigned int cocci_id/* drivers/gpu/drm/tilcdc/tilcdc_crtc.c 734 */;
	enum drm_mode_status cocci_id/* drivers/gpu/drm/tilcdc/tilcdc_crtc.c 729 */;
	const struct drm_crtc_funcs cocci_id/* drivers/gpu/drm/tilcdc/tilcdc_crtc.c 704 */;
	u64 cocci_id/* drivers/gpu/drm/tilcdc/tilcdc_crtc.c 68 */;
	dma_addr_t cocci_id/* drivers/gpu/drm/tilcdc/tilcdc_crtc.c 67 */;
	struct drm_gem_cma_object *cocci_id/* drivers/gpu/drm/tilcdc/tilcdc_crtc.c 66 */;
	struct drm_crtc_state *cocci_id/* drivers/gpu/drm/tilcdc/tilcdc_crtc.c 651 */;
	int cocci_id/* drivers/gpu/drm/tilcdc/tilcdc_crtc.c 650 */;
	struct drm_display_mode *cocci_id/* drivers/gpu/drm/tilcdc/tilcdc_crtc.c 623 */;
	const struct drm_display_mode *cocci_id/* drivers/gpu/drm/tilcdc/tilcdc_crtc.c 622 */;
	struct drm_framebuffer *cocci_id/* drivers/gpu/drm/tilcdc/tilcdc_crtc.c 62 */;
	s64 cocci_id/* drivers/gpu/drm/tilcdc/tilcdc_crtc.c 600 */;
	struct tilcdc_crtc cocci_id/* drivers/gpu/drm/tilcdc/tilcdc_crtc.c 60 */;
	struct work_struct *cocci_id/* drivers/gpu/drm/tilcdc/tilcdc_crtc.c 550 */;
	unsigned long cocci_id/* drivers/gpu/drm/tilcdc/tilcdc_crtc.c 448 */;
	struct tilcdc_crtc {
		struct drm_crtc base;
		struct drm_plane primary;
		const struct tilcdc_panel_info *info;
		struct drm_pending_vblank_event *event;
		struct mutex enable_lock;
		bool enabled;
		bool shutdown;
		wait_queue_head_t frame_done_wq;
		bool frame_done;
		spinlock_t irq_lock;
		unsigned int lcd_fck_rate;
		ktime_t last_vblank;
		unsigned int hvtotal_us;
		struct drm_framebuffer *next_fb;
		bool simulate_vesa_sync;
		int sync_lost_count;
		bool frame_intact;
		struct work_struct recover_work;
		dma_addr_t palette_dma_handle;
		u16 *palette_base;
		struct completion palette_loaded;
	} cocci_id/* drivers/gpu/drm/tilcdc/tilcdc_crtc.c 29 */;
	const struct tilcdc_panel_info *cocci_id/* drivers/gpu/drm/tilcdc/tilcdc_crtc.c 279 */;
	uint cocci_id/* drivers/gpu/drm/tilcdc/tilcdc_crtc.c 268 */;
	struct tilcdc_drm_private *cocci_id/* drivers/gpu/drm/tilcdc/tilcdc_crtc.c 182 */;
	struct drm_device *cocci_id/* drivers/gpu/drm/tilcdc/tilcdc_crtc.c 181 */;
	struct drm_crtc *cocci_id/* drivers/gpu/drm/tilcdc/tilcdc_crtc.c 179 */;
	void cocci_id/* drivers/gpu/drm/tilcdc/tilcdc_crtc.c 179 */;
	u32 cocci_id/* drivers/gpu/drm/tilcdc/tilcdc_crtc.c 109 */;
}