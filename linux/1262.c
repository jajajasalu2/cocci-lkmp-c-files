cocci_test_suite() {
	struct ohci_regs __iomem *cocci_id/* drivers/usb/host/ohci-at91.c 99 */;
	struct usb_hcd *cocci_id/* drivers/usb/host/ohci-at91.c 98 */;
	struct platform_device *cocci_id/* drivers/usb/host/ohci-at91.c 96 */;
	struct ohci_at91_priv *cocci_id/* drivers/usb/host/ohci-at91.c 73 */;
	void __exit cocci_id/* drivers/usb/host/ohci-at91.c 693 */;
	struct ohci_at91_priv cocci_id/* drivers/usb/host/ohci-at91.c 68 */;
	const struct ohci_driver_overrides cocci_id/* drivers/usb/host/ohci-at91.c 67 */;
	int __init cocci_id/* drivers/usb/host/ohci-at91.c 669 */;
	struct platform_driver cocci_id/* drivers/usb/host/ohci-at91.c 658 */;
	struct hc_driver __read_mostly cocci_id/* drivers/usb/host/ohci-at91.c 65 */;
	struct device *cocci_id/* drivers/usb/host/ohci-at91.c 638 */;
	int __maybe_unused cocci_id/* drivers/usb/host/ohci-at91.c 637 */;
	const char cocci_id/* drivers/usb/host/ohci-at91.c 63 */[];
	struct ohci_hcd *cocci_id/* drivers/usb/host/ohci-at91.c 596 */;
	struct device_node *cocci_id/* drivers/usb/host/ohci-at91.c 511 */;
	struct ohci_at91_priv {
		struct clk *iclk;
		struct clk *fclk;
		struct clk *hclk;
		bool clocked;
		bool wakeup;
		struct regmap *sfr_regmap;
	} cocci_id/* drivers/usb/host/ohci-at91.c 51 */;
	const struct of_device_id cocci_id/* drivers/usb/host/ohci-at91.c 500 */[];
	irqreturn_t cocci_id/* drivers/usb/host/ohci-at91.c 465 */;
	void *cocci_id/* drivers/usb/host/ohci-at91.c 465 */;
	struct at91_usbh_data {
		struct gpio_desc *vbus_pin[AT91_MAX_USBH_PORTS];
		struct gpio_desc *overcurrent_pin[AT91_MAX_USBH_PORTS];
		u8 ports;
		u8 overcurrent_supported;
		u8 overcurrent_status[AT91_MAX_USBH_PORTS];
		u8 overcurrent_changed[AT91_MAX_USBH_PORTS];
	} cocci_id/* drivers/usb/host/ohci-at91.c 42 */;
	u32 *cocci_id/* drivers/usb/host/ohci-at91.c 334 */;
	struct usb_hub_descriptor *cocci_id/* drivers/usb/host/ohci-at91.c 332 */;
	struct at91_usbh_data *cocci_id/* drivers/usb/host/ohci-at91.c 330 */;
	char *cocci_id/* drivers/usb/host/ohci-at91.c 328 */;
	u16 cocci_id/* drivers/usb/host/ohci-at91.c 327 */;
	int cocci_id/* drivers/usb/host/ohci-at91.c 327 */;
	u32 cocci_id/* drivers/usb/host/ohci-at91.c 304 */;
	u8 cocci_id/* drivers/usb/host/ohci-at91.c 302 */;
	struct resource *cocci_id/* drivers/usb/host/ohci-at91.c 173 */;
	const struct hc_driver *cocci_id/* drivers/usb/host/ohci-at91.c 164 */;
	struct regmap *cocci_id/* drivers/usb/host/ohci-at91.c 138 */;
	void cocci_id/* drivers/usb/host/ohci-at91.c 138 */;
	void cocci_id/* drivers/usb/host/ohci-at91.c 136 */(struct usb_hcd *,
							    struct platform_device *);
}
