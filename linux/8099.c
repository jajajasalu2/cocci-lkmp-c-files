cocci_test_suite() {
	struct urb *cocci_id/* drivers/net/can/usb/ucan.c 964 */[UCAN_MAX_RX_URBS];
	void *cocci_id/* drivers/net/can/usb/ucan.c 884 */;
	struct urb **cocci_id/* drivers/net/can/usb/ucan.c 858 */;
	enum{UCAN_COMMAND_START=0, UCAN_COMMAND_STOP=1, UCAN_COMMAND_SLEEP=2, UCAN_COMMAND_WAKEUP=3, UCAN_COMMAND_RESET=4, UCAN_COMMAND_GET=5, UCAN_COMMAND_FILTER=6, UCAN_COMMAND_SET_BITTIMING=7, UCAN_COMMAND_RESTART=8,} cocci_id/* drivers/net/can/usb/ucan.c 77 */;
	u8 *cocci_id/* drivers/net/can/usb/ucan.c 744 */;
	enum{UCAN_DEVICE_GET_FW_STRING=0,} cocci_id/* drivers/net/can/usb/ucan.c 72 */;
	struct sk_buff *cocci_id/* drivers/net/can/usb/ucan.c 570 */;
	struct can_device_stats *cocci_id/* drivers/net/can/usb/ucan.c 489 */;
	struct net_device_stats *cocci_id/* drivers/net/can/usb/ucan.c 488 */;
	enum can_state cocci_id/* drivers/net/can/usb/ucan.c 487 */;
	canid_t cocci_id/* drivers/net/can/usb/ucan.c 485 */;
	struct ucan_message_in *cocci_id/* drivers/net/can/usb/ucan.c 484 */;
	bool cocci_id/* drivers/net/can/usb/ucan.c 483 */;
	struct can_bittiming_const *cocci_id/* drivers/net/can/usb/ucan.c 447 */;
	struct ucan_ctl_cmd_device_info *cocci_id/* drivers/net/can/usb/ucan.c 445 */;
	u8 cocci_id/* drivers/net/can/usb/ucan.c 413 */;
	u16 cocci_id/* drivers/net/can/usb/ucan.c 413 */;
	unsigned long cocci_id/* drivers/net/can/usb/ucan.c 356 */;
	int cocci_id/* drivers/net/can/usb/ucan.c 355 */;
	struct ucan_urb_context *cocci_id/* drivers/net/can/usb/ucan.c 353 */;
	struct ucan_priv *cocci_id/* drivers/net/can/usb/ucan.c 353 */;
	struct ucan_can_msg *cocci_id/* drivers/net/can/usb/ucan.c 306 */;
	struct ucan_priv {
		struct can_priv can;
		struct usb_device *udev;
		struct usb_interface *intf;
		struct net_device *netdev;
		spinlock_t echo_skb_lock;
		u8 intf_index;
		u8 in_ep_addr;
		u8 out_ep_addr;
		u16 in_ep_size;
		struct usb_anchor rx_urbs;
		struct usb_anchor tx_urbs;
		union ucan_ctl_payload *ctl_msg_buffer;
		struct ucan_device_info device_info;
		spinlock_t context_lock;
		unsigned int available_tx_urbs;
		struct ucan_urb_context *context_array;
	} cocci_id/* drivers/net/can/usb/ucan.c 273 */;
	struct ucan_device_info {
		struct can_bittiming_const bittiming_const;
		u8 tx_fifo;
	} cocci_id/* drivers/net/can/usb/ucan.c 267 */;
	struct ucan_urb_context {
		struct ucan_priv *up;
		u8 dlc;
		bool allocated;
	} cocci_id/* drivers/net/can/usb/ucan.c 260 */;
	struct ucan_priv cocci_id/* drivers/net/can/usb/ucan.c 257 */;
	struct ucan_message_in cocci_id/* drivers/net/can/usb/ucan.c 254 */;
	struct ucan_message_out cocci_id/* drivers/net/can/usb/ucan.c 252 */;
	struct ucan_message_in {
		__le16 len;
		u8 type;
		u8 subtype;
		union {
			struct ucan_can_msg can_msg;
			struct ucan_tx_complete_entry_t can_tx_complete_msg[0];
		}__aligned(0x4) msg;
	}__packed cocci_id/* drivers/net/can/usb/ucan.c 232 */;
	struct ucan_message_out {
		__le16 len;
		u8 type;
		u8 subtype;
		union {
			struct ucan_can_msg can_msg;
		} msg;
	}__packed __aligned(0x4) cocci_id/* drivers/net/can/usb/ucan.c 217 */;
	struct ucan_can_msg {
		__le32 id;
		union {
			u8 data[CAN_MAX_DLEN];
			u8 dlc;
		};
	}__packed cocci_id/* drivers/net/can/usb/ucan.c 202 */;
	struct ucan_tx_complete_entry_t {
		u8 echo_index;
		u8 flags;
	}__packed __aligned(0x2) cocci_id/* drivers/net/can/usb/ucan.c 196 */;
	enum{UCAN_TX_COMPLETE_SUCCESS=BIT(0),} cocci_id/* drivers/net/can/usb/ucan.c 191 */;
	union ucan_ctl_payload {
		struct ucan_ctl_cmd_start cmd_start;
		struct ucan_ctl_cmd_set_bittiming cmd_set_bittiming;
		struct ucan_ctl_cmd_device_info cmd_get_device_info;
		struct ucan_ctl_cmd_get_protocol_version cmd_get_protocol_version;
		u8 raw[128];
	}__packed cocci_id/* drivers/net/can/usb/ucan.c 169 */;
	struct ucan_ctl_cmd_get_protocol_version {
		__le32 version;
	}__packed cocci_id/* drivers/net/can/usb/ucan.c 165 */;
	struct usb_driver cocci_id/* drivers/net/can/usb/ucan.c 1594 */;
	struct usb_device_id cocci_id/* drivers/net/can/usb/ucan.c 1584 */[];
	struct usb_interface *cocci_id/* drivers/net/can/usb/ucan.c 1572 */;
	struct ucan_ctl_cmd_device_info {
		__le32 freq;
		u8 tx_fifo;
		u8 sjw_max;
		u8 tseg1_min;
		u8 tseg1_max;
		u8 tseg2_min;
		u8 tseg2_max;
		__le16 brp_inc;
		__le32 brp_min;
		__le32 brp_max;
		__le16 ctrlmodes;
		__le16 hwfilter;
		__le16 rxmboxes;
	}__packed cocci_id/* drivers/net/can/usb/ucan.c 149 */;
	union ucan_ctl_payload cocci_id/* drivers/net/can/usb/ucan.c 1398 */;
	struct ucan_ctl_cmd_set_bittiming {
		__le32 tq;
		__le16 brp;
		__le16 sample_point;
		u8 prop_seg;
		u8 phase_seg1;
		u8 phase_seg2;
		u8 sjw;
	}__packed cocci_id/* drivers/net/can/usb/ucan.c 139 */;
	struct ucan_ctl_cmd_start {
		__le16 mode;
	}__packed cocci_id/* drivers/net/can/usb/ucan.c 135 */;
	char cocci_id/* drivers/net/can/usb/ucan.c 1313 */[sizeof(union ucan_ctl_payload) + 1];
	union ucan_ctl_payload *cocci_id/* drivers/net/can/usb/ucan.c 1312 */;
	struct usb_endpoint_descriptor *cocci_id/* drivers/net/can/usb/ucan.c 1307 */;
	struct usb_host_interface *cocci_id/* drivers/net/can/usb/ucan.c 1305 */;
	struct usb_device *cocci_id/* drivers/net/can/usb/ucan.c 1303 */;
	u32 cocci_id/* drivers/net/can/usb/ucan.c 1302 */;
	enum{UCAN_IN_TX_COMPLETE=1, UCAN_IN_RX=2,} cocci_id/* drivers/net/can/usb/ucan.c 130 */;
	const struct usb_device_id *cocci_id/* drivers/net/can/usb/ucan.c 1298 */;
	enum can_mode cocci_id/* drivers/net/can/usb/ucan.c 1266 */;
	enum{UCAN_OUT_TX=2,} cocci_id/* drivers/net/can/usb/ucan.c 125 */;
	struct ucan_ctl_cmd_set_bittiming *cocci_id/* drivers/net/can/usb/ucan.c 1246 */;
	const struct net_device_ops cocci_id/* drivers/net/can/usb/ucan.c 1230 */;
	struct net_device *cocci_id/* drivers/net/can/usb/ucan.c 1195 */;
	enum{UCAN_FILTER_CLEAR=0, UCAN_FILTER_DISABLE=1, UCAN_FILTER_ENABLE=2,} cocci_id/* drivers/net/can/usb/ucan.c 118 */;
	enum{UCAN_COMMAND_GET_INFO=0, UCAN_COMMAND_GET_PROTOCOL_VERSION=1,} cocci_id/* drivers/net/can/usb/ucan.c 112 */;
	netdev_tx_t cocci_id/* drivers/net/can/usb/ucan.c 1111 */;
	struct urb *cocci_id/* drivers/net/can/usb/ucan.c 1103 */;
	void cocci_id/* drivers/net/can/usb/ucan.c 1103 */;
	struct ucan_can_msg cocci_id/* drivers/net/can/usb/ucan.c 1079 */;
	struct ucan_message_out *cocci_id/* drivers/net/can/usb/ucan.c 1054 */;
	struct can_frame *cocci_id/* drivers/net/can/usb/ucan.c 1049 */;
	enum{UCAN_MODE_LOOPBACK=BIT(0), UCAN_MODE_SILENT=BIT(1), UCAN_MODE_3_SAMPLES=BIT(2), UCAN_MODE_ONE_SHOT=BIT(3), UCAN_MODE_BERR_REPORT=BIT(4),} cocci_id/* drivers/net/can/usb/ucan.c 103 */;
}
