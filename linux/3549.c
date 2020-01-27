cocci_test_suite() {
	struct sdhci_am654_driver_data {
		const struct sdhci_pltfm_data *pdata;
		u32 flags;
#define IOMUX_PRESENT (1 << 0)
#define FREQSEL_2_BIT (1 << 1)
#define STRBSEL_4_BIT (1 << 2)
#define DLL_PRESENT (1 << 3)
					} cocci_id/* drivers/mmc/host/sdhci_am654.c 92 */;
	struct sdhci_am654_data {
		struct regmap *base;
		int otap_del_sel;
		int trm_icp;
		int drv_strength;
		bool dll_on;
		int strb_sel;
		u32 flags;
	} cocci_id/* drivers/mmc/host/sdhci_am654.c 82 */;
	struct regmap_config cocci_id/* drivers/mmc/host/sdhci_am654.c 75 */;
	struct platform_driver cocci_id/* drivers/mmc/host/sdhci_am654.c 583 */;
	void __iomem *cocci_id/* drivers/mmc/host/sdhci_am654.c 497 */;
	struct clk *cocci_id/* drivers/mmc/host/sdhci_am654.c 495 */;
	struct resource *cocci_id/* drivers/mmc/host/sdhci_am654.c 494 */;
	const struct of_device_id *cocci_id/* drivers/mmc/host/sdhci_am654.c 492 */;
	const struct sdhci_am654_driver_data *cocci_id/* drivers/mmc/host/sdhci_am654.c 489 */;
	const struct of_device_id cocci_id/* drivers/mmc/host/sdhci_am654.c 471 */[];
	struct device *cocci_id/* drivers/mmc/host/sdhci_am654.c 422 */;
	struct sdhci_am654_data *cocci_id/* drivers/mmc/host/sdhci_am654.c 420 */;
	struct platform_device *cocci_id/* drivers/mmc/host/sdhci_am654.c 419 */;
	struct sdhci_pltfm_host *cocci_id/* drivers/mmc/host/sdhci_am654.c 362 */;
	struct cqhci_host cocci_id/* drivers/mmc/host/sdhci_am654.c 343 */;
	struct cqhci_host *cocci_id/* drivers/mmc/host/sdhci_am654.c 340 */;
	struct sdhci_host *cocci_id/* drivers/mmc/host/sdhci_am654.c 338 */;
	int cocci_id/* drivers/mmc/host/sdhci_am654.c 338 */;
	const struct cqhci_host_ops cocci_id/* drivers/mmc/host/sdhci_am654.c 332 */;
	struct mmc_host *cocci_id/* drivers/mmc/host/sdhci_am654.c 327 */;
	void cocci_id/* drivers/mmc/host/sdhci_am654.c 327 */;
	u32 cocci_id/* drivers/mmc/host/sdhci_am654.c 266 */;
	const struct sdhci_am654_driver_data cocci_id/* drivers/mmc/host/sdhci_am654.c 261 */;
	const struct sdhci_pltfm_data cocci_id/* drivers/mmc/host/sdhci_am654.c 254 */;
	struct sdhci_ops cocci_id/* drivers/mmc/host/sdhci_am654.c 243 */;
	u8 cocci_id/* drivers/mmc/host/sdhci_am654.c 222 */;
	unsigned short cocci_id/* drivers/mmc/host/sdhci_am654.c 212 */;
	unsigned char cocci_id/* drivers/mmc/host/sdhci_am654.c 211 */;
	unsigned int cocci_id/* drivers/mmc/host/sdhci_am654.c 101 */;
}
