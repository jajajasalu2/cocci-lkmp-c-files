cocci_test_suite() {
	struct nv50_disp *cocci_id/* drivers/gpu/drm/nouveau/dispnv50/wndw.c 710 */;
	struct {
		s32 oclass;
		int version;
		int (*new)(struct nouveau_drm *, enum drm_plane_type, int,
			   s32, struct nv50_wndw **);
	} cocci_id/* drivers/gpu/drm/nouveau/dispnv50/wndw.c 700 */[];
	struct nv50_wndw **cocci_id/* drivers/gpu/drm/nouveau/dispnv50/wndw.c 698 */;
	enum drm_plane_type cocci_id/* drivers/gpu/drm/nouveau/dispnv50/wndw.c 697 */;
	struct nvif_mmu *cocci_id/* drivers/gpu/drm/nouveau/dispnv50/wndw.c 633 */;
	enum nv50_disp_interlock_type cocci_id/* drivers/gpu/drm/nouveau/dispnv50/wndw.c 629 */;
	const u32 *cocci_id/* drivers/gpu/drm/nouveau/dispnv50/wndw.c 628 */;
	const char *cocci_id/* drivers/gpu/drm/nouveau/dispnv50/wndw.c 627 */;
	const struct nv50_wndw_func *cocci_id/* drivers/gpu/drm/nouveau/dispnv50/wndw.c 626 */;
	struct drm_device *cocci_id/* drivers/gpu/drm/nouveau/dispnv50/wndw.c 626 */;
	struct nvif_notify *cocci_id/* drivers/gpu/drm/nouveau/dispnv50/wndw.c 608 */;
	const struct drm_plane_funcs cocci_id/* drivers/gpu/drm/nouveau/dispnv50/wndw.c 597 */;
	u32 cocci_id/* drivers/gpu/drm/nouveau/dispnv50/wndw.c 56 */;
	const struct drm_plane_helper_funcs cocci_id/* drivers/gpu/drm/nouveau/dispnv50/wndw.c 518 */;
	struct {
		struct nv_dma_v0 base;
		union {
			struct nv50_dma_v0 nv50;
			struct gf100_dma_v0 gf100;
			struct gf119_dma_v0 gf119;
		};
	} cocci_id/* drivers/gpu/drm/nouveau/dispnv50/wndw.c 48 */;
	const u32 cocci_id/* drivers/gpu/drm/nouveau/dispnv50/wndw.c 47 */;
	const u8 cocci_id/* drivers/gpu/drm/nouveau/dispnv50/wndw.c 46 */;
	bool cocci_id/* drivers/gpu/drm/nouveau/dispnv50/wndw.c 397 */;
	struct nv50_head_atom *cocci_id/* drivers/gpu/drm/nouveau/dispnv50/wndw.c 396 */;
	struct nv50_wndw_atom *cocci_id/* drivers/gpu/drm/nouveau/dispnv50/wndw.c 394 */;
	struct nv50_wndw *cocci_id/* drivers/gpu/drm/nouveau/dispnv50/wndw.c 393 */;
	struct nouveau_drm *cocci_id/* drivers/gpu/drm/nouveau/dispnv50/wndw.c 392 */;
	struct drm_plane_state *cocci_id/* drivers/gpu/drm/nouveau/dispnv50/wndw.c 390 */;
	struct drm_plane *cocci_id/* drivers/gpu/drm/nouveau/dispnv50/wndw.c 390 */;
	int cocci_id/* drivers/gpu/drm/nouveau/dispnv50/wndw.c 389 */;
	const struct drm_color_ctm *cocci_id/* drivers/gpu/drm/nouveau/dispnv50/wndw.c 376 */;
	struct drm_property_blob cocci_id/* drivers/gpu/drm/nouveau/dispnv50/wndw.c 355 */;
	struct nv50_wndw_ctxdma *cocci_id/* drivers/gpu/drm/nouveau/dispnv50/wndw.c 34 */;
	struct drm_property_blob *cocci_id/* drivers/gpu/drm/nouveau/dispnv50/wndw.c 327 */;
	void cocci_id/* drivers/gpu/drm/nouveau/dispnv50/wndw.c 321 */;
	struct nouveau_framebuffer *cocci_id/* drivers/gpu/drm/nouveau/dispnv50/wndw.c 237 */;
	union nv50_wndw_atom_mask cocci_id/* drivers/gpu/drm/nouveau/dispnv50/wndw.c 117 */;
	u32 *cocci_id/* drivers/gpu/drm/nouveau/dispnv50/wndw.c 114 */;
}
