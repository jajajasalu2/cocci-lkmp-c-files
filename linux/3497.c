cocci_test_suite() {
	struct sdhci_omap_host {
		char *version;
		void __iomem *base;
		struct device *dev;
		struct regulator *pbias;
		bool pbias_enabled;
		struct sdhci_host *host;
		u8 bus_mode;
		u8 power_mode;
		u8 timing;
		u8 flags;
		struct pinctrl *pinctrl;
		struct pinctrl_state **pinctrl_state;
		bool is_tuning;
	} cocci_id/* drivers/mmc/host/sdhci-omap.c 94 */;
	struct pinctrl_state **cocci_id/* drivers/mmc/host/sdhci-omap.c 936 */;
	struct pinctrl_state *cocci_id/* drivers/mmc/host/sdhci-omap.c 935 */;
	u32 *cocci_id/* drivers/mmc/host/sdhci-omap.c 933 */;
	struct device *cocci_id/* drivers/mmc/host/sdhci-omap.c 930 */;
	char cocci_id/* drivers/mmc/host/sdhci-omap.c 905 */[20];
	char *cocci_id/* drivers/mmc/host/sdhci-omap.c 899 */;
	const struct of_device_id cocci_id/* drivers/mmc/host/sdhci-omap.c 891 */[];
	struct sdhci_omap_data {
		u32 offset;
		u8 flags;
	} cocci_id/* drivers/mmc/host/sdhci-omap.c 89 */;
	const struct sdhci_omap_data cocci_id/* drivers/mmc/host/sdhci-omap.c 886 */;
	const struct sdhci_pltfm_data cocci_id/* drivers/mmc/host/sdhci-omap.c 869 */;
	struct regulator *cocci_id/* drivers/mmc/host/sdhci-omap.c 844 */;
	struct sdhci_ops cocci_id/* drivers/mmc/host/sdhci-omap.c 826 */;
	unsigned short cocci_id/* drivers/mmc/host/sdhci-omap.c 674 */;
	unsigned long cocci_id/* drivers/mmc/host/sdhci-omap.c 659 */;
	unsigned int cocci_id/* drivers/mmc/host/sdhci-omap.c 626 */;
	u16 cocci_id/* drivers/mmc/host/sdhci-omap.c 625 */;
	struct sdhci_pltfm_host *cocci_id/* drivers/mmc/host/sdhci-omap.c 625 */;
	struct sdhci_omap_host *cocci_id/* drivers/mmc/host/sdhci-omap.c 467 */;
	struct sdhci_host *cocci_id/* drivers/mmc/host/sdhci-omap.c 465 */;
	u32 cocci_id/* drivers/mmc/host/sdhci-omap.c 463 */;
	struct mmc_host *cocci_id/* drivers/mmc/host/sdhci-omap.c 461 */;
	int cocci_id/* drivers/mmc/host/sdhci-omap.c 461 */;
	u8 cocci_id/* drivers/mmc/host/sdhci-omap.c 289 */;
	struct mmc_ios *cocci_id/* drivers/mmc/host/sdhci-omap.c 285 */;
	struct thermal_zone_device *cocci_id/* drivers/mmc/host/sdhci-omap.c 283 */;
	bool cocci_id/* drivers/mmc/host/sdhci-omap.c 215 */;
	ktime_t cocci_id/* drivers/mmc/host/sdhci-omap.c 197 */;
	unsigned char cocci_id/* drivers/mmc/host/sdhci-omap.c 194 */;
	void cocci_id/* drivers/mmc/host/sdhci-omap.c 193 */;
	struct platform_driver cocci_id/* drivers/mmc/host/sdhci-omap.c 1178 */;
	void cocci_id/* drivers/mmc/host/sdhci-omap.c 111 */(struct sdhci_omap_host *omap_host);
	const struct soc_device_attribute *cocci_id/* drivers/mmc/host/sdhci-omap.c 1039 */;
	struct sdhci_omap_data *cocci_id/* drivers/mmc/host/sdhci-omap.c 1038 */;
	const struct of_device_id *cocci_id/* drivers/mmc/host/sdhci-omap.c 1037 */;
	struct platform_device *cocci_id/* drivers/mmc/host/sdhci-omap.c 1028 */;
	const struct soc_device_attribute cocci_id/* drivers/mmc/host/sdhci-omap.c 1018 */[];
}
