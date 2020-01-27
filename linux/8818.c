cocci_test_suite() {
	struct qcom_ethqos {
		struct platform_device *pdev;
		void __iomem *rgmii_base;
		unsigned int rgmii_clk_rate;
		struct clk *rgmii_clk;
		unsigned int speed;
		const struct ethqos_emac_por *por;
		unsigned int num_por;
	} cocci_id/* drivers/net/ethernet/stmicro/stmmac/dwmac-qcom-ethqos.c 78 */;
	struct ethqos_emac_por {
		unsigned int offset;
		unsigned int value;
	} cocci_id/* drivers/net/ethernet/stmicro/stmmac/dwmac-qcom-ethqos.c 73 */;
	struct platform_driver cocci_id/* drivers/net/ethernet/stmicro/stmmac/dwmac-qcom-ethqos.c 533 */;
	const struct of_device_id cocci_id/* drivers/net/ethernet/stmicro/stmmac/dwmac-qcom-ethqos.c 527 */[];
	struct resource *cocci_id/* drivers/net/ethernet/stmicro/stmmac/dwmac-qcom-ethqos.c 445 */;
	struct stmmac_resources cocci_id/* drivers/net/ethernet/stmicro/stmmac/dwmac-qcom-ethqos.c 443 */;
	struct plat_stmmacenet_data *cocci_id/* drivers/net/ethernet/stmicro/stmmac/dwmac-qcom-ethqos.c 442 */;
	struct device_node *cocci_id/* drivers/net/ethernet/stmicro/stmmac/dwmac-qcom-ethqos.c 441 */;
	struct platform_device *cocci_id/* drivers/net/ethernet/stmicro/stmmac/dwmac-qcom-ethqos.c 439 */;
	void *cocci_id/* drivers/net/ethernet/stmicro/stmmac/dwmac-qcom-ethqos.c 430 */;
	void cocci_id/* drivers/net/ethernet/stmicro/stmmac/dwmac-qcom-ethqos.c 430 */;
	unsigned int cocci_id/* drivers/net/ethernet/stmicro/stmmac/dwmac-qcom-ethqos.c 371 */;
	volatile unsigned int cocci_id/* drivers/net/ethernet/stmicro/stmmac/dwmac-qcom-ethqos.c 370 */;
	struct qcom_ethqos *cocci_id/* drivers/net/ethernet/stmicro/stmmac/dwmac-qcom-ethqos.c 368 */;
	int cocci_id/* drivers/net/ethernet/stmicro/stmmac/dwmac-qcom-ethqos.c 368 */;
	const struct ethqos_emac_por cocci_id/* drivers/net/ethernet/stmicro/stmmac/dwmac-qcom-ethqos.c 165 */[];
}
