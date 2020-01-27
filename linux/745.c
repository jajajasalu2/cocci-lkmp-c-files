cocci_test_suite() {
	void __iomem *cocci_id/* drivers/pci/controller/dwc/pcie-hisi.c 82 */;
	struct resource *cocci_id/* drivers/pci/controller/dwc/pcie-hisi.c 81 */;
	struct acpi_pci_root *cocci_id/* drivers/pci/controller/dwc/pcie-hisi.c 80 */;
	struct acpi_device *cocci_id/* drivers/pci/controller/dwc/pcie-hisi.c 79 */;
	struct pci_config_window *cocci_id/* drivers/pci/controller/dwc/pcie-hisi.c 76 */;
	struct pci_bus *cocci_id/* drivers/pci/controller/dwc/pcie-hisi.c 62 */;
	unsigned int cocci_id/* drivers/pci/controller/dwc/pcie-hisi.c 62 */;
	struct platform_driver cocci_id/* drivers/pci/controller/dwc/pcie-hisi.c 387 */;
	void *cocci_id/* drivers/pci/controller/dwc/pcie-hisi.c 378 */;
	const struct of_device_id cocci_id/* drivers/pci/controller/dwc/pcie-hisi.c 375 */[];
	struct pci_ecam_ops *cocci_id/* drivers/pci/controller/dwc/pcie-hisi.c 338 */;
	struct pcie_soc_ops cocci_id/* drivers/pci/controller/dwc/pcie-hisi.c 305 */;
	const struct dw_pcie_ops cocci_id/* drivers/pci/controller/dwc/pcie-hisi.c 258 */;
	u32 cocci_id/* drivers/pci/controller/dwc/pcie-hisi.c 235 */;
	struct device *cocci_id/* drivers/pci/controller/dwc/pcie-hisi.c 233 */;
	struct pcie_port *cocci_id/* drivers/pci/controller/dwc/pcie-hisi.c 232 */;
	struct dw_pcie *cocci_id/* drivers/pci/controller/dwc/pcie-hisi.c 231 */;
	struct platform_device *cocci_id/* drivers/pci/controller/dwc/pcie-hisi.c 229 */;
	struct hisi_pcie *cocci_id/* drivers/pci/controller/dwc/pcie-hisi.c 228 */;
	int cocci_id/* drivers/pci/controller/dwc/pcie-hisi.c 228 */;
	const struct dw_pcie_host_ops cocci_id/* drivers/pci/controller/dwc/pcie-hisi.c 223 */;
	u16 __force *cocci_id/* drivers/pci/controller/dwc/pcie-hisi.c 160 */;
	u8 __force *cocci_id/* drivers/pci/controller/dwc/pcie-hisi.c 158 */;
	u32 *cocci_id/* drivers/pci/controller/dwc/pcie-hisi.c 146 */;
	struct hisi_pcie {
		struct dw_pcie *pci;
		struct regmap *subctrl;
		u32 port_id;
		const struct pcie_soc_ops *soc_ops;
	} cocci_id/* drivers/pci/controller/dwc/pcie-hisi.c 137 */;
	struct pcie_soc_ops {
		int (*hisi_pcie_link_up)(struct hisi_pcie *hisi_pcie);
	} cocci_id/* drivers/pci/controller/dwc/pcie-hisi.c 133 */;
	struct hisi_pcie cocci_id/* drivers/pci/controller/dwc/pcie-hisi.c 131 */;
	struct pci_ecam_ops cocci_id/* drivers/pci/controller/dwc/pcie-hisi.c 107 */;
}
