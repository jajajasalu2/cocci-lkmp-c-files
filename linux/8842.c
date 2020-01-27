cocci_test_suite() {
	struct platform_driver cocci_id/* drivers/net/ethernet/stmicro/stmmac/dwmac-sti.c 423 */;
	const struct of_device_id cocci_id/* drivers/net/ethernet/stmicro/stmmac/dwmac-sti.c 414 */[];
	const struct sti_dwmac_of_data cocci_id/* drivers/net/ethernet/stmicro/stmmac/dwmac-sti.c 410 */;
	struct stmmac_resources cocci_id/* drivers/net/ethernet/stmicro/stmmac/dwmac-sti.c 314 */;
	const struct sti_dwmac_of_data *cocci_id/* drivers/net/ethernet/stmicro/stmmac/dwmac-sti.c 313 */;
	struct plat_stmmacenet_data *cocci_id/* drivers/net/ethernet/stmicro/stmmac/dwmac-sti.c 312 */;
	const char *cocci_id/* drivers/net/ethernet/stmicro/stmmac/dwmac-sti.c 285 */;
	struct regmap *cocci_id/* drivers/net/ethernet/stmicro/stmmac/dwmac-sti.c 253 */;
	struct device_node *cocci_id/* drivers/net/ethernet/stmicro/stmmac/dwmac-sti.c 252 */;
	struct device *cocci_id/* drivers/net/ethernet/stmicro/stmmac/dwmac-sti.c 251 */;
	struct resource *cocci_id/* drivers/net/ethernet/stmicro/stmmac/dwmac-sti.c 250 */;
	struct platform_device *cocci_id/* drivers/net/ethernet/stmicro/stmmac/dwmac-sti.c 248 */;
	struct sti_dwmac *cocci_id/* drivers/net/ethernet/stmicro/stmmac/dwmac-sti.c 247 */;
	int cocci_id/* drivers/net/ethernet/stmicro/stmmac/dwmac-sti.c 247 */;
	u32 cocci_id/* drivers/net/ethernet/stmicro/stmmac/dwmac-sti.c 231 */;
	void *cocci_id/* drivers/net/ethernet/stmicro/stmmac/dwmac-sti.c 197 */;
	void cocci_id/* drivers/net/ethernet/stmicro/stmmac/dwmac-sti.c 197 */;
	enum{TX_RETIME_SRC_NA=0, TX_RETIME_SRC_TXCLK=1, TX_RETIME_SRC_CLK_125, TX_RETIME_SRC_PHYCLK, TX_RETIME_SRC_CLKGEN,} cocci_id/* drivers/net/ethernet/stmicro/stmmac/dwmac-sti.c 144 */;
	u32 cocci_id/* drivers/net/ethernet/stmicro/stmmac/dwmac-sti.c 135 */[];
	struct sti_dwmac_of_data {
		void (*fix_retime_src)(void *priv, unsigned int speed);
	} cocci_id/* drivers/net/ethernet/stmicro/stmmac/dwmac-sti.c 131 */;
	struct sti_dwmac {
		phy_interface_t interface;
		bool ext_phyclk;
		u32 tx_retime_src;
		struct clk *clk;
		u32 ctrl_reg;
		int clk_sel_reg;
		struct regmap *regmap;
		bool gmac_en;
		u32 speed;
		void (*fix_retime_src)(void *priv, unsigned int speed);
	} cocci_id/* drivers/net/ethernet/stmicro/stmmac/dwmac-sti.c 118 */;
}
