cocci_test_suite() {
	char cocci_id/* drivers/net/ethernet/stmicro/stmmac/dwmac-meson8b.c 92 */[32];
	struct clk_init_data cocci_id/* drivers/net/ethernet/stmicro/stmmac/dwmac-meson8b.c 91 */;
	struct clk_hw *cocci_id/* drivers/net/ethernet/stmicro/stmmac/dwmac-meson8b.c 89 */;
	const struct clk_ops *cocci_id/* drivers/net/ethernet/stmicro/stmmac/dwmac-meson8b.c 88 */;
	const char **cocci_id/* drivers/net/ethernet/stmicro/stmmac/dwmac-meson8b.c 86 */;
	const char *cocci_id/* drivers/net/ethernet/stmicro/stmmac/dwmac-meson8b.c 85 */;
	struct clk *cocci_id/* drivers/net/ethernet/stmicro/stmmac/dwmac-meson8b.c 84 */;
	u32 cocci_id/* drivers/net/ethernet/stmicro/stmmac/dwmac-meson8b.c 72 */;
	struct meson8b_dwmac *cocci_id/* drivers/net/ethernet/stmicro/stmmac/dwmac-meson8b.c 72 */;
	void cocci_id/* drivers/net/ethernet/stmicro/stmmac/dwmac-meson8b.c 72 */;
	struct meson8b_dwmac_clk_configs {
		struct clk_mux m250_mux;
		struct clk_divider m250_div;
		struct clk_fixed_factor fixed_div2;
		struct clk_gate rgmii_tx_en;
	} cocci_id/* drivers/net/ethernet/stmicro/stmmac/dwmac-meson8b.c 65 */;
	struct meson8b_dwmac {
		struct device *dev;
		void __iomem *regs;
		const struct meson8b_dwmac_data *data;
		phy_interface_t phy_mode;
		struct clk *rgmii_tx_clk;
		u32 tx_delay_ns;
	} cocci_id/* drivers/net/ethernet/stmicro/stmmac/dwmac-meson8b.c 55 */;
	struct meson8b_dwmac_data {
		int (*set_phy_mode)(struct meson8b_dwmac *dwmac);
	} cocci_id/* drivers/net/ethernet/stmicro/stmmac/dwmac-meson8b.c 51 */;
	struct meson8b_dwmac cocci_id/* drivers/net/ethernet/stmicro/stmmac/dwmac-meson8b.c 49 */;
	struct platform_driver cocci_id/* drivers/net/ethernet/stmicro/stmmac/dwmac-meson8b.c 407 */;
	const struct of_device_id cocci_id/* drivers/net/ethernet/stmicro/stmmac/dwmac-meson8b.c 386 */[];
	const struct meson8b_dwmac_data cocci_id/* drivers/net/ethernet/stmicro/stmmac/dwmac-meson8b.c 378 */;
	const struct meson8b_dwmac_data *cocci_id/* drivers/net/ethernet/stmicro/stmmac/dwmac-meson8b.c 328 */;
	struct stmmac_resources cocci_id/* drivers/net/ethernet/stmicro/stmmac/dwmac-meson8b.c 310 */;
	struct plat_stmmacenet_data *cocci_id/* drivers/net/ethernet/stmicro/stmmac/dwmac-meson8b.c 309 */;
	struct platform_device *cocci_id/* drivers/net/ethernet/stmicro/stmmac/dwmac-meson8b.c 307 */;
	int cocci_id/* drivers/net/ethernet/stmicro/stmmac/dwmac-meson8b.c 307 */;
	void (*cocci_id/* drivers/net/ethernet/stmicro/stmmac/dwmac-meson8b.c 278 */)(void *);
	u8 cocci_id/* drivers/net/ethernet/stmicro/stmmac/dwmac-meson8b.c 237 */;
	char cocci_id/* drivers/net/ethernet/stmicro/stmmac/dwmac-meson8b.c 122 */[16];
	struct meson8b_dwmac_clk_configs *cocci_id/* drivers/net/ethernet/stmicro/stmmac/dwmac-meson8b.c 114 */;
	struct device *cocci_id/* drivers/net/ethernet/stmicro/stmmac/dwmac-meson8b.c 112 */;
}
