cocci_test_suite() {
	struct sdhci_arasan_clk_data {
		struct clk_hw sdcardclk_hw;
		struct clk *sdcardclk;
		struct clk_hw sampleclk_hw;
		struct clk *sampleclk;
		int clk_phase_in[MMC_TIMING_MMC_HS400 + 1];
		int clk_phase_out[MMC_TIMING_MMC_HS400 + 1];
		void (*set_clk_delays)(struct sdhci_host *host);
		void *clk_of_data;
	} cocci_id/* drivers/mmc/host/sdhci-of-arasan.c 90 */;
	int cocci_id/* drivers/mmc/host/sdhci-of-arasan.c 898 */[MMC_TIMING_MMC_HS400 + 1];
	int cocci_id/* drivers/mmc/host/sdhci-of-arasan.c 888 */;
	u32 cocci_id/* drivers/mmc/host/sdhci-of-arasan.c 887 */;
	int *cocci_id/* drivers/mmc/host/sdhci-of-arasan.c 886 */;
	struct sdhci_arasan_clk_data *cocci_id/* drivers/mmc/host/sdhci-of-arasan.c 884 */;
	struct device *cocci_id/* drivers/mmc/host/sdhci-of-arasan.c 883 */;
	void cocci_id/* drivers/mmc/host/sdhci-of-arasan.c 883 */;
	int cocci_id/* drivers/mmc/host/sdhci-of-arasan.c 856 */[2];
	struct device_node *cocci_id/* drivers/mmc/host/sdhci-of-arasan.c 854 */;
	const char *cocci_id/* drivers/mmc/host/sdhci-of-arasan.c 852 */;
	unsigned int cocci_id/* drivers/mmc/host/sdhci-of-arasan.c 852 */;
	const struct sdhci_arasan_soc_ctl_map *cocci_id/* drivers/mmc/host/sdhci-of-arasan.c 820 */;
	struct sdhci_arasan_soc_ctl_map {
		struct sdhci_arasan_soc_ctl_field baseclkfreq;
		struct sdhci_arasan_soc_ctl_field clockmultiplier;
		bool hiword_update;
	} cocci_id/* drivers/mmc/host/sdhci-of-arasan.c 73 */;
	const struct clk_ops cocci_id/* drivers/mmc/host/sdhci-of-arasan.c 612 */;
	struct sdhci_arasan_data cocci_id/* drivers/mmc/host/sdhci-of-arasan.c 606 */;
	struct sdhci_arasan_clk_data cocci_id/* drivers/mmc/host/sdhci-of-arasan.c 604 */;
	struct clk_hw *cocci_id/* drivers/mmc/host/sdhci-of-arasan.c 599 */;
	unsigned long cocci_id/* drivers/mmc/host/sdhci-of-arasan.c 599 */;
	struct sdhci_arasan_soc_ctl_field {
		u32 reg;
		u16 width;
		s16 shift;
	} cocci_id/* drivers/mmc/host/sdhci-of-arasan.c 56 */;
	const struct of_device_id cocci_id/* drivers/mmc/host/sdhci-of-arasan.c 527 */[];
	struct sdhci_arasan_of_data cocci_id/* drivers/mmc/host/sdhci-of-arasan.c 422 */;
	const struct sdhci_pltfm_data cocci_id/* drivers/mmc/host/sdhci-of-arasan.c 410 */;
	const struct sdhci_ops cocci_id/* drivers/mmc/host/sdhci-of-arasan.c 399 */;
	const struct cqhci_host_ops cocci_id/* drivers/mmc/host/sdhci-of-arasan.c 393 */;
	struct mmc_host *cocci_id/* drivers/mmc/host/sdhci-of-arasan.c 379 */;
	unsigned short cocci_id/* drivers/mmc/host/sdhci-of-arasan.c 329 */;
	unsigned char cocci_id/* drivers/mmc/host/sdhci-of-arasan.c 328 */;
	u8 cocci_id/* drivers/mmc/host/sdhci-of-arasan.c 291 */;
	struct mmc_ios *cocci_id/* drivers/mmc/host/sdhci-of-arasan.c 277 */;
	s16 cocci_id/* drivers/mmc/host/sdhci-of-arasan.c 179 */;
	u16 cocci_id/* drivers/mmc/host/sdhci-of-arasan.c 178 */;
	struct regmap *cocci_id/* drivers/mmc/host/sdhci-of-arasan.c 176 */;
	const struct sdhci_arasan_soc_ctl_field *cocci_id/* drivers/mmc/host/sdhci-of-arasan.c 171 */;
	const struct sdhci_arasan_soc_ctl_map cocci_id/* drivers/mmc/host/sdhci-of-arasan.c 146 */;
	struct sdhci_arasan_of_data {
		const struct sdhci_arasan_soc_ctl_map *soc_ctl_map;
		const struct sdhci_pltfm_data *pdata;
	} cocci_id/* drivers/mmc/host/sdhci-of-arasan.c 135 */;
	struct platform_driver cocci_id/* drivers/mmc/host/sdhci-of-arasan.c 1332 */;
	const struct zynqmp_eemi_ops *cocci_id/* drivers/mmc/host/sdhci-of-arasan.c 1237 */;
	struct sdhci_arasan_zynqmp_clk_data *cocci_id/* drivers/mmc/host/sdhci-of-arasan.c 1236 */;
	const struct sdhci_arasan_of_data *cocci_id/* drivers/mmc/host/sdhci-of-arasan.c 1160 */;
	struct sdhci_pltfm_host *cocci_id/* drivers/mmc/host/sdhci-of-arasan.c 1157 */;
	struct clk *cocci_id/* drivers/mmc/host/sdhci-of-arasan.c 1155 */;
	const struct of_device_id *cocci_id/* drivers/mmc/host/sdhci-of-arasan.c 1153 */;
	struct platform_device *cocci_id/* drivers/mmc/host/sdhci-of-arasan.c 1150 */;
	struct sdhci_arasan_data {
		struct sdhci_host *host;
		struct clk *clk_ahb;
		struct phy *phy;
		bool is_phy_on;
		bool has_cqe;
		struct sdhci_arasan_clk_data clk_data;
		struct regmap *soc_ctl_base;
		const struct sdhci_arasan_soc_ctl_map *soc_ctl_map;
		unsigned int quirks;
#define SDHCI_ARASAN_QUIRK_FORCE_CDTEST BIT(0)
#define SDHCI_ARASAN_QUIRK_CLOCK_UNSTABLE BIT(1)
			} cocci_id/* drivers/mmc/host/sdhci-of-arasan.c 115 */;
	bool cocci_id/* drivers/mmc/host/sdhci-of-arasan.c 1111 */;
	struct cqhci_host *cocci_id/* drivers/mmc/host/sdhci-of-arasan.c 1110 */;
	struct sdhci_host *cocci_id/* drivers/mmc/host/sdhci-of-arasan.c 1109 */;
	struct sdhci_arasan_data *cocci_id/* drivers/mmc/host/sdhci-of-arasan.c 1107 */;
	struct sdhci_arasan_zynqmp_clk_data {
		const struct zynqmp_eemi_ops *eemi_ops;
	} cocci_id/* drivers/mmc/host/sdhci-of-arasan.c 101 */;
	struct clk_init_data cocci_id/* drivers/mmc/host/sdhci-of-arasan.c 1008 */;
}
