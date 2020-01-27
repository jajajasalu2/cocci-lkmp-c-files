cocci_test_suite() {
	const char *const cocci_id/* drivers/net/ethernet/stmicro/stmmac/dwmac-mediatek.c 75 */[];
	struct mediatek_dwmac_variant {
		int (*dwmac_set_phy_interface)(struct mediatek_dwmac_plat_data *plat);
		int (*dwmac_set_delay)(struct mediatek_dwmac_plat_data *plat);
		const char *const *clk_list;
		int num_clks;
		u32 dma_bit_mask;
		u32 rx_delay_max;
		u32 tx_delay_max;
	} cocci_id/* drivers/net/ethernet/stmicro/stmmac/dwmac-mediatek.c 61 */;
	struct mediatek_dwmac_plat_data {
		const struct mediatek_dwmac_variant *variant;
		struct mac_delay_struct mac_delay;
		struct clk_bulk_data *clks;
		struct device_node *np;
		struct regmap *peri_regmap;
		struct device *dev;
		phy_interface_t phy_mode;
		bool rmii_rxc;
	} cocci_id/* drivers/net/ethernet/stmicro/stmmac/dwmac-mediatek.c 50 */;
	struct mac_delay_struct {
		u32 tx_delay;
		u32 rx_delay;
		bool tx_inv;
		bool rx_inv;
	} cocci_id/* drivers/net/ethernet/stmicro/stmmac/dwmac-mediatek.c 43 */;
	struct platform_driver cocci_id/* drivers/net/ethernet/stmicro/stmmac/dwmac-mediatek.c 411 */;
	const struct of_device_id cocci_id/* drivers/net/ethernet/stmicro/stmmac/dwmac-mediatek.c 403 */[];
	struct stmmac_resources cocci_id/* drivers/net/ethernet/stmicro/stmmac/dwmac-mediatek.c 351 */;
	struct plat_stmmacenet_data *cocci_id/* drivers/net/ethernet/stmicro/stmmac/dwmac-mediatek.c 350 */;
	struct platform_device *cocci_id/* drivers/net/ethernet/stmicro/stmmac/dwmac-mediatek.c 336 */;
	void *cocci_id/* drivers/net/ethernet/stmicro/stmmac/dwmac-mediatek.c 336 */;
	void cocci_id/* drivers/net/ethernet/stmicro/stmmac/dwmac-mediatek.c 336 */;
	const struct mediatek_dwmac_variant *cocci_id/* drivers/net/ethernet/stmicro/stmmac/dwmac-mediatek.c 287 */;
	struct mediatek_dwmac_plat_data *cocci_id/* drivers/net/ethernet/stmicro/stmmac/dwmac-mediatek.c 285 */;
	int cocci_id/* drivers/net/ethernet/stmicro/stmmac/dwmac-mediatek.c 285 */;
	u32 cocci_id/* drivers/net/ethernet/stmicro/stmmac/dwmac-mediatek.c 245 */;
	struct mac_delay_struct *cocci_id/* drivers/net/ethernet/stmicro/stmmac/dwmac-mediatek.c 244 */;
	const struct mediatek_dwmac_variant cocci_id/* drivers/net/ethernet/stmicro/stmmac/dwmac-mediatek.c 232 */;
}
