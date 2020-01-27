cocci_test_suite() {
	struct device_node *cocci_id/* drivers/phy/mediatek/phy-mtk-tphy.c 990 */;
	struct of_phandle_args *cocci_id/* drivers/phy/mediatek/phy-mtk-tphy.c 986 */;
	struct device *cocci_id/* drivers/phy/mediatek/phy-mtk-tphy.c 985 */;
	enum phy_mode cocci_id/* drivers/phy/mediatek/phy-mtk-tphy.c 974 */;
	struct phy *cocci_id/* drivers/phy/mediatek/phy-mtk-tphy.c 961 */;
	struct u3phy_banks *cocci_id/* drivers/phy/mediatek/phy-mtk-tphy.c 626 */;
	u32 cocci_id/* drivers/phy/mediatek/phy-mtk-tphy.c 326 */;
	int cocci_id/* drivers/phy/mediatek/phy-mtk-tphy.c 324 */;
	void __iomem *cocci_id/* drivers/phy/mediatek/phy-mtk-tphy.c 322 */;
	struct u2phy_banks *cocci_id/* drivers/phy/mediatek/phy-mtk-tphy.c 321 */;
	struct mtk_phy_instance *cocci_id/* drivers/phy/mediatek/phy-mtk-tphy.c 319 */;
	struct mtk_tphy *cocci_id/* drivers/phy/mediatek/phy-mtk-tphy.c 318 */;
	void cocci_id/* drivers/phy/mediatek/phy-mtk-tphy.c 318 */;
	struct mtk_tphy {
		struct device *dev;
		void __iomem *sif_base;
		struct clk *u3phya_ref;
		const struct mtk_phy_pdata *pdata;
		struct mtk_phy_instance **phys;
		int nphys;
		int src_ref_clk;
		int src_coef;
	} cocci_id/* drivers/phy/mediatek/phy-mtk-tphy.c 306 */;
	struct mtk_phy_instance {
		struct phy *phy;
		void __iomem *port_base;
		union {
			struct u2phy_banks u2_banks;
			struct u3phy_banks u3_banks;
		};
		struct clk *ref_clk;
		u32 index;
		u8 type;
		int eye_src;
		int eye_vrt;
		int eye_term;
		bool bc12_en;
	} cocci_id/* drivers/phy/mediatek/phy-mtk-tphy.c 290 */;
	struct u3phy_banks {
		void __iomem *spllc;
		void __iomem *chip;
		void __iomem *phyd;
		void __iomem *phya;
	} cocci_id/* drivers/phy/mediatek/phy-mtk-tphy.c 283 */;
	struct u2phy_banks {
		void __iomem *misc;
		void __iomem *fmreg;
		void __iomem *com;
	} cocci_id/* drivers/phy/mediatek/phy-mtk-tphy.c 277 */;
	struct mtk_phy_pdata {
		bool avoid_rx_sen_degradation;
		enum mtk_phy_version version;
	} cocci_id/* drivers/phy/mediatek/phy-mtk-tphy.c 271 */;
	enum mtk_phy_version{MTK_PHY_V1=1, MTK_PHY_V2,} cocci_id/* drivers/phy/mediatek/phy-mtk-tphy.c 266 */;
	struct platform_driver cocci_id/* drivers/phy/mediatek/phy-mtk-tphy.c 1176 */;
	struct resource cocci_id/* drivers/phy/mediatek/phy-mtk-tphy.c 1074 */;
	struct resource *cocci_id/* drivers/phy/mediatek/phy-mtk-tphy.c 1072 */;
	struct phy_provider *cocci_id/* drivers/phy/mediatek/phy-mtk-tphy.c 1071 */;
	struct platform_device *cocci_id/* drivers/phy/mediatek/phy-mtk-tphy.c 1066 */;
	const struct of_device_id cocci_id/* drivers/phy/mediatek/phy-mtk-tphy.c 1056 */[];
	const struct mtk_phy_pdata cocci_id/* drivers/phy/mediatek/phy-mtk-tphy.c 1051 */;
	const struct phy_ops cocci_id/* drivers/phy/mediatek/phy-mtk-tphy.c 1032 */;
}
