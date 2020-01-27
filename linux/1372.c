cocci_test_suite() {
	unsigned long cocci_id/* drivers/usb/cdns3/cdns3-ti.c 95 */;
	u32 cocci_id/* drivers/usb/cdns3/cdns3-ti.c 93 */;
	struct cdns_ti *cocci_id/* drivers/usb/cdns3/cdns3-ti.c 91 */;
	struct device_node *cocci_id/* drivers/usb/cdns3/cdns3-ti.c 90 */;
	struct device *cocci_id/* drivers/usb/cdns3/cdns3-ti.c 89 */;
	struct platform_device *cocci_id/* drivers/usb/cdns3/cdns3-ti.c 87 */;
	int cocci_id/* drivers/usb/cdns3/cdns3-ti.c 87 */;
	void cocci_id/* drivers/usb/cdns3/cdns3-ti.c 82 */;
	const int cocci_id/* drivers/usb/cdns3/cdns3-ti.c 61 */[];
	struct cdns_ti {
		struct device *dev;
		void __iomem *usbss;
		int usb2_only:1;
		int vbus_divider:1;
		struct clk *usb2_refclk;
		struct clk *lpm_clk;
	} cocci_id/* drivers/usb/cdns3/cdns3-ti.c 52 */;
	enum modestrap_mode{USBSS_MODESTRAP_MODE_NONE, USBSS_MODESTRAP_MODE_HOST, USBSS_MODESTRAP_MODE_PERIPHERAL,} cocci_id/* drivers/usb/cdns3/cdns3-ti.c 48 */;
	struct platform_driver cocci_id/* drivers/usb/cdns3/cdns3-ti.c 222 */;
	const struct of_device_id cocci_id/* drivers/usb/cdns3/cdns3-ti.c 216 */[];
	void *cocci_id/* drivers/usb/cdns3/cdns3-ti.c 194 */;
}
