cocci_test_suite() {
	struct pcan_usb_msg_context {
		u16 ts16;
		u8 prev_ts8;
		u8 *ptr;
		u8 *end;
		u8 rec_cnt;
		u8 rec_idx;
		u8 rec_ts_idx;
		struct net_device *netdev;
		struct pcan_usb *pdev;
	} cocci_id/* drivers/net/can/usb/peak_usb/pcan_usb.c 96 */;
	struct pcan_usb {
		struct peak_usb_device dev;
		struct peak_time_ref time_ref;
		struct timer_list restart_timer;
	} cocci_id/* drivers/net/can/usb/peak_usb/pcan_usb.c 89 */;
	struct pcan_usb cocci_id/* drivers/net/can/usb/peak_usb/pcan_usb.c 883 */;
	const struct peak_usb_adapter cocci_id/* drivers/net/can/usb/peak_usb/pcan_usb.c 872 */;
	const struct can_bittiming_const cocci_id/* drivers/net/can/usb/peak_usb/pcan_usb.c 860 */;
	struct usb_endpoint_descriptor *cocci_id/* drivers/net/can/usb/peak_usb/pcan_usb.c 841 */;
	struct usb_host_interface *cocci_id/* drivers/net/can/usb/peak_usb/pcan_usb.c 834 */;
	struct usb_interface *cocci_id/* drivers/net/can/usb/peak_usb/pcan_usb.c 832 */;
	struct pcan_usb *cocci_id/* drivers/net/can/usb/peak_usb/pcan_usb.c 801 */;
	struct net_device_stats *cocci_id/* drivers/net/can/usb/peak_usb/pcan_usb.c 737 */;
	struct net_device *cocci_id/* drivers/net/can/usb/peak_usb/pcan_usb.c 736 */;
	size_t *cocci_id/* drivers/net/can/usb/peak_usb/pcan_usb.c 734 */;
	struct urb *cocci_id/* drivers/net/can/usb/peak_usb/pcan_usb.c 713 */;
	struct peak_usb_device *cocci_id/* drivers/net/can/usb/peak_usb/pcan_usb.c 713 */;
	int cocci_id/* drivers/net/can/usb/peak_usb/pcan_usb.c 713 */;
	struct pcan_usb_msg_context cocci_id/* drivers/net/can/usb/peak_usb/pcan_usb.c 686 */;
	u32 cocci_id/* drivers/net/can/usb/peak_usb/pcan_usb.c 684 */;
	u8 *cocci_id/* drivers/net/can/usb/peak_usb/pcan_usb.c 684 */;
	__le16 cocci_id/* drivers/net/can/usb/peak_usb/pcan_usb.c 632 */;
	__le32 cocci_id/* drivers/net/can/usb/peak_usb/pcan_usb.c 622 */;
	struct skb_shared_hwtstamps *cocci_id/* drivers/net/can/usb/peak_usb/pcan_usb.c 615 */;
	struct can_frame *cocci_id/* drivers/net/can/usb/peak_usb/pcan_usb.c 614 */;
	struct sk_buff *cocci_id/* drivers/net/can/usb/peak_usb/pcan_usb.c 613 */;
	u8 cocci_id/* drivers/net/can/usb/peak_usb/pcan_usb.c 610 */;
	struct pcan_usb_msg_context *cocci_id/* drivers/net/can/usb/peak_usb/pcan_usb.c 610 */;
	enum can_state cocci_id/* drivers/net/can/usb/peak_usb/pcan_usb.c 403 */;
	u8 cocci_id/* drivers/net/can/usb/peak_usb/pcan_usb.c 328 */[PCAN_USB_CMD_ARGS_LEN];
	u32 *cocci_id/* drivers/net/can/usb/peak_usb/pcan_usb.c 326 */;
	struct timer_list *cocci_id/* drivers/net/can/usb/peak_usb/pcan_usb.c 254 */;
	void cocci_id/* drivers/net/can/usb/peak_usb/pcan_usb.c 254 */;
	struct can_bittiming *cocci_id/* drivers/net/can/usb/peak_usb/pcan_usb.c 209 */;
}
