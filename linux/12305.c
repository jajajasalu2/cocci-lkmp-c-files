cocci_test_suite() {
	u32 cocci_id/* drivers/gpu/drm/shmobile/shmob_drm_plane.c 64 */;
	struct shmob_drm_device *cocci_id/* drivers/gpu/drm/shmobile/shmob_drm_plane.c 63 */;
	struct drm_framebuffer *cocci_id/* drivers/gpu/drm/shmobile/shmob_drm_plane.c 61 */;
	struct shmob_drm_plane *cocci_id/* drivers/gpu/drm/shmobile/shmob_drm_plane.c 60 */;
	void cocci_id/* drivers/gpu/drm/shmobile/shmob_drm_plane.c 60 */;
	unsigned int cocci_id/* drivers/gpu/drm/shmobile/shmob_drm_plane.c 44 */;
	struct drm_gem_cma_object *cocci_id/* drivers/gpu/drm/shmobile/shmob_drm_plane.c 43 */;
	int cocci_id/* drivers/gpu/drm/shmobile/shmob_drm_plane.c 41 */;
	struct shmob_drm_plane cocci_id/* drivers/gpu/drm/shmobile/shmob_drm_plane.c 37 */;
	const uint32_t cocci_id/* drivers/gpu/drm/shmobile/shmob_drm_plane.c 230 */[];
	const struct drm_plane_funcs cocci_id/* drivers/gpu/drm/shmobile/shmob_drm_plane.c 224 */;
	struct drm_plane *cocci_id/* drivers/gpu/drm/shmobile/shmob_drm_plane.c 218 */;
	struct shmob_drm_plane {
		struct drm_plane plane;
		unsigned int index;
		unsigned int alpha;
		const struct shmob_drm_format_info *format;
		unsigned long dma[2];
		unsigned int src_x;
		unsigned int src_y;
		unsigned int crtc_x;
		unsigned int crtc_y;
		unsigned int crtc_w;
		unsigned int crtc_h;
	} cocci_id/* drivers/gpu/drm/shmobile/shmob_drm_plane.c 21 */;
	struct drm_modeset_acquire_ctx *cocci_id/* drivers/gpu/drm/shmobile/shmob_drm_plane.c 207 */;
	const struct shmob_drm_format_info *cocci_id/* drivers/gpu/drm/shmobile/shmob_drm_plane.c 179 */;
	uint32_t cocci_id/* drivers/gpu/drm/shmobile/shmob_drm_plane.c 173 */;
	struct drm_crtc *cocci_id/* drivers/gpu/drm/shmobile/shmob_drm_plane.c 170 */;
}
