cocci_test_suite() {
	struct nvkm_falcon *cocci_id/* drivers/gpu/drm/nouveau/nvkm/subdev/pmu/gk20a.c 98 */;
	struct gk20a_pmu_dvfs_dev_status *cocci_id/* drivers/gpu/drm/nouveau/nvkm/subdev/pmu/gk20a.c 96 */;
	struct gk20a_pmu_dvfs_data *cocci_id/* drivers/gpu/drm/nouveau/nvkm/subdev/pmu/gk20a.c 70 */;
	int cocci_id/* drivers/gpu/drm/nouveau/nvkm/subdev/pmu/gk20a.c 66 */;
	struct nvkm_clk *cocci_id/* drivers/gpu/drm/nouveau/nvkm/subdev/pmu/gk20a.c 61 */;
	struct gk20a_pmu *cocci_id/* drivers/gpu/drm/nouveau/nvkm/subdev/pmu/gk20a.c 59 */;
	int *cocci_id/* drivers/gpu/drm/nouveau/nvkm/subdev/pmu/gk20a.c 59 */;
	void cocci_id/* drivers/gpu/drm/nouveau/nvkm/subdev/pmu/gk20a.c 58 */;
	struct gk20a_pmu_dvfs_dev_status {
		u32 total;
		u32 busy;
	} cocci_id/* drivers/gpu/drm/nouveau/nvkm/subdev/pmu/gk20a.c 45 */;
	struct gk20a_pmu {
		struct nvkm_pmu base;
		struct nvkm_alarm alarm;
		struct gk20a_pmu_dvfs_data *data;
	} cocci_id/* drivers/gpu/drm/nouveau/nvkm/subdev/pmu/gk20a.c 39 */;
	struct gk20a_pmu_dvfs_data {
		int p_load_target;
		int p_load_max;
		int p_smooth;
		unsigned int avg_load;
	} cocci_id/* drivers/gpu/drm/nouveau/nvkm/subdev/pmu/gk20a.c 32 */;
	struct nvkm_pmu **cocci_id/* drivers/gpu/drm/nouveau/nvkm/subdev/pmu/gk20a.c 206 */;
	const struct nvkm_pmu_func cocci_id/* drivers/gpu/drm/nouveau/nvkm/subdev/pmu/gk20a.c 197 */;
	struct gk20a_pmu_dvfs_data cocci_id/* drivers/gpu/drm/nouveau/nvkm/subdev/pmu/gk20a.c 190 */;
	struct nvkm_pmu *cocci_id/* drivers/gpu/drm/nouveau/nvkm/subdev/pmu/gk20a.c 158 */;
	u64 cocci_id/* drivers/gpu/drm/nouveau/nvkm/subdev/pmu/gk20a.c 138 */;
	u32 cocci_id/* drivers/gpu/drm/nouveau/nvkm/subdev/pmu/gk20a.c 125 */;
	struct nvkm_volt *cocci_id/* drivers/gpu/drm/nouveau/nvkm/subdev/pmu/gk20a.c 124 */;
	struct nvkm_timer *cocci_id/* drivers/gpu/drm/nouveau/nvkm/subdev/pmu/gk20a.c 123 */;
	struct nvkm_device *cocci_id/* drivers/gpu/drm/nouveau/nvkm/subdev/pmu/gk20a.c 121 */;
	struct nvkm_subdev *cocci_id/* drivers/gpu/drm/nouveau/nvkm/subdev/pmu/gk20a.c 120 */;
	struct gk20a_pmu_dvfs_dev_status cocci_id/* drivers/gpu/drm/nouveau/nvkm/subdev/pmu/gk20a.c 119 */;
	struct gk20a_pmu cocci_id/* drivers/gpu/drm/nouveau/nvkm/subdev/pmu/gk20a.c 117 */;
	struct nvkm_alarm *cocci_id/* drivers/gpu/drm/nouveau/nvkm/subdev/pmu/gk20a.c 114 */;
}
