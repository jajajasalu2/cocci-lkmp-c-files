cocci_test_suite() {
	struct meson_pcie_rc_reset {
		struct reset_control *phy;
		struct reset_control *port;
		struct reset_control *apb;
	} cocci_id/* drivers/pci/controller/dwc/pci-meson.c 94 */;
	struct meson_pcie_clk_res {
		struct clk *clk;
		struct clk *mipi_gate;
		struct clk *port_clk;
		struct clk *general_clk;
	} cocci_id/* drivers/pci/controller/dwc/pci-meson.c 87 */;
	struct meson_pcie_mem_res {
		void __iomem *elbi_base;
		void __iomem *cfg_base;
		void __iomem *phy_base;
	} cocci_id/* drivers/pci/controller/dwc/pci-meson.c 81 */;
	enum pcie_data_rate{PCIE_GEN1, PCIE_GEN2, PCIE_GEN3, PCIE_GEN4,} cocci_id/* drivers/pci/controller/dwc/pci-meson.c 74 */;
	struct platform_driver cocci_id/* drivers/pci/controller/dwc/pci-meson.c 667 */;
	const struct of_device_id cocci_id/* drivers/pci/controller/dwc/pci-meson.c 655 */[];
	struct meson_pcie_param cocci_id/* drivers/pci/controller/dwc/pci-meson.c 647 */;
	const struct meson_pcie_param *cocci_id/* drivers/pci/controller/dwc/pci-meson.c 565 */;
	const struct dw_pcie_ops cocci_id/* drivers/pci/controller/dwc/pci-meson.c 559 */;
	struct device *cocci_id/* drivers/pci/controller/dwc/pci-meson.c 536 */;
	struct pcie_port *cocci_id/* drivers/pci/controller/dwc/pci-meson.c 535 */;
	struct dw_pcie *cocci_id/* drivers/pci/controller/dwc/pci-meson.c 534 */;
	struct platform_device *cocci_id/* drivers/pci/controller/dwc/pci-meson.c 532 */;
	struct meson_pcie *cocci_id/* drivers/pci/controller/dwc/pci-meson.c 531 */;
	int cocci_id/* drivers/pci/controller/dwc/pci-meson.c 531 */;
	const struct dw_pcie_host_ops cocci_id/* drivers/pci/controller/dwc/pci-meson.c 525 */;
	u32 *cocci_id/* drivers/pci/controller/dwc/pci-meson.c 437 */;
	void cocci_id/* drivers/pci/controller/dwc/pci-meson.c 321 */;
	u32 cocci_id/* drivers/pci/controller/dwc/pci-meson.c 316 */;
	struct meson_pcie_clk_res *cocci_id/* drivers/pci/controller/dwc/pci-meson.c 283 */;
	void (*cocci_id/* drivers/pci/controller/dwc/pci-meson.c 274 */)(void *);
	u64 cocci_id/* drivers/pci/controller/dwc/pci-meson.c 250 */;
	struct clk *cocci_id/* drivers/pci/controller/dwc/pci-meson.c 249 */;
	struct resource *cocci_id/* drivers/pci/controller/dwc/pci-meson.c 158 */;
	const char *cocci_id/* drivers/pci/controller/dwc/pci-meson.c 155 */;
	void __iomem *cocci_id/* drivers/pci/controller/dwc/pci-meson.c 153 */;
	struct meson_pcie_rc_reset *cocci_id/* drivers/pci/controller/dwc/pci-meson.c 131 */;
	struct reset_control *cocci_id/* drivers/pci/controller/dwc/pci-meson.c 114 */;
	struct meson_pcie {
		struct dw_pcie pci;
		struct meson_pcie_mem_res mem_res;
		struct meson_pcie_clk_res clk_res;
		struct meson_pcie_rc_reset mrst;
		struct gpio_desc *reset_gpio;
		struct phy *phy;
		const struct meson_pcie_param *param;
	} cocci_id/* drivers/pci/controller/dwc/pci-meson.c 104 */;
	struct meson_pcie_param {
		bool has_shared_phy;
	} cocci_id/* drivers/pci/controller/dwc/pci-meson.c 100 */;
}
