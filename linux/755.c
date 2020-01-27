cocci_test_suite() {
	struct pci_ecam_ops cocci_id/* drivers/pci/controller/dwc/pcie-al.c 83 */;
	long cocci_id/* drivers/pci/controller/dwc/pcie-al.c 71 */;
	struct resource *cocci_id/* drivers/pci/controller/dwc/pcie-al.c 49 */;
	struct al_pcie_acpi *cocci_id/* drivers/pci/controller/dwc/pcie-al.c 48 */;
	struct acpi_pci_root *cocci_id/* drivers/pci/controller/dwc/pcie-al.c 47 */;
	struct acpi_device *cocci_id/* drivers/pci/controller/dwc/pcie-al.c 46 */;
	struct platform_driver cocci_id/* drivers/pci/controller/dwc/pcie-al.c 448 */;
	const struct of_device_id cocci_id/* drivers/pci/controller/dwc/pcie-al.c 440 */[];
	struct pci_config_window *cocci_id/* drivers/pci/controller/dwc/pcie-al.c 43 */;
	const struct dw_pcie_ops cocci_id/* drivers/pci/controller/dwc/pcie-al.c 383 */;
	struct device *cocci_id/* drivers/pci/controller/dwc/pcie-al.c 369 */;
	struct platform_device *cocci_id/* drivers/pci/controller/dwc/pcie-al.c 367 */;
	struct pcie_port *cocci_id/* drivers/pci/controller/dwc/pcie-al.c 366 */;
	int cocci_id/* drivers/pci/controller/dwc/pcie-al.c 366 */;
	const struct dw_pcie_host_ops cocci_id/* drivers/pci/controller/dwc/pcie-al.c 360 */;
	struct dw_pcie *cocci_id/* drivers/pci/controller/dwc/pcie-al.c 343 */;
	u8 cocci_id/* drivers/pci/controller/dwc/pcie-al.c 301 */;
	u32 cocci_id/* drivers/pci/controller/dwc/pcie-al.c 300 */;
	void cocci_id/* drivers/pci/controller/dwc/pcie-al.c 295 */;
	u32 *cocci_id/* drivers/pci/controller/dwc/pcie-al.c 253 */;
	uintptr_t cocci_id/* drivers/pci/controller/dwc/pcie-al.c 235 */;
	struct al_pcie_target_bus_cfg *cocci_id/* drivers/pci/controller/dwc/pcie-al.c 229 */;
	unsigned int cocci_id/* drivers/pci/controller/dwc/pcie-al.c 226 */;
	struct al_pcie *cocci_id/* drivers/pci/controller/dwc/pcie-al.c 225 */;
	void __iomem *cocci_id/* drivers/pci/controller/dwc/pcie-al.c 225 */;
	struct pci_bus *cocci_id/* drivers/pci/controller/dwc/pcie-al.c 22 */;
	struct al_pcie_acpi {
		void __iomem *dbi_base;
	} cocci_id/* drivers/pci/controller/dwc/pcie-al.c 18 */;
	unsigned int *cocci_id/* drivers/pci/controller/dwc/pcie-al.c 161 */;
	struct al_pcie {
		struct dw_pcie *pci;
		void __iomem *controller_base;
		struct device *dev;
		resource_size_t ecam_size;
		unsigned int controller_rev_id;
		struct al_pcie_reg_offsets reg_offsets;
		struct al_pcie_target_bus_cfg target_bus_cfg;
	} cocci_id/* drivers/pci/controller/dwc/pcie-al.c 136 */;
	struct al_pcie_target_bus_cfg {
		u8 reg_val;
		u8 reg_mask;
		u8 ecam_mask;
	} cocci_id/* drivers/pci/controller/dwc/pcie-al.c 130 */;
	struct al_pcie_reg_offsets {
		unsigned int ob_ctrl;
	} cocci_id/* drivers/pci/controller/dwc/pcie-al.c 126 */;
}
