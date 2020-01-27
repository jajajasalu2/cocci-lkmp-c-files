cocci_test_suite() {
	struct usb_interface *cocci_id/* drivers/usb/misc/legousbtower.c 862 */;
	struct tower_get_version_reply *cocci_id/* drivers/usb/misc/legousbtower.c 756 */;
	struct usb_device *cocci_id/* drivers/usb/misc/legousbtower.c 754 */;
	const struct usb_device_id *cocci_id/* drivers/usb/misc/legousbtower.c 751 */;
	unsigned long cocci_id/* drivers/usb/misc/legousbtower.c 673 */;
	struct urb *cocci_id/* drivers/usb/misc/legousbtower.c 668 */;
	const char __user *cocci_id/* drivers/usb/misc/legousbtower.c 586 */;
	loff_t *cocci_id/* drivers/usb/misc/legousbtower.c 502 */;
	char __user *cocci_id/* drivers/usb/misc/legousbtower.c 502 */;
	ssize_t cocci_id/* drivers/usb/misc/legousbtower.c 502 */;
	size_t cocci_id/* drivers/usb/misc/legousbtower.c 502 */;
	loff_t cocci_id/* drivers/usb/misc/legousbtower.c 493 */;
	struct file *cocci_id/* drivers/usb/misc/legousbtower.c 493 */;
	__poll_t cocci_id/* drivers/usb/misc/legousbtower.c 467 */;
	poll_table *cocci_id/* drivers/usb/misc/legousbtower.c 467 */;
	struct lego_usb_tower *cocci_id/* drivers/usb/misc/legousbtower.c 451 */;
	struct tower_reset_reply *cocci_id/* drivers/usb/misc/legousbtower.c 311 */;
	struct inode *cocci_id/* drivers/usb/misc/legousbtower.c 305 */;
	const unsigned char *cocci_id/* drivers/usb/misc/legousbtower.c 279 */;
	const char *cocci_id/* drivers/usb/misc/legousbtower.c 278 */;
	struct device *cocci_id/* drivers/usb/misc/legousbtower.c 277 */;
	void cocci_id/* drivers/usb/misc/legousbtower.c 277 */;
	struct usb_driver cocci_id/* drivers/usb/misc/legousbtower.c 266 */;
	struct usb_class_driver cocci_id/* drivers/usb/misc/legousbtower.c 257 */;
	umode_t *cocci_id/* drivers/usb/misc/legousbtower.c 248 */;
	char *cocci_id/* drivers/usb/misc/legousbtower.c 248 */;
	const struct file_operations cocci_id/* drivers/usb/misc/legousbtower.c 238 */;
	void cocci_id/* drivers/usb/misc/legousbtower.c 234 */(struct usb_interface *interface);
	int cocci_id/* drivers/usb/misc/legousbtower.c 233 */(struct usb_interface *interface,
							      const struct usb_device_id *id);
	void cocci_id/* drivers/usb/misc/legousbtower.c 230 */(struct urb *urb);
	void cocci_id/* drivers/usb/misc/legousbtower.c 229 */(struct lego_usb_tower *dev);
	loff_t cocci_id/* drivers/usb/misc/legousbtower.c 227 */(struct file *file,
								 loff_t off,
								 int whence);
	__poll_t cocci_id/* drivers/usb/misc/legousbtower.c 226 */(struct file *file,
								   poll_table *wait);
	int cocci_id/* drivers/usb/misc/legousbtower.c 224 */(struct inode *inode,
							      struct file *file);
	ssize_t cocci_id/* drivers/usb/misc/legousbtower.c 222 */(struct file *file,
								  const char __user *buffer,
								  size_t count,
								  loff_t *ppos);
	ssize_t cocci_id/* drivers/usb/misc/legousbtower.c 221 */(struct file *file,
								  char __user *buffer,
								  size_t count,
								  loff_t *ppos);
	struct lego_usb_tower {
		struct mutex lock;
		struct usb_device *udev;
		unsigned char minor;
		int open_count;
		unsigned long disconnected:1;
		char *read_buffer;
		size_t read_buffer_length;
		size_t read_packet_length;
		spinlock_t read_buffer_lock;
		int packet_timeout_jiffies;
		unsigned long read_last_arrival;
		wait_queue_head_t read_wait;
		wait_queue_head_t write_wait;
		char *interrupt_in_buffer;
		struct usb_endpoint_descriptor *interrupt_in_endpoint;
		struct urb *interrupt_in_urb;
		int interrupt_in_interval;
		int interrupt_in_done;
		char *interrupt_out_buffer;
		struct usb_endpoint_descriptor *interrupt_out_endpoint;
		struct urb *interrupt_out_urb;
		int interrupt_out_interval;
		int interrupt_out_busy;
	} cocci_id/* drivers/usb/misc/legousbtower.c 187 */;
	const struct usb_device_id cocci_id/* drivers/usb/misc/legousbtower.c 176 */[];
	struct tower_get_version_reply {
		__le16 size;
		__u8 err_code;
		__u8 spare;
		__u8 major;
		__u8 minor;
		__le16 build_no;
	} cocci_id/* drivers/usb/misc/legousbtower.c 165 */;
	struct tower_reset_reply {
		__le16 size;
		__u8 err_code;
		__u8 spare;
	} cocci_id/* drivers/usb/misc/legousbtower.c 159 */;
	int cocci_id/* drivers/usb/misc/legousbtower.c 143 */;
}
