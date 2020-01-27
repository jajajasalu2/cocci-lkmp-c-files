cocci_test_suite() {
	struct gs_device_state {
		u32 state;
		u32 rxerr;
		u32 txerr;
	}__packed cocci_id/* drivers/net/can/usb/gs_usb.c 94 */;
	struct gs_host_config *cocci_id/* drivers/net/can/usb/gs_usb.c 906 */;
	const struct usb_device_id *cocci_id/* drivers/net/can/usb/gs_usb.c 901 */;
	void cocci_id/* drivers/net/can/usb/gs_usb.c 893 */;
	struct gs_device_mode {
		u32 mode;
		u32 flags;
	}__packed cocci_id/* drivers/net/can/usb/gs_usb.c 89 */;
	struct gs_can cocci_id/* drivers/net/can/usb/gs_usb.c 818 */;
	struct gs_device_bt_const *cocci_id/* drivers/net/can/usb/gs_usb.c 792 */;
	struct gs_device_config *cocci_id/* drivers/net/can/usb/gs_usb.c 787 */;
	const struct ethtool_ops cocci_id/* drivers/net/can/usb/gs_usb.c 781 */;
	enum ethtool_phys_id_state cocci_id/* drivers/net/can/usb/gs_usb.c 763 */;
	struct gs_device_config {
		u8 reserved1;
		u8 reserved2;
		u8 reserved3;
		u8 icount;
		u32 sw_version;
		u32 hw_version;
	}__packed cocci_id/* drivers/net/can/usb/gs_usb.c 74 */;
	struct gs_identify_mode *cocci_id/* drivers/net/can/usb/gs_usb.c 731 */;
	bool cocci_id/* drivers/net/can/usb/gs_usb.c 728 */;
	const struct net_device_ops cocci_id/* drivers/net/can/usb/gs_usb.c 721 */;
	struct gs_usb *cocci_id/* drivers/net/can/usb/gs_usb.c 692 */;
	struct net_device *cocci_id/* drivers/net/can/usb/gs_usb.c 688 */;
	struct gs_host_config {
		u32 byte_order;
	}__packed cocci_id/* drivers/net/can/usb/gs_usb.c 66 */;
	enum gs_can_identify_mode{GS_CAN_IDENTIFY_OFF=0, GS_CAN_IDENTIFY_ON,} cocci_id/* drivers/net/can/usb/gs_usb.c 60 */;
	struct gs_host_frame cocci_id/* drivers/net/can/usb/gs_usb.c 593 */;
	u8 *cocci_id/* drivers/net/can/usb/gs_usb.c 584 */;
	struct urb *cocci_id/* drivers/net/can/usb/gs_usb.c 583 */;
	u32 cocci_id/* drivers/net/can/usb/gs_usb.c 575 */;
	struct gs_device_mode *cocci_id/* drivers/net/can/usb/gs_usb.c 574 */;
	enum gs_can_state{GS_CAN_STATE_ERROR_ACTIVE=0, GS_CAN_STATE_ERROR_WARNING, GS_CAN_STATE_ERROR_PASSIVE, GS_CAN_STATE_BUS_OFF, GS_CAN_STATE_STOPPED, GS_CAN_STATE_SLEEPING,} cocci_id/* drivers/net/can/usb/gs_usb.c 51 */;
	unsigned int cocci_id/* drivers/net/can/usb/gs_usb.c 471 */;
	struct can_frame *cocci_id/* drivers/net/can/usb/gs_usb.c 469 */;
	struct gs_host_frame *cocci_id/* drivers/net/can/usb/gs_usb.c 468 */;
	struct net_device_stats *cocci_id/* drivers/net/can/usb/gs_usb.c 466 */;
	netdev_tx_t cocci_id/* drivers/net/can/usb/gs_usb.c 462 */;
	struct sk_buff *cocci_id/* drivers/net/can/usb/gs_usb.c 462 */;
	enum gs_can_mode{GS_CAN_MODE_RESET=0, GS_CAN_MODE_START,} cocci_id/* drivers/net/can/usb/gs_usb.c 44 */;
	struct gs_device_bittiming *cocci_id/* drivers/net/can/usb/gs_usb.c 415 */;
	struct can_bittiming *cocci_id/* drivers/net/can/usb/gs_usb.c 412 */;
	enum gs_usb_breq{GS_USB_BREQ_HOST_FORMAT=0, GS_USB_BREQ_BITTIMING, GS_USB_BREQ_MODE, GS_USB_BREQ_BERR, GS_USB_BREQ_BT_CONST, GS_USB_BREQ_DEVICE_CONFIG, GS_USB_BREQ_TIMESTAMP, GS_USB_BREQ_IDENTIFY,} cocci_id/* drivers/net/can/usb/gs_usb.c 33 */;
	struct can_device_stats *cocci_id/* drivers/net/can/usb/gs_usb.c 267 */;
	struct usb_interface *cocci_id/* drivers/net/can/usb/gs_usb.c 241 */;
	unsigned long cocci_id/* drivers/net/can/usb/gs_usb.c 197 */;
	int cocci_id/* drivers/net/can/usb/gs_usb.c 196 */;
	struct gs_tx_context *cocci_id/* drivers/net/can/usb/gs_usb.c 194 */;
	struct gs_can *cocci_id/* drivers/net/can/usb/gs_usb.c 194 */;
	struct gs_usb {
		struct gs_can *canch[GS_MAX_INTF];
		struct usb_anchor rx_submitted;
		atomic_t active_channels;
		struct usb_device *udev;
	} cocci_id/* drivers/net/can/usb/gs_usb.c 184 */;
	struct gs_can {
		struct can_priv can;
		struct gs_usb *parent;
		struct net_device *netdev;
		struct usb_device *udev;
		struct usb_interface *iface;
		struct can_bittiming_const bt_const;
		unsigned int channel;
		spinlock_t tx_ctx_lock;
		struct gs_tx_context tx_context[GS_MAX_TX_URBS];
		struct usb_anchor tx_submitted;
		atomic_t active_tx_urbs;
	} cocci_id/* drivers/net/can/usb/gs_usb.c 163 */;
	struct gs_tx_context {
		struct gs_can *dev;
		unsigned int echo_id;
	} cocci_id/* drivers/net/can/usb/gs_usb.c 158 */;
	struct gs_host_frame {
		u32 echo_id;
		u32 can_id;
		u8 can_dlc;
		u8 channel;
		u8 flags;
		u8 reserved;
		u8 data[8];
	}__packed cocci_id/* drivers/net/can/usb/gs_usb.c 134 */;
	struct gs_device_bt_const {
		u32 feature;
		u32 fclk_can;
		u32 tseg1_min;
		u32 tseg1_max;
		u32 tseg2_min;
		u32 tseg2_max;
		u32 sjw_max;
		u32 brp_min;
		u32 brp_max;
		u32 brp_inc;
	}__packed cocci_id/* drivers/net/can/usb/gs_usb.c 119 */;
	struct gs_identify_mode {
		u32 mode;
	}__packed cocci_id/* drivers/net/can/usb/gs_usb.c 108 */;
	struct usb_driver cocci_id/* drivers/net/can/usb/gs_usb.c 1032 */;
	const struct usb_device_id cocci_id/* drivers/net/can/usb/gs_usb.c 1022 */[];
	unsigned cocci_id/* drivers/net/can/usb/gs_usb.c 1005 */;
	struct gs_device_bittiming {
		u32 prop_seg;
		u32 phase_seg1;
		u32 phase_seg2;
		u32 sjw;
		u32 brp;
	}__packed cocci_id/* drivers/net/can/usb/gs_usb.c 100 */;
}
