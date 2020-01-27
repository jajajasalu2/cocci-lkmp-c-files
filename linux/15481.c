cocci_test_suite() {
	u64 cocci_id/* drivers/nfc/port100.c 998 */;
	struct sk_buff *cocci_id/* drivers/nfc/port100.c 963 */;
	unsigned int cocci_id/* drivers/nfc/port100.c 963 */;
	struct port100 *cocci_id/* drivers/nfc/port100.c 954 */;
	struct nfc_digital_dev *cocci_id/* drivers/nfc/port100.c 952 */;
	void cocci_id/* drivers/nfc/port100.c 952 */;
	void (*cocci_id/* drivers/nfc/port100.c 94 */)(struct port100 *dev,
						       void *arg,
						       struct sk_buff *resp);
	struct port100_sync_cmd_response cocci_id/* drivers/nfc/port100.c 912 */;
	struct port100_sync_cmd_response *cocci_id/* drivers/nfc/port100.c 902 */;
	struct work_struct *cocci_id/* drivers/nfc/port100.c 891 */;
	struct port100_sync_cmd_response {
		struct sk_buff *resp;
		struct completion done;
	} cocci_id/* drivers/nfc/port100.c 886 */;
	port100_send_async_complete_t cocci_id/* drivers/nfc/port100.c 839 */;
	int cocci_id/* drivers/nfc/port100.c 798 */;
	u8 cocci_id/* drivers/nfc/port100.c 794 */;
	gfp_t cocci_id/* drivers/nfc/port100.c 711 */;
	struct port100_ack_frame *cocci_id/* drivers/nfc/port100.c 669 */;
	struct port100_cmd *cocci_id/* drivers/nfc/port100.c 668 */;
	struct urb *cocci_id/* drivers/nfc/port100.c 665 */;
	struct port100_frame *cocci_id/* drivers/nfc/port100.c 608 */;
	struct port100_frame cocci_id/* drivers/nfc/port100.c 602 */;
	bool cocci_id/* drivers/nfc/port100.c 592 */;
	u8 *cocci_id/* drivers/nfc/port100.c 525 */;
	u16 cocci_id/* drivers/nfc/port100.c 523 */;
	struct port100_tg_comm_rf_res {
		u8 comm_type;
		u8 ar_status;
		u8 target_activated;
		__le32 status;
		u8 data[];
	}__packed cocci_id/* drivers/nfc/port100.c 514 */;
	struct port100_tg_comm_rf_cmd {
		__le16 guard_time;
		__le16 send_timeout;
		u8 mdaa;
		u8 nfca_param[6];
		u8 nfcf_param[18];
		u8 mf_halted;
		u8 arae_flag;
		__le16 recv_timeout;
		u8 data[];
	}__packed cocci_id/* drivers/nfc/port100.c 502 */;
	struct port100_cb_arg {
		nfc_digital_cmd_complete_t complete_cb;
		void *complete_arg;
		u8 mdaa;
	} cocci_id/* drivers/nfc/port100.c 496 */;
	struct port100_ack_frame {
		u8 preamble;
		__be16 start_frame;
		__be16 ack_frame;
		u8 postambule;
	}__packed cocci_id/* drivers/nfc/port100.c 489 */;
	struct port100_frame {
		u8 preamble;
		__be16 start_frame;
		__be16 extended_frame;
		__le16 datalen;
		u8 datalen_checksum;
		u8 data[];
	}__packed cocci_id/* drivers/nfc/port100.c 480 */;
	struct port100_cmd {
		u8 code;
		int status;
		struct sk_buff *req;
		struct sk_buff *resp;
		int resp_len;
		port100_send_async_complete_t complete_cb;
		void *complete_cb_context;
	} cocci_id/* drivers/nfc/port100.c 470 */;
	u8 cocci_id/* drivers/nfc/port100.c 44 */[PORT100_FRAME_ACK_SIZE];
	struct port100 {
		struct nfc_digital_dev *nfc_digital_dev;
		int skb_headroom;
		int skb_tailroom;
		struct usb_device *udev;
		struct usb_interface *interface;
		struct urb *out_urb;
		struct urb *in_urb;
		struct mutex out_urb_lock;
		struct work_struct cmd_complete_work;
		u8 cmd_type;
		struct port100_cmd *cmd;
		bool cmd_cancel;
		struct completion cmd_cancel_done;
	} cocci_id/* drivers/nfc/port100.c 439 */;
	struct port100_protocol cocci_id/* drivers/nfc/port100.c 394 */[][PORT100_TG_MAX_NUM_PROTOCOLS + 1];
	struct port100_protocol cocci_id/* drivers/nfc/port100.c 220 */[][PORT100_IN_MAX_NUM_PROTOCOLS + 1];
	struct port100_protocol {
		u8 number;
		u8 value;
	}__packed cocci_id/* drivers/nfc/port100.c 215 */;
	const struct port100_tg_rf_setting cocci_id/* drivers/nfc/port100.c 167 */[];
	struct usb_driver cocci_id/* drivers/nfc/port100.c 1641 */;
	struct usb_interface *cocci_id/* drivers/nfc/port100.c 1619 */;
	struct port100_tg_rf_setting {
		u8 tg_set_number;
		u8 tg_comm_type;
	}__packed cocci_id/* drivers/nfc/port100.c 158 */;
	struct port100 cocci_id/* drivers/nfc/port100.c 1499 */;
	struct usb_endpoint_descriptor *cocci_id/* drivers/nfc/port100.c 1492 */;
	struct usb_host_interface *cocci_id/* drivers/nfc/port100.c 1491 */;
	const struct usb_device_id *cocci_id/* drivers/nfc/port100.c 1487 */;
	const struct usb_device_id cocci_id/* drivers/nfc/port100.c 1479 */[];
	struct nfc_digital_ops cocci_id/* drivers/nfc/port100.c 1466 */;
	struct port100_tg_comm_rf_cmd cocci_id/* drivers/nfc/port100.c 1432 */;
	struct port100_tg_comm_rf_cmd *cocci_id/* drivers/nfc/port100.c 1403 */;
	struct digital_tg_mdaa_params *cocci_id/* drivers/nfc/port100.c 1398 */;
	struct port100_tg_comm_rf_res cocci_id/* drivers/nfc/port100.c 1352 */;
	struct port100_tg_comm_rf_res *cocci_id/* drivers/nfc/port100.c 1335 */;
	struct port100_tg_rf_setting cocci_id/* drivers/nfc/port100.c 1236 */;
	struct port100_cb_arg cocci_id/* drivers/nfc/port100.c 1211 */;
	__le16 cocci_id/* drivers/nfc/port100.c 1209 */;
	const struct port100_in_rf_setting cocci_id/* drivers/nfc/port100.c 118 */[];
	__le32 *cocci_id/* drivers/nfc/port100.c 1172 */;
	u32 cocci_id/* drivers/nfc/port100.c 1157 */;
	nfc_digital_cmd_complete_t cocci_id/* drivers/nfc/port100.c 1156 */;
	struct port100_cb_arg *cocci_id/* drivers/nfc/port100.c 1155 */;
	void *cocci_id/* drivers/nfc/port100.c 1152 */;
	struct port100_protocol cocci_id/* drivers/nfc/port100.c 1120 */;
	size_t cocci_id/* drivers/nfc/port100.c 1105 */;
	struct port100_protocol *cocci_id/* drivers/nfc/port100.c 1101 */;
	struct port100_in_rf_setting cocci_id/* drivers/nfc/port100.c 1079 */;
	struct port100_in_rf_setting {
		u8 in_send_set_number;
		u8 in_send_comm_type;
		u8 in_recv_set_number;
		u8 in_recv_comm_type;
	}__packed cocci_id/* drivers/nfc/port100.c 106 */;
	__le16 *cocci_id/* drivers/nfc/port100.c 1037 */;
	__be64 *cocci_id/* drivers/nfc/port100.c 1015 */;
}
