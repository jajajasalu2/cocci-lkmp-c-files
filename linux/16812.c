cocci_test_suite() {
	struct bit_tester {
		u32 tester;
		int len;
		int pos;
		int bits_left;
		u8 buffer[32];
	} cocci_id/* drivers/input/misc/keyspan_remote.c 93 */;
	struct keyspan_message {
		u16 system;
		u8 button;
		u8 toggle;
	} cocci_id/* drivers/input/misc/keyspan_remote.c 86 */;
	const struct usb_device_id cocci_id/* drivers/input/misc/keyspan_remote.c 80 */[];
	struct usb_interface *cocci_id/* drivers/input/misc/keyspan_remote.c 555 */;
	unsigned short cocci_id/* drivers/input/misc/keyspan_remote.c 508 */;
	struct usb_device *cocci_id/* drivers/input/misc/keyspan_remote.c 443 */;
	const struct usb_device_id *cocci_id/* drivers/input/misc/keyspan_remote.c 441 */;
	const unsigned short cocci_id/* drivers/input/misc/keyspan_remote.c 44 */[];
	struct usb_host_interface *cocci_id/* drivers/input/misc/keyspan_remote.c 420 */;
	struct usb_endpoint_descriptor *cocci_id/* drivers/input/misc/keyspan_remote.c 420 */;
	struct input_dev *cocci_id/* drivers/input/misc/keyspan_remote.c 413 */;
	struct urb *cocci_id/* drivers/input/misc/keyspan_remote.c 369 */;
	struct keyspan_message cocci_id/* drivers/input/misc/keyspan_remote.c 183 */;
	int cocci_id/* drivers/input/misc/keyspan_remote.c 18 */;
	struct usb_keyspan *cocci_id/* drivers/input/misc/keyspan_remote.c 179 */;
	void cocci_id/* drivers/input/misc/keyspan_remote.c 179 */;
	char cocci_id/* drivers/input/misc/keyspan_remote.c 128 */[4 * RECV_SIZE];
	struct usb_driver cocci_id/* drivers/input/misc/keyspan_remote.c 121 */;
	struct usb_keyspan {
		char name[128];
		char phys[64];
		unsigned short keymap[ARRAY_SIZE(keyspan_key_table)];
		struct usb_device *udev;
		struct input_dev *input;
		struct usb_interface *interface;
		struct usb_endpoint_descriptor *in_endpoint;
		struct urb *irq_urb;
		int open;
		dma_addr_t in_dma;
		unsigned char *in_buffer;
		struct bit_tester data;
		int stage;
		int toggle;
	} cocci_id/* drivers/input/misc/keyspan_remote.c 102 */;
}
