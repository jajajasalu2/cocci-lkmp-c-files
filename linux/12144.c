cocci_test_suite() {
	struct drm_gem_object *cocci_id/* drivers/gpu/drm/nouveau/dispnv04/crtc.c 990 */;
	struct nouveau_bo *cocci_id/* drivers/gpu/drm/nouveau/dispnv04/crtc.c 989 */;
	struct nouveau_drm *cocci_id/* drivers/gpu/drm/nouveau/dispnv04/crtc.c 986 */;
	uint32_t cocci_id/* drivers/gpu/drm/nouveau/dispnv04/crtc.c 984 */;
	struct drm_file *cocci_id/* drivers/gpu/drm/nouveau/dispnv04/crtc.c 983 */;
	enum mode_set_atomic cocci_id/* drivers/gpu/drm/nouveau/dispnv04/crtc.c 909 */;
	struct nouveau_framebuffer *cocci_id/* drivers/gpu/drm/nouveau/dispnv04/crtc.c 826 */;
	bool cocci_id/* drivers/gpu/drm/nouveau/dispnv04/crtc.c 819 */;
	struct drm_framebuffer *cocci_id/* drivers/gpu/drm/nouveau/dispnv04/crtc.c 818 */;
	struct rgb *cocci_id/* drivers/gpu/drm/nouveau/dispnv04/crtc.c 770 */;
	u16 *cocci_id/* drivers/gpu/drm/nouveau/dispnv04/crtc.c 767 */;
	struct rgb {
		uint8_t r,g,b;
	}__attribute__((packed)) *cocci_id/* drivers/gpu/drm/nouveau/dispnv04/crtc.c 766 */;
	uint8_t cocci_id/* drivers/gpu/drm/nouveau/dispnv04/crtc.c 731 */;
	const struct drm_crtc_helper_funcs *cocci_id/* drivers/gpu/drm/nouveau/dispnv04/crtc.c 722 */;
	struct nv04_crtc_reg *cocci_id/* drivers/gpu/drm/nouveau/dispnv04/crtc.c 52 */;
	struct drm_crtc *cocci_id/* drivers/gpu/drm/nouveau/dispnv04/crtc.c 52 */;
	void cocci_id/* drivers/gpu/drm/nouveau/dispnv04/crtc.c 51 */;
	int cocci_id/* drivers/gpu/drm/nouveau/dispnv04/crtc.c 47 */(struct drm_crtc *crtc,
								     int x,
								     int y,
								     struct drm_framebuffer *old_fb);
	struct nouveau_encoder *cocci_id/* drivers/gpu/drm/nouveau/dispnv04/crtc.c 469 */;
	struct drm_encoder *cocci_id/* drivers/gpu/drm/nouveau/dispnv04/crtc.c 464 */;
	const struct drm_framebuffer *cocci_id/* drivers/gpu/drm/nouveau/dispnv04/crtc.c 463 */;
	unsigned char cocci_id/* drivers/gpu/drm/nouveau/dispnv04/crtc.c 175 */;
	struct nouveau_crtc *cocci_id/* drivers/gpu/drm/nouveau/dispnv04/crtc.c 1298 */;
	int cocci_id/* drivers/gpu/drm/nouveau/dispnv04/crtc.c 1273 */;
	struct drm_device *cocci_id/* drivers/gpu/drm/nouveau/dispnv04/crtc.c 1270 */;
	struct drm_plane *cocci_id/* drivers/gpu/drm/nouveau/dispnv04/crtc.c 1269 */;
	const uint32_t cocci_id/* drivers/gpu/drm/nouveau/dispnv04/crtc.c 1263 */[];
	const struct drm_crtc_helper_funcs cocci_id/* drivers/gpu/drm/nouveau/dispnv04/crtc.c 1253 */;
	const struct drm_crtc_funcs cocci_id/* drivers/gpu/drm/nouveau/dispnv04/crtc.c 1244 */;
	struct nvbios_pll cocci_id/* drivers/gpu/drm/nouveau/dispnv04/crtc.c 122 */;
	struct nvkm_pll_vals *cocci_id/* drivers/gpu/drm/nouveau/dispnv04/crtc.c 121 */;
	struct nv04_page_flip_state cocci_id/* drivers/gpu/drm/nouveau/dispnv04/crtc.c 1192 */;
	struct nv04_mode_state *cocci_id/* drivers/gpu/drm/nouveau/dispnv04/crtc.c 119 */;
	struct nvkm_clk *cocci_id/* drivers/gpu/drm/nouveau/dispnv04/crtc.c 117 */;
	struct nvkm_bios *cocci_id/* drivers/gpu/drm/nouveau/dispnv04/crtc.c 116 */;
	void *cocci_id/* drivers/gpu/drm/nouveau/dispnv04/crtc.c 1159 */;
	struct nv04_display *cocci_id/* drivers/gpu/drm/nouveau/dispnv04/crtc.c 1152 */;
	struct nouveau_fence *cocci_id/* drivers/gpu/drm/nouveau/dispnv04/crtc.c 1151 */;
	struct nouveau_cli *cocci_id/* drivers/gpu/drm/nouveau/dispnv04/crtc.c 1150 */;
	struct nouveau_channel *cocci_id/* drivers/gpu/drm/nouveau/dispnv04/crtc.c 1149 */;
	struct nv04_page_flip_state *cocci_id/* drivers/gpu/drm/nouveau/dispnv04/crtc.c 1148 */;
	const int cocci_id/* drivers/gpu/drm/nouveau/dispnv04/crtc.c 1143 */;
	struct drm_modeset_acquire_ctx *cocci_id/* drivers/gpu/drm/nouveau/dispnv04/crtc.c 1141 */;
	u32 cocci_id/* drivers/gpu/drm/nouveau/dispnv04/crtc.c 1140 */;
	struct drm_pending_vblank_event *cocci_id/* drivers/gpu/drm/nouveau/dispnv04/crtc.c 1140 */;
	struct drm_display_mode *cocci_id/* drivers/gpu/drm/nouveau/dispnv04/crtc.c 112 */;
	struct nouveau_fence **cocci_id/* drivers/gpu/drm/nouveau/dispnv04/crtc.c 1099 */;
	struct nvif_notify *cocci_id/* drivers/gpu/drm/nouveau/dispnv04/crtc.c 1077 */;
	unsigned long cocci_id/* drivers/gpu/drm/nouveau/dispnv04/crtc.c 1049 */;
	struct nouveau_fence_chan *cocci_id/* drivers/gpu/drm/nouveau/dispnv04/crtc.c 1045 */;
	struct nv04_page_flip_state {
		struct list_head head;
		struct drm_pending_vblank_event *event;
		struct drm_crtc *crtc;
		int bpp,pitch;
		u64 offset;
	} cocci_id/* drivers/gpu/drm/nouveau/dispnv04/crtc.c 1033 */;
}
