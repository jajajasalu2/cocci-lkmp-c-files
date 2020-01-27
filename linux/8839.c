cocci_test_suite() {
	struct platform_driver cocci_id/* drivers/net/ethernet/stmicro/stmmac/dwmac-dwc-qos-eth.c 503 */;
	const struct of_device_id cocci_id/* drivers/net/ethernet/stmicro/stmmac/dwmac-dwc-qos-eth.c 496 */[];
	struct stmmac_axi cocci_id/* drivers/net/ethernet/stmicro/stmmac/dwmac-dwc-qos-eth.c 49 */;
	struct stmmac_priv *cocci_id/* drivers/net/ethernet/stmicro/stmmac/dwmac-dwc-qos-eth.c 477 */;
	struct net_device *cocci_id/* drivers/net/ethernet/stmicro/stmmac/dwmac-dwc-qos-eth.c 476 */;
	u32 cocci_id/* drivers/net/ethernet/stmicro/stmmac/dwmac-dwc-qos-eth.c 44 */;
	struct device_node *cocci_id/* drivers/net/ethernet/stmicro/stmmac/dwmac-dwc-qos-eth.c 43 */;
	void *cocci_id/* drivers/net/ethernet/stmicro/stmmac/dwmac-dwc-qos-eth.c 421 */;
	struct stmmac_resources cocci_id/* drivers/net/ethernet/stmicro/stmmac/dwmac-dwc-qos-eth.c 420 */;
	const struct dwc_eth_dwmac_data *cocci_id/* drivers/net/ethernet/stmicro/stmmac/dwmac-dwc-qos-eth.c 418 */;
	struct plat_stmmacenet_data *cocci_id/* drivers/net/ethernet/stmicro/stmmac/dwmac-dwc-qos-eth.c 41 */;
	const struct dwc_eth_dwmac_data cocci_id/* drivers/net/ethernet/stmicro/stmmac/dwmac-dwc-qos-eth.c 406 */;
	struct platform_device *cocci_id/* drivers/net/ethernet/stmicro/stmmac/dwmac-dwc-qos-eth.c 40 */;
	int cocci_id/* drivers/net/ethernet/stmicro/stmmac/dwmac-dwc-qos-eth.c 40 */;
	struct dwc_eth_dwmac_data {
		void *(*probe)(struct platform_device *pdev,
			       struct plat_stmmacenet_data *data,
			       struct stmmac_resources *res);
		int (*remove)(struct platform_device *pdev);
	} cocci_id/* drivers/net/ethernet/stmicro/stmmac/dwmac-dwc-qos-eth.c 399 */;
	struct tegra_eqos {
		struct device *dev;
		void __iomem *regs;
		struct reset_control *rst;
		struct clk *clk_master;
		struct clk *clk_slave;
		struct clk *clk_tx;
		struct clk *clk_rx;
		struct gpio_desc *reset;
	} cocci_id/* drivers/net/ethernet/stmicro/stmmac/dwmac-dwc-qos-eth.c 27 */;
	bool cocci_id/* drivers/net/ethernet/stmicro/stmmac/dwmac-dwc-qos-eth.c 186 */;
	unsigned long cocci_id/* drivers/net/ethernet/stmicro/stmmac/dwmac-dwc-qos-eth.c 185 */;
	struct tegra_eqos *cocci_id/* drivers/net/ethernet/stmicro/stmmac/dwmac-dwc-qos-eth.c 184 */;
	unsigned int cocci_id/* drivers/net/ethernet/stmicro/stmmac/dwmac-dwc-qos-eth.c 182 */;
	void cocci_id/* drivers/net/ethernet/stmicro/stmmac/dwmac-dwc-qos-eth.c 182 */;
	struct stmmac_resources *cocci_id/* drivers/net/ethernet/stmicro/stmmac/dwmac-dwc-qos-eth.c 123 */;
}
