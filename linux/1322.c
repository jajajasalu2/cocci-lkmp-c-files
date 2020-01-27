cocci_test_suite() {
	struct work_struct *cocci_id/* drivers/usb/phy/phy-gpio-vbus-usb.c 97 */;
	void cocci_id/* drivers/usb/phy/phy-gpio-vbus-usb.c 97 */;
	struct regulator *cocci_id/* drivers/usb/phy/phy-gpio-vbus-usb.c 59 */;
	struct platform_driver cocci_id/* drivers/usb/phy/phy-gpio-vbus-usb.c 379 */;
	const struct dev_pm_ops cocci_id/* drivers/usb/phy/phy-gpio-vbus-usb.c 371 */;
	struct device *cocci_id/* drivers/usb/phy/phy-gpio-vbus-usb.c 361 */;
	struct gpio_vbus_data {
		struct usb_phy phy;
		struct device *dev;
		struct regulator *vbus_draw;
		int vbus_draw_enabled;
		unsigned mA;
		struct delayed_work work;
		int vbus;
		int irq;
	} cocci_id/* drivers/usb/phy/phy-gpio-vbus-usb.c 31 */;
	struct usb_otg cocci_id/* drivers/usb/phy/phy-gpio-vbus-usb.c 260 */;
	struct gpio_vbus_data cocci_id/* drivers/usb/phy/phy-gpio-vbus-usb.c 255 */;
	unsigned long cocci_id/* drivers/usb/phy/phy-gpio-vbus-usb.c 249 */;
	struct resource *cocci_id/* drivers/usb/phy/phy-gpio-vbus-usb.c 247 */;
	struct usb_phy *cocci_id/* drivers/usb/phy/phy-gpio-vbus-usb.c 214 */;
	unsigned cocci_id/* drivers/usb/phy/phy-gpio-vbus-usb.c 214 */;
	struct usb_gadget *cocci_id/* drivers/usb/phy/phy-gpio-vbus-usb.c 175 */;
	struct usb_otg *cocci_id/* drivers/usb/phy/phy-gpio-vbus-usb.c 159 */;
	struct gpio_vbus_data *cocci_id/* drivers/usb/phy/phy-gpio-vbus-usb.c 158 */;
	struct gpio_vbus_mach_info *cocci_id/* drivers/usb/phy/phy-gpio-vbus-usb.c 157 */;
	struct platform_device *cocci_id/* drivers/usb/phy/phy-gpio-vbus-usb.c 156 */;
	irqreturn_t cocci_id/* drivers/usb/phy/phy-gpio-vbus-usb.c 154 */;
	void *cocci_id/* drivers/usb/phy/phy-gpio-vbus-usb.c 154 */;
	int cocci_id/* drivers/usb/phy/phy-gpio-vbus-usb.c 154 */;
}
