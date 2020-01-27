cocci_test_suite() {
	struct hisi_inno_phy_priv *cocci_id/* drivers/phy/hisilicon/phy-hisi-inno-usb2.c 95 */;
	struct hisi_inno_phy_port *cocci_id/* drivers/phy/hisilicon/phy-hisi-inno-usb2.c 94 */;
	struct phy *cocci_id/* drivers/phy/hisilicon/phy-hisi-inno-usb2.c 92 */;
	int cocci_id/* drivers/phy/hisilicon/phy-hisi-inno-usb2.c 92 */;
	void cocci_id/* drivers/phy/hisilicon/phy-hisi-inno-usb2.c 62 */;
	void __iomem *cocci_id/* drivers/phy/hisilicon/phy-hisi-inno-usb2.c 46 */;
	u8 cocci_id/* drivers/phy/hisilicon/phy-hisi-inno-usb2.c 44 */;
	u32 cocci_id/* drivers/phy/hisilicon/phy-hisi-inno-usb2.c 44 */;
	struct hisi_inno_phy_priv {
		void __iomem *mmio;
		struct clk *ref_clk;
		struct reset_control *por_rst;
		struct hisi_inno_phy_port ports[INNO_PHY_PORT_NUM];
	} cocci_id/* drivers/phy/hisilicon/phy-hisi-inno-usb2.c 36 */;
	struct hisi_inno_phy_port {
		struct reset_control *utmi_rst;
		struct hisi_inno_phy_priv *priv;
	} cocci_id/* drivers/phy/hisilicon/phy-hisi-inno-usb2.c 31 */;
	struct platform_driver cocci_id/* drivers/phy/hisilicon/phy-hisi-inno-usb2.c 173 */;
	const struct of_device_id cocci_id/* drivers/phy/hisilicon/phy-hisi-inno-usb2.c 166 */[];
	struct reset_control *cocci_id/* drivers/phy/hisilicon/phy-hisi-inno-usb2.c 139 */;
	struct phy_provider *cocci_id/* drivers/phy/hisilicon/phy-hisi-inno-usb2.c 115 */;
	struct device_node *cocci_id/* drivers/phy/hisilicon/phy-hisi-inno-usb2.c 113 */;
	struct device *cocci_id/* drivers/phy/hisilicon/phy-hisi-inno-usb2.c 112 */;
	struct platform_device *cocci_id/* drivers/phy/hisilicon/phy-hisi-inno-usb2.c 110 */;
	const struct phy_ops cocci_id/* drivers/phy/hisilicon/phy-hisi-inno-usb2.c 104 */;
}
