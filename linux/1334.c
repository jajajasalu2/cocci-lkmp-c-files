cocci_test_suite() {
	struct twl6030_usb {
		struct phy_companion comparator;
		struct device *dev;
		spinlock_t lock;
		struct regulator *usb3v3;
		struct delayed_work get_status_work;
		struct work_struct set_vbus_work;
		int irq1;
		int irq2;
		enum musb_vbus_id_status linkstat;
		u8 asleep;
		bool vbus_enable;
	} cocci_id/* drivers/usb/phy/phy-twl6030-usb.c 78 */;
	void __exit cocci_id/* drivers/usb/phy/phy-twl6030-usb.c 440 */;
	int __init cocci_id/* drivers/usb/phy/phy-twl6030-usb.c 434 */;
	struct platform_driver cocci_id/* drivers/usb/phy/phy-twl6030-usb.c 424 */;
	const struct of_device_id cocci_id/* drivers/usb/phy/phy-twl6030-usb.c 418 */[];
	struct device *cocci_id/* drivers/usb/phy/phy-twl6030-usb.c 335 */;
	struct device_node *cocci_id/* drivers/usb/phy/phy-twl6030-usb.c 334 */;
	u32 cocci_id/* drivers/usb/phy/phy-twl6030-usb.c 331 */;
	struct platform_device *cocci_id/* drivers/usb/phy/phy-twl6030-usb.c 329 */;
	bool cocci_id/* drivers/usb/phy/phy-twl6030-usb.c 319 */;
	struct phy_companion *cocci_id/* drivers/usb/phy/phy-twl6030-usb.c 319 */;
	struct twl6030_usb cocci_id/* drivers/usb/phy/phy-twl6030-usb.c 303 */;
	struct twl6030_usb *cocci_id/* drivers/usb/phy/phy-twl6030-usb.c 303 */;
	struct work_struct *cocci_id/* drivers/usb/phy/phy-twl6030-usb.c 301 */;
	void cocci_id/* drivers/usb/phy/phy-twl6030-usb.c 301 */;
	int cocci_id/* drivers/usb/phy/phy-twl6030-usb.c 287 */;
	enum musb_vbus_id_status cocci_id/* drivers/usb/phy/phy-twl6030-usb.c 208 */;
	irqreturn_t cocci_id/* drivers/usb/phy/phy-twl6030-usb.c 205 */;
	void *cocci_id/* drivers/usb/phy/phy-twl6030-usb.c 205 */;
	struct attribute *cocci_id/* drivers/usb/phy/phy-twl6030-usb.c 199 */[];
	unsigned long cocci_id/* drivers/usb/phy/phy-twl6030-usb.c 175 */;
	struct device_attribute *cocci_id/* drivers/usb/phy/phy-twl6030-usb.c 172 */;
	char *cocci_id/* drivers/usb/phy/phy-twl6030-usb.c 172 */;
	ssize_t cocci_id/* drivers/usb/phy/phy-twl6030-usb.c 171 */;
	u8 cocci_id/* drivers/usb/phy/phy-twl6030-usb.c 116 */;
}
