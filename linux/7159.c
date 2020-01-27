cocci_test_suite() {
	struct xenbus_file_priv {
		struct mutex msgbuffer_mutex;
		struct list_head transactions;
		struct list_head watches;
		unsigned int len;
		union {
			struct xsd_sockmsg msg;
			char buffer[XENSTORE_PAYLOAD_MAX];
		} u;
		struct mutex reply_mutex;
		struct list_head read_buffers;
		wait_queue_head_t read_waitq;
		struct kref kref;
		struct work_struct wq;
	} cocci_id/* drivers/xen/xenbus/xenbus_dev_frontend.c 88 */;
	struct read_buffer {
		struct list_head list;
		unsigned int cons;
		unsigned int len;
		char msg[];
	} cocci_id/* drivers/xen/xenbus/xenbus_dev_frontend.c 81 */;
	struct xenbus_transaction_holder {
		struct list_head list;
		struct xenbus_transaction handle;
		unsigned int generation_id;
	} cocci_id/* drivers/xen/xenbus/xenbus_dev_frontend.c 72 */;
	int __init cocci_id/* drivers/xen/xenbus/xenbus_dev_frontend.c 713 */;
	struct miscdevice cocci_id/* drivers/xen/xenbus/xenbus_dev_frontend.c 707 */;
	const struct file_operations cocci_id/* drivers/xen/xenbus/xenbus_dev_frontend.c 697 */;
	__poll_t cocci_id/* drivers/xen/xenbus/xenbus_dev_frontend.c 687 */;
	poll_table *cocci_id/* drivers/xen/xenbus/xenbus_dev_frontend.c 687 */;
	unsigned int cocci_id/* drivers/xen/xenbus/xenbus_dev_frontend.c 66 */;
	struct inode *cocci_id/* drivers/xen/xenbus/xenbus_dev_frontend.c 649 */;
	struct file *cocci_id/* drivers/xen/xenbus/xenbus_dev_frontend.c 649 */;
	uint32_t cocci_id/* drivers/xen/xenbus/xenbus_dev_frontend.c 555 */;
	const char __user *cocci_id/* drivers/xen/xenbus/xenbus_dev_frontend.c 551 */;
	char *cocci_id/* drivers/xen/xenbus/xenbus_dev_frontend.c 499 */;
	void *cocci_id/* drivers/xen/xenbus/xenbus_dev_frontend.c 454 */;
	struct {
		struct xsd_sockmsg hdr;
		char body[];
	} *cocci_id/* drivers/xen/xenbus/xenbus_dev_frontend.c 451 */;
	struct {
		struct xsd_sockmsg hdr;
		char body[16];
	} cocci_id/* drivers/xen/xenbus/xenbus_dev_frontend.c 422 */;
	struct xenbus_file_priv *cocci_id/* drivers/xen/xenbus/xenbus_dev_frontend.c 419 */;
	struct xenbus_transaction_holder *cocci_id/* drivers/xen/xenbus/xenbus_dev_frontend.c 366 */;
	struct xb_req_data *cocci_id/* drivers/xen/xenbus/xenbus_dev_frontend.c 363 */;
	struct xenbus_file_priv cocci_id/* drivers/xen/xenbus/xenbus_dev_frontend.c 347 */;
	struct kref *cocci_id/* drivers/xen/xenbus/xenbus_dev_frontend.c 339 */;
	struct work_struct *cocci_id/* drivers/xen/xenbus/xenbus_dev_frontend.c 306 */;
	struct watch_adapter cocci_id/* drivers/xen/xenbus/xenbus_dev_frontend.c 277 */;
	struct xsd_sockmsg cocci_id/* drivers/xen/xenbus/xenbus_dev_frontend.c 271 */;
	struct xenbus_watch *cocci_id/* drivers/xen/xenbus/xenbus_dev_frontend.c 266 */;
	const char *cocci_id/* drivers/xen/xenbus/xenbus_dev_frontend.c 240 */;
	struct watch_adapter *cocci_id/* drivers/xen/xenbus/xenbus_dev_frontend.c 240 */;
	void cocci_id/* drivers/xen/xenbus/xenbus_dev_frontend.c 233 */;
	struct watch_adapter {
		struct list_head list;
		struct xenbus_watch watch;
		struct xenbus_file_priv *dev_data;
		char *token;
	} cocci_id/* drivers/xen/xenbus/xenbus_dev_frontend.c 226 */;
	struct read_buffer cocci_id/* drivers/xen/xenbus/xenbus_dev_frontend.c 220 */;
	struct read_buffer *cocci_id/* drivers/xen/xenbus/xenbus_dev_frontend.c 217 */;
	struct list_head *cocci_id/* drivers/xen/xenbus/xenbus_dev_frontend.c 215 */;
	const void *cocci_id/* drivers/xen/xenbus/xenbus_dev_frontend.c 189 */;
	int cocci_id/* drivers/xen/xenbus/xenbus_dev_frontend.c 189 */;
	size_t cocci_id/* drivers/xen/xenbus/xenbus_dev_frontend.c 189 */;
	unsigned cocci_id/* drivers/xen/xenbus/xenbus_dev_frontend.c 131 */;
	loff_t *cocci_id/* drivers/xen/xenbus/xenbus_dev_frontend.c 127 */;
	char __user *cocci_id/* drivers/xen/xenbus/xenbus_dev_frontend.c 126 */;
	ssize_t cocci_id/* drivers/xen/xenbus/xenbus_dev_frontend.c 125 */;
}
