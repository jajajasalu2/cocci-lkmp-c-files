cocci_test_suite() {
	struct ems_usb cocci_id/* drivers/net/can/usb/ems_usb.c 967 */;
	const struct usb_device_id *cocci_id/* drivers/net/can/usb/ems_usb.c 961 */;
	struct cpc_can_params cocci_id/* drivers/net/can/usb/ems_usb.c 933 */;
	struct cpc_sja1000_params *cocci_id/* drivers/net/can/usb/ems_usb.c 929 */;
	struct can_bittiming *cocci_id/* drivers/net/can/usb/ems_usb.c 910 */;
	enum can_mode cocci_id/* drivers/net/can/usb/ems_usb.c 887 */;
	const struct can_bittiming_const cocci_id/* drivers/net/can/usb/ems_usb.c 875 */;
	const struct net_device_ops cocci_id/* drivers/net/can/usb/ems_usb.c 868 */;
	struct ems_usb *cocci_id/* drivers/net/can/usb/ems_usb.c 852 */;
	struct net_device *cocci_id/* drivers/net/can/usb/ems_usb.c 850 */;
	int cocci_id/* drivers/net/can/usb/ems_usb.c 850 */;
	struct cpc_can_msg cocci_id/* drivers/net/can/usb/ems_usb.c 738 */;
	size_t cocci_id/* drivers/net/can/usb/ems_usb.c 737 */;
	struct ems_tx_urb_context *cocci_id/* drivers/net/can/usb/ems_usb.c 730 */;
	netdev_tx_t cocci_id/* drivers/net/can/usb/ems_usb.c 727 */;
	struct ems_cpc_msg cocci_id/* drivers/net/can/usb/ems_usb.c 564 */;
	u8 cocci_id/* drivers/net/can/usb/ems_usb.c 562 */;
	struct ems_cpc_msg *cocci_id/* drivers/net/can/usb/ems_usb.c 531 */;
	u8 *cocci_id/* drivers/net/can/usb/ems_usb.c 431 */;
	struct urb *cocci_id/* drivers/net/can/usb/ems_usb.c 406 */;
	struct net_device_stats *cocci_id/* drivers/net/can/usb/ems_usb.c 302 */;
	struct sk_buff *cocci_id/* drivers/net/can/usb/ems_usb.c 300 */;
	struct can_frame *cocci_id/* drivers/net/can/usb/ems_usb.c 299 */;
	struct ems_usb {
		struct can_priv can;
		struct sk_buff *echo_skb[MAX_TX_URBS];
		struct usb_device *udev;
		struct net_device *netdev;
		atomic_t active_tx_urbs;
		struct usb_anchor tx_submitted;
		struct ems_tx_urb_context tx_contexts[MAX_TX_URBS];
		struct usb_anchor rx_submitted;
		struct urb *intr_urb;
		u8 *tx_msg_buffer;
		u8 *intr_in_buffer;
		unsigned int free_slots;
		struct ems_cpc_msg active_params;
	} cocci_id/* drivers/net/can/usb/ems_usb.c 236 */;
	struct ems_tx_urb_context {
		struct ems_usb *dev;
		u32 echo_index;
		u8 dlc;
	} cocci_id/* drivers/net/can/usb/ems_usb.c 229 */;
	struct usb_device_id cocci_id/* drivers/net/can/usb/ems_usb.c 213 */[];
	struct __packed ems_cpc_msg {
		u8 type;
		u8 length;
		u8 msgid;
		__le32 ts_sec;
		__le32 ts_nsec;
		union {
			u8 generic[64];
			struct cpc_can_msg can_msg;
			struct cpc_can_params can_params;
			struct cpc_confirm confirmation;
			struct cpc_overrun overrun;
			struct cpc_can_error error;
			struct cpc_can_err_counter err_counter;
			u8 can_state;
		} msg;
	} cocci_id/* drivers/net/can/usb/ems_usb.c 190 */;
	struct cpc_can_err_counter {
		u8 rx;
		u8 tx;
	} cocci_id/* drivers/net/can/usb/ems_usb.c 184 */;
	struct cpc_can_error {
		u8 ecode;
		struct {
			u8 cc_type;
			union {
				struct cpc_sja1000_can_error sja1000;
			} regs;
		} cc;
	} cocci_id/* drivers/net/can/usb/ems_usb.c 167 */;
	struct cpc_sja1000_can_error {
		u8 ecc;
		u8 rxerr;
		u8 txerr;
	} cocci_id/* drivers/net/can/usb/ems_usb.c 160 */;
	struct cpc_overrun {
		u8 event;
		u8 count;
	} cocci_id/* drivers/net/can/usb/ems_usb.c 154 */;
	struct cpc_confirm {
		u8 error;
	} cocci_id/* drivers/net/can/usb/ems_usb.c 149 */;
	struct cpc_can_params {
		u8 cc_type;
		union {
			struct cpc_sja1000_params sja1000;
		} cc_params;
	} cocci_id/* drivers/net/can/usb/ems_usb.c 139 */;
	struct cpc_sja1000_params {
		u8 mode;
		u8 acc_code0;
		u8 acc_code1;
		u8 acc_code2;
		u8 acc_code3;
		u8 acc_mask0;
		u8 acc_mask1;
		u8 acc_mask2;
		u8 acc_mask3;
		u8 btr0;
		u8 btr1;
		u8 outp_contr;
	} cocci_id/* drivers/net/can/usb/ems_usb.c 123 */;
	struct cpc_can_msg {
		__le32 id;
		u8 length;
		u8 msg[8];
	} cocci_id/* drivers/net/can/usb/ems_usb.c 116 */;
	struct usb_driver cocci_id/* drivers/net/can/usb/ems_usb.c 1068 */;
	struct usb_interface *cocci_id/* drivers/net/can/usb/ems_usb.c 1048 */;
	void cocci_id/* drivers/net/can/usb/ems_usb.c 1048 */;
}
