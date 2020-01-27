cocci_test_suite() {
	struct ath6kl_usb_ctrl_diag_cmd_write *cocci_id/* drivers/net/wireless/ath/ath6kl/usb.c 988 */;
	__le32 cocci_id/* drivers/net/wireless/ath/ath6kl/usb.c 985 */;
	struct ath6kl_usb_ctrl_diag_cmd_write cocci_id/* drivers/net/wireless/ath/ath6kl/usb.c 968 */;
	struct ath6kl_usb_ctrl_diag_cmd_read *cocci_id/* drivers/net/wireless/ath/ath6kl/usb.c 954 */;
	struct ath6kl_usb_ctrl_diag_resp_read *cocci_id/* drivers/net/wireless/ath/ath6kl/usb.c 953 */;
	u32 *cocci_id/* drivers/net/wireless/ath/ath6kl/usb.c 927 */;
	u8 cocci_id/* drivers/net/wireless/ath/ath6kl/usb.c 926 */;
	void *cocci_id/* drivers/net/wireless/ath/ath6kl/usb.c 892 */;
	u16 cocci_id/* drivers/net/wireless/ath/ath6kl/usb.c 845 */;
	struct ath6kl_urb_context {
		struct list_head link;
		struct ath6kl_usb_pipe *pipe;
		struct sk_buff *skb;
		struct ath6kl *ar;
	} cocci_id/* drivers/net/wireless/ath/ath6kl/usb.c 77 */;
	struct ath6kl_usb {
		spinlock_t cs_lock;
		struct usb_device *udev;
		struct usb_interface *interface;
		struct ath6kl_usb_pipe pipes[ATH6KL_USB_PIPE_MAX];
		u8 *diag_cmd_buffer;
		u8 *diag_resp_buffer;
		struct ath6kl *ar;
	} cocci_id/* drivers/net/wireless/ath/ath6kl/usb.c 64 */;
	struct ath6kl_usb cocci_id/* drivers/net/wireless/ath/ath6kl/usb.c 629 */;
	struct usb_device *cocci_id/* drivers/net/wireless/ath/ath6kl/usb.c 623 */;
	struct usb_interface *cocci_id/* drivers/net/wireless/ath/ath6kl/usb.c 621 */;
	struct ath6kl_usb_ctrl_diag_resp_read cocci_id/* drivers/net/wireless/ath/ath6kl/usb.c 605 */;
	struct sk_buff *cocci_id/* drivers/net/wireless/ath/ath6kl/usb.c 586 */;
	struct ath6kl_usb_pipe cocci_id/* drivers/net/wireless/ath/ath6kl/usb.c 583 */;
	struct work_struct *cocci_id/* drivers/net/wireless/ath/ath6kl/usb.c 580 */;
	struct ath6kl_usb_pipe {
		struct list_head urb_list_head;
		struct usb_anchor urb_submitted;
		u32 urb_alloc;
		u32 urb_cnt;
		u32 urb_cnt_thresh;
		unsigned int usb_pipe_handle;
		u32 flags;
		u8 ep_address;
		u8 logical_pipe_num;
		struct ath6kl_usb *ar_usb;
		u16 max_packet_size;
		struct work_struct io_complete_work;
		struct sk_buff_head io_comp_queue;
		struct usb_endpoint_descriptor *ep_desc;
	} cocci_id/* drivers/net/wireless/ath/ath6kl/usb.c 44 */;
	struct urb *cocci_id/* drivers/net/wireless/ath/ath6kl/usb.c 414 */;
	struct usb_endpoint_descriptor *cocci_id/* drivers/net/wireless/ath/ath6kl/usb.c 307 */;
	struct usb_host_interface *cocci_id/* drivers/net/wireless/ath/ath6kl/usb.c 306 */;
	enum ATH6KL_USB_PIPE_ID{ATH6KL_USB_PIPE_TX_CTRL=0, ATH6KL_USB_PIPE_TX_DATA_LP, ATH6KL_USB_PIPE_TX_DATA_MP, ATH6KL_USB_PIPE_TX_DATA_HP, ATH6KL_USB_PIPE_RX_CTRL, ATH6KL_USB_PIPE_RX_DATA, ATH6KL_USB_PIPE_RX_DATA2, ATH6KL_USB_PIPE_RX_INT, ATH6KL_USB_PIPE_MAX,} cocci_id/* drivers/net/wireless/ath/ath6kl/usb.c 30 */;
	int *cocci_id/* drivers/net/wireless/ath/ath6kl/usb.c 258 */;
	void cocci_id/* drivers/net/wireless/ath/ath6kl/usb.c 249 */;
	struct ath6kl_urb_context cocci_id/* drivers/net/wireless/ath/ath6kl/usb.c 192 */;
	struct ath6kl_urb_context *cocci_id/* drivers/net/wireless/ath/ath6kl/usb.c 185 */;
	struct ath6kl_usb_pipe *cocci_id/* drivers/net/wireless/ath/ath6kl/usb.c 182 */;
	int cocci_id/* drivers/net/wireless/ath/ath6kl/usb.c 182 */;
	unsigned long cocci_id/* drivers/net/wireless/ath/ath6kl/usb.c 133 */;
	struct usb_driver cocci_id/* drivers/net/wireless/ath/ath6kl/usb.c 1220 */;
	const struct usb_device_id cocci_id/* drivers/net/wireless/ath/ath6kl/usb.c 1212 */[];
	void cocci_id/* drivers/net/wireless/ath/ath6kl/usb.c 121 */(struct urb *urb);
	pm_message_t cocci_id/* drivers/net/wireless/ath/ath6kl/usb.c 1182 */;
	struct ath6kl_usb_ctrl_diag_resp_read {
		__le32 value;
	}__packed cocci_id/* drivers/net/wireless/ath/ath6kl/usb.c 116 */;
	struct ath6kl_usb_ctrl_diag_cmd_read {
		__le32 cmd;
		__le32 address;
	}__packed cocci_id/* drivers/net/wireless/ath/ath6kl/usb.c 111 */;
	const struct usb_device_id *cocci_id/* drivers/net/wireless/ath/ath6kl/usb.c 1107 */;
	const struct ath6kl_hif_ops cocci_id/* drivers/net/wireless/ath/ath6kl/usb.c 1088 */;
	struct cfg80211_wowlan *cocci_id/* drivers/net/wireless/ath/ath6kl/usb.c 1072 */;
	struct ath6kl_usb_ctrl_diag_cmd_write {
		__le32 cmd;
		__le32 address;
		__le32 value;
		__le32 _pad[1];
	}__packed cocci_id/* drivers/net/wireless/ath/ath6kl/usb.c 104 */;
	struct ath6kl_usb *cocci_id/* drivers/net/wireless/ath/ath6kl/usb.c 1013 */;
	u32 cocci_id/* drivers/net/wireless/ath/ath6kl/usb.c 1011 */;
	u8 *cocci_id/* drivers/net/wireless/ath/ath6kl/usb.c 1011 */;
	struct ath6kl *cocci_id/* drivers/net/wireless/ath/ath6kl/usb.c 1011 */;
}
