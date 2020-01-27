cocci_test_suite() {
	struct mmc_ios *cocci_id/* drivers/mmc/host/sdhci-xenon-phy.c 776 */;
	struct resource cocci_id/* drivers/mmc/host/sdhci-xenon-phy.c 656 */;
	const char *cocci_id/* drivers/mmc/host/sdhci-xenon-phy.c 655 */;
	struct device_node *cocci_id/* drivers/mmc/host/sdhci-xenon-phy.c 651 */;
	int cocci_id/* drivers/mmc/host/sdhci-xenon-phy.c 650 */;
	u32 cocci_id/* drivers/mmc/host/sdhci-xenon-phy.c 381 */;
	bool cocci_id/* drivers/mmc/host/sdhci-xenon-phy.c 358 */;
	ktime_t cocci_id/* drivers/mmc/host/sdhci-xenon-phy.c 326 */;
	struct xenon_emmc_phy_regs *cocci_id/* drivers/mmc/host/sdhci-xenon-phy.c 325 */;
	struct xenon_emmc_phy_params *cocci_id/* drivers/mmc/host/sdhci-xenon-phy.c 284 */;
	struct xenon_priv *cocci_id/* drivers/mmc/host/sdhci-xenon-phy.c 283 */;
	struct sdhci_pltfm_host *cocci_id/* drivers/mmc/host/sdhci-xenon-phy.c 282 */;
	unsigned char cocci_id/* drivers/mmc/host/sdhci-xenon-phy.c 280 */;
	struct sdhci_host *cocci_id/* drivers/mmc/host/sdhci-xenon-phy.c 279 */;
	void cocci_id/* drivers/mmc/host/sdhci-xenon-phy.c 279 */;
	struct xenon_emmc_phy_params {
		bool slow_mode;
		u8 znr;
		u8 zpr;
		u8 nr_tun_times;
		u8 tun_step_divider;
		struct soc_pad_ctrl pad_ctrl;
	} cocci_id/* drivers/mmc/host/sdhci-xenon-phy.c 186 */;
	struct xenon_emmc_phy_regs cocci_id/* drivers/mmc/host/sdhci-xenon-phy.c 161 */;
	struct soc_pad_ctrl {
		void __iomem *reg;
		enum soc_pad_ctrl_type pad_type;
		void (*set_soc_pad)(struct sdhci_host *host,
				    unsigned char signal_voltage);
	} cocci_id/* drivers/mmc/host/sdhci-xenon-phy.c 151 */;
	enum soc_pad_ctrl_type{SOC_PAD_SD, SOC_PAD_FIXED_1_8V,} cocci_id/* drivers/mmc/host/sdhci-xenon-phy.c 146 */;
	enum xenon_phy_type_enum{EMMC_5_0_PHY, EMMC_5_1_PHY, NR_PHY_TYPES,} cocci_id/* drivers/mmc/host/sdhci-xenon-phy.c 140 */;
	const char *constcocci_id/* drivers/mmc/host/sdhci-xenon-phy.c 135 */[];
	struct xenon_emmc_phy_regs {
		u16 timing_adj;
		u16 func_ctrl;
		u16 pad_ctrl;
		u16 pad_ctrl2;
		u16 dll_ctrl;
		u16 logic_timing_adj;
		u32 dll_update;
		u32 logic_timing_val;
	} cocci_id/* drivers/mmc/host/sdhci-xenon-phy.c 116 */;
}
