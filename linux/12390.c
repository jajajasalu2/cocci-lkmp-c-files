cocci_test_suite() {
	struct drm_mode_fb_cmd2 cocci_id/* drivers/gpu/drm/omapdrm/omap_fbdev.c 99 */;
	union omap_gem_size cocci_id/* drivers/gpu/drm/omapdrm/omap_fbdev.c 97 */;
	struct drm_framebuffer *cocci_id/* drivers/gpu/drm/omapdrm/omap_fbdev.c 96 */;
	struct omap_drm_private *cocci_id/* drivers/gpu/drm/omapdrm/omap_fbdev.c 95 */;
	struct drm_device *cocci_id/* drivers/gpu/drm/omapdrm/omap_fbdev.c 94 */;
	struct omap_fbdev *cocci_id/* drivers/gpu/drm/omapdrm/omap_fbdev.c 93 */;
	struct drm_fb_helper_surface_size *cocci_id/* drivers/gpu/drm/omapdrm/omap_fbdev.c 91 */;
	int cocci_id/* drivers/gpu/drm/omapdrm/omap_fbdev.c 90 */;
	struct fb_ops cocci_id/* drivers/gpu/drm/omapdrm/omap_fbdev.c 73 */;
	struct fb_var_screeninfo *cocci_id/* drivers/gpu/drm/omapdrm/omap_fbdev.c 48 */;
	struct omap_fbdev cocci_id/* drivers/gpu/drm/omapdrm/omap_fbdev.c 39 */;
	struct work_struct *cocci_id/* drivers/gpu/drm/omapdrm/omap_fbdev.c 37 */;
	struct drm_fb_helper *cocci_id/* drivers/gpu/drm/omapdrm/omap_fbdev.c 35 */(struct fb_info *fbi);
	void cocci_id/* drivers/gpu/drm/omapdrm/omap_fbdev.c 269 */;
	struct omap_fbdev {
		struct drm_fb_helper base;
		struct drm_framebuffer *fb;
		struct drm_gem_object *bo;
		bool ywrap_enabled;
		struct work_struct work;
	} cocci_id/* drivers/gpu/drm/omapdrm/omap_fbdev.c 25 */;
	struct fb_info *cocci_id/* drivers/gpu/drm/omapdrm/omap_fbdev.c 215 */;
	struct drm_fb_helper *cocci_id/* drivers/gpu/drm/omapdrm/omap_fbdev.c 215 */;
	const struct drm_fb_helper_funcs cocci_id/* drivers/gpu/drm/omapdrm/omap_fbdev.c 211 */;
	bool cocci_id/* drivers/gpu/drm/omapdrm/omap_fbdev.c 17 */;
	dma_addr_t cocci_id/* drivers/gpu/drm/omapdrm/omap_fbdev.c 100 */;
}
