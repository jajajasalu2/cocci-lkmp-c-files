cocci_test_suite() {
	struct phy_meson_gxl_usb2_priv {
		struct regmap *regmap;
		enum phy_mode mode;
		int is_enabled;
		struct clk *clk;
		struct reset_control *reset;
	} cocci_id/* drivers/phy/amlogic/phy-meson-gxl-usb2.c 92 */;
	struct platform_driver cocci_id/* drivers/phy/amlogic/phy-meson-gxl-usb2.c 288 */;
	const struct of_device_id cocci_id/* drivers/phy/amlogic/phy-meson-gxl-usb2.c 282 */[];
	void __iomem *cocci_id/* drivers/phy/amlogic/phy-meson-gxl-usb2.c 236 */;
	struct resource *cocci_id/* drivers/phy/amlogic/phy-meson-gxl-usb2.c 233 */;
	struct phy_provider *cocci_id/* drivers/phy/amlogic/phy-meson-gxl-usb2.c 232 */;
	struct device *cocci_id/* drivers/phy/amlogic/phy-meson-gxl-usb2.c 231 */;
	struct platform_device *cocci_id/* drivers/phy/amlogic/phy-meson-gxl-usb2.c 229 */;
	const struct phy_ops cocci_id/* drivers/phy/amlogic/phy-meson-gxl-usb2.c 219 */;
	enum phy_mode cocci_id/* drivers/phy/amlogic/phy-meson-gxl-usb2.c 150 */;
	struct phy_meson_gxl_usb2_priv *cocci_id/* drivers/phy/amlogic/phy-meson-gxl-usb2.c 125 */;
	struct phy *cocci_id/* drivers/phy/amlogic/phy-meson-gxl-usb2.c 123 */;
	int cocci_id/* drivers/phy/amlogic/phy-meson-gxl-usb2.c 123 */;
	const struct regmap_config cocci_id/* drivers/phy/amlogic/phy-meson-gxl-usb2.c 100 */;
}
