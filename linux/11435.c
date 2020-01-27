cocci_test_suite() {
	struct nv50_disp *cocci_id/* drivers/gpu/drm/nouveau/dispnv50/ovly.c 43 */;
	const struct {
		s32 oclass;
		int version;
		int (*new)(struct nouveau_drm *, int, s32,
			   struct nv50_wndw **);
	} cocci_id/* drivers/gpu/drm/nouveau/dispnv50/ovly.c 30 */[];
	struct nouveau_drm *cocci_id/* drivers/gpu/drm/nouveau/dispnv50/ovly.c 28 */;
	struct nv50_wndw **cocci_id/* drivers/gpu/drm/nouveau/dispnv50/ovly.c 28 */;
	int cocci_id/* drivers/gpu/drm/nouveau/dispnv50/ovly.c 27 */;
}
