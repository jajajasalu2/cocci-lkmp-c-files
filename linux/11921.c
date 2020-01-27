cocci_test_suite() {
	const struct nvkm_object_func cocci_id/* drivers/gpu/drm/nouveau/nvkm/engine/gr/nv10.c 983 */;
	unsigned long cocci_id/* drivers/gpu/drm/nouveau/nvkm/engine/gr/nv10.c 975 */;
	struct nv10_gr *cocci_id/* drivers/gpu/drm/nouveau/nvkm/engine/gr/nv10.c 974 */;
	struct nv10_gr_chan *cocci_id/* drivers/gpu/drm/nouveau/nvkm/engine/gr/nv10.c 973 */;
	struct nvkm_object *cocci_id/* drivers/gpu/drm/nouveau/nvkm/engine/gr/nv10.c 971 */;
	void *cocci_id/* drivers/gpu/drm/nouveau/nvkm/engine/gr/nv10.c 970 */;
	struct nvkm_device *cocci_id/* drivers/gpu/drm/nouveau/nvkm/engine/gr/nv10.c 958 */;
	bool cocci_id/* drivers/gpu/drm/nouveau/nvkm/engine/gr/nv10.c 954 */;
	int cocci_id/* drivers/gpu/drm/nouveau/nvkm/engine/gr/nv10.c 953 */;
	void cocci_id/* drivers/gpu/drm/nouveau/nvkm/engine/gr/nv10.c 931 */;
	u32 *cocci_id/* drivers/gpu/drm/nouveau/nvkm/engine/gr/nv10.c 635 */;
	struct pipe_state *cocci_id/* drivers/gpu/drm/nouveau/nvkm/engine/gr/nv10.c 634 */;
	struct nvkm_subdev *cocci_id/* drivers/gpu/drm/nouveau/nvkm/engine/gr/nv10.c 633 */;
	bool (*cocci_id/* drivers/gpu/drm/nouveau/nvkm/engine/gr/nv10.c 533 */)(struct nv10_gr_chan *,
										u32,
										u32);
	u8 cocci_id/* drivers/gpu/drm/nouveau/nvkm/engine/gr/nv10.c 531 */;
	void (*cocci_id/* drivers/gpu/drm/nouveau/nvkm/engine/gr/nv10.c 518 */)(struct nv10_gr_chan *,
										u32,
										u32);
	int cocci_id/* drivers/gpu/drm/nouveau/nvkm/engine/gr/nv10.c 46 */[];
	u32 cocci_id/* drivers/gpu/drm/nouveau/nvkm/engine/gr/nv10.c 436 */[1];
	struct nv10_gr_chan {
		struct nvkm_object object;
		struct nv10_gr *gr;
		int chid;
		int nv10[ARRAY_SIZE(nv10_gr_ctx_regs)];
		int nv17[ARRAY_SIZE(nv17_gr_ctx_regs)];
		struct pipe_state pipe_state;
		u32 lma_window[4];
	} cocci_id/* drivers/gpu/drm/nouveau/nvkm/engine/gr/nv10.c 399 */;
	struct nv10_gr_chan cocci_id/* drivers/gpu/drm/nouveau/nvkm/engine/gr/nv10.c 397 */;
	struct nv10_gr {
		struct nvkm_gr base;
		struct nv10_gr_chan *chan[32];
		spinlock_t lock;
	} cocci_id/* drivers/gpu/drm/nouveau/nvkm/engine/gr/nv10.c 391 */;
	struct nv10_gr cocci_id/* drivers/gpu/drm/nouveau/nvkm/engine/gr/nv10.c 389 */;
	struct pipe_state {
		u32 pipe_0x0000[0x040 / 4];
		u32 pipe_0x0040[0x010 / 4];
		u32 pipe_0x0200[0x0c0 / 4];
		u32 pipe_0x4400[0x080 / 4];
		u32 pipe_0x6400[0x3b0 / 4];
		u32 pipe_0x6800[0x2f0 / 4];
		u32 pipe_0x6c00[0x030 / 4];
		u32 pipe_0x7000[0x130 / 4];
		u32 pipe_0x7400[0x0c0 / 4];
		u32 pipe_0x7800[0x0c0 / 4];
	} cocci_id/* drivers/gpu/drm/nouveau/nvkm/engine/gr/nv10.c 33 */;
	struct nvkm_gr **cocci_id/* drivers/gpu/drm/nouveau/nvkm/engine/gr/nv10.c 1218 */;
	const struct nvkm_gr_func cocci_id/* drivers/gpu/drm/nouveau/nvkm/engine/gr/nv10.c 1188 */;
	const struct nvkm_gr_func *cocci_id/* drivers/gpu/drm/nouveau/nvkm/engine/gr/nv10.c 1175 */;
	char cocci_id/* drivers/gpu/drm/nouveau/nvkm/engine/gr/nv10.c 1096 */[128];
	u32 cocci_id/* drivers/gpu/drm/nouveau/nvkm/engine/gr/nv10.c 1086 */;
	const struct nvkm_bitfield cocci_id/* drivers/gpu/drm/nouveau/nvkm/engine/gr/nv10.c 1066 */[];
	struct nvkm_fifo *cocci_id/* drivers/gpu/drm/nouveau/nvkm/engine/gr/nv10.c 1053 */;
	struct nvkm_fb_tile *cocci_id/* drivers/gpu/drm/nouveau/nvkm/engine/gr/nv10.c 1049 */;
	const struct nvkm_oclass *cocci_id/* drivers/gpu/drm/nouveau/nvkm/engine/gr/nv10.c 1003 */;
	struct nvkm_object **cocci_id/* drivers/gpu/drm/nouveau/nvkm/engine/gr/nv10.c 1003 */;
	struct nvkm_gr *cocci_id/* drivers/gpu/drm/nouveau/nvkm/engine/gr/nv10.c 1002 */;
	struct nvkm_fifo_chan *cocci_id/* drivers/gpu/drm/nouveau/nvkm/engine/gr/nv10.c 1002 */;
}
