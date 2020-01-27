cocci_test_suite() {
	struct platform_driver cocci_id/* drivers/phy/amlogic/phy-meson8b-usb2.c 270 */;
	const struct of_device_id cocci_id/* drivers/phy/amlogic/phy-meson8b-usb2.c 262 */[];
	struct phy_provider *cocci_id/* drivers/phy/amlogic/phy-meson8b-usb2.c 218 */;
	struct resource *cocci_id/* drivers/phy/amlogic/phy-meson8b-usb2.c 216 */;
	struct platform_device *cocci_id/* drivers/phy/amlogic/phy-meson8b-usb2.c 213 */;
	const struct phy_ops cocci_id/* drivers/phy/amlogic/phy-meson8b-usb2.c 207 */;
	struct phy *cocci_id/* drivers/phy/amlogic/phy-meson8b-usb2.c 197 */;
	int cocci_id/* drivers/phy/amlogic/phy-meson8b-usb2.c 197 */;
	u32 cocci_id/* drivers/phy/amlogic/phy-meson8b-usb2.c 122 */;
	struct phy_meson8b_usb2_priv *cocci_id/* drivers/phy/amlogic/phy-meson8b-usb2.c 121 */;
	void cocci_id/* drivers/phy/amlogic/phy-meson8b-usb2.c 121 */;
	struct phy_meson8b_usb2_priv {
		void __iomem *regs;
		enum usb_dr_mode dr_mode;
		struct clk *clk_usb_general;
		struct clk *clk_usb;
		struct reset_control *reset;
	} cocci_id/* drivers/phy/amlogic/phy-meson8b-usb2.c 107 */;
}
