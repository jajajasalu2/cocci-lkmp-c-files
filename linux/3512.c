cocci_test_suite() {
	const struct sdhci_sprd_phy_cfg cocci_id/* drivers/mmc/host/sdhci-sprd.c 89 */[];
	struct sdhci_sprd_phy_cfg {
		const char *property;
		u8 timing;
	} cocci_id/* drivers/mmc/host/sdhci-sprd.c 84 */;
	struct platform_driver cocci_id/* drivers/mmc/host/sdhci-sprd.c 739 */;
	struct sdhci_sprd_host {
		u32 version;
		struct clk *clk_sdio;
		struct clk *clk_enable;
		struct clk *clk_2x_enable;
		struct pinctrl *pinctrl;
		struct pinctrl_state *pins_uhs;
		struct pinctrl_state *pins_default;
		u32 base_rate;
		int flags;
		u32 phy_delay[MMC_TIMING_MMC_HS400 + 2];
	} cocci_id/* drivers/mmc/host/sdhci-sprd.c 71 */;
	struct device *cocci_id/* drivers/mmc/host/sdhci-sprd.c 701 */;
	const struct of_device_id cocci_id/* drivers/mmc/host/sdhci-sprd.c 680 */[];
	struct clk *cocci_id/* drivers/mmc/host/sdhci-sprd.c 524 */;
	struct platform_device *cocci_id/* drivers/mmc/host/sdhci-sprd.c 520 */;
	const struct sdhci_pltfm_data cocci_id/* drivers/mmc/host/sdhci-sprd.c 510 */;
	u32 cocci_id/* drivers/mmc/host/sdhci-sprd.c 497 */[4];
	struct device_node *cocci_id/* drivers/mmc/host/sdhci-sprd.c 493 */;
	u16 cocci_id/* drivers/mmc/host/sdhci-sprd.c 472 */;
	u32 *cocci_id/* drivers/mmc/host/sdhci-sprd.c 471 */;
	struct mmc_ios *cocci_id/* drivers/mmc/host/sdhci-sprd.c 467 */;
	struct mmc_host *cocci_id/* drivers/mmc/host/sdhci-sprd.c 466 */;
	struct mmc_request *cocci_id/* drivers/mmc/host/sdhci-sprd.c 397 */;
	struct sdhci_ops cocci_id/* drivers/mmc/host/sdhci-sprd.c 382 */;
	int cocci_id/* drivers/mmc/host/sdhci-sprd.c 352 */;
	bool cocci_id/* drivers/mmc/host/sdhci-sprd.c 262 */;
	u32 cocci_id/* drivers/mmc/host/sdhci-sprd.c 218 */;
	struct sdhci_sprd_host *cocci_id/* drivers/mmc/host/sdhci-sprd.c 217 */;
	unsigned int cocci_id/* drivers/mmc/host/sdhci-sprd.c 215 */;
	struct sdhci_host *cocci_id/* drivers/mmc/host/sdhci-sprd.c 214 */;
	void cocci_id/* drivers/mmc/host/sdhci-sprd.c 214 */;
	u8 cocci_id/* drivers/mmc/host/sdhci-sprd.c 142 */;
}
