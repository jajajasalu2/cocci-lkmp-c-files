cocci_test_suite() {
	void cocci_id/* drivers/pci/controller/dwc/pcie-kirin.c 96 */;
	struct kirin_pcie {
		struct dw_pcie *pci;
		void __iomem *apb_base;
		void __iomem *phy_base;
		struct regmap *crgctrl;
		struct regmap *sysctrl;
		struct clk *apb_sys_clk;
		struct clk *apb_phy_clk;
		struct clk *phy_ref_clk;
		struct clk *pcie_aclk;
		struct clk *pcie_aux_clk;
		int gpio_id_reset;
	} cocci_id/* drivers/pci/controller/dwc/pcie-kirin.c 81 */;
	struct platform_driver cocci_id/* drivers/pci/controller/dwc/pcie-kirin.c 535 */;
	const struct of_device_id cocci_id/* drivers/pci/controller/dwc/pcie-kirin.c 530 */[];
	struct kirin_pcie cocci_id/* drivers/pci/controller/dwc/pcie-kirin.c 496 */;
	struct platform_device *cocci_id/* drivers/pci/controller/dwc/pcie-kirin.c 471 */;
	struct dw_pcie *cocci_id/* drivers/pci/controller/dwc/pcie-kirin.c 470 */;
	int cocci_id/* drivers/pci/controller/dwc/pcie-kirin.c 470 */;
	const struct dw_pcie_host_ops cocci_id/* drivers/pci/controller/dwc/pcie-kirin.c 445 */;
	const struct dw_pcie_ops cocci_id/* drivers/pci/controller/dwc/pcie-kirin.c 439 */;
	struct device *cocci_id/* drivers/pci/controller/dwc/pcie-kirin.c 404 */;
	struct pcie_port *cocci_id/* drivers/pci/controller/dwc/pcie-kirin.c 400 */;
	size_t cocci_id/* drivers/pci/controller/dwc/pcie-kirin.c 367 */;
	void __iomem *cocci_id/* drivers/pci/controller/dwc/pcie-kirin.c 366 */;
	u32 *cocci_id/* drivers/pci/controller/dwc/pcie-kirin.c 339 */;
	bool cocci_id/* drivers/pci/controller/dwc/pcie-kirin.c 221 */;
	struct resource *cocci_id/* drivers/pci/controller/dwc/pcie-kirin.c 151 */;
	long cocci_id/* drivers/pci/controller/dwc/pcie-kirin.c 119 */;
	u32 cocci_id/* drivers/pci/controller/dwc/pcie-kirin.c 102 */;
	struct kirin_pcie *cocci_id/* drivers/pci/controller/dwc/pcie-kirin.c 102 */;
}
