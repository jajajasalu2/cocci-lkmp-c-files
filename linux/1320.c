cocci_test_suite() {
	void __exit cocci_id/* drivers/usb/phy/phy-mxs-usb.c 875 */;
	int __init cocci_id/* drivers/usb/phy/phy-mxs-usb.c 869 */;
	struct platform_driver cocci_id/* drivers/usb/phy/phy-mxs-usb.c 859 */;
	struct device *cocci_id/* drivers/usb/phy/phy-mxs-usb.c 845 */;
	unsigned int cocci_id/* drivers/usb/phy/phy-mxs-usb.c 821 */;
	struct device_node *cocci_id/* drivers/usb/phy/phy-mxs-usb.c 718 */;
	const struct of_device_id *cocci_id/* drivers/usb/phy/phy-mxs-usb.c 717 */;
	struct clk *cocci_id/* drivers/usb/phy/phy-mxs-usb.c 714 */;
	struct platform_device *cocci_id/* drivers/usb/phy/phy-mxs-usb.c 711 */;
	struct usb_phy *cocci_id/* drivers/usb/phy/phy-mxs-usb.c 677 */;
	enum usb_charger_type cocci_id/* drivers/usb/phy/phy-mxs-usb.c 624 */;
	struct regmap *cocci_id/* drivers/usb/phy/phy-mxs-usb.c 573 */;
	int cocci_id/* drivers/usb/phy/phy-mxs-usb.c 571 */;
	enum usb_device_speed cocci_id/* drivers/usb/phy/phy-mxs-usb.c 543 */;
	u32 cocci_id/* drivers/usb/phy/phy-mxs-usb.c 360 */;
	void __iomem *cocci_id/* drivers/usb/phy/phy-mxs-usb.c 359 */;
	bool cocci_id/* drivers/usb/phy/phy-mxs-usb.c 357 */;
	struct mxs_phy *cocci_id/* drivers/usb/phy/phy-mxs-usb.c 357 */;
	void cocci_id/* drivers/usb/phy/phy-mxs-usb.c 357 */;
	struct mxs_phy {
		struct usb_phy phy;
		struct clk *clk;
		const struct mxs_phy_data *data;
		struct regmap *regmap_anatop;
		int port_id;
		u32 tx_reg_set;
		u32 tx_reg_mask;
	} cocci_id/* drivers/usb/phy/phy-mxs-usb.c 199 */;
	const struct of_device_id cocci_id/* drivers/usb/phy/phy-mxs-usb.c 187 */[];
	const struct mxs_phy_data cocci_id/* drivers/usb/phy/phy-mxs-usb.c 156 */;
	struct mxs_phy_data {
		unsigned int flags;
	} cocci_id/* drivers/usb/phy/phy-mxs-usb.c 152 */;
	struct mxs_phy cocci_id/* drivers/usb/phy/phy-mxs-usb.c 120 */;
}
