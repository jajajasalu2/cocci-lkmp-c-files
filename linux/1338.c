cocci_test_suite() {
	struct inode *cocci_id/* drivers/usb/misc/usblcd.c 77 */;
	struct usb_lcd *cocci_id/* drivers/usb/misc/usblcd.c 69 */;
	struct kref *cocci_id/* drivers/usb/misc/usblcd.c 67 */;
	void cocci_id/* drivers/usb/misc/usblcd.c 67 */;
	struct usb_driver cocci_id/* drivers/usb/misc/usblcd.c 64 */;
	struct usb_lcd cocci_id/* drivers/usb/misc/usblcd.c 60 */;
	int cocci_id/* drivers/usb/misc/usblcd.c 420 */;
	struct usb_interface *cocci_id/* drivers/usb/misc/usblcd.c 417 */;
	pm_message_t cocci_id/* drivers/usb/misc/usblcd.c 402 */;
	struct usb_lcd {
		struct usb_device *udev;
		struct usb_interface *interface;
		unsigned char *bulk_in_buffer;
		size_t bulk_in_size;
		__u8 bulk_in_endpointAddr;
		__u8 bulk_out_endpointAddr;
		struct kref kref;
		struct semaphore limit_sem;
		struct usb_anchor submitted;
		struct rw_semaphore io_rwsem;
		unsigned long disconnected:1;
	} cocci_id/* drivers/usb/misc/usblcd.c 39 */;
	const struct usb_device_id cocci_id/* drivers/usb/misc/usblcd.c 33 */[];
	struct usb_endpoint_descriptor *cocci_id/* drivers/usb/misc/usblcd.c 322 */;
	const struct usb_device_id *cocci_id/* drivers/usb/misc/usblcd.c 319 */;
	struct usb_class_driver cocci_id/* drivers/usb/misc/usblcd.c 312 */;
	const struct file_operations cocci_id/* drivers/usb/misc/usblcd.c 298 */;
	char *cocci_id/* drivers/usb/misc/usblcd.c 224 */;
	struct urb *cocci_id/* drivers/usb/misc/usblcd.c 223 */;
	const char __user *cocci_id/* drivers/usb/misc/usblcd.c 218 */;
	void __user *cocci_id/* drivers/usb/misc/usblcd.c 180 */;
	char cocci_id/* drivers/usb/misc/usblcd.c 166 */[30];
	u16 cocci_id/* drivers/usb/misc/usblcd.c 165 */;
	struct file *cocci_id/* drivers/usb/misc/usblcd.c 162 */;
	unsigned long cocci_id/* drivers/usb/misc/usblcd.c 162 */;
	unsigned int cocci_id/* drivers/usb/misc/usblcd.c 162 */;
	long cocci_id/* drivers/usb/misc/usblcd.c 162 */;
	loff_t *cocci_id/* drivers/usb/misc/usblcd.c 125 */;
	size_t cocci_id/* drivers/usb/misc/usblcd.c 125 */;
	char __user *cocci_id/* drivers/usb/misc/usblcd.c 124 */;
	ssize_t cocci_id/* drivers/usb/misc/usblcd.c 124 */;
}
