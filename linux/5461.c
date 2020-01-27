cocci_test_suite() {
	struct pxa_spi_info *cocci_id/* drivers/spi/spi-pxa2xx-pci.c 74 */;
	struct pci_dev *cocci_id/* drivers/spi/spi-pxa2xx-pci.c 74 */;
	int cocci_id/* drivers/spi/spi-pxa2xx-pci.c 74 */;
	struct dw_dma_slave *cocci_id/* drivers/spi/spi-pxa2xx-pci.c 65 */;
	bool cocci_id/* drivers/spi/spi-pxa2xx-pci.c 63 */;
	struct dma_chan *cocci_id/* drivers/spi/spi-pxa2xx-pci.c 63 */;
	void *cocci_id/* drivers/spi/spi-pxa2xx-pci.c 63 */;
	struct dw_dma_slave cocci_id/* drivers/spi/spi-pxa2xx-pci.c 54 */;
	struct pci_driver cocci_id/* drivers/spi/spi-pxa2xx-pci.c 293 */;
	const struct pci_device_id cocci_id/* drivers/spi/spi-pxa2xx-pci.c 280 */[];
	struct pxa2xx_spi_controller *cocci_id/* drivers/spi/spi-pxa2xx-pci.c 272 */;
	struct pxa_spi_info {
		enum pxa_ssp_type type;
		int port_id;
		int num_chipselect;
		unsigned long max_clk_rate;
		bool (*dma_filter)(struct dma_chan *chan, void *param);
		void *tx_param;
		void *rx_param;
		int dma_burst_size;
		int (*setup)(struct pci_dev *pdev, struct pxa_spi_info *c);
	} cocci_id/* drivers/spi/spi-pxa2xx-pci.c 27 */;
	void cocci_id/* drivers/spi/spi-pxa2xx-pci.c 269 */;
	char cocci_id/* drivers/spi/spi-pxa2xx-pci.c 206 */[40];
	struct ssp_device *cocci_id/* drivers/spi/spi-pxa2xx-pci.c 204 */;
	struct pxa2xx_spi_controller cocci_id/* drivers/spi/spi-pxa2xx-pci.c 203 */;
	struct platform_device *cocci_id/* drivers/spi/spi-pxa2xx-pci.c 202 */;
	struct platform_device_info cocci_id/* drivers/spi/spi-pxa2xx-pci.c 200 */;
	const struct pci_device_id *cocci_id/* drivers/spi/spi-pxa2xx-pci.c 198 */;
	enum{PORT_QUARK_X1000, PORT_BYT, PORT_MRFLD, PORT_BSW0, PORT_BSW1, PORT_BSW2, PORT_CE4100, PORT_LPT,} cocci_id/* drivers/spi/spi-pxa2xx-pci.c 16 */;
	struct pxa_spi_info cocci_id/* drivers/spi/spi-pxa2xx-pci.c 142 */[];
}
