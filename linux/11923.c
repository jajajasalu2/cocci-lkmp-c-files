cocci_test_suite() {
	bool (*cocci_id/* drivers/gpu/drm/nouveau/nvkm/engine/gr/nv04.c 793 */)(struct nvkm_device *,
										u32,
										u32);
	struct nvkm_device *cocci_id/* drivers/gpu/drm/nouveau/nvkm/engine/gr/nv04.c 741 */;
	bool cocci_id/* drivers/gpu/drm/nouveau/nvkm/engine/gr/nv04.c 740 */;
	u8 cocci_id/* drivers/gpu/drm/nouveau/nvkm/engine/gr/nv04.c 558 */;
	struct nv04_gr_chan {
		struct nvkm_object object;
		struct nv04_gr *gr;
		int chid;
		u32 nv04[ARRAY_SIZE(nv04_gr_ctx_regs)];
	} cocci_id/* drivers/gpu/drm/nouveau/nvkm/engine/gr/nv04.c 359 */;
	struct nv04_gr_chan cocci_id/* drivers/gpu/drm/nouveau/nvkm/engine/gr/nv04.c 357 */;
	struct nv04_gr {
		struct nvkm_gr base;
		struct nv04_gr_chan *chan[16];
		spinlock_t lock;
	} cocci_id/* drivers/gpu/drm/nouveau/nvkm/engine/gr/nv04.c 351 */;
	struct nv04_gr cocci_id/* drivers/gpu/drm/nouveau/nvkm/engine/gr/nv04.c 349 */;
	u32 cocci_id/* drivers/gpu/drm/nouveau/nvkm/engine/gr/nv04.c 34 */[];
	struct nvkm_gr **cocci_id/* drivers/gpu/drm/nouveau/nvkm/engine/gr/nv04.c 1416 */;
	const struct nvkm_gr_func cocci_id/* drivers/gpu/drm/nouveau/nvkm/engine/gr/nv04.c 1364 */;
	char cocci_id/* drivers/gpu/drm/nouveau/nvkm/engine/gr/nv04.c 1288 */[128];
	const struct nvkm_bitfield cocci_id/* drivers/gpu/drm/nouveau/nvkm/engine/gr/nv04.c 1232 */[];
	struct nvkm_subdev *cocci_id/* drivers/gpu/drm/nouveau/nvkm/engine/gr/nv04.c 1213 */;
	const struct nvkm_oclass *cocci_id/* drivers/gpu/drm/nouveau/nvkm/engine/gr/nv04.c 1185 */;
	struct nvkm_object **cocci_id/* drivers/gpu/drm/nouveau/nvkm/engine/gr/nv04.c 1185 */;
	struct nvkm_gr *cocci_id/* drivers/gpu/drm/nouveau/nvkm/engine/gr/nv04.c 1184 */;
	struct nvkm_fifo_chan *cocci_id/* drivers/gpu/drm/nouveau/nvkm/engine/gr/nv04.c 1184 */;
	const struct nvkm_object_func cocci_id/* drivers/gpu/drm/nouveau/nvkm/engine/gr/nv04.c 1177 */;
	unsigned long cocci_id/* drivers/gpu/drm/nouveau/nvkm/engine/gr/nv04.c 1152 */;
	struct nv04_gr *cocci_id/* drivers/gpu/drm/nouveau/nvkm/engine/gr/nv04.c 1151 */;
	struct nvkm_object *cocci_id/* drivers/gpu/drm/nouveau/nvkm/engine/gr/nv04.c 1148 */;
	void *cocci_id/* drivers/gpu/drm/nouveau/nvkm/engine/gr/nv04.c 1147 */;
	int cocci_id/* drivers/gpu/drm/nouveau/nvkm/engine/gr/nv04.c 1137 */;
	u32 cocci_id/* drivers/gpu/drm/nouveau/nvkm/engine/gr/nv04.c 1135 */;
	u32 *cocci_id/* drivers/gpu/drm/nouveau/nvkm/engine/gr/nv04.c 1135 */;
	struct nv04_gr_chan *cocci_id/* drivers/gpu/drm/nouveau/nvkm/engine/gr/nv04.c 1135 */;
	void cocci_id/* drivers/gpu/drm/nouveau/nvkm/engine/gr/nv04.c 1113 */;
	struct nvkm_gpuobj **cocci_id/* drivers/gpu/drm/nouveau/nvkm/engine/gr/nv04.c 1044 */;
	struct nvkm_gpuobj *cocci_id/* drivers/gpu/drm/nouveau/nvkm/engine/gr/nv04.c 1043 */;
	bool (*cocci_id/* drivers/gpu/drm/nouveau/nvkm/engine/gr/nv04.c 1017 */)(struct nvkm_device *,
										 u32,
										 u32,
										 u32);
}
