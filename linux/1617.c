cocci_test_suite() {
	struct inode *cocci_id/* drivers/usb/usb-skeleton.c 83 */;
	struct usb_skel *cocci_id/* drivers/usb/usb-skeleton.c 74 */;
	struct kref *cocci_id/* drivers/usb/usb-skeleton.c 72 */;
	void cocci_id/* drivers/usb/usb-skeleton.c 72 */;
	void cocci_id/* drivers/usb/usb-skeleton.c 70 */(struct usb_skel *dev);
	struct usb_driver cocci_id/* drivers/usb/usb-skeleton.c 69 */;
	struct usb_skel cocci_id/* drivers/usb/usb-skeleton.c 67 */;
	pm_message_t cocci_id/* drivers/usb/usb-skeleton.c 596 */;
	int cocci_id/* drivers/usb/usb-skeleton.c 564 */;
	struct usb_interface *cocci_id/* drivers/usb/usb-skeleton.c 561 */;
	struct usb_endpoint_descriptor *cocci_id/* drivers/usb/usb-skeleton.c 492 */;
	const struct usb_device_id *cocci_id/* drivers/usb/usb-skeleton.c 489 */;
	struct usb_class_driver cocci_id/* drivers/usb/usb-skeleton.c 482 */;
	struct usb_skel {
		struct usb_device *udev;
		struct usb_interface *interface;
		struct semaphore limit_sem;
		struct usb_anchor submitted;
		struct urb *bulk_in_urb;
		unsigned char *bulk_in_buffer;
		size_t bulk_in_size;
		size_t bulk_in_filled;
		size_t bulk_in_copied;
		__u8 bulk_in_endpointAddr;
		__u8 bulk_out_endpointAddr;
		int errors;
		bool ongoing_read;
		spinlock_t err_lock;
		struct kref kref;
		struct mutex io_mutex;
		unsigned long disconnected:1;
		wait_queue_head_t bulk_in_wait;
	} cocci_id/* drivers/usb/usb-skeleton.c 47 */;
	const struct file_operations cocci_id/* drivers/usb/usb-skeleton.c 468 */;
	const char *cocci_id/* drivers/usb/usb-skeleton.c 359 */;
	const struct usb_device_id cocci_id/* drivers/usb/usb-skeleton.c 26 */[];
	bool cocci_id/* drivers/usb/usb-skeleton.c 229 */;
	loff_t *cocci_id/* drivers/usb/usb-skeleton.c 225 */;
	char *cocci_id/* drivers/usb/usb-skeleton.c 224 */;
	ssize_t cocci_id/* drivers/usb/usb-skeleton.c 224 */;
	size_t cocci_id/* drivers/usb/usb-skeleton.c 187 */;
	unsigned long cocci_id/* drivers/usb/usb-skeleton.c 163 */;
	struct urb *cocci_id/* drivers/usb/usb-skeleton.c 160 */;
	fl_owner_t cocci_id/* drivers/usb/usb-skeleton.c 136 */;
	struct file *cocci_id/* drivers/usb/usb-skeleton.c 136 */;
}