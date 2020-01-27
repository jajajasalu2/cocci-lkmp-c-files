cocci_test_suite() {
	struct qcom_pcie_resources_1_0_0 {
		struct clk *iface;
		struct clk *aux;
		struct clk *master_bus;
		struct clk *slave_bus;
		struct reset_control *core;
		struct regulator *vdda;
	} cocci_id/* drivers/pci/controller/dwc/pcie-qcom.c 96 */;
	struct qcom_pcie_resources_2_3_3 *cocci_id/* drivers/pci/controller/dwc/pcie-qcom.c 952 */;
	const char *cocci_id/* drivers/pci/controller/dwc/pcie-qcom.c 917 */[];
	struct qcom_pcie_resources_2_1_0 {
		struct clk *iface_clk;
		struct clk *core_clk;
		struct clk *phy_clk;
		struct reset_control *pci_reset;
		struct reset_control *axi_reset;
		struct reset_control *ahb_reset;
		struct reset_control *por_reset;
		struct reset_control *phy_reset;
		struct regulator_bulk_data supplies[QCOM_PCIE_2_1_0_MAX_SUPPLY];
	} cocci_id/* drivers/pci/controller/dwc/pcie-qcom.c 84 */;
	struct qcom_pcie_resources_2_4_0 *cocci_id/* drivers/pci/controller/dwc/pcie-qcom.c 723 */;
	bool cocci_id/* drivers/pci/controller/dwc/pcie-qcom.c 643 */;
	struct qcom_pcie_resources_2_3_2 *cocci_id/* drivers/pci/controller/dwc/pcie-qcom.c 531 */;
	struct qcom_pcie_resources_1_0_0 *cocci_id/* drivers/pci/controller/dwc/pcie-qcom.c 407 */;
	struct device *cocci_id/* drivers/pci/controller/dwc/pcie-qcom.c 379 */;
	struct qcom_pcie_resources_2_1_0 *cocci_id/* drivers/pci/controller/dwc/pcie-qcom.c 260 */;
	u32 cocci_id/* drivers/pci/controller/dwc/pcie-qcom.c 203 */;
	struct dw_pcie *cocci_id/* drivers/pci/controller/dwc/pcie-qcom.c 189 */;
	int cocci_id/* drivers/pci/controller/dwc/pcie-qcom.c 187 */;
	struct qcom_pcie *cocci_id/* drivers/pci/controller/dwc/pcie-qcom.c 173 */;
	void cocci_id/* drivers/pci/controller/dwc/pcie-qcom.c 173 */;
	struct qcom_pcie {
		struct dw_pcie *pci;
		void __iomem *parf;
		void __iomem *elbi;
		union qcom_pcie_resources res;
		struct phy *phy;
		struct gpio_desc *reset;
		const struct qcom_pcie_ops *ops;
	} cocci_id/* drivers/pci/controller/dwc/pcie-qcom.c 161 */;
	struct qcom_pcie_ops {
		int (*get_resources)(struct qcom_pcie *pcie);
		int (*init)(struct qcom_pcie *pcie);
		int (*post_init)(struct qcom_pcie *pcie);
		void (*deinit)(struct qcom_pcie *pcie);
		void (*post_deinit)(struct qcom_pcie *pcie);
		void (*ltssm_enable)(struct qcom_pcie *pcie);
	} cocci_id/* drivers/pci/controller/dwc/pcie-qcom.c 152 */;
	struct qcom_pcie cocci_id/* drivers/pci/controller/dwc/pcie-qcom.c 150 */;
	union qcom_pcie_resources {
		struct qcom_pcie_resources_1_0_0 v1_0_0;
		struct qcom_pcie_resources_2_1_0 v2_1_0;
		struct qcom_pcie_resources_2_3_2 v2_3_2;
		struct qcom_pcie_resources_2_3_3 v2_3_3;
		struct qcom_pcie_resources_2_4_0 v2_4_0;
	} cocci_id/* drivers/pci/controller/dwc/pcie-qcom.c 142 */;
	struct qcom_pcie_resources_2_3_3 {
		struct clk *iface;
		struct clk *axi_m_clk;
		struct clk *axi_s_clk;
		struct clk *ahb_clk;
		struct clk *aux_clk;
		struct reset_control *rst[7];
	} cocci_id/* drivers/pci/controller/dwc/pcie-qcom.c 133 */;
	struct platform_driver cocci_id/* drivers/pci/controller/dwc/pcie-qcom.c 1294 */;
	struct pci_dev *cocci_id/* drivers/pci/controller/dwc/pcie-qcom.c 1288 */;
	const struct of_device_id cocci_id/* drivers/pci/controller/dwc/pcie-qcom.c 1277 */[];
	struct resource *cocci_id/* drivers/pci/controller/dwc/pcie-qcom.c 1177 */;
	struct platform_device *cocci_id/* drivers/pci/controller/dwc/pcie-qcom.c 1174 */;
	const struct dw_pcie_ops cocci_id/* drivers/pci/controller/dwc/pcie-qcom.c 1170 */;
	struct qcom_pcie_resources_2_4_0 {
		struct clk_bulk_data clks[QCOM_PCIE_2_4_0_MAX_CLOCKS];
		int num_clks;
		struct reset_control *axi_m_reset;
		struct reset_control *axi_s_reset;
		struct reset_control *pipe_reset;
		struct reset_control *axi_m_vmid_reset;
		struct reset_control *axi_s_xpu_reset;
		struct reset_control *parf_reset;
		struct reset_control *phy_reset;
		struct reset_control *axi_m_sticky_reset;
		struct reset_control *pipe_sticky_reset;
		struct reset_control *pwr_reset;
		struct reset_control *ahb_reset;
		struct reset_control *phy_ahb_reset;
	} cocci_id/* drivers/pci/controller/dwc/pcie-qcom.c 116 */;
	const struct qcom_pcie_ops cocci_id/* drivers/pci/controller/dwc/pcie-qcom.c 1137 */;
	const struct dw_pcie_host_ops cocci_id/* drivers/pci/controller/dwc/pcie-qcom.c 1124 */;
	struct pcie_port *cocci_id/* drivers/pci/controller/dwc/pcie-qcom.c 1078 */;
	u16 cocci_id/* drivers/pci/controller/dwc/pcie-qcom.c 1073 */;
	struct qcom_pcie_resources_2_3_2 {
		struct clk *aux_clk;
		struct clk *master_clk;
		struct clk *slave_clk;
		struct clk *cfg_clk;
		struct clk *pipe_clk;
		struct regulator_bulk_data supplies[QCOM_PCIE_2_3_2_MAX_SUPPLY];
	} cocci_id/* drivers/pci/controller/dwc/pcie-qcom.c 106 */;
}
