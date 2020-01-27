cocci_test_suite() {
	u32 cocci_id/* drivers/net/ethernet/stmicro/stmmac/dwmac-socfpga.c 70 */;
	struct phy_device *cocci_id/* drivers/net/ethernet/stmicro/stmmac/dwmac-socfpga.c 69 */;
	struct net_device *cocci_id/* drivers/net/ethernet/stmicro/stmmac/dwmac-socfpga.c 68 */;
	struct device *cocci_id/* drivers/net/ethernet/stmicro/stmmac/dwmac-socfpga.c 67 */;
	void __iomem *cocci_id/* drivers/net/ethernet/stmicro/stmmac/dwmac-socfpga.c 64 */;
	struct socfpga_dwmac *cocci_id/* drivers/net/ethernet/stmicro/stmmac/dwmac-socfpga.c 63 */;
	void *cocci_id/* drivers/net/ethernet/stmicro/stmmac/dwmac-socfpga.c 61 */;
	unsigned int cocci_id/* drivers/net/ethernet/stmicro/stmmac/dwmac-socfpga.c 61 */;
	void cocci_id/* drivers/net/ethernet/stmicro/stmmac/dwmac-socfpga.c 61 */;
	struct platform_driver cocci_id/* drivers/net/ethernet/stmicro/stmmac/dwmac-socfpga.c 501 */;
	const struct of_device_id cocci_id/* drivers/net/ethernet/stmicro/stmmac/dwmac-socfpga.c 494 */[];
	const struct socfpga_dwmac_ops cocci_id/* drivers/net/ethernet/stmicro/stmmac/dwmac-socfpga.c 490 */;
	struct socfpga_dwmac {
		u32 reg_offset;
		u32 reg_shift;
		struct device *dev;
		struct regmap *sys_mgr_base_addr;
		struct reset_control *stmmac_rst;
		struct reset_control *stmmac_ocp_rst;
		void __iomem *splitter_base;
		bool f2h_ptp_ref_clk;
		struct tse_pcs pcs;
		const struct socfpga_dwmac_ops *ops;
	} cocci_id/* drivers/net/ethernet/stmicro/stmmac/dwmac-socfpga.c 48 */;
	struct socfpga_dwmac_ops {
		int (*set_phy_mode)(struct socfpga_dwmac *dwmac_priv);
	} cocci_id/* drivers/net/ethernet/stmicro/stmmac/dwmac-socfpga.c 44 */;
	struct socfpga_dwmac cocci_id/* drivers/net/ethernet/stmicro/stmmac/dwmac-socfpga.c 43 */;
	const struct socfpga_dwmac_ops *cocci_id/* drivers/net/ethernet/stmicro/stmmac/dwmac-socfpga.c 384 */;
	struct stmmac_priv *cocci_id/* drivers/net/ethernet/stmicro/stmmac/dwmac-socfpga.c 383 */;
	struct stmmac_resources cocci_id/* drivers/net/ethernet/stmicro/stmmac/dwmac-socfpga.c 378 */;
	struct plat_stmmacenet_data *cocci_id/* drivers/net/ethernet/stmicro/stmmac/dwmac-socfpga.c 377 */;
	struct platform_device *cocci_id/* drivers/net/ethernet/stmicro/stmmac/dwmac-socfpga.c 375 */;
	u32 *cocci_id/* drivers/net/ethernet/stmicro/stmmac/dwmac-socfpga.c 239 */;
	struct resource cocci_id/* drivers/net/ethernet/stmicro/stmmac/dwmac-socfpga.c 108 */;
	struct regmap *cocci_id/* drivers/net/ethernet/stmicro/stmmac/dwmac-socfpga.c 103 */;
	struct device_node *cocci_id/* drivers/net/ethernet/stmicro/stmmac/dwmac-socfpga.c 102 */;
	int cocci_id/* drivers/net/ethernet/stmicro/stmmac/dwmac-socfpga.c 100 */;
}
