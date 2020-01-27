cocci_test_suite() {
	void *cocci_id/* drivers/net/usb/ax88172a.c 97 */;
	struct urb *cocci_id/* drivers/net/usb/ax88172a.c 80 */;
	struct ax88172a_private *cocci_id/* drivers/net/usb/ax88172a.c 58 */;
	struct phy_device *cocci_id/* drivers/net/usb/ax88172a.c 56 */;
	struct net_device *cocci_id/* drivers/net/usb/ax88172a.c 54 */;
	void cocci_id/* drivers/net/usb/ax88172a.c 54 */;
	struct ifreq *cocci_id/* drivers/net/usb/ax88172a.c 42 */;
	const struct driver_info cocci_id/* drivers/net/usb/ax88172a.c 364 */;
	u16 cocci_id/* drivers/net/usb/ax88172a.c 36 */;
	struct asix_rx_fixup_info *cocci_id/* drivers/net/usb/ax88172a.c 359 */;
	struct sk_buff *cocci_id/* drivers/net/usb/ax88172a.c 356 */;
	struct usbnet *cocci_id/* drivers/net/usb/ax88172a.c 31 */;
	struct mii_bus *cocci_id/* drivers/net/usb/ax88172a.c 29 */;
	int cocci_id/* drivers/net/usb/ax88172a.c 29 */;
	struct asix_data *cocci_id/* drivers/net/usb/ax88172a.c 280 */;
	u8 cocci_id/* drivers/net/usb/ax88172a.c 186 */[ETH_ALEN];
	struct usb_interface *cocci_id/* drivers/net/usb/ax88172a.c 183 */;
	struct ax88172a_private {
		struct mii_bus *mdio;
		struct phy_device *phydev;
		char phy_name[20];
		u16 phy_addr;
		u16 oldmode;
		int use_embdphy;
		struct asix_rx_fixup_info rx_fixup_info;
	} cocci_id/* drivers/net/usb/ax88172a.c 18 */;
	const struct ethtool_ops cocci_id/* drivers/net/usb/ax88172a.c 141 */;
	const struct net_device_ops cocci_id/* drivers/net/usb/ax88172a.c 128 */;
}
