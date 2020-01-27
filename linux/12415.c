cocci_test_suite() {
	bool cocci_id/* drivers/gpu/drm/omapdrm/omap_fb.c 96 */;
	struct plane *cocci_id/* drivers/gpu/drm/omapdrm/omap_fb.c 86 */;
	struct omap_framebuffer *cocci_id/* drivers/gpu/drm/omapdrm/omap_fb.c 85 */;
	const struct drm_format_info *cocci_id/* drivers/gpu/drm/omapdrm/omap_fb.c 83 */;
	int cocci_id/* drivers/gpu/drm/omapdrm/omap_fb.c 83 */;
	struct drm_framebuffer *cocci_id/* drivers/gpu/drm/omapdrm/omap_fb.c 82 */;
	const struct drm_framebuffer_funcs cocci_id/* drivers/gpu/drm/omapdrm/omap_fb.c 76 */;
	struct drm_crtc *cocci_id/* drivers/gpu/drm/omapdrm/omap_fb.c 64 */;
	struct drm_clip_rect *cocci_id/* drivers/gpu/drm/omapdrm/omap_fb.c 61 */;
	unsigned cocci_id/* drivers/gpu/drm/omapdrm/omap_fb.c 60 */;
	struct omap_framebuffer {
		struct drm_framebuffer base;
		int pin_count;
		const struct drm_format_info *format;
		struct plane planes[2];
		struct mutex lock;
	} cocci_id/* drivers/gpu/drm/omapdrm/omap_fb.c 49 */;
	struct omap_framebuffer cocci_id/* drivers/gpu/drm/omapdrm/omap_fb.c 47 */;
	struct plane {
		dma_addr_t dma_addr;
	} cocci_id/* drivers/gpu/drm/omapdrm/omap_fb.c 43 */;
	struct drm_gem_object **cocci_id/* drivers/gpu/drm/omapdrm/omap_fb.c 335 */;
	struct drm_gem_object *cocci_id/* drivers/gpu/drm/omapdrm/omap_fb.c 309 */[4];
	const struct drm_mode_fb_cmd2 *cocci_id/* drivers/gpu/drm/omapdrm/omap_fb.c 304 */;
	struct drm_file *cocci_id/* drivers/gpu/drm/omapdrm/omap_fb.c 304 */;
	struct drm_device *cocci_id/* drivers/gpu/drm/omapdrm/omap_fb.c 303 */;
	char *cocci_id/* drivers/gpu/drm/omapdrm/omap_fb.c 293 */;
	struct seq_file *cocci_id/* drivers/gpu/drm/omapdrm/omap_fb.c 288 */;
	void cocci_id/* drivers/gpu/drm/omapdrm/omap_fb.c 288 */;
	const u32 cocci_id/* drivers/gpu/drm/omapdrm/omap_fb.c 20 */[];
	struct omap_overlay_info *cocci_id/* drivers/gpu/drm/omapdrm/omap_fb.c 134 */;
	struct drm_plane_state *cocci_id/* drivers/gpu/drm/omapdrm/omap_fb.c 134 */;
	u32 cocci_id/* drivers/gpu/drm/omapdrm/omap_fb.c 102 */;
	unsigned int cocci_id/* drivers/gpu/drm/omapdrm/omap_fb.c 102 */;
}
