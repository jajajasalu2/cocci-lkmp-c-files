cocci_test_suite() {
	struct da8xx_ohci_hcd *cocci_id/* drivers/usb/host/ohci-da8xx.c 80 */;
	struct usb_hcd *cocci_id/* drivers/usb/host/ohci-da8xx.c 78 */;
	void cocci_id/* drivers/usb/host/ohci-da8xx.c 78 */;
	void __exit cocci_id/* drivers/usb/host/ohci-da8xx.c 572 */;
	int __init cocci_id/* drivers/usb/host/ohci-da8xx.c 544 */;
	struct platform_driver cocci_id/* drivers/usb/host/ohci-da8xx.c 530 */;
	struct da8xx_ohci_hcd cocci_id/* drivers/usb/host/ohci-da8xx.c 524 */;
	const struct ohci_driver_overrides cocci_id/* drivers/usb/host/ohci-da8xx.c 522 */;
	int cocci_id/* drivers/usb/host/ohci-da8xx.c 51 */;
	volatile u16 cocci_id/* drivers/usb/host/ohci-da8xx.c 49 */;
	bool cocci_id/* drivers/usb/host/ohci-da8xx.c 484 */;
	pm_message_t cocci_id/* drivers/usb/host/ohci-da8xx.c 480 */;
	struct resource *cocci_id/* drivers/usb/host/ohci-da8xx.c 379 */;
	struct platform_device *cocci_id/* drivers/usb/host/ohci-da8xx.c 373 */;
	struct da8xx_ohci_hcd {
		struct usb_hcd *hcd;
		struct clk *usb11_clk;
		struct phy *usb11_phy;
		struct regulator *vbus_reg;
		struct notifier_block nb;
		struct gpio_desc *oc_gpio;
	} cocci_id/* drivers/usb/host/ohci-da8xx.c 37 */;
	const struct of_device_id cocci_id/* drivers/usb/host/ohci-da8xx.c 366 */[];
	int (*cocci_id/* drivers/usb/host/ohci-da8xx.c 35 */)(struct usb_hcd *hcd,
							      char *buf);
	int (*cocci_id/* drivers/usb/host/ohci-da8xx.c 33 */)(struct usb_hcd *hcd,
							      u16 typeReq,
							      u16 wValue,
							      u16 wIndex,
							      char *buf,
							      u16 wLength);
	__le32 *cocci_id/* drivers/usb/host/ohci-da8xx.c 328 */;
	struct hc_driver __read_mostly cocci_id/* drivers/usb/host/ohci-da8xx.c 31 */;
	char *cocci_id/* drivers/usb/host/ohci-da8xx.c 301 */;
	u16 cocci_id/* drivers/usb/host/ohci-da8xx.c 300 */;
	u32 cocci_id/* drivers/usb/host/ohci-da8xx.c 233 */;
	struct ohci_hcd *cocci_id/* drivers/usb/host/ohci-da8xx.c 231 */;
	irqreturn_t cocci_id/* drivers/usb/host/ohci-da8xx.c 193 */;
	void *cocci_id/* drivers/usb/host/ohci-da8xx.c 193 */;
	unsigned long cocci_id/* drivers/usb/host/ohci-da8xx.c 180 */;
	struct notifier_block *cocci_id/* drivers/usb/host/ohci-da8xx.c 179 */;
	struct da8xx_ohci_root_hub *cocci_id/* drivers/usb/host/ohci-da8xx.c 171 */;
	struct device *cocci_id/* drivers/usb/host/ohci-da8xx.c 170 */;
	unsigned int cocci_id/* drivers/usb/host/ohci-da8xx.c 126 */;
}
