cocci_test_suite() {
	struct dw_edma *cocci_id/* drivers/dma/dw-edma/dw-edma-pcie.c 64 */;
	struct dw_edma_chip *cocci_id/* drivers/dma/dw-edma/dw-edma-pcie.c 62 */;
	struct device *cocci_id/* drivers/dma/dw-edma/dw-edma-pcie.c 61 */;
	const struct dw_edma_pcie_data *cocci_id/* drivers/dma/dw-edma/dw-edma-pcie.c 60 */;
	void *cocci_id/* drivers/dma/dw-edma/dw-edma-pcie.c 60 */;
	const struct pci_device_id *cocci_id/* drivers/dma/dw-edma/dw-edma-pcie.c 58 */;
	struct pci_dev *cocci_id/* drivers/dma/dw-edma/dw-edma-pcie.c 57 */;
	int cocci_id/* drivers/dma/dw-edma/dw-edma-pcie.c 57 */;
	const struct dw_edma_pcie_data cocci_id/* drivers/dma/dw-edma/dw-edma-pcie.c 38 */;
	struct pci_driver cocci_id/* drivers/dma/dw-edma/dw-edma-pcie.c 218 */;
	const struct pci_device_id cocci_id/* drivers/dma/dw-edma/dw-edma-pcie.c 212 */[];
	void cocci_id/* drivers/dma/dw-edma/dw-edma-pcie.c 198 */;
	struct dw_edma_pcie_data {
		enum pci_barno rg_bar;
		off_t rg_off;
		size_t rg_sz;
		enum pci_barno ll_bar;
		off_t ll_off;
		size_t ll_sz;
		enum pci_barno dt_bar;
		off_t dt_off;
		size_t dt_sz;
		u32 version;
		enum dw_edma_mode mode;
		u8 irqs;
	} cocci_id/* drivers/dma/dw-edma/dw-edma-pcie.c 19 */;
}
