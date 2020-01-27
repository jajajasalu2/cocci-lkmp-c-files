cocci_test_suite() {
	struct xsphy_instance {
		struct phy *phy;
		void __iomem *port_base;
		struct clk *ref_clk;
		u32 index;
		u32 type;
		int efuse_intr;
		int efuse_tx_imp;
		int efuse_rx_imp;
		int eye_src;
		int eye_vrt;
		int eye_term;
	} cocci_id/* drivers/phy/mediatek/phy-mtk-xsphy.c 91 */;
	struct platform_driver cocci_id/* drivers/phy/mediatek/phy-mtk-xsphy.c 588 */;
	struct resource cocci_id/* drivers/phy/mediatek/phy-mtk-xsphy.c 499 */;
	struct resource *cocci_id/* drivers/phy/mediatek/phy-mtk-xsphy.c 497 */;
	struct phy_provider *cocci_id/* drivers/phy/mediatek/phy-mtk-xsphy.c 496 */;
	struct platform_device *cocci_id/* drivers/phy/mediatek/phy-mtk-xsphy.c 491 */;
	const struct of_device_id cocci_id/* drivers/phy/mediatek/phy-mtk-xsphy.c 485 */[];
	const struct phy_ops cocci_id/* drivers/phy/mediatek/phy-mtk-xsphy.c 476 */;
	struct device_node *cocci_id/* drivers/phy/mediatek/phy-mtk-xsphy.c 445 */;
	struct of_phandle_args *cocci_id/* drivers/phy/mediatek/phy-mtk-xsphy.c 441 */;
	struct device *cocci_id/* drivers/phy/mediatek/phy-mtk-xsphy.c 440 */;
	enum phy_mode cocci_id/* drivers/phy/mediatek/phy-mtk-xsphy.c 429 */;
	struct xsphy_instance *cocci_id/* drivers/phy/mediatek/phy-mtk-xsphy.c 423 */;
	struct phy *cocci_id/* drivers/phy/mediatek/phy-mtk-xsphy.c 421 */;
	int cocci_id/* drivers/phy/mediatek/phy-mtk-xsphy.c 421 */;
	struct mtk_xsphy *cocci_id/* drivers/phy/mediatek/phy-mtk-xsphy.c 371 */;
	void cocci_id/* drivers/phy/mediatek/phy-mtk-xsphy.c 269 */;
	u32 cocci_id/* drivers/phy/mediatek/phy-mtk-xsphy.c 195 */;
	void __iomem *cocci_id/* drivers/phy/mediatek/phy-mtk-xsphy.c 194 */;
	struct mtk_xsphy {
		struct device *dev;
		void __iomem *glb_base;
		struct xsphy_instance **phys;
		int nphys;
		int src_ref_clk;
		int src_coef;
	} cocci_id/* drivers/phy/mediatek/phy-mtk-xsphy.c 107 */;
}
