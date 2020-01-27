cocci_test_suite() {
	struct stm32_dwmac {
		struct clk *clk_tx;
		struct clk *clk_rx;
		struct clk *clk_eth_ck;
		struct clk *clk_ethstp;
		struct clk *syscfg_clk;
		int eth_clk_sel_reg;
		int eth_ref_clk_sel_reg;
		int irq_pwr_wakeup;
		u32 mode_reg;
		struct regmap *regmap;
		u32 speed;
		const struct stm32_ops *ops;
		struct device *dev;
	} cocci_id/* drivers/net/ethernet/stmicro/stmmac/dwmac-stm32.c 90 */;
	struct platform_driver cocci_id/* drivers/net/ethernet/stmicro/stmmac/dwmac-stm32.c 514 */;
	const struct of_device_id cocci_id/* drivers/net/ethernet/stmicro/stmmac/dwmac-stm32.c 507 */[];
	struct stm32_ops cocci_id/* drivers/net/ethernet/stmicro/stmmac/dwmac-stm32.c 492 */;
	struct stmmac_priv *cocci_id/* drivers/net/ethernet/stmicro/stmmac/dwmac-stm32.c 410 */;
	struct net_device *cocci_id/* drivers/net/ethernet/stmicro/stmmac/dwmac-stm32.c 409 */;
	const struct stm32_ops *cocci_id/* drivers/net/ethernet/stmicro/stmmac/dwmac-stm32.c 354 */;
	struct stmmac_resources cocci_id/* drivers/net/ethernet/stmicro/stmmac/dwmac-stm32.c 352 */;
	struct platform_device *cocci_id/* drivers/net/ethernet/stmicro/stmmac/dwmac-stm32.c 349 */;
	struct device_node *cocci_id/* drivers/net/ethernet/stmicro/stmmac/dwmac-stm32.c 256 */;
	struct device *cocci_id/* drivers/net/ethernet/stmicro/stmmac/dwmac-stm32.c 254 */;
	struct stm32_dwmac *cocci_id/* drivers/net/ethernet/stmicro/stmmac/dwmac-stm32.c 244 */;
	void cocci_id/* drivers/net/ethernet/stmicro/stmmac/dwmac-stm32.c 244 */;
	u32 cocci_id/* drivers/net/ethernet/stmicro/stmmac/dwmac-stm32.c 221 */;
	bool cocci_id/* drivers/net/ethernet/stmicro/stmmac/dwmac-stm32.c 150 */;
	struct plat_stmmacenet_data *cocci_id/* drivers/net/ethernet/stmicro/stmmac/dwmac-stm32.c 116 */;
	int cocci_id/* drivers/net/ethernet/stmicro/stmmac/dwmac-stm32.c 116 */;
	struct stm32_ops {
		int (*set_mode)(struct plat_stmmacenet_data *plat_dat);
		int (*clk_prepare)(struct stm32_dwmac *dwmac, bool prepare);
		int (*suspend)(struct stm32_dwmac *dwmac);
		void (*resume)(struct stm32_dwmac *dwmac);
		int (*parse_data)(struct stm32_dwmac *dwmac,
				  struct device *dev);
		u32 syscfg_eth_mask;
	} cocci_id/* drivers/net/ethernet/stmicro/stmmac/dwmac-stm32.c 106 */;
}
