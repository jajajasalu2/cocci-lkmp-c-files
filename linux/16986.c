cocci_test_suite() {
	struct usb_host_interface *cocci_id/* drivers/input/touchscreen/usbtouchscreen.c 957 */;
	struct nexio_priv cocci_id/* drivers/input/touchscreen/usbtouchscreen.c 926 */;
	struct nexio_priv *cocci_id/* drivers/input/touchscreen/usbtouchscreen.c 923 */;
	struct urb *cocci_id/* drivers/input/touchscreen/usbtouchscreen.c 917 */;
	unsigned char cocci_id/* drivers/input/touchscreen/usbtouchscreen.c 915 */[4];
	unsigned char cocci_id/* drivers/input/touchscreen/usbtouchscreen.c 914 */[2];
	struct nexio_touch_packet {
		u8 flags;
		__be16 data_len;
		__be16 x_len;
		__be16 y_len;
		u8 data[];
	}__attribute__((packed)) cocci_id/* drivers/input/touchscreen/usbtouchscreen.c 906 */;
	struct nexio_priv {
		struct urb *ack;
		unsigned char *ack_buf;
	} cocci_id/* drivers/input/touchscreen/usbtouchscreen.c 901 */;
	struct usbtouch_usb {
		unsigned char *data;
		dma_addr_t data_dma;
		int data_size;
		unsigned char *buffer;
		int buf_len;
		struct urb *irq;
		struct usb_interface *interface;
		struct input_dev *input;
		struct usbtouch_device_info *type;
		struct mutex pm_mutex;
		bool is_open;
		char name[128];
		char phys[64];
		void *priv;
		int x,y;
		int touch,press;
	} cocci_id/* drivers/input/touchscreen/usbtouchscreen.c 88 */;
	unsigned char *cocci_id/* drivers/input/touchscreen/usbtouchscreen.c 689 */;
	struct usb_device *cocci_id/* drivers/input/touchscreen/usbtouchscreen.c 687 */;
	struct usbtouch_usb *cocci_id/* drivers/input/touchscreen/usbtouchscreen.c 685 */;
	int cocci_id/* drivers/input/touchscreen/usbtouchscreen.c 685 */;
	unsigned int cocci_id/* drivers/input/touchscreen/usbtouchscreen.c 620 */;
	struct mtouch_priv *cocci_id/* drivers/input/touchscreen/usbtouchscreen.c 569 */;
	void cocci_id/* drivers/input/touchscreen/usbtouchscreen.c 567 */;
	struct usbtouch_device_info {
		int min_xc,max_xc;
		int min_yc,max_yc;
		int min_press,max_press;
		int rept_size;
		bool irq_always;
		void (*process_pkt)(struct usbtouch_usb *usbtouch,
				    unsigned char *pkt, int len);
		int (*get_pkt_len)(unsigned char *pkt, int len);
		int (*read_data)(struct usbtouch_usb *usbtouch,
				 unsigned char *pkt);
		int (*alloc)(struct usbtouch_usb *usbtouch);
		int (*init)(struct usbtouch_usb *usbtouch);
		void (*exit)(struct usbtouch_usb *usbtouch);
	} cocci_id/* drivers/input/touchscreen/usbtouchscreen.c 56 */;
	struct usbtouch_usb cocci_id/* drivers/input/touchscreen/usbtouchscreen.c 55 */;
	struct mtouch_priv cocci_id/* drivers/input/touchscreen/usbtouchscreen.c 509 */;
	bool cocci_id/* drivers/input/touchscreen/usbtouchscreen.c 50 */;
	u8 *cocci_id/* drivers/input/touchscreen/usbtouchscreen.c 476 */;
	const struct attribute_group cocci_id/* drivers/input/touchscreen/usbtouchscreen.c 468 */;
	struct attribute *cocci_id/* drivers/input/touchscreen/usbtouchscreen.c 463 */[];
	struct usb_interface *cocci_id/* drivers/input/touchscreen/usbtouchscreen.c 454 */;
	struct device_attribute *cocci_id/* drivers/input/touchscreen/usbtouchscreen.c 452 */;
	char *cocci_id/* drivers/input/touchscreen/usbtouchscreen.c 452 */;
	struct device *cocci_id/* drivers/input/touchscreen/usbtouchscreen.c 451 */;
	ssize_t cocci_id/* drivers/input/touchscreen/usbtouchscreen.c 451 */;
	struct mtouch_priv {
		u8 fw_rev_major;
		u8 fw_rev_minor;
	} cocci_id/* drivers/input/touchscreen/usbtouchscreen.c 446 */;
	struct usb_driver cocci_id/* drivers/input/touchscreen/usbtouchscreen.c 1839 */;
	struct usbtouch_device_info *cocci_id/* drivers/input/touchscreen/usbtouchscreen.c 1646 */;
	const struct usb_device_id *cocci_id/* drivers/input/touchscreen/usbtouchscreen.c 1640 */;
	struct usb_endpoint_descriptor *cocci_id/* drivers/input/touchscreen/usbtouchscreen.c 1627 */;
	pm_message_t cocci_id/* drivers/input/touchscreen/usbtouchscreen.c 1572 */;
	struct input_dev *cocci_id/* drivers/input/touchscreen/usbtouchscreen.c 1554 */;
	const struct usb_device_id cocci_id/* drivers/input/touchscreen/usbtouchscreen.c 140 */[];
	struct usbtouch_device_info cocci_id/* drivers/input/touchscreen/usbtouchscreen.c 1155 */[];
	void cocci_id/* drivers/input/touchscreen/usbtouchscreen.c 1151 */(struct usbtouch_usb *usbtouch,
									   unsigned char *pkt,
									   int len);
	enum{DEVTYPE_IGNORE=-1, DEVTYPE_EGALAX, DEVTYPE_PANJIT, DEVTYPE_3M, DEVTYPE_ITM, DEVTYPE_ETURBO, DEVTYPE_GUNZE, DEVTYPE_DMC_TSC10, DEVTYPE_IRTOUCH, DEVTYPE_IRTOUCH_HIRES, DEVTYPE_IDEALTEK, DEVTYPE_GENERAL_TOUCH, DEVTYPE_GOTOP, DEVTYPE_JASTEC, DEVTYPE_E2I, DEVTYPE_ZYTRONIC, DEVTYPE_TC45USB, DEVTYPE_NEXIO, DEVTYPE_ELO, DEVTYPE_ETOUCH,} cocci_id/* drivers/input/touchscreen/usbtouchscreen.c 110 */;
	struct nexio_touch_packet *cocci_id/* drivers/input/touchscreen/usbtouchscreen.c 1046 */;
	void *cocci_id/* drivers/input/touchscreen/usbtouchscreen.c 1046 */;
}
