cocci_test_suite() {
	void cocci_id/* drivers/gpu/drm/nouveau/nvkm/subdev/fb/ramgt215.c 99 */;
	struct nvkm_fb *cocci_id/* drivers/gpu/drm/nouveau/nvkm/subdev/fb/ramgt215.c 940 */;
	struct nvkm_ram **cocci_id/* drivers/gpu/drm/nouveau/nvkm/subdev/fb/ramgt215.c 940 */;
	const struct nvkm_ram_func cocci_id/* drivers/gpu/drm/nouveau/nvkm/subdev/fb/ramgt215.c 930 */;
	struct gt215_ram {
		struct nvkm_ram base;
		struct gt215_ramfuc fuc;
		struct gt215_ltrain ltrain;
	} cocci_id/* drivers/gpu/drm/nouveau/nvkm/subdev/fb/ramgt215.c 93 */;
	void *cocci_id/* drivers/gpu/drm/nouveau/nvkm/subdev/fb/ramgt215.c 922 */;
	struct gt215_ltrain {
		enum{NVA3_TRAIN_UNKNOWN, NVA3_TRAIN_UNSUPPORTED, NVA3_TRAIN_ONCE, NVA3_TRAIN_EXEC, NVA3_TRAIN_DONE,} state;
		u32 r_100720;
		u32 r_1111e0;
		u32 r_111400;
		struct nvkm_memory *memory;
	} cocci_id/* drivers/gpu/drm/nouveau/nvkm/subdev/fb/ramgt215.c 79 */;
	bool cocci_id/* drivers/gpu/drm/nouveau/nvkm/subdev/fb/ramgt215.c 509 */;
	u32 cocci_id/* drivers/gpu/drm/nouveau/nvkm/subdev/fb/ramgt215.c 508 */[9];
	struct nvkm_ram_data *cocci_id/* drivers/gpu/drm/nouveau/nvkm/subdev/fb/ramgt215.c 502 */;
	struct nvkm_gpio *cocci_id/* drivers/gpu/drm/nouveau/nvkm/subdev/fb/ramgt215.c 501 */;
	struct gt215_clk_info cocci_id/* drivers/gpu/drm/nouveau/nvkm/subdev/fb/ramgt215.c 500 */;
	struct nvkm_ram *cocci_id/* drivers/gpu/drm/nouveau/nvkm/subdev/fb/ramgt215.c 492 */;
	struct dcb_gpio_func cocci_id/* drivers/gpu/drm/nouveau/nvkm/subdev/fb/ramgt215.c 469 */;
	struct gt215_clk_info *cocci_id/* drivers/gpu/drm/nouveau/nvkm/subdev/fb/ramgt215.c 456 */;
	struct gt215_ramfuc {
		struct ramfuc base;
		struct ramfuc_reg r_0x001610;
		struct ramfuc_reg r_0x001700;
		struct ramfuc_reg r_0x002504;
		struct ramfuc_reg r_0x004000;
		struct ramfuc_reg r_0x004004;
		struct ramfuc_reg r_0x004018;
		struct ramfuc_reg r_0x004128;
		struct ramfuc_reg r_0x004168;
		struct ramfuc_reg r_0x100080;
		struct ramfuc_reg r_0x100200;
		struct ramfuc_reg r_0x100210;
		struct ramfuc_reg r_0x100220[9];
		struct ramfuc_reg r_0x100264;
		struct ramfuc_reg r_0x1002d0;
		struct ramfuc_reg r_0x1002d4;
		struct ramfuc_reg r_0x1002dc;
		struct ramfuc_reg r_0x10053c;
		struct ramfuc_reg r_0x1005a0;
		struct ramfuc_reg r_0x1005a4;
		struct ramfuc_reg r_0x100700;
		struct ramfuc_reg r_0x100714;
		struct ramfuc_reg r_0x100718;
		struct ramfuc_reg r_0x10071c;
		struct ramfuc_reg r_0x100720;
		struct ramfuc_reg r_0x100760;
		struct ramfuc_reg r_0x1007a0;
		struct ramfuc_reg r_0x1007e0;
		struct ramfuc_reg r_0x100da0;
		struct ramfuc_reg r_0x10f804;
		struct ramfuc_reg r_0x1110e0;
		struct ramfuc_reg r_0x111100;
		struct ramfuc_reg r_0x111104;
		struct ramfuc_reg r_0x1111e0;
		struct ramfuc_reg r_0x111400;
		struct ramfuc_reg r_0x611200;
		struct ramfuc_reg r_mr[4];
		struct ramfuc_reg r_gpio[4];
	} cocci_id/* drivers/gpu/drm/nouveau/nvkm/subdev/fb/ramgt215.c 38 */;
	struct nvbios_ramcfg *cocci_id/* drivers/gpu/drm/nouveau/nvkm/subdev/fb/ramgt215.c 350 */;
	u64 cocci_id/* drivers/gpu/drm/nouveau/nvkm/subdev/fb/ramgt215.c 286 */;
	struct nvbios_M0205E cocci_id/* drivers/gpu/drm/nouveau/nvkm/subdev/fb/ramgt215.c 283 */;
	const u32 cocci_id/* drivers/gpu/drm/nouveau/nvkm/subdev/fb/ramgt215.c 274 */[16];
	struct gt215_ram cocci_id/* drivers/gpu/drm/nouveau/nvkm/subdev/fb/ramgt215.c 25 */;
	u32 cocci_id/* drivers/gpu/drm/nouveau/nvkm/subdev/fb/ramgt215.c 174 */;
	unsigned long *cocci_id/* drivers/gpu/drm/nouveau/nvkm/subdev/fb/ramgt215.c 168 */;
	unsigned long cocci_id/* drivers/gpu/drm/nouveau/nvkm/subdev/fb/ramgt215.c 167 */;
	unsigned int cocci_id/* drivers/gpu/drm/nouveau/nvkm/subdev/fb/ramgt215.c 166 */;
	u8 cocci_id/* drivers/gpu/drm/nouveau/nvkm/subdev/fb/ramgt215.c 165 */;
	struct nvbios_M0205T cocci_id/* drivers/gpu/drm/nouveau/nvkm/subdev/fb/ramgt215.c 164 */;
	u32 *cocci_id/* drivers/gpu/drm/nouveau/nvkm/subdev/fb/ramgt215.c 162 */;
	struct nvkm_clk *cocci_id/* drivers/gpu/drm/nouveau/nvkm/subdev/fb/ramgt215.c 161 */;
	struct nvkm_bios *cocci_id/* drivers/gpu/drm/nouveau/nvkm/subdev/fb/ramgt215.c 160 */;
	struct nvkm_device *cocci_id/* drivers/gpu/drm/nouveau/nvkm/subdev/fb/ramgt215.c 159 */;
	struct nvkm_subdev *cocci_id/* drivers/gpu/drm/nouveau/nvkm/subdev/fb/ramgt215.c 158 */;
	struct gt215_ramfuc *cocci_id/* drivers/gpu/drm/nouveau/nvkm/subdev/fb/ramgt215.c 157 */;
	struct gt215_ltrain *cocci_id/* drivers/gpu/drm/nouveau/nvkm/subdev/fb/ramgt215.c 156 */;
	struct gt215_ram *cocci_id/* drivers/gpu/drm/nouveau/nvkm/subdev/fb/ramgt215.c 154 */;
	int cocci_id/* drivers/gpu/drm/nouveau/nvkm/subdev/fb/ramgt215.c 153 */;
	u8 cocci_id/* drivers/gpu/drm/nouveau/nvkm/subdev/fb/ramgt215.c 103 */[8];
}
