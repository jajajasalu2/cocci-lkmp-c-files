cocci_test_suite() {
	enum{MCS7830_RX_SHORT_FRAME=0x01, MCS7830_RX_LENGTH_ERROR=0x02, MCS7830_RX_ALIGNMENT_ERROR=0x04, MCS7830_RX_CRC_ERROR=0x08, MCS7830_RX_LARGE_FRAME=0x10, MCS7830_RX_FRAME_CORRECT=0x20,} cocci_id/* drivers/net/usb/mcs7830.c 92 */;
	enum{HIF_REG_MULTICAST_HASH=0x00, HIF_REG_PACKET_GAP1=0x08, HIF_REG_PACKET_GAP2=0x09, HIF_REG_PHY_DATA=0x0a, HIF_REG_PHY_CMD1=0x0c, HIF_REG_PHY_CMD1_READ=0x40, HIF_REG_PHY_CMD1_WRITE=0x20, HIF_REG_PHY_CMD1_PHYADDR=0x01, HIF_REG_PHY_CMD2=0x0d, HIF_REG_PHY_CMD2_PEND_FLAG_BIT=0x80, HIF_REG_PHY_CMD2_READY_FLAG_BIT=0x40, HIF_REG_CONFIG=0x0e, HIF_REG_CONFIG_CFG=0x80, HIF_REG_CONFIG_SPEED100=0x40, HIF_REG_CONFIG_FULLDUPLEX_ENABLE=0x20, HIF_REG_CONFIG_RXENABLE=0x10, HIF_REG_CONFIG_TXENABLE=0x08, HIF_REG_CONFIG_SLEEPMODE=0x04, HIF_REG_CONFIG_ALLMULTICAST=0x02, HIF_REG_CONFIG_PROMISCUOUS=0x01, HIF_REG_ETHERNET_ADDR=0x0f, HIF_REG_FRAME_DROP_COUNTER=0x15, HIF_REG_PAUSE_THRESHOLD=0x16, HIF_REG_PAUSE_THRESHOLD_DEFAULT=0,} cocci_id/* drivers/net/usb/mcs7830.c 63 */;
	struct usb_driver cocci_id/* drivers/net/usb/mcs7830.c 616 */;
	unsigned long cocci_id/* drivers/net/usb/mcs7830.c 584 */;
	const struct usb_device_id cocci_id/* drivers/net/usb/mcs7830.c 581 */[];
	const struct driver_info cocci_id/* drivers/net/usb/mcs7830.c 561 */;
	bool cocci_id/* drivers/net/usb/mcs7830.c 548 */;
	struct urb *cocci_id/* drivers/net/usb/mcs7830.c 545 */;
	struct sk_buff *cocci_id/* drivers/net/usb/mcs7830.c 512 */;
	u8 *cocci_id/* drivers/net/usb/mcs7830.c 504 */;
	struct net_device *cocci_id/* drivers/net/usb/mcs7830.c 474 */;
	struct usb_interface *cocci_id/* drivers/net/usb/mcs7830.c 472 */;
	const struct net_device_ops cocci_id/* drivers/net/usb/mcs7830.c 459 */;
	const struct ethtool_ops cocci_id/* drivers/net/usb/mcs7830.c 445 */;
	struct ethtool_regs *cocci_id/* drivers/net/usb/mcs7830.c 437 */;
	struct ethtool_drvinfo *cocci_id/* drivers/net/usb/mcs7830.c 432 */;
	struct usbnet *cocci_id/* drivers/net/usb/mcs7830.c 381 */;
	int cocci_id/* drivers/net/usb/mcs7830.c 381 */;
	u32 cocci_id/* drivers/net/usb/mcs7830.c 371 */;
	struct netdev_hw_addr *cocci_id/* drivers/net/usb/mcs7830.c 370 */;
	struct mcs7830_data *cocci_id/* drivers/net/usb/mcs7830.c 349 */;
	void cocci_id/* drivers/net/usb/mcs7830.c 346 */;
	struct ifreq *cocci_id/* drivers/net/usb/mcs7830.c 319 */;
	u8 cocci_id/* drivers/net/usb/mcs7830.c 279 */[2];
	__le16 cocci_id/* drivers/net/usb/mcs7830.c 171 */;
	u8 cocci_id/* drivers/net/usb/mcs7830.c 167 */;
	struct sockaddr *cocci_id/* drivers/net/usb/mcs7830.c 148 */;
	unsigned char *cocci_id/* drivers/net/usb/mcs7830.c 127 */;
	const void *cocci_id/* drivers/net/usb/mcs7830.c 115 */;
	u16 cocci_id/* drivers/net/usb/mcs7830.c 109 */;
	void *cocci_id/* drivers/net/usb/mcs7830.c 109 */;
	const char cocci_id/* drivers/net/usb/mcs7830.c 107 */[];
	struct mcs7830_data {
		u8 multi_filter[8];
		u8 config;
	} cocci_id/* drivers/net/usb/mcs7830.c 102 */;
}
