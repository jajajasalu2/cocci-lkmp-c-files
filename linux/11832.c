cocci_test_suite() {
	u16 cocci_id/* drivers/gpu/drm/nouveau/nvkm/subdev/clk/gk104.c 69 */;
	struct nvkm_device *cocci_id/* drivers/gpu/drm/nouveau/nvkm/subdev/clk/gk104.c 507 */;
	struct nvkm_clk **cocci_id/* drivers/gpu/drm/nouveau/nvkm/subdev/clk/gk104.c 507 */;
	const struct nvkm_clk_func cocci_id/* drivers/gpu/drm/nouveau/nvkm/subdev/clk/gk104.c 485 */;
	u32 cocci_id/* drivers/gpu/drm/nouveau/nvkm/subdev/clk/gk104.c 47 */(struct gk104_clk *,
									     u32);
	u32 cocci_id/* drivers/gpu/drm/nouveau/nvkm/subdev/clk/gk104.c 46 */(struct gk104_clk *,
									     int,
									     u32,
									     u32);
	struct {
		u32 mask;
		void (*exec)(struct gk104_clk *, int);
	} cocci_id/* drivers/gpu/drm/nouveau/nvkm/subdev/clk/gk104.c 451 */[];
	struct gk104_clk {
		struct nvkm_clk base;
		struct gk104_clk_info eng[16];
	} cocci_id/* drivers/gpu/drm/nouveau/nvkm/subdev/clk/gk104.c 41 */;
	const u32 cocci_id/* drivers/gpu/drm/nouveau/nvkm/subdev/clk/gk104.c 390 */;
	void cocci_id/* drivers/gpu/drm/nouveau/nvkm/subdev/clk/gk104.c 356 */;
	struct nvkm_clk *cocci_id/* drivers/gpu/drm/nouveau/nvkm/subdev/clk/gk104.c 339 */;
	struct gk104_clk_info {
		u32 freq;
		u32 ssel;
		u32 mdiv;
		u32 dsrc;
		u32 ddiv;
		u32 coef;
	} cocci_id/* drivers/gpu/drm/nouveau/nvkm/subdev/clk/gk104.c 32 */;
	u32 cocci_id/* drivers/gpu/drm/nouveau/nvkm/subdev/clk/gk104.c 291 */;
	struct gk104_clk_info *cocci_id/* drivers/gpu/drm/nouveau/nvkm/subdev/clk/gk104.c 290 */;
	struct nvkm_cstate *cocci_id/* drivers/gpu/drm/nouveau/nvkm/subdev/clk/gk104.c 288 */;
	struct gk104_clk *cocci_id/* drivers/gpu/drm/nouveau/nvkm/subdev/clk/gk104.c 287 */;
	int cocci_id/* drivers/gpu/drm/nouveau/nvkm/subdev/clk/gk104.c 286 */;
	struct nvbios_pll cocci_id/* drivers/gpu/drm/nouveau/nvkm/subdev/clk/gk104.c 267 */;
	struct nvkm_bios *cocci_id/* drivers/gpu/drm/nouveau/nvkm/subdev/clk/gk104.c 266 */;
	struct nvkm_subdev *cocci_id/* drivers/gpu/drm/nouveau/nvkm/subdev/clk/gk104.c 265 */;
	struct gk104_clk cocci_id/* drivers/gpu/drm/nouveau/nvkm/subdev/clk/gk104.c 24 */;
	u32 *cocci_id/* drivers/gpu/drm/nouveau/nvkm/subdev/clk/gk104.c 223 */;
	enum nv_clk_src cocci_id/* drivers/gpu/drm/nouveau/nvkm/subdev/clk/gk104.c 189 */;
}
