cocci_test_suite() {
	u32 cocci_id/* drivers/pci/controller/dwc/pcie-histb.c 95 */;
	struct histb_pcie *cocci_id/* drivers/pci/controller/dwc/pcie-histb.c 94 */;
	struct dw_pcie *cocci_id/* drivers/pci/controller/dwc/pcie-histb.c 93 */;
	bool cocci_id/* drivers/pci/controller/dwc/pcie-histb.c 91 */;
	struct pcie_port *cocci_id/* drivers/pci/controller/dwc/pcie-histb.c 91 */;
	void cocci_id/* drivers/pci/controller/dwc/pcie-histb.c 91 */;
	struct histb_pcie {
		struct dw_pcie *pci;
		struct clk *aux_clk;
		struct clk *pipe_clk;
		struct clk *sys_clk;
		struct clk *bus_clk;
		struct phy *phy;
		struct reset_control *soft_reset;
		struct reset_control *sys_reset;
		struct reset_control *bus_reset;
		void __iomem *ctrl;
		int reset_gpio;
		struct regulator *vpcie;
	} cocci_id/* drivers/pci/controller/dwc/pcie-histb.c 52 */;
	struct platform_driver cocci_id/* drivers/pci/controller/dwc/pcie-histb.c 460 */;
	const struct of_device_id cocci_id/* drivers/pci/controller/dwc/pcie-histb.c 454 */[];
	unsigned long cocci_id/* drivers/pci/controller/dwc/pcie-histb.c 311 */;
	enum of_gpio_flags cocci_id/* drivers/pci/controller/dwc/pcie-histb.c 310 */;
	struct device_node *cocci_id/* drivers/pci/controller/dwc/pcie-histb.c 308 */;
	struct resource *cocci_id/* drivers/pci/controller/dwc/pcie-histb.c 307 */;
	struct platform_device *cocci_id/* drivers/pci/controller/dwc/pcie-histb.c 302 */;
	const struct dw_pcie_ops cocci_id/* drivers/pci/controller/dwc/pcie-histb.c 296 */;
	struct device *cocci_id/* drivers/pci/controller/dwc/pcie-histb.c 233 */;
	const struct dw_pcie_host_ops cocci_id/* drivers/pci/controller/dwc/pcie-histb.c 205 */;
	int cocci_id/* drivers/pci/controller/dwc/pcie-histb.c 167 */;
	u32 *cocci_id/* drivers/pci/controller/dwc/pcie-histb.c 126 */;
	size_t cocci_id/* drivers/pci/controller/dwc/pcie-histb.c 106 */;
	void __iomem *cocci_id/* drivers/pci/controller/dwc/pcie-histb.c 105 */;
}
