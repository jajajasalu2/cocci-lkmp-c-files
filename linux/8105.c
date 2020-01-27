cocci_test_suite() {
	struct version_msg {
		u8 len;
		u8 cmd;
		u8 rsvd;
		u8 flags;
		__le32 drv_version;
	} cocci_id/* drivers/net/can/usb/esd_usb2.c 96 */;
	enum can_mode cocci_id/* drivers/net/can/usb/esd_usb2.c 949 */;
	struct can_berr_counter *cocci_id/* drivers/net/can/usb/esd_usb2.c 939 */;
	const struct net_device *cocci_id/* drivers/net/can/usb/esd_usb2.c 938 */;
	struct header_msg {
		u8 len;
		u8 cmd;
		u8 rsvd[2];
	} cocci_id/* drivers/net/can/usb/esd_usb2.c 90 */;
	struct can_bittiming *cocci_id/* drivers/net/can/usb/esd_usb2.c 892 */;
	const struct can_bittiming_const cocci_id/* drivers/net/can/usb/esd_usb2.c 877 */;
	const struct net_device_ops cocci_id/* drivers/net/can/usb/esd_usb2.c 870 */;
	struct esd_usb2_msg *cocci_id/* drivers/net/can/usb/esd_usb2.c 833 */;
	struct esd_usb2_net_priv *cocci_id/* drivers/net/can/usb/esd_usb2.c 832 */;
	struct net_device *cocci_id/* drivers/net/can/usb/esd_usb2.c 830 */;
	int cocci_id/* drivers/net/can/usb/esd_usb2.c 830 */;
	struct esd_usb2_msg cocci_id/* drivers/net/can/usb/esd_usb2.c 713 */;
	size_t cocci_id/* drivers/net/can/usb/esd_usb2.c 713 */;
	struct esd_tx_urb_context *cocci_id/* drivers/net/can/usb/esd_usb2.c 705 */;
	netdev_tx_t cocci_id/* drivers/net/can/usb/esd_usb2.c 700 */;
	u8 *cocci_id/* drivers/net/can/usb/esd_usb2.c 546 */;
	struct device_attribute *cocci_id/* drivers/net/can/usb/esd_usb2.c 477 */;
	char *cocci_id/* drivers/net/can/usb/esd_usb2.c 477 */;
	struct device *cocci_id/* drivers/net/can/usb/esd_usb2.c 476 */;
	ssize_t cocci_id/* drivers/net/can/usb/esd_usb2.c 476 */;
	struct urb *cocci_id/* drivers/net/can/usb/esd_usb2.c 372 */;
	u32 cocci_id/* drivers/net/can/usb/esd_usb2.c 307 */;
	struct sk_buff *cocci_id/* drivers/net/can/usb/esd_usb2.c 305 */;
	struct can_frame *cocci_id/* drivers/net/can/usb/esd_usb2.c 304 */;
	struct net_device_stats *cocci_id/* drivers/net/can/usb/esd_usb2.c 303 */;
	u8 cocci_id/* drivers/net/can/usb/esd_usb2.c 223 */;
	struct esd_usb2_net_priv {
		struct can_priv can;
		atomic_t active_tx_jobs;
		struct usb_anchor tx_submitted;
		struct esd_tx_urb_context tx_contexts[MAX_TX_URBS];
		struct esd_usb2 *usb2;
		struct net_device *netdev;
		int index;
		u8 old_state;
		struct can_berr_counter bec;
	} cocci_id/* drivers/net/can/usb/esd_usb2.c 200 */;
	struct esd_usb2 {
		struct usb_device *udev;
		struct esd_usb2_net_priv *nets[ESD_USB2_MAX_NETS];
		struct usb_anchor rx_submitted;
		int net_count;
		u32 version;
		int rxinitdone;
	} cocci_id/* drivers/net/can/usb/esd_usb2.c 189 */;
	struct esd_tx_urb_context {
		struct esd_usb2_net_priv *priv;
		u32 echo_index;
		int dlc;
	} cocci_id/* drivers/net/can/usb/esd_usb2.c 183 */;
	struct esd_usb2_net_priv cocci_id/* drivers/net/can/usb/esd_usb2.c 181 */;
	struct usb_device_id cocci_id/* drivers/net/can/usb/esd_usb2.c 174 */[];
	struct __attribute__((packed)) esd_usb2_msg {
			union {
				struct header_msg hdr;
				struct version_msg version;
				struct version_reply_msg version_reply;
				struct rx_msg rx;
				struct tx_msg tx;
				struct tx_done_msg txdone;
				struct set_baudrate_msg setbaud;
				struct id_filter_msg filter;
			} msg;
		} cocci_id/* drivers/net/can/usb/esd_usb2.c 161 */;
	struct set_baudrate_msg {
		u8 len;
		u8 cmd;
		u8 net;
		u8 rsvd;
		__le32 baud;
	} cocci_id/* drivers/net/can/usb/esd_usb2.c 152 */;
	struct id_filter_msg {
		u8 len;
		u8 cmd;
		u8 net;
		u8 option;
		__le32 mask[ESD_MAX_ID_SEGMENT + 1];
	} cocci_id/* drivers/net/can/usb/esd_usb2.c 144 */;
	struct tx_done_msg {
		u8 len;
		u8 cmd;
		u8 net;
		u8 status;
		u32 hnd;
		__le32 ts;
	} cocci_id/* drivers/net/can/usb/esd_usb2.c 135 */;
	struct tx_msg {
		u8 len;
		u8 cmd;
		u8 net;
		u8 dlc;
		u32 hnd;
		__le32 id;
		u8 data[8];
	} cocci_id/* drivers/net/can/usb/esd_usb2.c 125 */;
	struct rx_msg {
		u8 len;
		u8 cmd;
		u8 net;
		u8 dlc;
		__le32 ts;
		__le32 id;
		u8 data[8];
	} cocci_id/* drivers/net/can/usb/esd_usb2.c 115 */;
	struct usb_driver cocci_id/* drivers/net/can/usb/esd_usb2.c 1134 */;
	struct esd_usb2 *cocci_id/* drivers/net/can/usb/esd_usb2.c 1110 */;
	struct usb_interface *cocci_id/* drivers/net/can/usb/esd_usb2.c 1108 */;
	void cocci_id/* drivers/net/can/usb/esd_usb2.c 1108 */;
	struct version_reply_msg {
		u8 len;
		u8 cmd;
		u8 nets;
		u8 features;
		__le32 version;
		u8 name[16];
		__le32 rsvd;
		__le32 ts;
	} cocci_id/* drivers/net/can/usb/esd_usb2.c 104 */;
	const struct usb_device_id *cocci_id/* drivers/net/can/usb/esd_usb2.c 1035 */;
}
