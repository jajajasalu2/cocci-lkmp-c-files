cocci_test_suite() {
	u16 cocci_id/* drivers/phy/broadcom/phy-bcm-ns-usb3.c 73 */;
	struct bcm_ns_usb3 *cocci_id/* drivers/phy/broadcom/phy-bcm-ns-usb3.c 73 */;
	int cocci_id/* drivers/phy/broadcom/phy-bcm-ns-usb3.c 73 */;
	int *cocci_id/* drivers/phy/broadcom/phy-bcm-ns-usb3.c 63 */;
	const struct of_device_id cocci_id/* drivers/phy/broadcom/phy-bcm-ns-usb3.c 60 */[];
	struct bcm_ns_usb3 {
		struct device *dev;
		enum bcm_ns_family family;
		void __iomem *dmp;
		void __iomem *ccb_mii;
		struct mdio_device *mdiodev;
		struct phy *phy;
		int (*phy_write)(struct bcm_ns_usb3 *usb3, u16 reg, u16 value);
	} cocci_id/* drivers/phy/broadcom/phy-bcm-ns-usb3.c 49 */;
	enum bcm_ns_family{BCM_NS_UNKNOWN, BCM_NS_AX, BCM_NS_BX,} cocci_id/* drivers/phy/broadcom/phy-bcm-ns-usb3.c 43 */;
	void __exit cocci_id/* drivers/phy/broadcom/phy-bcm-ns-usb3.c 395 */;
	void cocci_id/* drivers/phy/broadcom/phy-bcm-ns-usb3.c 395 */;
	int __init cocci_id/* drivers/phy/broadcom/phy-bcm-ns-usb3.c 372 */;
	struct platform_driver cocci_id/* drivers/phy/broadcom/phy-bcm-ns-usb3.c 364 */;
	struct resource *cocci_id/* drivers/phy/broadcom/phy-bcm-ns-usb3.c 312 */;
	struct platform_device *cocci_id/* drivers/phy/broadcom/phy-bcm-ns-usb3.c 307 */;
	u32 cocci_id/* drivers/phy/broadcom/phy-bcm-ns-usb3.c 289 */;
	unsigned long cocci_id/* drivers/phy/broadcom/phy-bcm-ns-usb3.c 261 */;
	void __iomem *cocci_id/* drivers/phy/broadcom/phy-bcm-ns-usb3.c 260 */;
	struct mdio_driver cocci_id/* drivers/phy/broadcom/phy-bcm-ns-usb3.c 246 */;
	enum bcm_ns_family cocci_id/* drivers/phy/broadcom/phy-bcm-ns-usb3.c 217 */;
	struct resource cocci_id/* drivers/phy/broadcom/phy-bcm-ns-usb3.c 204 */;
	struct device_node *cocci_id/* drivers/phy/broadcom/phy-bcm-ns-usb3.c 202 */;
	struct phy_provider *cocci_id/* drivers/phy/broadcom/phy-bcm-ns-usb3.c 201 */;
	const struct of_device_id *cocci_id/* drivers/phy/broadcom/phy-bcm-ns-usb3.c 200 */;
	struct device *cocci_id/* drivers/phy/broadcom/phy-bcm-ns-usb3.c 199 */;
	struct mdio_device *cocci_id/* drivers/phy/broadcom/phy-bcm-ns-usb3.c 197 */;
	const struct phy_ops cocci_id/* drivers/phy/broadcom/phy-bcm-ns-usb3.c 180 */;
	struct phy *cocci_id/* drivers/phy/broadcom/phy-bcm-ns-usb3.c 157 */;
}
