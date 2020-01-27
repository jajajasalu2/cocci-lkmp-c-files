cocci_test_suite() {
	const struct file_operations cocci_id/* drivers/usb/misc/idmouse.c 96 */;
	int cocci_id/* drivers/usb/misc/idmouse.c 93 */(struct usb_interface *intf);
	int cocci_id/* drivers/usb/misc/idmouse.c 92 */(struct usb_interface *intf,
							pm_message_t message);
	void cocci_id/* drivers/usb/misc/idmouse.c 91 */(struct usb_interface *interface);
	int cocci_id/* drivers/usb/misc/idmouse.c 88 */(struct usb_interface *interface,
							const struct usb_device_id *id);
	int cocci_id/* drivers/usb/misc/idmouse.c 85 */(struct inode *inode,
							struct file *file);
	ssize_t cocci_id/* drivers/usb/misc/idmouse.c 82 */(struct file *file,
							    char __user *buffer,
							    size_t count,
							    loff_t *ppos);
	struct usb_idmouse {
		struct usb_device *udev;
		struct usb_interface *interface;
		unsigned char *bulk_in_buffer;
		size_t bulk_in_size;
		size_t orig_bi_size;
		__u8 bulk_in_endpointAddr;
		int open;
		int present;
		struct mutex lock;
	} cocci_id/* drivers/usb/misc/idmouse.c 65 */;
	const struct usb_device_id cocci_id/* drivers/usb/misc/idmouse.c 45 */[];
	struct usb_interface *cocci_id/* drivers/usb/misc/idmouse.c 377 */;
	struct usb_endpoint_descriptor *cocci_id/* drivers/usb/misc/idmouse.c 321 */;
	struct usb_host_interface *cocci_id/* drivers/usb/misc/idmouse.c 320 */;
	struct usb_device *cocci_id/* drivers/usb/misc/idmouse.c 318 */;
	const struct usb_device_id *cocci_id/* drivers/usb/misc/idmouse.c 316 */;
	loff_t *cocci_id/* drivers/usb/misc/idmouse.c 294 */;
	char __user *cocci_id/* drivers/usb/misc/idmouse.c 293 */;
	ssize_t cocci_id/* drivers/usb/misc/idmouse.c 293 */;
	size_t cocci_id/* drivers/usb/misc/idmouse.c 293 */;
	struct inode *cocci_id/* drivers/usb/misc/idmouse.c 218 */;
	struct file *cocci_id/* drivers/usb/misc/idmouse.c 218 */;
	void cocci_id/* drivers/usb/misc/idmouse.c 212 */;
	pm_message_t cocci_id/* drivers/usb/misc/idmouse.c 202 */;
	struct usb_idmouse *cocci_id/* drivers/usb/misc/idmouse.c 123 */;
	int cocci_id/* drivers/usb/misc/idmouse.c 123 */;
	struct usb_driver cocci_id/* drivers/usb/misc/idmouse.c 112 */;
	struct usb_class_driver cocci_id/* drivers/usb/misc/idmouse.c 105 */;
}
