cocci_test_suite() {
	struct chaoskey {
		struct usb_interface *interface;
		char in_ep;
		struct mutex lock;
		struct mutex rng_lock;
		int open;
		bool present;
		bool reading;
		bool reads_started;
		int size;
		int valid;
		int used;
		char *name;
		struct hwrng hwrng;
		int hwrng_registered;
		wait_queue_head_t wait_q;
		struct urb *urb;
		char *buf;
	} cocci_id/* drivers/usb/misc/chaoskey.c 74 */;
	void cocci_id/* drivers/usb/misc/chaoskey.c 71 */(struct urb *urb);
	const struct usb_device_id cocci_id/* drivers/usb/misc/chaoskey.c 64 */[];
	const struct file_operations cocci_id/* drivers/usb/misc/chaoskey.c 556 */;
	pm_message_t cocci_id/* drivers/usb/misc/chaoskey.c 525 */;
	struct hwrng *cocci_id/* drivers/usb/misc/chaoskey.c 479 */;
	void *cocci_id/* drivers/usb/misc/chaoskey.c 479 */;
	unsigned long cocci_id/* drivers/usb/misc/chaoskey.c 416 */;
	loff_t *cocci_id/* drivers/usb/misc/chaoskey.c 410 */;
	size_t cocci_id/* drivers/usb/misc/chaoskey.c 409 */;
	char __user *cocci_id/* drivers/usb/misc/chaoskey.c 408 */;
	ssize_t cocci_id/* drivers/usb/misc/chaoskey.c 407 */;
	bool cocci_id/* drivers/usb/misc/chaoskey.c 342 */;
	struct chaoskey *cocci_id/* drivers/usb/misc/chaoskey.c 338 */;
	int cocci_id/* drivers/usb/misc/chaoskey.c 338 */;
	struct urb *cocci_id/* drivers/usb/misc/chaoskey.c 315 */;
	void cocci_id/* drivers/usb/misc/chaoskey.c 315 */;
	int cocci_id/* drivers/usb/misc/chaoskey.c 27 */(struct hwrng *rng,
							 void *data,
							 size_t max,
							 bool wait);
	struct usb_class_driver cocci_id/* drivers/usb/misc/chaoskey.c 26 */;
	struct inode *cocci_id/* drivers/usb/misc/chaoskey.c 251 */;
	struct file *cocci_id/* drivers/usb/misc/chaoskey.c 251 */;
	struct usb_driver cocci_id/* drivers/usb/misc/chaoskey.c 25 */;
	struct usb_interface *cocci_id/* drivers/usb/misc/chaoskey.c 220 */;
	struct chaoskey cocci_id/* drivers/usb/misc/chaoskey.c 144 */;
	struct usb_endpoint_descriptor *cocci_id/* drivers/usb/misc/chaoskey.c 111 */;
	struct usb_host_interface *cocci_id/* drivers/usb/misc/chaoskey.c 110 */;
	struct usb_device *cocci_id/* drivers/usb/misc/chaoskey.c 109 */;
	const struct usb_device_id *cocci_id/* drivers/usb/misc/chaoskey.c 107 */;
}
