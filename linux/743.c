cocci_test_suite() {
	u32 cocci_id/* drivers/pci/controller/dwc/pci-layerscape.c 96 */;
	void cocci_id/* drivers/pci/controller/dwc/pci-layerscape.c 68 */;
	bool cocci_id/* drivers/pci/controller/dwc/pci-layerscape.c 56 */;
	struct ls_pcie {
		struct dw_pcie *pci;
		void __iomem *lut;
		struct regmap *scfg;
		const struct ls_pcie_drvdata *drvdata;
		int index;
	} cocci_id/* drivers/pci/controller/dwc/pci-layerscape.c 46 */;
	struct ls_pcie_drvdata {
		u32 lut_offset;
		u32 ltssm_shift;
		u32 lut_dbg;
		const struct dw_pcie_host_ops *ops;
		const struct dw_pcie_ops *dw_pcie_ops;
	} cocci_id/* drivers/pci/controller/dwc/pci-layerscape.c 38 */;
	struct platform_driver cocci_id/* drivers/pci/controller/dwc/pci-layerscape.c 336 */;
	struct resource *cocci_id/* drivers/pci/controller/dwc/pci-layerscape.c 299 */;
	struct platform_device *cocci_id/* drivers/pci/controller/dwc/pci-layerscape.c 294 */;
	int __init cocci_id/* drivers/pci/controller/dwc/pci-layerscape.c 276 */;
	const struct of_device_id cocci_id/* drivers/pci/controller/dwc/pci-layerscape.c 263 */[];
	const struct ls_pcie_drvdata cocci_id/* drivers/pci/controller/dwc/pci-layerscape.c 226 */;
	const struct dw_pcie_ops cocci_id/* drivers/pci/controller/dwc/pci-layerscape.c 218 */;
	const struct dw_pcie_host_ops cocci_id/* drivers/pci/controller/dwc/pci-layerscape.c 208 */;
	struct device_node *cocci_id/* drivers/pci/controller/dwc/pci-layerscape.c 189 */;
	u32 cocci_id/* drivers/pci/controller/dwc/pci-layerscape.c 163 */[2];
	struct device *cocci_id/* drivers/pci/controller/dwc/pci-layerscape.c 162 */;
	struct ls_pcie *cocci_id/* drivers/pci/controller/dwc/pci-layerscape.c 161 */;
	struct dw_pcie *cocci_id/* drivers/pci/controller/dwc/pci-layerscape.c 160 */;
	struct pcie_port *cocci_id/* drivers/pci/controller/dwc/pci-layerscape.c 158 */;
	int cocci_id/* drivers/pci/controller/dwc/pci-layerscape.c 158 */;
}
