cocci_test_suite() {
	struct usb_interface *cocci_id/* drivers/net/can/usb/usb_8dev.c 989 */;
	struct usb_8dev_priv cocci_id/* drivers/net/can/usb/usb_8dev.c 913 */;
	struct usb_device *cocci_id/* drivers/net/can/usb/usb_8dev.c 904 */;
	char cocci_id/* drivers/net/can/usb/usb_8dev.c 903 */[18];
	const struct usb_device_id *cocci_id/* drivers/net/can/usb/usb_8dev.c 897 */;
	const struct can_bittiming_const cocci_id/* drivers/net/can/usb/usb_8dev.c 878 */;
	const struct net_device_ops cocci_id/* drivers/net/can/usb/usb_8dev.c 871 */;
	struct net_device *cocci_id/* drivers/net/can/usb/usb_8dev.c 847 */;
	int cocci_id/* drivers/net/can/usb/usb_8dev.c 835 */;
	struct usb_8dev_priv *cocci_id/* drivers/net/can/usb/usb_8dev.c 833 */;
	void cocci_id/* drivers/net/can/usb/usb_8dev.c 833 */;
	struct can_berr_counter *cocci_id/* drivers/net/can/usb/usb_8dev.c 717 */;
	const struct net_device *cocci_id/* drivers/net/can/usb/usb_8dev.c 716 */;
	struct usb_8dev_tx_msg cocci_id/* drivers/net/can/usb/usb_8dev.c 610 */;
	size_t cocci_id/* drivers/net/can/usb/usb_8dev.c 610 */;
	struct usb_8dev_tx_urb_context *cocci_id/* drivers/net/can/usb/usb_8dev.c 607 */;
	struct usb_8dev_tx_msg *cocci_id/* drivers/net/can/usb/usb_8dev.c 605 */;
	netdev_tx_t cocci_id/* drivers/net/can/usb/usb_8dev.c 599 */;
	struct usb_8dev_rx_msg cocci_id/* drivers/net/can/usb/usb_8dev.c 530 */;
	enum usb_8dev_cmd{USB_8DEV_RESET=1, USB_8DEV_OPEN, USB_8DEV_CLOSE, USB_8DEV_SET_SPEED, USB_8DEV_SET_MASK_FILTER, USB_8DEV_GET_STATUS, USB_8DEV_GET_STATISTICS, USB_8DEV_GET_SERIAL, USB_8DEV_GET_SOFTW_VER, USB_8DEV_GET_HARDW_VER, USB_8DEV_RESET_TIMESTAMP, USB_8DEV_GET_SOFTW_HARDW_VER,} cocci_id/* drivers/net/can/usb/usb_8dev.c 53 */;
	struct usb_8dev_rx_msg *cocci_id/* drivers/net/can/usb/usb_8dev.c 528 */;
	struct urb *cocci_id/* drivers/net/can/usb/usb_8dev.c 499 */;
	struct net_device_stats *cocci_id/* drivers/net/can/usb/usb_8dev.c 462 */;
	struct sk_buff *cocci_id/* drivers/net/can/usb/usb_8dev.c 461 */;
	struct can_frame *cocci_id/* drivers/net/can/usb/usb_8dev.c 460 */;
	enum usb_8dev_endpoint{USB_8DEV_ENDP_DATA_RX=1, USB_8DEV_ENDP_DATA_TX, USB_8DEV_ENDP_CMD_RX, USB_8DEV_ENDP_CMD_TX,} cocci_id/* drivers/net/can/usb/usb_8dev.c 36 */;
	u8 cocci_id/* drivers/net/can/usb/usb_8dev.c 350 */;
	enum can_mode cocci_id/* drivers/net/can/usb/usb_8dev.c 315 */;
	__be32 *cocci_id/* drivers/net/can/usb/usb_8dev.c 305 */;
	u32 *cocci_id/* drivers/net/can/usb/usb_8dev.c 291 */;
	struct usb_8dev_cmd_msg cocci_id/* drivers/net/can/usb/usb_8dev.c 279 */;
	u16 cocci_id/* drivers/net/can/usb/usb_8dev.c 259 */;
	__be16 cocci_id/* drivers/net/can/usb/usb_8dev.c 249 */;
	__be32 cocci_id/* drivers/net/can/usb/usb_8dev.c 248 */;
	u32 cocci_id/* drivers/net/can/usb/usb_8dev.c 246 */;
	struct can_bittiming *cocci_id/* drivers/net/can/usb/usb_8dev.c 243 */;
	struct usb_8dev_cmd_msg *cocci_id/* drivers/net/can/usb/usb_8dev.c 197 */;
	int *cocci_id/* drivers/net/can/usb/usb_8dev.c 186 */;
	u8 *cocci_id/* drivers/net/can/usb/usb_8dev.c 176 */;
	struct __packed usb_8dev_cmd_msg {
		u8 begin;
		u8 channel;
		u8 command;
		u8 opt1;
		u8 opt2;
		u8 data[10];
		u8 end;
	} cocci_id/* drivers/net/can/usb/usb_8dev.c 166 */;
	struct __packed usb_8dev_rx_msg {
		u8 begin;
		u8 type;
		u8 flags;
		__be32 id;
		u8 dlc;
		u8 data[8];
		__be32 timestamp;
		u8 end;
	} cocci_id/* drivers/net/can/usb/usb_8dev.c 154 */;
	struct __packed usb_8dev_tx_msg {
		u8 begin;
		u8 flags;
		__be32 id;
		u8 dlc;
		u8 data[8];
		u8 end;
	} cocci_id/* drivers/net/can/usb/usb_8dev.c 144 */;
	struct usb_8dev_priv {
		struct can_priv can;
		struct sk_buff *echo_skb[MAX_TX_URBS];
		struct usb_device *udev;
		struct net_device *netdev;
		atomic_t active_tx_urbs;
		struct usb_anchor tx_submitted;
		struct usb_8dev_tx_urb_context tx_contexts[MAX_TX_URBS];
		struct usb_anchor rx_submitted;
		struct can_berr_counter bec;
		u8 *cmd_msg_buffer;
		struct mutex usb_8dev_cmd_lock;
	} cocci_id/* drivers/net/can/usb/usb_8dev.c 121 */;
	struct usb_8dev_tx_urb_context {
		struct usb_8dev_priv *priv;
		u32 echo_index;
		u8 dlc;
	} cocci_id/* drivers/net/can/usb/usb_8dev.c 113 */;
	const struct usb_device_id cocci_id/* drivers/net/can/usb/usb_8dev.c 106 */[];
	struct usb_driver cocci_id/* drivers/net/can/usb/usb_8dev.c 1005 */;
}
