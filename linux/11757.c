cocci_test_suite() {
	struct nvkm_therm *cocci_id/* drivers/gpu/drm/nouveau/nvkm/subdev/therm/fantog.c 91 */;
	struct dcb_gpio_func *cocci_id/* drivers/gpu/drm/nouveau/nvkm/subdev/therm/fantog.c 91 */;
	int cocci_id/* drivers/gpu/drm/nouveau/nvkm/subdev/therm/fantog.c 90 */;
	void *cocci_id/* drivers/gpu/drm/nouveau/nvkm/subdev/therm/fantog.c 76 */;
	struct nvkm_fantog cocci_id/* drivers/gpu/drm/nouveau/nvkm/subdev/therm/fantog.c 69 */;
	struct nvkm_fantog *cocci_id/* drivers/gpu/drm/nouveau/nvkm/subdev/therm/fantog.c 68 */;
	struct nvkm_alarm *cocci_id/* drivers/gpu/drm/nouveau/nvkm/subdev/therm/fantog.c 66 */;
	void cocci_id/* drivers/gpu/drm/nouveau/nvkm/subdev/therm/fantog.c 65 */;
	u64 cocci_id/* drivers/gpu/drm/nouveau/nvkm/subdev/therm/fantog.c 57 */;
	unsigned long cocci_id/* drivers/gpu/drm/nouveau/nvkm/subdev/therm/fantog.c 45 */;
	struct nvkm_gpio *cocci_id/* drivers/gpu/drm/nouveau/nvkm/subdev/therm/fantog.c 44 */;
	struct nvkm_timer *cocci_id/* drivers/gpu/drm/nouveau/nvkm/subdev/therm/fantog.c 43 */;
	struct nvkm_device *cocci_id/* drivers/gpu/drm/nouveau/nvkm/subdev/therm/fantog.c 42 */;
	struct nvkm_fantog {
		struct nvkm_fan base;
		struct nvkm_alarm alarm;
		spinlock_t lock;
		u32 period_us;
		u32 percent;
		struct dcb_gpio_func func;
	} cocci_id/* drivers/gpu/drm/nouveau/nvkm/subdev/therm/fantog.c 29 */;
}
