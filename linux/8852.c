cocci_test_suite() {
	struct ipq806x_gmac {
		struct platform_device *pdev;
		struct regmap *nss_common;
		struct regmap *qsgmii_csr;
		uint32_t id;
		struct clk *core_clk;
		phy_interface_t phy_mode;
	} cocci_id/* drivers/net/ethernet/stmicro/stmmac/dwmac-ipq806x.c 84 */;
	struct platform_driver cocci_id/* drivers/net/ethernet/stmicro/stmmac/dwmac-ipq806x.c 360 */;
	const struct of_device_id cocci_id/* drivers/net/ethernet/stmicro/stmmac/dwmac-ipq806x.c 354 */[];
	struct stmmac_resources cocci_id/* drivers/net/ethernet/stmicro/stmmac/dwmac-ipq806x.c 248 */;
	struct plat_stmmacenet_data *cocci_id/* drivers/net/ethernet/stmicro/stmmac/dwmac-ipq806x.c 247 */;
	struct platform_device *cocci_id/* drivers/net/ethernet/stmicro/stmmac/dwmac-ipq806x.c 245 */;
	void *cocci_id/* drivers/net/ethernet/stmicro/stmmac/dwmac-ipq806x.c 238 */;
	void cocci_id/* drivers/net/ethernet/stmicro/stmmac/dwmac-ipq806x.c 238 */;
	uint32_t cocci_id/* drivers/net/ethernet/stmicro/stmmac/dwmac-ipq806x.c 147 */;
	struct device *cocci_id/* drivers/net/ethernet/stmicro/stmmac/dwmac-ipq806x.c 121 */;
	struct ipq806x_gmac *cocci_id/* drivers/net/ethernet/stmicro/stmmac/dwmac-ipq806x.c 119 */;
	unsigned int cocci_id/* drivers/net/ethernet/stmicro/stmmac/dwmac-ipq806x.c 119 */;
	int cocci_id/* drivers/net/ethernet/stmicro/stmmac/dwmac-ipq806x.c 119 */;
}
