cocci_test_suite() {
	const int cocci_id/* drivers/watchdog/pcwd_usb.c 95 */[];
	struct usb_interface *cocci_id/* drivers/watchdog/pcwd_usb.c 770 */;
	const struct usb_device_id cocci_id/* drivers/watchdog/pcwd_usb.c 72 */[];
	struct usb_pcwd_private cocci_id/* drivers/watchdog/pcwd_usb.c 645 */;
	bool cocci_id/* drivers/watchdog/pcwd_usb.c 62 */;
	char cocci_id/* drivers/watchdog/pcwd_usb.c 611 */[20];
	struct usb_endpoint_descriptor *cocci_id/* drivers/watchdog/pcwd_usb.c 605 */;
	struct usb_host_interface *cocci_id/* drivers/watchdog/pcwd_usb.c 604 */;
	struct usb_device *cocci_id/* drivers/watchdog/pcwd_usb.c 603 */;
	const struct usb_device_id *cocci_id/* drivers/watchdog/pcwd_usb.c 601 */;
	struct usb_pcwd_private *cocci_id/* drivers/watchdog/pcwd_usb.c 585 */;
	void cocci_id/* drivers/watchdog/pcwd_usb.c 585 */;
	struct notifier_block cocci_id/* drivers/watchdog/pcwd_usb.c 578 */;
	struct miscdevice cocci_id/* drivers/watchdog/pcwd_usb.c 558 */;
	const struct file_operations cocci_id/* drivers/watchdog/pcwd_usb.c 548 */;
	void *cocci_id/* drivers/watchdog/pcwd_usb.c 536 */;
	struct notifier_block *cocci_id/* drivers/watchdog/pcwd_usb.c 535 */;
	loff_t *cocci_id/* drivers/watchdog/pcwd_usb.c 508 */;
	size_t cocci_id/* drivers/watchdog/pcwd_usb.c 508 */;
	char __user *cocci_id/* drivers/watchdog/pcwd_usb.c 507 */;
	ssize_t cocci_id/* drivers/watchdog/pcwd_usb.c 507 */;
	struct inode *cocci_id/* drivers/watchdog/pcwd_usb.c 475 */;
	const struct watchdog_info cocci_id/* drivers/watchdog/pcwd_usb.c 393 */;
	int __user *cocci_id/* drivers/watchdog/pcwd_usb.c 392 */;
	void __user *cocci_id/* drivers/watchdog/pcwd_usb.c 391 */;
	struct file *cocci_id/* drivers/watchdog/pcwd_usb.c 388 */;
	unsigned int cocci_id/* drivers/watchdog/pcwd_usb.c 388 */;
	long cocci_id/* drivers/watchdog/pcwd_usb.c 388 */;
	const char __user *cocci_id/* drivers/watchdog/pcwd_usb.c 359 */;
	unsigned char cocci_id/* drivers/watchdog/pcwd_usb.c 328 */;
	int *cocci_id/* drivers/watchdog/pcwd_usb.c 326 */;
	struct device *cocci_id/* drivers/watchdog/pcwd_usb.c 170 */;
	unsigned char *cocci_id/* drivers/watchdog/pcwd_usb.c 169 */;
	struct urb *cocci_id/* drivers/watchdog/pcwd_usb.c 165 */;
	struct usb_driver cocci_id/* drivers/watchdog/pcwd_usb.c 157 */;
	void cocci_id/* drivers/watchdog/pcwd_usb.c 154 */(struct usb_interface *interface);
	int cocci_id/* drivers/watchdog/pcwd_usb.c 152 */(struct usb_interface *interface,
							  const struct usb_device_id *id);
	struct usb_pcwd_private {
		struct usb_device *udev;
		struct usb_interface *interface;
		unsigned int interface_number;
		unsigned char *intr_buffer;
		dma_addr_t intr_dma;
		size_t intr_size;
		struct urb *intr_urb;
		unsigned char cmd_command;
		unsigned char cmd_data_msb;
		unsigned char cmd_data_lsb;
		atomic_t cmd_received;
		int exists;
		struct mutex mtx;
	} cocci_id/* drivers/watchdog/pcwd_usb.c 114 */;
	char cocci_id/* drivers/watchdog/pcwd_usb.c 111 */;
	unsigned long cocci_id/* drivers/watchdog/pcwd_usb.c 110 */;
	int cocci_id/* drivers/watchdog/pcwd_usb.c 107 */;
}
