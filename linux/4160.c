cocci_test_suite() {
	u32 cocci_id/* drivers/phy/phy-xgene.c 638 */;
	enum cmu_type_t cocci_id/* drivers/phy/phy-xgene.c 637 */;
	struct xgene_phy_ctx *cocci_id/* drivers/phy/phy-xgene.c 637 */;
	void cocci_id/* drivers/phy/phy-xgene.c 637 */;
	void __iomem *cocci_id/* drivers/phy/phy-xgene.c 613 */;
	u32 *cocci_id/* drivers/phy/phy-xgene.c 611 */;
	unsigned long cocci_id/* drivers/phy/phy-xgene.c 575 */;
	int cocci_id/* drivers/phy/phy-xgene.c 546 */;
	struct xgene_phy_ctx {
		struct device *dev;
		struct phy *phy;
		enum xgene_phy_mode mode;
		enum clk_type_t clk_type;
		void __iomem *sds_base;
		struct clk *clk;
		struct xgene_sata_override_param sata_param;
	} cocci_id/* drivers/phy/phy-xgene.c 530 */;
	struct xgene_sata_override_param {
		u32 speed[MAX_LANE];
		u32 txspeed[3];
		u32 txboostgain[MAX_LANE * 3];
		u32 txeyetuning[MAX_LANE * 3];
		u32 txeyedirection[MAX_LANE * 3];
		u32 txamplitude[MAX_LANE * 3];
		u32 txprecursor_cn1[MAX_LANE * 3];
		u32 txprecursor_cn2[MAX_LANE * 3];
		u32 txpostcursor_cp1[MAX_LANE * 3];
	} cocci_id/* drivers/phy/phy-xgene.c 518 */;
	enum xgene_phy_mode{MODE_SATA=0, MODE_SGMII=1, MODE_PCIE=2, MODE_USB=3, MODE_XFI=4, MODE_MAX,} cocci_id/* drivers/phy/phy-xgene.c 509 */;
	enum clk_type_t{CLK_EXT_DIFF=0, CLK_INT_DIFF=1, CLK_INT_SING=2,} cocci_id/* drivers/phy/phy-xgene.c 503 */;
	enum mux_type_t{MUX_SELECT_ATA=0, MUX_SELECT_SGMMII=0,} cocci_id/* drivers/phy/phy-xgene.c 498 */;
	enum cmu_type_t{REF_CMU=0, PHY_CMU=1,} cocci_id/* drivers/phy/phy-xgene.c 493 */;
	struct platform_driver cocci_id/* drivers/phy/phy-xgene.c 1711 */;
	const struct of_device_id cocci_id/* drivers/phy/phy-xgene.c 1705 */[];
	u32 cocci_id/* drivers/phy/phy-xgene.c 1648 */[];
	struct resource *cocci_id/* drivers/phy/phy-xgene.c 1647 */;
	struct phy_provider *cocci_id/* drivers/phy/phy-xgene.c 1645 */;
	const char *cocci_id/* drivers/phy/phy-xgene.c 1626 */;
	struct platform_device *cocci_id/* drivers/phy/phy-xgene.c 1625 */;
	struct of_phandle_args *cocci_id/* drivers/phy/phy-xgene.c 1612 */;
	struct device *cocci_id/* drivers/phy/phy-xgene.c 1611 */;
	const struct phy_ops cocci_id/* drivers/phy/phy-xgene.c 1606 */;
	struct phy *cocci_id/* drivers/phy/phy-xgene.c 1578 */;
	const struct {
		u32 reg;
		u32 val;
	} cocci_id/* drivers/phy/phy-xgene.c 1345 */[];
	enum clk_type_t cocci_id/* drivers/phy/phy-xgene.c 1135 */;
}
