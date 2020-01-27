cocci_test_suite() {
	netdev_features_t cocci_id/* drivers/net/usb/smsc75xx.c 935 */;
	bool cocci_id/* drivers/net/usb/smsc75xx.c 878 */;
	int (*cocci_id/* drivers/net/usb/smsc75xx.c 81 */)(struct usbnet *,
							   u8, u8, u16, u16,
							   void *, u16);
	u32 *cocci_id/* drivers/net/usb/smsc75xx.c 77 */;
	const u8 *cocci_id/* drivers/net/usb/smsc75xx.c 760 */;
	int __must_check cocci_id/* drivers/net/usb/smsc75xx.c 76 */;
	struct ifreq *cocci_id/* drivers/net/usb/smsc75xx.c 748 */;
	const struct ethtool_ops cocci_id/* drivers/net/usb/smsc75xx.c 733 */;
	int cocci_id/* drivers/net/usb/smsc75xx.c 73 */(struct usbnet *dev);
	struct ethtool_wolinfo *cocci_id/* drivers/net/usb/smsc75xx.c 705 */;
	u8 *cocci_id/* drivers/net/usb/smsc75xx.c 681 */;
	struct ethtool_eeprom *cocci_id/* drivers/net/usb/smsc75xx.c 681 */;
	struct urb *cocci_id/* drivers/net/usb/smsc75xx.c 654 */;
	struct usb_context {
		struct usb_ctrlrequest req;
		struct usbnet *dev;
	} cocci_id/* drivers/net/usb/smsc75xx.c 64 */;
	struct ethtool_cmd cocci_id/* drivers/net/usb/smsc75xx.c 629 */;
	struct netdev_hw_addr *cocci_id/* drivers/net/usb/smsc75xx.c 564 */;
	struct smsc75xx_priv {
		struct usbnet *dev;
		u32 rfe_ctl;
		u32 wolopts;
		u32 multicast_hash_table[DP_SEL_VHF_HASH_LEN];
		struct mutex dataport_mutex;
		spinlock_t rfe_ctl_lock;
		struct work_struct set_multicast;
		u8 suspend_flags;
	} cocci_id/* drivers/net/usb/smsc75xx.c 53 */;
	struct work_struct *cocci_id/* drivers/net/usb/smsc75xx.c 523 */;
	char cocci_id/* drivers/net/usb/smsc75xx.c 518 */[ETH_ALEN];
	struct usb_driver cocci_id/* drivers/net/usb/smsc75xx.c 2320 */;
	const struct usb_device_id cocci_id/* drivers/net/usb/smsc75xx.c 2305 */[];
	const struct driver_info cocci_id/* drivers/net/usb/smsc75xx.c 2292 */;
	void cocci_id/* drivers/net/usb/smsc75xx.c 226 */;
	void *cocci_id/* drivers/net/usb/smsc75xx.c 2258 */;
	gfp_t cocci_id/* drivers/net/usb/smsc75xx.c 2255 */;
	struct sk_buff cocci_id/* drivers/net/usb/smsc75xx.c 2220 */;
	u16 cocci_id/* drivers/net/usb/smsc75xx.c 219 */;
	unsigned char *cocci_id/* drivers/net/usb/smsc75xx.c 2181 */;
	struct sk_buff *cocci_id/* drivers/net/usb/smsc75xx.c 2160 */;
	u8 cocci_id/* drivers/net/usb/smsc75xx.c 2090 */;
	const u8 cocci_id/* drivers/net/usb/smsc75xx.c 1899 */[];
	u32 cocci_id/* drivers/net/usb/smsc75xx.c 183 */;
	struct usbnet *cocci_id/* drivers/net/usb/smsc75xx.c 182 */;
	struct net_device *cocci_id/* drivers/net/usb/smsc75xx.c 179 */;
	int cocci_id/* drivers/net/usb/smsc75xx.c 179 */;
	pm_message_t cocci_id/* drivers/net/usb/smsc75xx.c 1785 */;
	struct mii_if_info *cocci_id/* drivers/net/usb/smsc75xx.c 1700 */;
	unsigned long cocci_id/* drivers/net/usb/smsc75xx.c 161 */;
	size_t cocci_id/* drivers/net/usb/smsc75xx.c 1518 */;
	struct smsc75xx_priv cocci_id/* drivers/net/usb/smsc75xx.c 1459 */;
	struct smsc75xx_priv *cocci_id/* drivers/net/usb/smsc75xx.c 1448 */;
	struct usb_interface *cocci_id/* drivers/net/usb/smsc75xx.c 1446 */;
	const struct net_device_ops cocci_id/* drivers/net/usb/smsc75xx.c 1432 */;
	ulong cocci_id/* drivers/net/usb/smsc75xx.c 1167 */;
	int (*cocci_id/* drivers/net/usb/smsc75xx.c 110 */)(struct usbnet *,
							    u8, u8, u16, u16,
							    const void *, u16);
}
