cocci_test_suite() {
	struct phy_provider *cocci_id/* drivers/phy/st/phy-stih407-usb.c 93 */;
	struct device_node *cocci_id/* drivers/phy/st/phy-stih407-usb.c 92 */;
	struct device *cocci_id/* drivers/phy/st/phy-stih407-usb.c 91 */;
	struct platform_device *cocci_id/* drivers/phy/st/phy-stih407-usb.c 88 */;
	const struct phy_ops cocci_id/* drivers/phy/st/phy-stih407-usb.c 82 */;
	struct stih407_usb2_picophy *cocci_id/* drivers/phy/st/phy-stih407-usb.c 70 */;
	struct phy *cocci_id/* drivers/phy/st/phy-stih407-usb.c 68 */;
	int cocci_id/* drivers/phy/st/phy-stih407-usb.c 68 */;
	struct stih407_usb2_picophy {
		struct phy *phy;
		struct regmap *regmap;
		struct device *dev;
		struct reset_control *rstc;
		struct reset_control *rstport;
		int ctrl;
		int param;
	} cocci_id/* drivers/phy/st/phy-stih407-usb.c 32 */;
	struct platform_driver cocci_id/* drivers/phy/st/phy-stih407-usb.c 164 */;
	const struct of_device_id cocci_id/* drivers/phy/st/phy-stih407-usb.c 157 */[];
}
