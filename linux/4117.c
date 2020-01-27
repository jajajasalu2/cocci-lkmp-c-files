cocci_test_suite() {
	void __exit cocci_id/* drivers/phy/ti/phy-twl4030-usb.c 837 */;
	int __init cocci_id/* drivers/phy/ti/phy-twl4030-usb.c 831 */;
	struct platform_driver cocci_id/* drivers/phy/ti/phy-twl4030-usb.c 821 */;
	const struct of_device_id cocci_id/* drivers/phy/ti/phy-twl4030-usb.c 814 */[];
	enum twl4030_usb_mode *cocci_id/* drivers/phy/ti/phy-twl4030-usb.c 683 */;
	struct phy_provider *cocci_id/* drivers/phy/ti/phy-twl4030-usb.c 675 */;
	struct device_node *cocci_id/* drivers/phy/ti/phy-twl4030-usb.c 674 */;
	struct twl4030_usb_data *cocci_id/* drivers/phy/ti/phy-twl4030-usb.c 669 */;
	struct platform_device *cocci_id/* drivers/phy/ti/phy-twl4030-usb.c 667 */;
	const struct phy_ops cocci_id/* drivers/phy/ti/phy-twl4030-usb.c 654 */;
	struct usb_otg *cocci_id/* drivers/phy/ti/phy-twl4030-usb.c 642 */;
	struct usb_bus *cocci_id/* drivers/phy/ti/phy-twl4030-usb.c 642 */;
	struct usb_gadget *cocci_id/* drivers/phy/ti/phy-twl4030-usb.c 630 */;
	struct phy *cocci_id/* drivers/phy/ti/phy-twl4030-usb.c 616 */;
	struct work_struct *cocci_id/* drivers/phy/ti/phy-twl4030-usb.c 608 */;
	irqreturn_t cocci_id/* drivers/phy/ti/phy-twl4030-usb.c 562 */;
	void *cocci_id/* drivers/phy/ti/phy-twl4030-usb.c 562 */;
	struct device_attribute *cocci_id/* drivers/phy/ti/phy-twl4030-usb.c 548 */;
	char *cocci_id/* drivers/phy/ti/phy-twl4030-usb.c 548 */;
	ssize_t cocci_id/* drivers/phy/ti/phy-twl4030-usb.c 547 */;
	struct device *cocci_id/* drivers/phy/ti/phy-twl4030-usb.c 402 */;
	int __maybe_unused cocci_id/* drivers/phy/ti/phy-twl4030-usb.c 402 */;
	u8 cocci_id/* drivers/phy/ti/phy-twl4030-usb.c 377 */;
	struct twl4030_usb *cocci_id/* drivers/phy/ti/phy-twl4030-usb.c 375 */;
	int cocci_id/* drivers/phy/ti/phy-twl4030-usb.c 375 */;
	void cocci_id/* drivers/phy/ti/phy-twl4030-usb.c 375 */;
	unsigned long cocci_id/* drivers/phy/ti/phy-twl4030-usb.c 347 */;
	struct twl4030_usb cocci_id/* drivers/phy/ti/phy-twl4030-usb.c 170 */;
	struct twl4030_usb {
		struct usb_phy phy;
		struct device *dev;
		struct regulator *usb1v5;
		struct regulator *usb1v8;
		struct regulator *usb3v1;
		struct mutex lock;
		enum twl4030_usb_mode usb_mode;
		int irq;
		enum musb_vbus_id_status linkstat;
		atomic_t connected;
		bool vbus_supplied;
		bool musb_mailbox_pending;
		struct delayed_work id_workaround_work;
	} cocci_id/* drivers/phy/ti/phy-twl4030-usb.c 145 */;
	bool cocci_id/* drivers/phy/ti/phy-twl4030-usb.c 139 */;
	enum musb_vbus_id_status cocci_id/* drivers/phy/ti/phy-twl4030-usb.c 139 */;
	irqreturn_t cocci_id/* drivers/phy/ti/phy-twl4030-usb.c 134 */(int irq,
								       void *_twl);
}
