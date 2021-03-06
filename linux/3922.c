cocci_test_suite() {
	int *cocci_id/* drivers/greybus/es2.c 977 */;
	unsigned int cocci_id/* drivers/greybus/es2.c 977 */;
	struct arpc *cocci_id/* drivers/greybus/es2.c 937 */;
	__le16 cocci_id/* drivers/greybus/es2.c 925 */;
	u8 cocci_id/* drivers/greybus/es2.c 882 */;
	u16 cocci_id/* drivers/greybus/es2.c 882 */;
	struct gb_message *cocci_id/* drivers/greybus/es2.c 861 */;
	struct gb_operation_msg_hdr *cocci_id/* drivers/greybus/es2.c 820 */;
	struct es2_ap_dev cocci_id/* drivers/greybus/es2.c 733 */;
	struct gb_hd_driver cocci_id/* drivers/greybus/es2.c 732 */;
	struct arpc_cport_clear_req cocci_id/* drivers/greybus/es2.c 682 */;
	struct es2_cport_in {
		__u8 endpoint;
		struct urb *urb[NUM_CPORT_IN_URB];
		u8 *buffer[NUM_CPORT_IN_URB];
	} cocci_id/* drivers/greybus/es2.c 68 */;
	struct arpc_cport_quiesce_req cocci_id/* drivers/greybus/es2.c 654 */;
	struct arpc_cport_shutdown_req cocci_id/* drivers/greybus/es2.c 628 */;
	struct arpc_cport_flush_req cocci_id/* drivers/greybus/es2.c 609 */;
	struct arpc_cport_connected_req cocci_id/* drivers/greybus/es2.c 590 */;
	u32 cocci_id/* drivers/greybus/es2.c 547 */;
	struct gb_apb_request_cport_flags *cocci_id/* drivers/greybus/es2.c 546 */;
	struct ida *cocci_id/* drivers/greybus/es2.c 492 */;
	gfp_t cocci_id/* drivers/greybus/es2.c 391 */;
	const struct usb_device_id cocci_id/* drivers/greybus/es2.c 38 */[];
	struct es2_cport_in *cocci_id/* drivers/greybus/es2.c 258 */;
	unsigned char *cocci_id/* drivers/greybus/es2.c 207 */;
	struct usb_ctrlrequest *cocci_id/* drivers/greybus/es2.c 173 */;
	struct usb_driver cocci_id/* drivers/greybus/es2.c 1454 */;
	struct es2_ap_dev *cocci_id/* drivers/greybus/es2.c 1444 */;
	struct usb_interface *cocci_id/* drivers/greybus/es2.c 1442 */;
	void cocci_id/* drivers/greybus/es2.c 1442 */;
	int cocci_id/* drivers/greybus/es2.c 144 */(struct es2_ap_dev *es2,
						    u8 type, void *payload,
						    size_t size, int *result,
						    unsigned int timeout);
	void cocci_id/* drivers/greybus/es2.c 143 */(struct es2_ap_dev *es2);
	void cocci_id/* drivers/greybus/es2.c 141 */(struct urb *urb);
	u8 *cocci_id/* drivers/greybus/es2.c 1345 */;
	struct urb *cocci_id/* drivers/greybus/es2.c 1344 */;
	struct arpc {
		struct list_head list;
		struct arpc_request_message *req;
		struct arpc_response_message *resp;
		struct completion response_received;
		bool active;
	} cocci_id/* drivers/greybus/es2.c 128 */;
	bool cocci_id/* drivers/greybus/es2.c 1261 */;
	__u8 cocci_id/* drivers/greybus/es2.c 1257 */;
	struct usb_endpoint_descriptor *cocci_id/* drivers/greybus/es2.c 1256 */;
	struct usb_host_interface *cocci_id/* drivers/greybus/es2.c 1255 */;
	struct usb_device *cocci_id/* drivers/greybus/es2.c 1254 */;
	struct gb_host_device *cocci_id/* drivers/greybus/es2.c 1253 */;
	const struct usb_device_id *cocci_id/* drivers/greybus/es2.c 1250 */;
	int cocci_id/* drivers/greybus/es2.c 1249 */;
	__le16 *cocci_id/* drivers/greybus/es2.c 1209 */;
	const struct file_operations cocci_id/* drivers/greybus/es2.c 1201 */;
	const char __user *cocci_id/* drivers/greybus/es2.c 1182 */;
	char cocci_id/* drivers/greybus/es2.c 1176 */[3];
	loff_t *cocci_id/* drivers/greybus/es2.c 1172 */;
	size_t cocci_id/* drivers/greybus/es2.c 1172 */;
	struct file *cocci_id/* drivers/greybus/es2.c 1171 */;
	char __user *cocci_id/* drivers/greybus/es2.c 1171 */;
	ssize_t cocci_id/* drivers/greybus/es2.c 1171 */;
	void *cocci_id/* drivers/greybus/es2.c 1098 */;
	char *cocci_id/* drivers/greybus/es2.c 1079 */;
	unsigned long cocci_id/* drivers/greybus/es2.c 1036 */;
	struct arpc_response_message *cocci_id/* drivers/greybus/es2.c 1035 */;
	struct device *cocci_id/* drivers/greybus/es2.c 1032 */;
	struct es2_ap_dev {
		struct usb_device *usb_dev;
		struct usb_interface *usb_intf;
		struct gb_host_device *hd;
		struct es2_cport_in cport_in;
		__u8 cport_out_endpoint;
		struct urb *cport_out_urb[NUM_CPORT_OUT_URB];
		bool cport_out_urb_busy[NUM_CPORT_OUT_URB];
		bool cport_out_urb_cancelled[NUM_CPORT_OUT_URB];
		spinlock_t cport_out_urb_lock;
		bool cdsi1_in_use;
		struct task_struct *apb_log_task;
		struct dentry *apb_log_dentry;
		struct dentry *apb_log_enable_dentry;
		DECLARE_KFIFO(apb_log_fifo,char,APB1_LOG_SIZE);
		__u8 arpc_endpoint_in;
		struct urb *arpc_urb[NUM_ARPC_IN_URB];
		u8 *arpc_buffer[NUM_ARPC_IN_URB];
		int arpc_id_cycle;
		spinlock_t arpc_lock;
		struct list_head arpcs;
	} cocci_id/* drivers/greybus/es2.c 100 */;
}
