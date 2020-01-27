cocci_test_suite() {
	struct platform_driver cocci_id/* drivers/pci/controller/dwc/pcie-artpec6.c 609 */;
	const struct artpec_pcie_of_data cocci_id/* drivers/pci/controller/dwc/pcie-artpec6.c 574 */;
	struct artpec_pcie_of_data *cocci_id/* drivers/pci/controller/dwc/pcie-artpec6.c 502 */;
	enum dw_pcie_device_mode cocci_id/* drivers/pci/controller/dwc/pcie-artpec6.c 496 */;
	enum artpec_pcie_variants cocci_id/* drivers/pci/controller/dwc/pcie-artpec6.c 495 */;
	const struct artpec_pcie_of_data *cocci_id/* drivers/pci/controller/dwc/pcie-artpec6.c 494 */;
	const struct of_device_id *cocci_id/* drivers/pci/controller/dwc/pcie-artpec6.c 493 */;
	struct dw_pcie *cocci_id/* drivers/pci/controller/dwc/pcie-artpec6.c 459 */;
	struct device *cocci_id/* drivers/pci/controller/dwc/pcie-artpec6.c 458 */;
	struct resource *cocci_id/* drivers/pci/controller/dwc/pcie-artpec6.c 457 */;
	struct dw_pcie_ep *cocci_id/* drivers/pci/controller/dwc/pcie-artpec6.c 456 */;
	struct platform_device *cocci_id/* drivers/pci/controller/dwc/pcie-artpec6.c 453 */;
	struct artpec6_pcie *cocci_id/* drivers/pci/controller/dwc/pcie-artpec6.c 452 */;
	int cocci_id/* drivers/pci/controller/dwc/pcie-artpec6.c 452 */;
	const struct of_device_id cocci_id/* drivers/pci/controller/dwc/pcie-artpec6.c 45 */[];
	const struct dw_pcie_ep_ops cocci_id/* drivers/pci/controller/dwc/pcie-artpec6.c 447 */;
	u16 cocci_id/* drivers/pci/controller/dwc/pcie-artpec6.c 430 */;
	enum pci_epc_irq_type cocci_id/* drivers/pci/controller/dwc/pcie-artpec6.c 430 */;
	u8 cocci_id/* drivers/pci/controller/dwc/pcie-artpec6.c 429 */;
	enum pci_barno cocci_id/* drivers/pci/controller/dwc/pcie-artpec6.c 417 */;
	struct artpec_pcie_of_data {
		enum artpec_pcie_variants variant;
		enum dw_pcie_device_mode mode;
	} cocci_id/* drivers/pci/controller/dwc/pcie-artpec6.c 40 */;
	struct pcie_port *cocci_id/* drivers/pci/controller/dwc/pcie-artpec6.c 390 */;
	const struct dw_pcie_host_ops cocci_id/* drivers/pci/controller/dwc/pcie-artpec6.c 382 */;
	u32 cocci_id/* drivers/pci/controller/dwc/pcie-artpec6.c 324 */;
	void cocci_id/* drivers/pci/controller/dwc/pcie-artpec6.c 322 */;
	struct artpec6_pcie {
		struct dw_pcie *pci;
		struct regmap *regmap;
		void __iomem *phy_base;
		enum artpec_pcie_variants variant;
		enum dw_pcie_device_mode mode;
	} cocci_id/* drivers/pci/controller/dwc/pcie-artpec6.c 32 */;
	enum artpec_pcie_variants{ARTPEC6, ARTPEC7,} cocci_id/* drivers/pci/controller/dwc/pcie-artpec6.c 27 */;
	bool cocci_id/* drivers/pci/controller/dwc/pcie-artpec6.c 255 */;
	unsigned int cocci_id/* drivers/pci/controller/dwc/pcie-artpec6.c 157 */;
	const struct dw_pcie_ops cocci_id/* drivers/pci/controller/dwc/pcie-artpec6.c 146 */;
	u64 cocci_id/* drivers/pci/controller/dwc/pcie-artpec6.c 107 */;
}
