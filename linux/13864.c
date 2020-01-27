cocci_test_suite() {
	struct usb_driver cocci_id/* drivers/media/rc/ati_remote.c 957 */;
	struct usb_interface *cocci_id/* drivers/media/rc/ati_remote.c 936 */;
	struct ati_remote cocci_id/* drivers/media/rc/ati_remote.c 839 */;
	struct rc_dev *cocci_id/* drivers/media/rc/ati_remote.c 819 */;
	struct ati_receiver_type *cocci_id/* drivers/media/rc/ati_remote.c 816 */;
	struct usb_endpoint_descriptor *cocci_id/* drivers/media/rc/ati_remote.c 815 */;
	struct usb_host_interface *cocci_id/* drivers/media/rc/ati_remote.c 814 */;
	const struct usb_device_id *cocci_id/* drivers/media/rc/ati_remote.c 811 */;
	struct ati_remote *cocci_id/* drivers/media/rc/ati_remote.c 685 */;
	struct usb_device *cocci_id/* drivers/media/rc/ati_remote.c 684 */;
	int cocci_id/* drivers/media/rc/ati_remote.c 684 */;
	signed char cocci_id/* drivers/media/rc/ati_remote.c 624 */;
	u32 cocci_id/* drivers/media/rc/ati_remote.c 487 */;
	struct urb *cocci_id/* drivers/media/rc/ati_remote.c 479 */;
	unsigned long cocci_id/* drivers/media/rc/ati_remote.c 458 */;
	const struct accel_times cocci_id/* drivers/media/rc/ati_remote.c 437 */[];
	struct accel_times {
		const char value;
		unsigned int msecs;
	} cocci_id/* drivers/media/rc/ati_remote.c 432 */;
	char *cocci_id/* drivers/media/rc/ati_remote.c 410 */;
	u16 cocci_id/* drivers/media/rc/ati_remote.c 403 */;
	struct input_dev *cocci_id/* drivers/media/rc/ati_remote.c 362 */;
	void cocci_id/* drivers/media/rc/ati_remote.c 348 */;
	unsigned char cocci_id/* drivers/media/rc/ati_remote.c 313 */;
	unsigned int cocci_id/* drivers/media/rc/ati_remote.c 310 */;
	struct device *cocci_id/* drivers/media/rc/ati_remote.c 309 */;
	unsigned char *cocci_id/* drivers/media/rc/ati_remote.c 309 */;
	const struct {
		unsigned char kind;
		unsigned char data;
		unsigned short code;
	} cocci_id/* drivers/media/rc/ati_remote.c 273 */[];
	struct ati_remote {
		struct input_dev *idev;
		struct rc_dev *rdev;
		struct usb_device *udev;
		struct usb_interface *interface;
		struct urb *irq_urb;
		struct urb *out_urb;
		struct usb_endpoint_descriptor *endpoint_in;
		struct usb_endpoint_descriptor *endpoint_out;
		unsigned char *inbuf;
		unsigned char *outbuf;
		dma_addr_t inbuf_dma;
		dma_addr_t outbuf_dma;
		unsigned char old_data;
		unsigned long old_jiffies;
		unsigned long acc_jiffies;
		unsigned long first_jiffies;
		unsigned int repeat_count;
		char rc_name[NAME_BUFSIZE];
		char rc_phys[NAME_BUFSIZE];
		char mouse_name[NAME_BUFSIZE];
		char mouse_phys[NAME_BUFSIZE];
		wait_queue_head_t wait;
		int send_flags;
		int users;
		struct mutex open_mutex;
	} cocci_id/* drivers/media/rc/ati_remote.c 232 */;
	char cocci_id/* drivers/media/rc/ati_remote.c 229 */[];
	const struct usb_device_id cocci_id/* drivers/media/rc/ati_remote.c 191 */[];
	const struct ati_receiver_type cocci_id/* drivers/media/rc/ati_remote.c 181 */;
	const char *cocci_id/* drivers/media/rc/ati_remote.c 147 */;
	struct ati_receiver_type {
		const char *default_keymap;
		const char *(*get_default_keymap)(struct usb_interface *interface);
	} cocci_id/* drivers/media/rc/ati_remote.c 141 */;
	bool cocci_id/* drivers/media/rc/ati_remote.c 132 */;
}
