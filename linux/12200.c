cocci_test_suite() {
	int cocci_id/* drivers/gpu/drm/tegra/vic.c 97 */;
	struct platform_driver cocci_id/* drivers/gpu/drm/tegra/vic.c 517 */;
	const struct dev_pm_ops cocci_id/* drivers/gpu/drm/tegra/vic.c 513 */;
	unsigned int cocci_id/* drivers/gpu/drm/tegra/vic.c 50 */;
	struct vic cocci_id/* drivers/gpu/drm/tegra/vic.c 47 */;
	struct vic *cocci_id/* drivers/gpu/drm/tegra/vic.c 45 */;
	struct tegra_drm_client *cocci_id/* drivers/gpu/drm/tegra/vic.c 45 */;
	struct resource *cocci_id/* drivers/gpu/drm/tegra/vic.c 402 */;
	struct host1x_syncpt **cocci_id/* drivers/gpu/drm/tegra/vic.c 401 */;
	struct device *cocci_id/* drivers/gpu/drm/tegra/vic.c 400 */;
	struct platform_device *cocci_id/* drivers/gpu/drm/tegra/vic.c 398 */;
	const struct of_device_id cocci_id/* drivers/gpu/drm/tegra/vic.c 389 */[];
	const struct vic_config cocci_id/* drivers/gpu/drm/tegra/vic.c 359 */;
	const struct tegra_drm_client_ops cocci_id/* drivers/gpu/drm/tegra/vic.c 351 */;
	struct tegra_drm_context *cocci_id/* drivers/gpu/drm/tegra/vic.c 342 */;
	void cocci_id/* drivers/gpu/drm/tegra/vic.c 342 */;
	struct vic {
		struct falcon falcon;
		bool booted;
		void __iomem *regs;
		struct tegra_drm_client client;
		struct host1x_channel *channel;
		struct device *dev;
		struct clk *clk;
		struct reset_control *rst;
		const struct vic_config *config;
	} cocci_id/* drivers/gpu/drm/tegra/vic.c 30 */;
	size_t cocci_id/* drivers/gpu/drm/tegra/vic.c 253 */;
	dma_addr_t cocci_id/* drivers/gpu/drm/tegra/vic.c 252 */;
	const struct host1x_client_ops cocci_id/* drivers/gpu/drm/tegra/vic.c 243 */;
	struct vic_config {
		const char *firmware;
		unsigned int version;
		bool supports_sid;
	} cocci_id/* drivers/gpu/drm/tegra/vic.c 24 */;
	struct tegra_drm *cocci_id/* drivers/gpu/drm/tegra/vic.c 213 */;
	struct drm_device *cocci_id/* drivers/gpu/drm/tegra/vic.c 212 */;
	struct host1x_client *cocci_id/* drivers/gpu/drm/tegra/vic.c 209 */;
	u32 *cocci_id/* drivers/gpu/drm/tegra/vic.c 137 */;
	void *cocci_id/* drivers/gpu/drm/tegra/vic.c 103 */;
	u32 cocci_id/* drivers/gpu/drm/tegra/vic.c 102 */;
	struct iommu_fwspec *cocci_id/* drivers/gpu/drm/tegra/vic.c 100 */;
}
