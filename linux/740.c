cocci_test_suite() {
	struct resource *cocci_id/* drivers/pci/controller/dwc/pci-exynos.c 87 */;
	struct platform_device *cocci_id/* drivers/pci/controller/dwc/pci-exynos.c 82 */;
	struct exynos_pcie_ops {
		int (*get_mem_resources)(struct platform_device *pdev,
					 struct exynos_pcie *ep);
		int (*get_clk_resources)(struct exynos_pcie *ep);
		int (*init_clk_resources)(struct exynos_pcie *ep);
		void (*deinit_clk_resources)(struct exynos_pcie *ep);
	} cocci_id/* drivers/pci/controller/dwc/pci-exynos.c 74 */;
	struct exynos_pcie {
		struct dw_pcie *pci;
		struct exynos_pcie_mem_res *mem_res;
		struct exynos_pcie_clk_res *clk_res;
		const struct exynos_pcie_ops *ops;
		int reset_gpio;
		struct phy *phy;
	} cocci_id/* drivers/pci/controller/dwc/pci-exynos.c 64 */;
	struct exynos_pcie_clk_res {
		struct clk *clk;
		struct clk *bus_clk;
	} cocci_id/* drivers/pci/controller/dwc/pci-exynos.c 59 */;
	struct exynos_pcie_mem_res {
		void __iomem *elbi_base;
	} cocci_id/* drivers/pci/controller/dwc/pci-exynos.c 55 */;
	struct platform_driver cocci_id/* drivers/pci/controller/dwc/pci-exynos.c 524 */;
	const struct of_device_id cocci_id/* drivers/pci/controller/dwc/pci-exynos.c 516 */[];
	int __exit cocci_id/* drivers/pci/controller/dwc/pci-exynos.c 506 */;
	const struct exynos_pcie_ops *cocci_id/* drivers/pci/controller/dwc/pci-exynos.c 461 */;
	struct device_node *cocci_id/* drivers/pci/controller/dwc/pci-exynos.c 446 */;
	const struct dw_pcie_ops cocci_id/* drivers/pci/controller/dwc/pci-exynos.c 435 */;
	struct pcie_port *cocci_id/* drivers/pci/controller/dwc/pci-exynos.c 400 */;
	int __init cocci_id/* drivers/pci/controller/dwc/pci-exynos.c 396 */;
	const struct dw_pcie_host_ops cocci_id/* drivers/pci/controller/dwc/pci-exynos.c 390 */;
	u32 *cocci_id/* drivers/pci/controller/dwc/pci-exynos.c 342 */;
	size_t cocci_id/* drivers/pci/controller/dwc/pci-exynos.c 320 */;
	void __iomem *cocci_id/* drivers/pci/controller/dwc/pci-exynos.c 319 */;
	irqreturn_t cocci_id/* drivers/pci/controller/dwc/pci-exynos.c 289 */;
	void *cocci_id/* drivers/pci/controller/dwc/pci-exynos.c 289 */;
	u32 cocci_id/* drivers/pci/controller/dwc/pci-exynos.c 200 */;
	bool cocci_id/* drivers/pci/controller/dwc/pci-exynos.c 186 */;
	const struct exynos_pcie_ops cocci_id/* drivers/pci/controller/dwc/pci-exynos.c 157 */;
	struct exynos_pcie *cocci_id/* drivers/pci/controller/dwc/pci-exynos.c 151 */;
	void cocci_id/* drivers/pci/controller/dwc/pci-exynos.c 151 */;
	struct device *cocci_id/* drivers/pci/controller/dwc/pci-exynos.c 104 */;
	struct dw_pcie *cocci_id/* drivers/pci/controller/dwc/pci-exynos.c 103 */;
	int cocci_id/* drivers/pci/controller/dwc/pci-exynos.c 101 */;
}
