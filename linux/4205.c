cocci_test_suite() {
	struct mixel_dphy_priv {
		struct mixel_dphy_cfg cfg;
		struct regmap *regmap;
		struct clk *phy_ref_clk;
		const struct mixel_dphy_devdata *devdata;
	} cocci_id/* drivers/phy/freescale/phy-fsl-imx8-mipi-dphy.c 95 */;
	struct mixel_dphy_cfg {
		u32 cm;
		u32 cn;
		u32 co;
		u8 mc_prg_hs_prepare;
		u8 m_prg_hs_prepare;
		u8 mc_prg_hs_zero;
		u8 m_prg_hs_zero;
		u8 mc_prg_hs_trail;
		u8 m_prg_hs_trail;
		u8 rxhs_settle;
	} cocci_id/* drivers/phy/freescale/phy-fsl-imx8-mipi-dphy.c 80 */;
	const struct mixel_dphy_devdata cocci_id/* drivers/phy/freescale/phy-fsl-imx8-mipi-dphy.c 70 */[];
	struct mixel_dphy_devdata {
		u8 reg_tx_rcal;
		u8 reg_auto_pd_en;
		u8 reg_rxlprp;
		u8 reg_rxcdrp;
		u8 reg_rxhs_settle;
	} cocci_id/* drivers/phy/freescale/phy-fsl-imx8-mipi-dphy.c 62 */;
	enum mixel_dphy_devtype{MIXEL_IMX8MQ,} cocci_id/* drivers/phy/freescale/phy-fsl-imx8-mipi-dphy.c 58 */;
	struct platform_driver cocci_id/* drivers/phy/freescale/phy-fsl-imx8-mipi-dphy.c 486 */;
	void __iomem *cocci_id/* drivers/phy/freescale/phy-fsl-imx8-mipi-dphy.c 439 */;
	struct resource *cocci_id/* drivers/phy/freescale/phy-fsl-imx8-mipi-dphy.c 437 */;
	struct phy_provider *cocci_id/* drivers/phy/freescale/phy-fsl-imx8-mipi-dphy.c 435 */;
	struct device_node *cocci_id/* drivers/phy/freescale/phy-fsl-imx8-mipi-dphy.c 434 */;
	struct device *cocci_id/* drivers/phy/freescale/phy-fsl-imx8-mipi-dphy.c 433 */;
	struct platform_device *cocci_id/* drivers/phy/freescale/phy-fsl-imx8-mipi-dphy.c 431 */;
	const struct of_device_id cocci_id/* drivers/phy/freescale/phy-fsl-imx8-mipi-dphy.c 424 */[];
	const struct phy_ops cocci_id/* drivers/phy/freescale/phy-fsl-imx8-mipi-dphy.c 414 */;
	enum phy_mode cocci_id/* drivers/phy/freescale/phy-fsl-imx8-mipi-dphy.c 348 */;
	struct mixel_dphy_cfg cocci_id/* drivers/phy/freescale/phy-fsl-imx8-mipi-dphy.c 323 */;
	union phy_configure_opts *cocci_id/* drivers/phy/freescale/phy-fsl-imx8-mipi-dphy.c 320 */;
	unsigned long long cocci_id/* drivers/phy/freescale/phy-fsl-imx8-mipi-dphy.c 161 */;
	unsigned long cocci_id/* drivers/phy/freescale/phy-fsl-imx8-mipi-dphy.c 159 */;
	struct mixel_dphy_priv *cocci_id/* drivers/phy/freescale/phy-fsl-imx8-mipi-dphy.c 158 */;
	struct mixel_dphy_cfg *cocci_id/* drivers/phy/freescale/phy-fsl-imx8-mipi-dphy.c 156 */;
	struct phy_configure_opts_mipi_dphy *cocci_id/* drivers/phy/freescale/phy-fsl-imx8-mipi-dphy.c 155 */;
	struct phy *cocci_id/* drivers/phy/freescale/phy-fsl-imx8-mipi-dphy.c 154 */;
	int cocci_id/* drivers/phy/freescale/phy-fsl-imx8-mipi-dphy.c 154 */;
	unsigned int cocci_id/* drivers/phy/freescale/phy-fsl-imx8-mipi-dphy.c 135 */;
	u32 cocci_id/* drivers/phy/freescale/phy-fsl-imx8-mipi-dphy.c 132 */[];
	u32 cocci_id/* drivers/phy/freescale/phy-fsl-imx8-mipi-dphy.c 127 */;
	u32 *cocci_id/* drivers/phy/freescale/phy-fsl-imx8-mipi-dphy.c 127 */;
	void cocci_id/* drivers/phy/freescale/phy-fsl-imx8-mipi-dphy.c 127 */;
	const struct regmap_config cocci_id/* drivers/phy/freescale/phy-fsl-imx8-mipi-dphy.c 102 */;
}
