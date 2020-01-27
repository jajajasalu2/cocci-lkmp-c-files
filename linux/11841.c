cocci_test_suite() {
	struct nvkm_pstate *cocci_id/* drivers/gpu/drm/nouveau/nvkm/subdev/clk/gm20b.c 983 */;
	const struct gm20b_clk_dvfs_params cocci_id/* drivers/gpu/drm/nouveau/nvkm/subdev/clk/gm20b.c 98 */;
	struct gm20b_clk_dvfs_params {
		s32 coeff_slope;
		s32 coeff_offs;
		u32 vco_ctrl;
	} cocci_id/* drivers/gpu/drm/nouveau/nvkm/subdev/clk/gm20b.c 92 */;
	struct gk20a_clk *cocci_id/* drivers/gpu/drm/nouveau/nvkm/subdev/clk/gm20b.c 813 */;
	const struct nvkm_clk_func cocci_id/* drivers/gpu/drm/nouveau/nvkm/subdev/clk/gm20b.c 808 */;
	s32 cocci_id/* drivers/gpu/drm/nouveau/nvkm/subdev/clk/gm20b.c 791 */;
	const s32 cocci_id/* drivers/gpu/drm/nouveau/nvkm/subdev/clk/gm20b.c 747 */;
	bool cocci_id/* drivers/gpu/drm/nouveau/nvkm/subdev/clk/gm20b.c 746 */;
	struct gk20a_pll cocci_id/* drivers/gpu/drm/nouveau/nvkm/subdev/clk/gm20b.c 727 */;
	struct nvkm_device *cocci_id/* drivers/gpu/drm/nouveau/nvkm/subdev/clk/gm20b.c 722 */;
	void cocci_id/* drivers/gpu/drm/nouveau/nvkm/subdev/clk/gm20b.c 719 */;
	struct nvkm_pstate cocci_id/* drivers/gpu/drm/nouveau/nvkm/subdev/clk/gm20b.c 637 */[];
	struct gk20a_pll *cocci_id/* drivers/gpu/drm/nouveau/nvkm/subdev/clk/gm20b.c 488 */;
	struct nvkm_volt *cocci_id/* drivers/gpu/drm/nouveau/nvkm/subdev/clk/gm20b.c 468 */;
	struct nvkm_subdev *cocci_id/* drivers/gpu/drm/nouveau/nvkm/subdev/clk/gm20b.c 467 */;
	struct gm20b_clk *cocci_id/* drivers/gpu/drm/nouveau/nvkm/subdev/clk/gm20b.c 466 */;
	struct nvkm_cstate *cocci_id/* drivers/gpu/drm/nouveau/nvkm/subdev/clk/gm20b.c 464 */;
	struct nvkm_clk *cocci_id/* drivers/gpu/drm/nouveau/nvkm/subdev/clk/gm20b.c 464 */;
	int cocci_id/* drivers/gpu/drm/nouveau/nvkm/subdev/clk/gm20b.c 463 */;
	struct gm20b_pll cocci_id/* drivers/gpu/drm/nouveau/nvkm/subdev/clk/gm20b.c 364 */;
	const struct gk20a_pll *cocci_id/* drivers/gpu/drm/nouveau/nvkm/subdev/clk/gm20b.c 360 */;
	const struct gk20a_clk_pllg_params *cocci_id/* drivers/gpu/drm/nouveau/nvkm/subdev/clk/gm20b.c 228 */;
	u32 *cocci_id/* drivers/gpu/drm/nouveau/nvkm/subdev/clk/gm20b.c 225 */;
	const struct gm20b_clk_dvfs_params *cocci_id/* drivers/gpu/drm/nouveau/nvkm/subdev/clk/gm20b.c 193 */;
	struct gm20b_clk_dvfs *cocci_id/* drivers/gpu/drm/nouveau/nvkm/subdev/clk/gm20b.c 190 */;
	const struct gm20b_pll *cocci_id/* drivers/gpu/drm/nouveau/nvkm/subdev/clk/gm20b.c 173 */;
	struct gm20b_pll *cocci_id/* drivers/gpu/drm/nouveau/nvkm/subdev/clk/gm20b.c 160 */;
	const struct gk20a_clk_pllg_params cocci_id/* drivers/gpu/drm/nouveau/nvkm/subdev/clk/gm20b.c 151 */;
	u32 cocci_id/* drivers/gpu/drm/nouveau/nvkm/subdev/clk/gm20b.c 146 */;
	struct gm20b_clk cocci_id/* drivers/gpu/drm/nouveau/nvkm/subdev/clk/gm20b.c 139 */;
	struct gm20b_clk {
		struct gk20a_clk base;
		struct gm20b_clk_dvfs dvfs;
		u32 uv;
		struct gk20a_pll new_pll;
		struct gm20b_clk_dvfs new_dvfs;
		u32 new_uv;
		const struct gm20b_clk_dvfs_params *dvfs_params;
		s32 uvdet_slope;
		s32 uvdet_offs;
		u32 safe_fmax_vmin;
	} cocci_id/* drivers/gpu/drm/nouveau/nvkm/subdev/clk/gm20b.c 119 */;
	struct gm20b_clk_dvfs {
		u32 dfs_coeff;
		s32 dfs_det_max;
		s32 dfs_ext_cal;
	} cocci_id/* drivers/gpu/drm/nouveau/nvkm/subdev/clk/gm20b.c 113 */;
	struct gm20b_pll {
		struct gk20a_pll base;
		u32 sdm_din;
	} cocci_id/* drivers/gpu/drm/nouveau/nvkm/subdev/clk/gm20b.c 108 */;
	void *cocci_id/* drivers/gpu/drm/nouveau/nvkm/subdev/clk/gm20b.c 1037 */;
	struct gk20a_clk_pllg_params *cocci_id/* drivers/gpu/drm/nouveau/nvkm/subdev/clk/gm20b.c 1022 */;
	struct nvkm_device_tegra *cocci_id/* drivers/gpu/drm/nouveau/nvkm/subdev/clk/gm20b.c 1019 */;
	struct nvkm_clk **cocci_id/* drivers/gpu/drm/nouveau/nvkm/subdev/clk/gm20b.c 1017 */;
}
