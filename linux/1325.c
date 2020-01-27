cocci_test_suite() {
	struct am335x_control_usb cocci_id/* drivers/usb/phy/phy-am335x-control.c 70 */;
	bool cocci_id/* drivers/usb/phy/phy-am335x-control.c 64 */;
	enum usb_dr_mode cocci_id/* drivers/usb/phy/phy-am335x-control.c 64 */;
	u32 cocci_id/* drivers/usb/phy/phy-am335x-control.c 63 */;
	void cocci_id/* drivers/usb/phy/phy-am335x-control.c 63 */;
	const struct phy_control *cocci_id/* drivers/usb/phy/phy-am335x-control.c 155 */;
	const struct of_device_id *cocci_id/* drivers/usb/phy/phy-am335x-control.c 154 */;
	struct am335x_control_usb *cocci_id/* drivers/usb/phy/phy-am335x-control.c 153 */;
	struct resource *cocci_id/* drivers/usb/phy/phy-am335x-control.c 152 */;
	struct platform_device *cocci_id/* drivers/usb/phy/phy-am335x-control.c 150 */;
	int cocci_id/* drivers/usb/phy/phy-am335x-control.c 150 */;
	struct device_node *cocci_id/* drivers/usb/phy/phy-am335x-control.c 130 */;
	struct phy_control *cocci_id/* drivers/usb/phy/phy-am335x-control.c 128 */;
	struct device *cocci_id/* drivers/usb/phy/phy-am335x-control.c 128 */;
	const struct device_node *cocci_id/* drivers/usb/phy/phy-am335x-control.c 123 */;
	const void *cocci_id/* drivers/usb/phy/phy-am335x-control.c 121 */;
	struct platform_driver cocci_id/* drivers/usb/phy/phy-am335x-control.c 120 */;
	const struct of_device_id cocci_id/* drivers/usb/phy/phy-am335x-control.c 114 */[];
	struct am335x_control_usb {
		struct device *dev;
		void __iomem *phy_reg;
		void __iomem *wkup;
		spinlock_t lock;
		struct phy_control phy_ctrl;
	} cocci_id/* drivers/usb/phy/phy-am335x-control.c 11 */;
	const struct phy_control cocci_id/* drivers/usb/phy/phy-am335x-control.c 109 */;
}
