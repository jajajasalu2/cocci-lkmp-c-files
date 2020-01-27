cocci_test_suite() {
	struct __packed mcba_usb_msg {
		u8 cmd_id;
		u8 unused[18];
	} cocci_id/* drivers/net/can/usb/mcba_usb.c 99 */;
	struct usb_driver cocci_id/* drivers/net/can/usb/mcba_usb.c 883 */;
	struct __packed mcba_usb_msg_can {
		u8 cmd_id;
		__be16 eid;
		__be16 sid;
		u8 dlc;
		u8 data[8];
		u8 timestamp[4];
		u8 checksum;
	} cocci_id/* drivers/net/can/usb/mcba_usb.c 88 */;
	struct usb_interface *cocci_id/* drivers/net/can/usb/mcba_usb.c 870 */;
	struct mcba_priv cocci_id/* drivers/net/can/usb/mcba_usb.c 799 */;
	struct usb_device *cocci_id/* drivers/net/can/usb/mcba_usb.c 797 */;
	const struct usb_device_id *cocci_id/* drivers/net/can/usb/mcba_usb.c 792 */;
	struct mcba_usb_msg *cocci_id/* drivers/net/can/usb/mcba_usb.c 786 */;
	struct mcba_usb_msg_termination cocci_id/* drivers/net/can/usb/mcba_usb.c 777 */;
	u16 cocci_id/* drivers/net/can/usb/mcba_usb.c 774 */;
	const u16 cocci_id/* drivers/net/can/usb/mcba_usb.c 767 */;
	struct net_device *cocci_id/* drivers/net/can/usb/mcba_usb.c 764 */;
	const struct net_device_ops cocci_id/* drivers/net/can/usb/mcba_usb.c 754 */;
	struct can_berr_counter *cocci_id/* drivers/net/can/usb/mcba_usb.c 744 */;
	const struct net_device *cocci_id/* drivers/net/can/usb/mcba_usb.c 743 */;
	enum can_mode cocci_id/* drivers/net/can/usb/mcba_usb.c 738 */;
	struct mcba_priv {
		struct can_priv can;
		struct sk_buff *echo_skb[MCBA_MAX_TX_URBS];
		struct mcba_usb_ctx tx_context[MCBA_MAX_TX_URBS];
		struct usb_device *udev;
		struct net_device *netdev;
		struct usb_anchor tx_submitted;
		struct usb_anchor rx_submitted;
		struct can_berr_counter bec;
		bool usb_ka_first_pass;
		bool can_ka_first_pass;
		bool can_speed_check;
		atomic_t free_ctx_cnt;
	} cocci_id/* drivers/net/can/usb/mcba_usb.c 72 */;
	struct mcba_usb_ctx {
		struct mcba_priv *priv;
		u32 ndx;
		u8 dlc;
		bool can;
	} cocci_id/* drivers/net/can/usb/mcba_usb.c 64 */;
	u8 *cocci_id/* drivers/net/can/usb/mcba_usb.c 635 */;
	struct mcba_usb_msg cocci_id/* drivers/net/can/usb/mcba_usb.c 598 */;
	struct urb *cocci_id/* drivers/net/can/usb/mcba_usb.c 567 */;
	const u32 cocci_id/* drivers/net/can/usb/mcba_usb.c 483 */;
	u32 cocci_id/* drivers/net/can/usb/mcba_usb.c 481 */;
	struct mcba_usb_msg_ka_can *cocci_id/* drivers/net/can/usb/mcba_usb.c 481 */;
	struct mcba_usb_msg_ka_usb *cocci_id/* drivers/net/can/usb/mcba_usb.c 466 */;
	struct net_device_stats *cocci_id/* drivers/net/can/usb/mcba_usb.c 423 */;
	struct sk_buff *cocci_id/* drivers/net/can/usb/mcba_usb.c 422 */;
	struct mcba_usb_msg_can *cocci_id/* drivers/net/can/usb/mcba_usb.c 419 */;
	struct mcba_usb_msg_fw_ver cocci_id/* drivers/net/can/usb/mcba_usb.c 410 */;
	u8 cocci_id/* drivers/net/can/usb/mcba_usb.c 408 */;
	struct mcba_usb_msg_change_bitrate cocci_id/* drivers/net/can/usb/mcba_usb.c 399 */;
	struct mcba_usb_msg_can cocci_id/* drivers/net/can/usb/mcba_usb.c 318 */;
	netdev_tx_t cocci_id/* drivers/net/can/usb/mcba_usb.c 309 */;
	struct mcba_usb_ctx *cocci_id/* drivers/net/can/usb/mcba_usb.c 208 */;
	struct can_frame *cocci_id/* drivers/net/can/usb/mcba_usb.c 175 */;
	int cocci_id/* drivers/net/can/usb/mcba_usb.c 164 */;
	struct mcba_priv *cocci_id/* drivers/net/can/usb/mcba_usb.c 162 */;
	void cocci_id/* drivers/net/can/usb/mcba_usb.c 162 */;
	const u32 cocci_id/* drivers/net/can/usb/mcba_usb.c 157 */[];
	const u16 cocci_id/* drivers/net/can/usb/mcba_usb.c 154 */[];
	const struct usb_device_id cocci_id/* drivers/net/can/usb/mcba_usb.c 147 */[];
	struct __packed mcba_usb_msg_fw_ver {
		u8 cmd_id;
		u8 pic;
		u8 unused[17];
	} cocci_id/* drivers/net/can/usb/mcba_usb.c 141 */;
	struct __packed mcba_usb_msg_termination {
		u8 cmd_id;
		u8 termination;
		u8 unused[17];
	} cocci_id/* drivers/net/can/usb/mcba_usb.c 135 */;
	struct __packed mcba_usb_msg_change_bitrate {
		u8 cmd_id;
		__be16 bitrate;
		u8 unused[16];
	} cocci_id/* drivers/net/can/usb/mcba_usb.c 129 */;
	struct __packed mcba_usb_msg_ka_can {
		u8 cmd_id;
		u8 tx_err_cnt;
		u8 rx_err_cnt;
		u8 rx_buff_ovfl;
		u8 tx_bus_off;
		__be16 can_bitrate;
		__le16 rx_lost;
		u8 can_stat;
		u8 soft_ver_major;
		u8 soft_ver_minor;
		u8 debug_mode;
		u8 test_complete;
		u8 test_result;
		u8 unused[4];
	} cocci_id/* drivers/net/can/usb/mcba_usb.c 112 */;
	struct __packed mcba_usb_msg_ka_usb {
		u8 cmd_id;
		u8 termination_state;
		u8 soft_ver_major;
		u8 soft_ver_minor;
		u8 unused[15];
	} cocci_id/* drivers/net/can/usb/mcba_usb.c 104 */;
}
