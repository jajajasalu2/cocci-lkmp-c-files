cocci_test_suite() {
	struct platform_driver cocci_id/* drivers/mmc/host/sdhci-s3c.c 781 */;
	struct sdhci_s3c_drv_data cocci_id/* drivers/mmc/host/sdhci-s3c.c 768 */;
	kernel_ulong_t cocci_id/* drivers/mmc/host/sdhci-s3c.c 761 */;
	const struct platform_device_id cocci_id/* drivers/mmc/host/sdhci-s3c.c 758 */[];
	char cocci_id/* drivers/mmc/host/sdhci-s3c.c 538 */[14];
	struct sdhci_s3c cocci_id/* drivers/mmc/host/sdhci-s3c.c 496 */;
	struct resource *cocci_id/* drivers/mmc/host/sdhci-s3c.c 484 */;
	const struct of_device_id *cocci_id/* drivers/mmc/host/sdhci-s3c.c 468 */;
	struct platform_device *cocci_id/* drivers/mmc/host/sdhci-s3c.c 464 */;
	struct sdhci_s3c_drv_data *cocci_id/* drivers/mmc/host/sdhci-s3c.c 463 */;
	const struct of_device_id cocci_id/* drivers/mmc/host/sdhci-s3c.c 461 */[];
	u32 cocci_id/* drivers/mmc/host/sdhci-s3c.c 428 */;
	struct device_node *cocci_id/* drivers/mmc/host/sdhci-s3c.c 427 */;
	struct s3c_sdhci_platdata *cocci_id/* drivers/mmc/host/sdhci-s3c.c 425 */;
	struct sdhci_ops cocci_id/* drivers/mmc/host/sdhci-s3c.c 414 */;
	u16 cocci_id/* drivers/mmc/host/sdhci-s3c.c 369 */;
	struct device *cocci_id/* drivers/mmc/host/sdhci-s3c.c 367 */;
	void cocci_id/* drivers/mmc/host/sdhci-s3c.c 364 */;
	struct clk *cocci_id/* drivers/mmc/host/sdhci-s3c.c 327 */;
	int cocci_id/* drivers/mmc/host/sdhci-s3c.c 324 */;
	unsigned long cocci_id/* drivers/mmc/host/sdhci-s3c.c 323 */;
	struct sdhci_s3c *cocci_id/* drivers/mmc/host/sdhci-s3c.c 322 */;
	struct sdhci_host *cocci_id/* drivers/mmc/host/sdhci-s3c.c 320 */;
	unsigned int cocci_id/* drivers/mmc/host/sdhci-s3c.c 320 */;
	struct sdhci_s3c_drv_data {
		unsigned int sdhci_quirks;
		bool no_divider;
	} cocci_id/* drivers/mmc/host/sdhci-s3c.c 137 */;
	struct sdhci_s3c {
		struct sdhci_host *host;
		struct platform_device *pdev;
		struct resource *ioarea;
		struct s3c_sdhci_platdata *pdata;
		int cur_clk;
		int ext_cd_irq;
		int ext_cd_gpio;
		struct clk *clk_io;
		struct clk *clk_bus[MAX_BUS_CLK];
		unsigned long clk_rates[MAX_BUS_CLK];
		bool no_divider;
	} cocci_id/* drivers/mmc/host/sdhci-s3c.c 113 */;
}
