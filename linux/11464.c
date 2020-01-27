cocci_test_suite() {
	struct nv50_disp *cocci_id/* drivers/gpu/drm/nouveau/dispnv50/curs.c 43 */;
	struct {
		s32 oclass;
		int version;
		int (*new)(struct nouveau_drm *, int, s32,
			   struct nv50_wndw **);
	} cocci_id/* drivers/gpu/drm/nouveau/dispnv50/curs.c 29 */[];
	struct nouveau_drm *cocci_id/* drivers/gpu/drm/nouveau/dispnv50/curs.c 27 */;
	struct nv50_wndw **cocci_id/* drivers/gpu/drm/nouveau/dispnv50/curs.c 27 */;
	int cocci_id/* drivers/gpu/drm/nouveau/dispnv50/curs.c 26 */;
}
