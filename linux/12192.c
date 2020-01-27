cocci_test_suite() {
	struct gr3d *cocci_id/* drivers/gpu/drm/tegra/gr3d.c 89 */;
	struct drm_device *cocci_id/* drivers/gpu/drm/tegra/gr3d.c 88 */;
	struct tegra_drm_client *cocci_id/* drivers/gpu/drm/tegra/gr3d.c 87 */;
	struct host1x_client *cocci_id/* drivers/gpu/drm/tegra/gr3d.c 85 */;
	int cocci_id/* drivers/gpu/drm/tegra/gr3d.c 85 */;
	unsigned long cocci_id/* drivers/gpu/drm/tegra/gr3d.c 47 */;
	struct gr3d cocci_id/* drivers/gpu/drm/tegra/gr3d.c 40 */;
	struct platform_driver cocci_id/* drivers/gpu/drm/tegra/gr3d.c 394 */;
	unsigned int cocci_id/* drivers/gpu/drm/tegra/gr3d.c 286 */;
	struct host1x_syncpt **cocci_id/* drivers/gpu/drm/tegra/gr3d.c 284 */;
	struct device_node *cocci_id/* drivers/gpu/drm/tegra/gr3d.c 283 */;
	struct platform_device *cocci_id/* drivers/gpu/drm/tegra/gr3d.c 281 */;
	struct gr3d {
		struct tegra_drm_client client;
		struct host1x_channel *channel;
		struct clk *clk_secondary;
		struct clk *clk;
		struct reset_control *rst_secondary;
		struct reset_control *rst;
		const struct gr3d_soc *soc;
	DECLARE_BITMAP(addr_regs,GR3D_NUM_REGS)
		;
	} cocci_id/* drivers/gpu/drm/tegra/gr3d.c 25 */;
	struct gr3d_soc {
		unsigned int version;
	} cocci_id/* drivers/gpu/drm/tegra/gr3d.c 21 */;
	const u32 cocci_id/* drivers/gpu/drm/tegra/gr3d.c 176 */[];
	const struct of_device_id cocci_id/* drivers/gpu/drm/tegra/gr3d.c 168 */[];
	const struct gr3d_soc cocci_id/* drivers/gpu/drm/tegra/gr3d.c 164 */;
	const struct tegra_drm_client_ops cocci_id/* drivers/gpu/drm/tegra/gr3d.c 149 */;
	u32 cocci_id/* drivers/gpu/drm/tegra/gr3d.c 125 */;
	struct device *cocci_id/* drivers/gpu/drm/tegra/gr3d.c 125 */;
	struct tegra_drm_context *cocci_id/* drivers/gpu/drm/tegra/gr3d.c 120 */;
	void cocci_id/* drivers/gpu/drm/tegra/gr3d.c 120 */;
	const struct host1x_client_ops cocci_id/* drivers/gpu/drm/tegra/gr3d.c 103 */;
}
