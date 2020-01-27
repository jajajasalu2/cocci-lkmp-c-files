cocci_test_suite() {
	const u8 *cocci_id/* drivers/net/usb/smsc95xx.c 904 */;
	struct ifreq *cocci_id/* drivers/net/usb/smsc95xx.c 892 */;
	const struct ethtool_ops cocci_id/* drivers/net/usb/smsc95xx.c 874 */;
	const struct ethtool_link_ksettings *cocci_id/* drivers/net/usb/smsc95xx.c 860 */;
	struct ethtool_link_ksettings *cocci_id/* drivers/net/usb/smsc95xx.c 845 */;
	__u8 cocci_id/* drivers/net/usb/smsc95xx.c 796 */;
	int (*cocci_id/* drivers/net/usb/smsc95xx.c 78 */)(struct usbnet *,
							   u8, u8, u16, u16,
							   void *, u16);
	struct ethtool_wolinfo *cocci_id/* drivers/net/usb/smsc95xx.c 747 */;
	u32 *cocci_id/* drivers/net/usb/smsc95xx.c 74 */;
	void *cocci_id/* drivers/net/usb/smsc95xx.c 724 */;
	struct ethtool_regs *cocci_id/* drivers/net/usb/smsc95xx.c 723 */;
	u8 *cocci_id/* drivers/net/usb/smsc95xx.c 693 */;
	struct ethtool_eeprom *cocci_id/* drivers/net/usb/smsc95xx.c 693 */;
	netdev_features_t cocci_id/* drivers/net/usb/smsc95xx.c 659 */;
	struct smsc95xx_priv cocci_id/* drivers/net/usb/smsc95xx.c 636 */;
	struct smsc95xx_priv *cocci_id/* drivers/net/usb/smsc95xx.c 636 */;
	struct work_struct *cocci_id/* drivers/net/usb/smsc95xx.c 634 */;
	bool cocci_id/* drivers/net/usb/smsc95xx.c 619 */;
	struct urb *cocci_id/* drivers/net/usb/smsc95xx.c 599 */;
	struct ethtool_cmd cocci_id/* drivers/net/usb/smsc95xx.c 555 */;
	struct smsc95xx_priv {
		u32 chip_id;
		u32 mac_cr;
		u32 hash_hi;
		u32 hash_lo;
		u32 wolopts;
		spinlock_t mac_cr_lock;
		u8 features;
		u8 suspend_flags;
		u8 mdix_ctrl;
		bool link_ok;
		struct delayed_work carrier_check;
		struct usbnet *dev;
	} cocci_id/* drivers/net/usb/smsc95xx.c 54 */;
	u8 cocci_id/* drivers/net/usb/smsc95xx.c 514 */;
	struct netdev_hw_addr *cocci_id/* drivers/net/usb/smsc95xx.c 476 */;
	char cocci_id/* drivers/net/usb/smsc95xx.c 450 */[ETH_ALEN];
	const u16 cocci_id/* drivers/net/usb/smsc95xx.c 430 */;
	void cocci_id/* drivers/net/usb/smsc95xx.c 221 */;
	struct usb_driver cocci_id/* drivers/net/usb/smsc95xx.c 2197 */;
	u16 cocci_id/* drivers/net/usb/smsc95xx.c 214 */;
	const struct usb_device_id cocci_id/* drivers/net/usb/smsc95xx.c 2102 */[];
	const struct driver_info cocci_id/* drivers/net/usb/smsc95xx.c 2089 */;
	__sum16 *cocci_id/* drivers/net/usb/smsc95xx.c 2047 */;
	__wsum cocci_id/* drivers/net/usb/smsc95xx.c 2045 */;
	long cocci_id/* drivers/net/usb/smsc95xx.c 2044 */;
	gfp_t cocci_id/* drivers/net/usb/smsc95xx.c 2018 */;
	unsigned int cocci_id/* drivers/net/usb/smsc95xx.c 2010 */;
	struct sk_buff *cocci_id/* drivers/net/usb/smsc95xx.c 1993 */;
	struct sk_buff cocci_id/* drivers/net/usb/smsc95xx.c 1960 */;
	unsigned char *cocci_id/* drivers/net/usb/smsc95xx.c 1920 */;
	u16 *cocci_id/* drivers/net/usb/smsc95xx.c 1906 */;
	u32 cocci_id/* drivers/net/usb/smsc95xx.c 180 */;
	struct usbnet *cocci_id/* drivers/net/usb/smsc95xx.c 179 */;
	struct net_device *cocci_id/* drivers/net/usb/smsc95xx.c 176 */;
	int cocci_id/* drivers/net/usb/smsc95xx.c 176 */;
	const u8 cocci_id/* drivers/net/usb/smsc95xx.c 1678 */[];
	u32 cocci_id/* drivers/net/usb/smsc95xx.c 1661 */[4];
	u32 cocci_id/* drivers/net/usb/smsc95xx.c 1659 */[2];
	unsigned long cocci_id/* drivers/net/usb/smsc95xx.c 158 */;
	pm_message_t cocci_id/* drivers/net/usb/smsc95xx.c 1577 */;
	int __must_check cocci_id/* drivers/net/usb/smsc95xx.c 155 */;
	struct mii_if_info *cocci_id/* drivers/net/usb/smsc95xx.c 1343 */;
	size_t cocci_id/* drivers/net/usb/smsc95xx.c 1335 */;
	struct usb_interface *cocci_id/* drivers/net/usb/smsc95xx.c 1248 */;
	const struct net_device_ops cocci_id/* drivers/net/usb/smsc95xx.c 1234 */;
	ulong cocci_id/* drivers/net/usb/smsc95xx.c 1104 */;
	int (*cocci_id/* drivers/net/usb/smsc95xx.c 107 */)(struct usbnet *,
							    u8, u8, u16, u16,
							    const void *, u16);
}
