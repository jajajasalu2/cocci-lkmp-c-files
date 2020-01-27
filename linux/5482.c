cocci_test_suite() {
	struct spi_pci_desc *cocci_id/* drivers/spi/spi-dw-pci.c 47 */;
	struct dw_spi *cocci_id/* drivers/spi/spi-dw-pci.c 46 */;
	const struct pci_device_id *cocci_id/* drivers/spi/spi-dw-pci.c 44 */;
	struct pci_dev *cocci_id/* drivers/spi/spi-dw-pci.c 44 */;
	int cocci_id/* drivers/spi/spi-dw-pci.c 44 */;
	struct spi_pci_desc cocci_id/* drivers/spi/spi-dw-pci.c 38 */;
	struct spi_pci_desc {
		int (*setup)(struct dw_spi *);
		u16 num_cs;
		u16 bus_num;
		u32 max_freq;
	} cocci_id/* drivers/spi/spi-dw-pci.c 19 */;
	struct pci_driver cocci_id/* drivers/spi/spi-dw-pci.c 161 */;
	const struct pci_device_id cocci_id/* drivers/spi/spi-dw-pci.c 142 */[];
	struct device *cocci_id/* drivers/spi/spi-dw-pci.c 132 */;
	void cocci_id/* drivers/spi/spi-dw-pci.c 113 */;
}
