cocci_test_suite() {
	const unsigned int cocci_id/* drivers/phy/broadcom/phy-bcm-ns2-usbdrd.c 81 */[];
	struct ns2_phy_data {
		struct ns2_phy_driver *driver;
		struct phy *phy;
		int new_state;
	} cocci_id/* drivers/phy/broadcom/phy-bcm-ns2-usbdrd.c 75 */;
	struct ns2_phy_driver {
		void __iomem *icfgdrd_regs;
		void __iomem *idmdrd_rst_ctrl;
		void __iomem *crmu_usb2_ctrl;
		void __iomem *usb2h_strap_reg;
		struct ns2_phy_data *data;
		struct extcon_dev *edev;
		struct gpio_desc *vbus_gpiod;
		struct gpio_desc *id_gpiod;
		int id_irq;
		int vbus_irq;
		unsigned long debounce_jiffies;
		struct delayed_work wq_extcon;
	} cocci_id/* drivers/phy/broadcom/phy-bcm-ns2-usbdrd.c 60 */;
	struct platform_driver cocci_id/* drivers/phy/broadcom/phy-bcm-ns2-usbdrd.c 425 */;
	struct ns2_phy_data cocci_id/* drivers/phy/broadcom/phy-bcm-ns2-usbdrd.c 310 */;
	struct resource *cocci_id/* drivers/phy/broadcom/phy-bcm-ns2-usbdrd.c 301 */;
	struct device *cocci_id/* drivers/phy/broadcom/phy-bcm-ns2-usbdrd.c 298 */;
	struct phy_provider *cocci_id/* drivers/phy/broadcom/phy-bcm-ns2-usbdrd.c 297 */;
	struct platform_device *cocci_id/* drivers/phy/broadcom/phy-bcm-ns2-usbdrd.c 295 */;
	const struct of_device_id cocci_id/* drivers/phy/broadcom/phy-bcm-ns2-usbdrd.c 289 */[];
	struct phy_ops cocci_id/* drivers/phy/broadcom/phy-bcm-ns2-usbdrd.c 282 */;
	irqreturn_t cocci_id/* drivers/phy/broadcom/phy-bcm-ns2-usbdrd.c 272 */;
	void *cocci_id/* drivers/phy/broadcom/phy-bcm-ns2-usbdrd.c 272 */;
	struct ns2_phy_driver cocci_id/* drivers/phy/broadcom/phy-bcm-ns2-usbdrd.c 250 */;
	int cocci_id/* drivers/phy/broadcom/phy-bcm-ns2-usbdrd.c 246 */;
	struct work_struct *cocci_id/* drivers/phy/broadcom/phy-bcm-ns2-usbdrd.c 243 */;
	u32 cocci_id/* drivers/phy/broadcom/phy-bcm-ns2-usbdrd.c 202 */;
	struct ns2_phy_driver *cocci_id/* drivers/phy/broadcom/phy-bcm-ns2-usbdrd.c 200 */;
	void cocci_id/* drivers/phy/broadcom/phy-bcm-ns2-usbdrd.c 200 */;
	struct ns2_phy_data *cocci_id/* drivers/phy/broadcom/phy-bcm-ns2-usbdrd.c 105 */;
	struct phy *cocci_id/* drivers/phy/broadcom/phy-bcm-ns2-usbdrd.c 103 */;
}
