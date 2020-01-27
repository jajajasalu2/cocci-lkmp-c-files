cocci_test_suite() {
	const struct xboxone_init_packet *cocci_id/* drivers/input/joystick/xpad.c 943 */;
	struct device *cocci_id/* drivers/input/joystick/xpad.c 897 */;
	struct urb *cocci_id/* drivers/input/joystick/xpad.c 894 */;
	struct usb_xpad cocci_id/* drivers/input/joystick/xpad.c 738 */;
	struct work_struct *cocci_id/* drivers/input/joystick/xpad.c 736 */;
	__s16 cocci_id/* drivers/input/joystick/xpad.c 713 */;
	__le16 *cocci_id/* drivers/input/joystick/xpad.c 713 */;
	u16 cocci_id/* drivers/input/joystick/xpad.c 664 */;
	unsigned char *cocci_id/* drivers/input/joystick/xpad.c 664 */;
	struct usb_xpad *cocci_id/* drivers/input/joystick/xpad.c 663 */;
	struct input_dev *cocci_id/* drivers/input/joystick/xpad.c 663 */;
	void cocci_id/* drivers/input/joystick/xpad.c 663 */;
	void cocci_id/* drivers/input/joystick/xpad.c 582 */(struct usb_xpad *xpad,
							     u8 seq_num);
	void cocci_id/* drivers/input/joystick/xpad.c 581 */(struct usb_xpad *xpad);
	int cocci_id/* drivers/input/joystick/xpad.c 580 */(struct usb_xpad *xpad);
	struct xpad_output_packet {
		u8 data[XPAD_PKT_LEN];
		u8 len;
		bool pending;
	} cocci_id/* drivers/input/joystick/xpad.c 529 */;
	const struct xboxone_init_packet cocci_id/* drivers/input/joystick/xpad.c 515 */[];
	const u8 cocci_id/* drivers/input/joystick/xpad.c 457 */[];
	struct xboxone_init_packet {
		u16 idVendor;
		u16 idProduct;
		const u8 *data;
		u8 len;
	} cocci_id/* drivers/input/joystick/xpad.c 437 */;
	const struct usb_device_id cocci_id/* drivers/input/joystick/xpad.c 402 */[];
	const signed short cocci_id/* drivers/input/joystick/xpad.c 352 */[];
	struct usb_driver cocci_id/* drivers/input/joystick/xpad.c 1929 */;
	pm_message_t cocci_id/* drivers/input/joystick/xpad.c 1870 */;
	struct usb_interface *cocci_id/* drivers/input/joystick/xpad.c 1844 */;
	struct usb_device *cocci_id/* drivers/input/joystick/xpad.c 1703 */;
	const struct usb_device_id *cocci_id/* drivers/input/joystick/xpad.c 1701 */;
	signed short cocci_id/* drivers/input/joystick/xpad.c 1565 */;
	int cocci_id/* drivers/input/joystick/xpad.c 1519 */;
	struct xpad_output_packet *cocci_id/* drivers/input/joystick/xpad.c 1492 */;
	unsigned long cocci_id/* drivers/input/joystick/xpad.c 1491 */;
	struct xpad_led *cocci_id/* drivers/input/joystick/xpad.c 1453 */;
	struct xpad_led cocci_id/* drivers/input/joystick/xpad.c 1417 */;
	struct led_classdev *cocci_id/* drivers/input/joystick/xpad.c 1411 */;
	enum led_brightness cocci_id/* drivers/input/joystick/xpad.c 1400 */;
	struct xpad_led {
		char name[16];
		struct led_classdev led_cdev;
		struct usb_xpad *xpad;
	} cocci_id/* drivers/input/joystick/xpad.c 1322 */;
	__u16 cocci_id/* drivers/input/joystick/xpad.c 1214 */;
	struct ff_effect *cocci_id/* drivers/input/joystick/xpad.c 1210 */;
	void *cocci_id/* drivers/input/joystick/xpad.c 1210 */;
	u8 cocci_id/* drivers/input/joystick/xpad.c 1185 */;
	struct usb_endpoint_descriptor *cocci_id/* drivers/input/joystick/xpad.c 1075 */;
	const struct xpad_device {
		u16 idVendor;
		u16 idProduct;
		char *name;
		u8 mapping;
		u8 xtype;
	} cocci_id/* drivers/input/joystick/xpad.c 107 */[];
	bool cocci_id/* drivers/input/joystick/xpad.c 103 */;
	struct usb_xpad {
		struct input_dev *dev;
		struct input_dev __rcu *x360w_dev;
		struct usb_device *udev;
		struct usb_interface *intf;
		bool pad_present;
		bool input_created;
		struct urb *irq_in;
		unsigned char *idata;
		dma_addr_t idata_dma;
		struct urb *irq_out;
		struct usb_anchor irq_out_anchor;
		bool irq_out_active;
		u8 odata_serial;
		unsigned char *odata;
		dma_addr_t odata_dma;
		spinlock_t odata_lock;
		struct xpad_output_packet out_packets[XPAD_NUM_OUT_PACKETS];
		int last_out_packet;
		int init_seq;
#if defined(CONFIG_JOYSTICK_XPAD_LEDS)
		struct xpad_led *led;
#endif
		char phys[64];
		int mapping;
		int xtype;
		int pad_nr;
		const char *name;
		struct work_struct work;
	} cocci_id/*  1 */;
}
