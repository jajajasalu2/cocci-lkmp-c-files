cocci_test_suite() {
	struct mmci_dmae_next *cocci_id/* drivers/mmc/host/mmci.c 954 */;
	unsigned int *cocci_id/* drivers/mmc/host/mmci.c 938 */;
	unsigned long cocci_id/* drivers/mmc/host/mmci.c 873 */;
	struct dma_async_tx_descriptor *cocci_id/* drivers/mmc/host/mmci.c 871 */;
	struct dma_device *cocci_id/* drivers/mmc/host/mmci.c 870 */;
	struct dma_chan *cocci_id/* drivers/mmc/host/mmci.c 869 */;
	struct dma_slave_config cocci_id/* drivers/mmc/host/mmci.c 860 */;
	struct variant_data *cocci_id/* drivers/mmc/host/mmci.c 859 */;
	struct mmci_dmae_priv *cocci_id/* drivers/mmc/host/mmci.c 858 */;
	struct dma_async_tx_descriptor **cocci_id/* drivers/mmc/host/mmci.c 856 */;
	struct dma_chan **cocci_id/* drivers/mmc/host/mmci.c 855 */;
	struct mmci_host *cocci_id/* drivers/mmc/host/mmci.c 854 */;
	struct mmc_data *cocci_id/* drivers/mmc/host/mmci.c 854 */;
	int cocci_id/* drivers/mmc/host/mmci.c 854 */;
	struct device *cocci_id/* drivers/mmc/host/mmci.c 740 */;
	const char *cocci_id/* drivers/mmc/host/mmci.c 700 */;
	struct mmci_dmae_priv {
		struct dma_chan *cur;
		struct dma_chan *rx_channel;
		struct dma_chan *tx_channel;
		struct dma_async_tx_descriptor *desc_current;
		struct mmci_dmae_next next_data;
	} cocci_id/* drivers/mmc/host/mmci.c 690 */;
	struct mmci_dmae_next {
		struct dma_async_tx_descriptor *desc;
		struct dma_chan *chan;
	} cocci_id/* drivers/mmc/host/mmci.c 685 */;
	struct variant_data cocci_id/* drivers/mmc/host/mmci.c 52 */;
	unsigned int cocci_id/* drivers/mmc/host/mmci.c 50 */;
	void cocci_id/* drivers/mmc/host/mmci.c 46 */(struct mmci_host *host);
	struct mmc_host *cocci_id/* drivers/mmc/host/mmci.c 300 */;
	struct amba_driver cocci_id/* drivers/mmc/host/mmci.c 2287 */;
	const struct amba_id cocci_id/* drivers/mmc/host/mmci.c 2219 */[];
	unsigned long long cocci_id/* drivers/mmc/host/mmci.c 2094 */;
	struct mmci_host cocci_id/* drivers/mmc/host/mmci.c 1857 */;
	const struct amba_id *cocci_id/* drivers/mmc/host/mmci.c 1836 */;
	struct amba_device *cocci_id/* drivers/mmc/host/mmci.c 1835 */;
	struct device_node *cocci_id/* drivers/mmc/host/mmci.c 1800 */;
	struct mmc_host_ops cocci_id/* drivers/mmc/host/mmci.c 1790 */;
	struct mmci_platform_data *cocci_id/* drivers/mmc/host/mmci.c 1750 */;
	struct mmc_ios *cocci_id/* drivers/mmc/host/mmci.c 1631 */;
	irqreturn_t cocci_id/* drivers/mmc/host/mmci.c 1531 */;
	void *cocci_id/* drivers/mmc/host/mmci.c 1531 */;
	char *cocci_id/* drivers/mmc/host/mmci.c 1470 */;
	struct sg_mapping_iter *cocci_id/* drivers/mmc/host/mmci.c 1459 */;
	unsigned char cocci_id/* drivers/mmc/host/mmci.c 1394 */[4];
	bool cocci_id/* drivers/mmc/host/mmci.c 1290 */;
	void __iomem *cocci_id/* drivers/mmc/host/mmci.c 1289 */;
	u32 cocci_id/* drivers/mmc/host/mmci.c 1288 */;
	struct mmc_command *cocci_id/* drivers/mmc/host/mmci.c 1285 */;
	void cocci_id/* drivers/mmc/host/mmci.c 1284 */;
	struct mmc_request *cocci_id/* drivers/mmc/host/mmci.c 1051 */;
	struct mmci_host_ops cocci_id/* drivers/mmc/host/mmci.c 1000 */;
}