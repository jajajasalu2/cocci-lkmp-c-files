cocci_test_suite() {
	uint8_t cocci_id/* drivers/gpu/drm/nouveau/dispnv04/overlay.c 92 */;
	const struct drm_framebuffer *cocci_id/* drivers/gpu/drm/nouveau/dispnv04/overlay.c 92 */;
	int cocci_id/* drivers/gpu/drm/nouveau/dispnv04/overlay.c 85 */;
	uint32_t cocci_id/* drivers/gpu/drm/nouveau/dispnv04/overlay.c 60 */[];
	struct nvif_device *cocci_id/* drivers/gpu/drm/nouveau/dispnv04/overlay.c 510 */;
	struct drm_device *cocci_id/* drivers/gpu/drm/nouveau/dispnv04/overlay.c 508 */;
	void cocci_id/* drivers/gpu/drm/nouveau/dispnv04/overlay.c 507 */;
	struct nouveau_drm *cocci_id/* drivers/gpu/drm/nouveau/dispnv04/overlay.c 468 */;
	const struct drm_plane_funcs cocci_id/* drivers/gpu/drm/nouveau/dispnv04/overlay.c 458 */;
	struct nouveau_plane cocci_id/* drivers/gpu/drm/nouveau/dispnv04/overlay.c 444 */;
	struct nouveau_plane *cocci_id/* drivers/gpu/drm/nouveau/dispnv04/overlay.c 443 */;
	struct nvif_object *cocci_id/* drivers/gpu/drm/nouveau/dispnv04/overlay.c 442 */;
	struct drm_modeset_acquire_ctx *cocci_id/* drivers/gpu/drm/nouveau/dispnv04/overlay.c 440 */;
	struct drm_plane *cocci_id/* drivers/gpu/drm/nouveau/dispnv04/overlay.c 439 */;
	struct nouveau_bo *cocci_id/* drivers/gpu/drm/nouveau/dispnv04/overlay.c 372 */;
	struct nouveau_framebuffer *cocci_id/* drivers/gpu/drm/nouveau/dispnv04/overlay.c 371 */;
	struct nouveau_plane {
		struct drm_plane base;
		bool flip;
		struct nouveau_bo *cur;
		struct {
			struct drm_property *colorkey;
			struct drm_property *contrast;
			struct drm_property *brightness;
			struct drm_property *hue;
			struct drm_property *saturation;
		} props;
		int colorkey;
		int contrast;
		int brightness;
		int hue;
		int saturation;
		enum drm_color_encoding color_encoding;
		void (*set_params)(struct nouveau_plane *);
	} cocci_id/* drivers/gpu/drm/nouveau/dispnv04/overlay.c 37 */;
	uint32_t cocci_id/* drivers/gpu/drm/nouveau/dispnv04/overlay.c 364 */;
	unsigned int cocci_id/* drivers/gpu/drm/nouveau/dispnv04/overlay.c 363 */;
	struct drm_framebuffer *cocci_id/* drivers/gpu/drm/nouveau/dispnv04/overlay.c 362 */;
	struct drm_crtc *cocci_id/* drivers/gpu/drm/nouveau/dispnv04/overlay.c 361 */;
	uint64_t cocci_id/* drivers/gpu/drm/nouveau/dispnv04/overlay.c 244 */;
	struct drm_property *cocci_id/* drivers/gpu/drm/nouveau/dispnv04/overlay.c 243 */;
	u32 cocci_id/* drivers/gpu/drm/nouveau/dispnv04/overlay.c 218 */;
	unsigned cocci_id/* drivers/gpu/drm/nouveau/dispnv04/overlay.c 129 */;
	bool cocci_id/* drivers/gpu/drm/nouveau/dispnv04/overlay.c 126 */;
	struct nouveau_crtc *cocci_id/* drivers/gpu/drm/nouveau/dispnv04/overlay.c 124 */;
}
