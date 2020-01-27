cocci_test_suite() {
	void cocci_id/* drivers/net/ethernet/stmicro/stmmac/dwmac-rk.c 99 */;
	unsigned int cocci_id/* drivers/net/ethernet/stmicro/stmmac/dwmac-rk.c 582 */;
	struct rk_priv_data {
		struct platform_device *pdev;
		phy_interface_t phy_iface;
		struct regulator *regulator;
		bool suspended;
		const struct rk_gmac_ops *ops;
		bool clk_enabled;
		bool clock_input;
		bool integrated_phy;
		struct clk *clk_mac;
		struct clk *gmac_clkin;
		struct clk *mac_clk_rx;
		struct clk *mac_clk_tx;
		struct clk *clk_mac_ref;
		struct clk *clk_mac_refout;
		struct clk *clk_mac_speed;
		struct clk *aclk_mac;
		struct clk *pclk_mac;
		struct clk *clk_phy;
		struct reset_control *phy_reset;
		int tx_delay;
		int rx_delay;
		struct regmap *grf;
	} cocci_id/* drivers/net/ethernet/stmicro/stmmac/dwmac-rk.c 38 */;
	struct rk_gmac_ops {
		void (*set_to_rgmii)(struct rk_priv_data *bsp_priv,
				     int tx_delay, int rx_delay);
		void (*set_to_rmii)(struct rk_priv_data *bsp_priv);
		void (*set_rgmii_speed)(struct rk_priv_data *bsp_priv,
					int speed);
		void (*set_rmii_speed)(struct rk_priv_data *bsp_priv,
				       int speed);
		void (*integrated_phy_powerup)(struct rk_priv_data *bsp_priv);
	} cocci_id/* drivers/net/ethernet/stmicro/stmmac/dwmac-rk.c 29 */;
	struct rk_priv_data cocci_id/* drivers/net/ethernet/stmicro/stmmac/dwmac-rk.c 28 */;
	struct platform_driver cocci_id/* drivers/net/ethernet/stmicro/stmmac/dwmac-rk.c 1489 */;
	const struct of_device_id cocci_id/* drivers/net/ethernet/stmicro/stmmac/dwmac-rk.c 1475 */[];
	const struct rk_gmac_ops *cocci_id/* drivers/net/ethernet/stmicro/stmmac/dwmac-rk.c 1386 */;
	struct stmmac_resources cocci_id/* drivers/net/ethernet/stmicro/stmmac/dwmac-rk.c 1385 */;
	struct platform_device *cocci_id/* drivers/net/ethernet/stmicro/stmmac/dwmac-rk.c 1382 */;
	void *cocci_id/* drivers/net/ethernet/stmicro/stmmac/dwmac-rk.c 1362 */;
	const struct rk_gmac_ops cocci_id/* drivers/net/ethernet/stmicro/stmmac/dwmac-rk.c 131 */;
	const char *cocci_id/* drivers/net/ethernet/stmicro/stmmac/dwmac-rk.c 1220 */;
	struct device *cocci_id/* drivers/net/ethernet/stmicro/stmmac/dwmac-rk.c 1195 */;
	struct regulator *cocci_id/* drivers/net/ethernet/stmicro/stmmac/dwmac-rk.c 1193 */;
	bool cocci_id/* drivers/net/ethernet/stmicro/stmmac/dwmac-rk.c 1119 */;
	struct rk_priv_data *cocci_id/* drivers/net/ethernet/stmicro/stmmac/dwmac-rk.c 1119 */;
	int cocci_id/* drivers/net/ethernet/stmicro/stmmac/dwmac-rk.c 1119 */;
	struct plat_stmmacenet_data *cocci_id/* drivers/net/ethernet/stmicro/stmmac/dwmac-rk.c 1047 */;
}
