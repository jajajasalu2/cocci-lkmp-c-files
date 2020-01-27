cocci_test_suite() {
	struct __packed pcan_ufd_led {
		__le16 opcode_channel;
		u8 mode;
		u8 unused[5];
	} cocci_id/* drivers/net/can/usb/peak_usb/pcan_usb_fd.c 98 */;
	struct __packed pcan_ufd_clock {
		__le16 opcode_channel;
		u8 mode;
		u8 unused[5];
	} cocci_id/* drivers/net/can/usb/peak_usb/pcan_usb_fd.c 81 */;
	struct can_berr_counter *cocci_id/* drivers/net/can/usb/peak_usb/pcan_usb_fd.c 801 */;
	const struct net_device *cocci_id/* drivers/net/can/usb/peak_usb/pcan_usb_fd.c 800 */;
	u32 cocci_id/* drivers/net/can/usb/peak_usb/pcan_usb_fd.c 761 */;
	struct pucan_tx_msg cocci_id/* drivers/net/can/usb/peak_usb/pcan_usb_fd.c 719 */;
	u8 cocci_id/* drivers/net/can/usb/peak_usb/pcan_usb_fd.c 717 */;
	struct pucan_tx_msg *cocci_id/* drivers/net/can/usb/peak_usb/pcan_usb_fd.c 714 */;
	size_t *cocci_id/* drivers/net/can/usb/peak_usb/pcan_usb_fd.c 712 */;
	u16 cocci_id/* drivers/net/can/usb/peak_usb/pcan_usb_fd.c 645 */;
	struct pucan_msg *cocci_id/* drivers/net/can/usb/peak_usb/pcan_usb_fd.c 637 */;
	struct net_device *cocci_id/* drivers/net/can/usb/peak_usb/pcan_usb_fd.c 636 */;
	struct pcan_usb_fd_if *cocci_id/* drivers/net/can/usb/peak_usb/pcan_usb_fd.c 635 */;
	struct urb *cocci_id/* drivers/net/can/usb/peak_usb/pcan_usb_fd.c 633 */;
	struct pcan_ufd_ts_msg *cocci_id/* drivers/net/can/usb/peak_usb/pcan_usb_fd.c 623 */;
	void cocci_id/* drivers/net/can/usb/peak_usb/pcan_usb_fd.c 620 */;
	struct pcan_usb_fd_device {
		struct peak_usb_device dev;
		struct can_berr_counter bec;
		struct pcan_usb_fd_if *usb_if;
		u8 *cmd_buffer_addr;
	} cocci_id/* drivers/net/can/usb/peak_usb/pcan_usb_fd.c 61 */;
	struct can_frame *cocci_id/* drivers/net/can/usb/peak_usb/pcan_usb_fd.c 600 */;
	struct pcan_ufd_ovr_msg *cocci_id/* drivers/net/can/usb/peak_usb/pcan_usb_fd.c 597 */;
	struct pucan_error_msg *cocci_id/* drivers/net/can/usb/peak_usb/pcan_usb_fd.c 581 */;
	enum can_state cocci_id/* drivers/net/can/usb/peak_usb/pcan_usb_fd.c 525 */;
	struct pucan_status_msg *cocci_id/* drivers/net/can/usb/peak_usb/pcan_usb_fd.c 521 */;
	struct pcan_usb_fd_if {
		struct peak_usb_device *dev[PCAN_USB_MAX_CHANNEL];
		struct pcan_ufd_fw_info fw_info;
		struct peak_time_ref time_ref;
		int cm_ignore_count;
		int dev_opened_count;
	} cocci_id/* drivers/net/can/usb/peak_usb/pcan_usb_fd.c 52 */;
	struct can_frame **cocci_id/* drivers/net/can/usb/peak_usb/pcan_usb_fd.c 492 */;
	const u16 cocci_id/* drivers/net/can/usb/peak_usb/pcan_usb_fd.c 475 */;
	struct sk_buff *cocci_id/* drivers/net/can/usb/peak_usb/pcan_usb_fd.c 474 */;
	struct canfd_frame *cocci_id/* drivers/net/can/usb/peak_usb/pcan_usb_fd.c 473 */;
	struct pucan_rx_msg *cocci_id/* drivers/net/can/usb/peak_usb/pcan_usb_fd.c 470 */;
	bool cocci_id/* drivers/net/can/usb/peak_usb/pcan_usb_fd.c 452 */;
	struct pucan_timing_fast *cocci_id/* drivers/net/can/usb/peak_usb/pcan_usb_fd.c 412 */;
	struct can_bittiming *cocci_id/* drivers/net/can/usb/peak_usb/pcan_usb_fd.c 410 */;
	struct pucan_timing_slow *cocci_id/* drivers/net/can/usb/peak_usb/pcan_usb_fd.c 391 */;
	struct __packed pcan_ufd_fw_info {
		__le16 size_of;
		__le16 type;
		u8 hw_type;
		u8 bl_version[3];
		u8 hw_version;
		u8 fw_version[3];
		__le32 dev_id[2];
		__le32 ser_no;
		__le32 flags;
	} cocci_id/* drivers/net/can/usb/peak_usb/pcan_usb_fd.c 39 */;
	struct pcan_ufd_clock *cocci_id/* drivers/net/can/usb/peak_usb/pcan_usb_fd.c 377 */;
	struct pcan_ufd_led *cocci_id/* drivers/net/can/usb/peak_usb/pcan_usb_fd.c 363 */;
	struct pcan_ufd_options *cocci_id/* drivers/net/can/usb/peak_usb/pcan_usb_fd.c 347 */;
	struct pucan_filter_std *cocci_id/* drivers/net/can/usb/peak_usb/pcan_usb_fd.c 315 */;
	struct pucan_command cocci_id/* drivers/net/can/usb/peak_usb/pcan_usb_fd.c 275 */;
	struct pucan_options cocci_id/* drivers/net/can/usb/peak_usb/pcan_usb_fd.c 266 */;
	struct pucan_options *cocci_id/* drivers/net/can/usb/peak_usb/pcan_usb_fd.c 249 */;
	struct pucan_wr_err_cnt cocci_id/* drivers/net/can/usb/peak_usb/pcan_usb_fd.c 245 */;
	struct pucan_command *cocci_id/* drivers/net/can/usb/peak_usb/pcan_usb_fd.c 229 */;
	struct pucan_wr_err_cnt *cocci_id/* drivers/net/can/usb/peak_usb/pcan_usb_fd.c 228 */;
	u8 *cocci_id/* drivers/net/can/usb/peak_usb/pcan_usb_fd.c 226 */;
	struct peak_usb_device *cocci_id/* drivers/net/can/usb/peak_usb/pcan_usb_fd.c 226 */;
	int cocci_id/* drivers/net/can/usb/peak_usb/pcan_usb_fd.c 226 */;
	ptrdiff_t cocci_id/* drivers/net/can/usb/peak_usb/pcan_usb_fd.c 180 */;
	struct pcan_usb_fd_device *cocci_id/* drivers/net/can/usb/peak_usb/pcan_usb_fd.c 168 */;
	void *cocci_id/* drivers/net/can/usb/peak_usb/pcan_usb_fd.c 166 */;
	const u32 cocci_id/* drivers/net/can/usb/peak_usb/pcan_usb_fd.c 147 */[6];
	struct __packed pcan_ufd_ovr_msg {
		__le16 size;
		__le16 type;
		__le32 ts_low;
		__le32 ts_high;
		u8 channel;
		u8 unused[3];
	} cocci_id/* drivers/net/can/usb/peak_usb/pcan_usb_fd.c 132 */;
	struct __packed pcan_ufd_ts_msg {
		__le16 size;
		__le16 type;
		__le32 ts_low;
		__le32 ts_high;
		__le16 usb_frame_index;
		u16 unused;
	} cocci_id/* drivers/net/can/usb/peak_usb/pcan_usb_fd.c 119 */;
	struct pcan_usb_fd_device cocci_id/* drivers/net/can/usb/peak_usb/pcan_usb_fd.c 1093 */;
	const struct peak_usb_adapter cocci_id/* drivers/net/can/usb/peak_usb/pcan_usb_fd.c 1080 */;
	struct __packed pcan_ufd_options {
		__le16 opcode_channel;
		__le16 ucan_mask;
		u16 unused;
		__le16 usb_mask;
	} cocci_id/* drivers/net/can/usb/peak_usb/pcan_usb_fd.c 108 */;
	const struct can_bittiming_const cocci_id/* drivers/net/can/usb/peak_usb/pcan_usb_fd.c 1056 */;
}
