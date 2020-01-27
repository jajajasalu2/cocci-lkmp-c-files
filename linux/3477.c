cocci_test_suite() {
	u8 cocci_id/* drivers/mmc/host/sdhci-cadence.c 93 */;
	const struct sdhci_cdns_phy_cfg cocci_id/* drivers/mmc/host/sdhci-cadence.c 78 */[];
	struct sdhci_cdns_phy_cfg {
		const char *property;
		u8 addr;
	} cocci_id/* drivers/mmc/host/sdhci-cadence.c 73 */;
	struct sdhci_cdns_priv {
		void __iomem *hrs_addr;
		bool enhanced_strobe;
		unsigned int nr_phy_params;
		struct sdhci_cdns_phy_param phy_params[0];
	} cocci_id/* drivers/mmc/host/sdhci-cadence.c 66 */;
	struct sdhci_cdns_phy_param {
		u8 addr;
		u8 data;
	} cocci_id/* drivers/mmc/host/sdhci-cadence.c 61 */;
	struct platform_driver cocci_id/* drivers/mmc/host/sdhci-cadence.c 440 */;
	const struct of_device_id cocci_id/* drivers/mmc/host/sdhci-cadence.c 433 */[];
	const struct dev_pm_ops cocci_id/* drivers/mmc/host/sdhci-cadence.c 429 */;
	const u16 cocci_id/* drivers/mmc/host/sdhci-cadence.c 343 */;
	struct device *cocci_id/* drivers/mmc/host/sdhci-cadence.c 342 */;
	struct clk *cocci_id/* drivers/mmc/host/sdhci-cadence.c 339 */;
	struct platform_device *cocci_id/* drivers/mmc/host/sdhci-cadence.c 334 */;
	struct mmc_ios *cocci_id/* drivers/mmc/host/sdhci-cadence.c 315 */;
	void cocci_id/* drivers/mmc/host/sdhci-cadence.c 314 */;
	struct sdhci_host *cocci_id/* drivers/mmc/host/sdhci-cadence.c 277 */;
	u32 cocci_id/* drivers/mmc/host/sdhci-cadence.c 275 */;
	struct mmc_host *cocci_id/* drivers/mmc/host/sdhci-cadence.c 275 */;
	int cocci_id/* drivers/mmc/host/sdhci-cadence.c 275 */;
	void __iomem *cocci_id/* drivers/mmc/host/sdhci-cadence.c 245 */;
	const struct sdhci_pltfm_data cocci_id/* drivers/mmc/host/sdhci-cadence.c 238 */;
	const struct sdhci_ops cocci_id/* drivers/mmc/host/sdhci-cadence.c 230 */;
	struct sdhci_cdns_priv *cocci_id/* drivers/mmc/host/sdhci-cadence.c 188 */;
	unsigned int cocci_id/* drivers/mmc/host/sdhci-cadence.c 168 */;
	struct sdhci_pltfm_host *cocci_id/* drivers/mmc/host/sdhci-cadence.c 163 */;
	void *cocci_id/* drivers/mmc/host/sdhci-cadence.c 161 */;
	struct sdhci_cdns_phy_param *cocci_id/* drivers/mmc/host/sdhci-cadence.c 131 */;
	struct device_node *cocci_id/* drivers/mmc/host/sdhci-cadence.c 116 */;
}
