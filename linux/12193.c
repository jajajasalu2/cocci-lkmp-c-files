cocci_test_suite() {
	const struct host1x_client_ops cocci_id/* drivers/gpu/drm/tegra/gr2d.c 95 */;
	struct gr2d *cocci_id/* drivers/gpu/drm/tegra/gr2d.c 81 */;
	struct tegra_drm *cocci_id/* drivers/gpu/drm/tegra/gr2d.c 80 */;
	struct drm_device *cocci_id/* drivers/gpu/drm/tegra/gr2d.c 79 */;
	struct tegra_drm_client *cocci_id/* drivers/gpu/drm/tegra/gr2d.c 78 */;
	struct host1x_client *cocci_id/* drivers/gpu/drm/tegra/gr2d.c 76 */;
	int cocci_id/* drivers/gpu/drm/tegra/gr2d.c 76 */;
	unsigned long cocci_id/* drivers/gpu/drm/tegra/gr2d.c 38 */;
	struct gr2d cocci_id/* drivers/gpu/drm/tegra/gr2d.c 31 */;
	struct platform_driver cocci_id/* drivers/gpu/drm/tegra/gr2d.c 261 */;
	unsigned int cocci_id/* drivers/gpu/drm/tegra/gr2d.c 192 */;
	struct host1x_syncpt **cocci_id/* drivers/gpu/drm/tegra/gr2d.c 190 */;
	struct gr2d {
		struct tegra_drm_client client;
		struct host1x_channel *channel;
		struct clk *clk;
		const struct gr2d_soc *soc;
	DECLARE_BITMAP(addr_regs,GR2D_NUM_REGS)
		;
	} cocci_id/* drivers/gpu/drm/tegra/gr2d.c 19 */;
	struct platform_device *cocci_id/* drivers/gpu/drm/tegra/gr2d.c 187 */;
	const u32 cocci_id/* drivers/gpu/drm/tegra/gr2d.c 171 */[];
	const struct of_device_id cocci_id/* drivers/gpu/drm/tegra/gr2d.c 164 */[];
	const struct gr2d_soc cocci_id/* drivers/gpu/drm/tegra/gr2d.c 156 */;
	struct gr2d_soc {
		unsigned int version;
	} cocci_id/* drivers/gpu/drm/tegra/gr2d.c 15 */;
	const struct tegra_drm_client_ops cocci_id/* drivers/gpu/drm/tegra/gr2d.c 148 */;
	u32 cocci_id/* drivers/gpu/drm/tegra/gr2d.c 117 */;
	struct device *cocci_id/* drivers/gpu/drm/tegra/gr2d.c 117 */;
	struct tegra_drm_context *cocci_id/* drivers/gpu/drm/tegra/gr2d.c 112 */;
	void cocci_id/* drivers/gpu/drm/tegra/gr2d.c 112 */;
}
