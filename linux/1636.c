cocci_test_suite() {
	enum{USB2_HOST_PHY=0, USB2_OTG_PHY, USB3_HOST_PHY, PHY_COUNT,} cocci_id/* drivers/usb/dwc3/dwc3-meson-g12a.c 99 */;
	struct platform_driver cocci_id/* drivers/usb/dwc3/dwc3-meson-g12a.c 627 */;
	const struct of_device_id cocci_id/* drivers/usb/dwc3/dwc3-meson-g12a.c 621 */[];
	int __maybe_unused cocci_id/* drivers/usb/dwc3/dwc3-meson-g12a.c 583 */;
	void (*cocci_id/* drivers/usb/dwc3/dwc3-meson-g12a.c 421 */)(void *);
	void __iomem *cocci_id/* drivers/usb/dwc3/dwc3-meson-g12a.c 388 */;
	struct device_node *cocci_id/* drivers/usb/dwc3/dwc3-meson-g12a.c 369 */;
	struct platform_device *cocci_id/* drivers/usb/dwc3/dwc3-meson-g12a.c 368 */;
	const char *cocci_id/* drivers/usb/dwc3/dwc3-meson-g12a.c 366 */;
	struct device *cocci_id/* drivers/usb/dwc3/dwc3-meson-g12a.c 365 */;
	irqreturn_t cocci_id/* drivers/usb/dwc3/dwc3-meson-g12a.c 349 */;
	void *cocci_id/* drivers/usb/dwc3/dwc3-meson-g12a.c 349 */;
	enum usb_role cocci_id/* drivers/usb/dwc3/dwc3-meson-g12a.c 341 */;
	u32 cocci_id/* drivers/usb/dwc3/dwc3-meson-g12a.c 283 */;
	enum phy_mode cocci_id/* drivers/usb/dwc3/dwc3-meson-g12a.c 281 */;
	struct dwc3_meson_g12a *cocci_id/* drivers/usb/dwc3/dwc3-meson-g12a.c 281 */;
	int cocci_id/* drivers/usb/dwc3/dwc3-meson-g12a.c 257 */;
	const struct regmap_config cocci_id/* drivers/usb/dwc3/dwc3-meson-g12a.c 250 */;
	void cocci_id/* drivers/usb/dwc3/dwc3-meson-g12a.c 125 */;
	struct dwc3_meson_g12a {
		struct device *dev;
		struct regmap *regmap;
		struct clk *clk;
		struct reset_control *reset;
		struct phy *phys[PHY_COUNT];
		enum usb_dr_mode otg_mode;
		enum phy_mode otg_phy_mode;
		unsigned int usb2_ports;
		unsigned int usb3_ports;
		struct regulator *vbus;
		struct usb_role_switch_desc switch_desc;
		struct usb_role_switch *role_switch;
	} cocci_id/* drivers/usb/dwc3/dwc3-meson-g12a.c 110 */;
	const char *cocci_id/* drivers/usb/dwc3/dwc3-meson-g12a.c 106 */[PHY_COUNT];
}
