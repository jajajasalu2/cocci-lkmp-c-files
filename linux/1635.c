cocci_test_suite() {
	struct platform_driver cocci_id/* drivers/usb/dwc3/dwc3-omap.c 612 */;
	struct dwc3_omap *cocci_id/* drivers/usb/dwc3/dwc3-omap.c 588 */;
	struct device *cocci_id/* drivers/usb/dwc3/dwc3-omap.c 586 */;
	void cocci_id/* drivers/usb/dwc3/dwc3-omap.c 586 */;
	const struct of_device_id cocci_id/* drivers/usb/dwc3/dwc3-omap.c 550 */[];
	void __iomem *cocci_id/* drivers/usb/dwc3/dwc3-omap.c 462 */;
	struct regulator *cocci_id/* drivers/usb/dwc3/dwc3-omap.c 455 */;
	struct platform_device *cocci_id/* drivers/usb/dwc3/dwc3-omap.c 449 */;
	struct extcon_dev *cocci_id/* drivers/usb/dwc3/dwc3-omap.c 417 */;
	struct device_node *cocci_id/* drivers/usb/dwc3/dwc3-omap.c 416 */;
	int cocci_id/* drivers/usb/dwc3/dwc3-omap.c 413 */;
	struct dwc3_omap cocci_id/* drivers/usb/dwc3/dwc3-omap.c 345 */;
	void *cocci_id/* drivers/usb/dwc3/dwc3-omap.c 343 */;
	unsigned long cocci_id/* drivers/usb/dwc3/dwc3-omap.c 343 */;
	struct notifier_block *cocci_id/* drivers/usb/dwc3/dwc3-omap.c 342 */;
	u32 cocci_id/* drivers/usb/dwc3/dwc3-omap.c 323 */;
	irqreturn_t cocci_id/* drivers/usb/dwc3/dwc3-omap.c 268 */;
	void cocci_id/* drivers/usb/dwc3/dwc3-omap.c 266 */(struct dwc3_omap *omap);
	enum omap_dwc3_vbus_id_status cocci_id/* drivers/usb/dwc3/dwc3-omap.c 216 */;
	enum omap_dwc3_vbus_id_status{OMAP_DWC3_ID_FLOAT, OMAP_DWC3_ID_GROUND, OMAP_DWC3_VBUS_OFF, OMAP_DWC3_VBUS_VALID,} cocci_id/* drivers/usb/dwc3/dwc3-omap.c 134 */;
	struct dwc3_omap {
		struct device *dev;
		int irq;
		void __iomem *base;
		u32 utmi_otg_ctrl;
		u32 utmi_otg_offset;
		u32 irqmisc_offset;
		u32 irq_eoi_offset;
		u32 debug_offset;
		u32 irq0_offset;
		struct extcon_dev *edev;
		struct notifier_block vbus_nb;
		struct notifier_block id_nb;
		struct regulator *vbus_reg;
	} cocci_id/* drivers/usb/dwc3/dwc3-omap.c 114 */;
	enum dwc3_omap_utmi_mode{DWC3_OMAP_UTMI_MODE_UNKNOWN=0, DWC3_OMAP_UTMI_MODE_HW, DWC3_OMAP_UTMI_MODE_SW,} cocci_id/* drivers/usb/dwc3/dwc3-omap.c 108 */;
}
