cocci_test_suite() {
	struct usb_interface *cocci_id/* drivers/usb/misc/iowarrior.c 851 */;
	struct iowarrior cocci_id/* drivers/usb/misc/iowarrior.c 742 */;
	struct usb_host_interface *cocci_id/* drivers/usb/misc/iowarrior.c 737 */;
	struct usb_device *cocci_id/* drivers/usb/misc/iowarrior.c 735 */;
	const struct usb_device_id *cocci_id/* drivers/usb/misc/iowarrior.c 733 */;
	struct usb_class_driver cocci_id/* drivers/usb/misc/iowarrior.c 716 */;
	umode_t *cocci_id/* drivers/usb/misc/iowarrior.c 707 */;
	struct device *cocci_id/* drivers/usb/misc/iowarrior.c 707 */;
	char *cocci_id/* drivers/usb/misc/iowarrior.c 707 */;
	const struct file_operations cocci_id/* drivers/usb/misc/iowarrior.c 696 */;
	__poll_t cocci_id/* drivers/usb/misc/iowarrior.c 665 */;
	poll_table *cocci_id/* drivers/usb/misc/iowarrior.c 665 */;
	struct iowarrior {
		struct mutex mutex;
		struct usb_device *udev;
		struct usb_interface *interface;
		unsigned char minor;
		struct usb_endpoint_descriptor *int_out_endpoint;
		struct usb_endpoint_descriptor *int_in_endpoint;
		struct urb *int_in_urb;
		unsigned char *int_in_buffer;
		unsigned char serial_number;
		unsigned char *read_queue;
		wait_queue_head_t read_wait;
		wait_queue_head_t write_wait;
		atomic_t write_busy;
		atomic_t read_idx;
		atomic_t intr_idx;
		atomic_t overflow_flag;
		int present;
		int opened;
		char chip_serial[9];
		int report_size;
		u16 product_id;
		struct usb_anchor submitted;
	} cocci_id/* drivers/usb/misc/iowarrior.c 64 */;
	struct inode *cocci_id/* drivers/usb/misc/iowarrior.c 579 */;
	struct usb_driver cocci_id/* drivers/usb/misc/iowarrior.c 57 */;
	struct iowarrior_info __user *cocci_id/* drivers/usb/misc/iowarrior.c 558 */;
	struct usb_config_descriptor *cocci_id/* drivers/usb/misc/iowarrior.c 536 */;
	struct iowarrior_info cocci_id/* drivers/usb/misc/iowarrior.c 534 */;
	__u8 __user *cocci_id/* drivers/usb/misc/iowarrior.c 468 */;
	__u8 *cocci_id/* drivers/usb/misc/iowarrior.c 467 */;
	unsigned long cocci_id/* drivers/usb/misc/iowarrior.c 464 */;
	struct file *cocci_id/* drivers/usb/misc/iowarrior.c 463 */;
	unsigned int cocci_id/* drivers/usb/misc/iowarrior.c 463 */;
	long cocci_id/* drivers/usb/misc/iowarrior.c 463 */;
	const char __user *cocci_id/* drivers/usb/misc/iowarrior.c 330 */;
	loff_t *cocci_id/* drivers/usb/misc/iowarrior.c 265 */;
	size_t cocci_id/* drivers/usb/misc/iowarrior.c 265 */;
	char __user *cocci_id/* drivers/usb/misc/iowarrior.c 264 */;
	ssize_t cocci_id/* drivers/usb/misc/iowarrior.c 264 */;
	int cocci_id/* drivers/usb/misc/iowarrior.c 146 */;
	struct iowarrior *cocci_id/* drivers/usb/misc/iowarrior.c 145 */;
	struct urb *cocci_id/* drivers/usb/misc/iowarrior.c 143 */;
	void cocci_id/* drivers/usb/misc/iowarrior.c 143 */;
	const struct usb_device_id cocci_id/* drivers/usb/misc/iowarrior.c 130 */[];
	void *cocci_id/* drivers/usb/misc/iowarrior.c 101 */;
	unsigned char cocci_id/* drivers/usb/misc/iowarrior.c 100 */;
}
