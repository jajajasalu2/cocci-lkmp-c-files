cocci_test_suite() {
	enum usb_device_speed{USB_SPEED_UNKNOWN=0, USB_SPEED_LOW, USB_SPEED_FULL, USB_SPEED_HIGH,} cocci_id/* tools/usb/testusb.c 96 */;
	struct usb_interface_descriptor {
		__u8 bLength;
		__u8 bDescriptorType;
		__u8 bInterfaceNumber;
		__u8 bAlternateSetting;
		__u8 bNumEndpoints;
		__u8 bInterfaceClass;
		__u8 bInterfaceSubClass;
		__u8 bInterfaceProtocol;
		__u8 iInterface;
	}__attribute__((packed)) cocci_id/* tools/usb/testusb.c 83 */;
	struct usb_device_descriptor {
		__u8 bLength;
		__u8 bDescriptorType;
		__u16 bcdUSB;
		__u8 bDeviceClass;
		__u8 bDeviceSubClass;
		__u8 bDeviceProtocol;
		__u8 bMaxPacketSize0;
		__u16 idVendor;
		__u16 idProduct;
		__u16 bcdDevice;
		__u8 iManufacturer;
		__u8 iProduct;
		__u8 iSerialNumber;
		__u8 bNumConfigurations;
	}__attribute__((packed)) cocci_id/* tools/usb/testusb.c 66 */;
	struct testdev cocci_id/* tools/usb/testusb.c 502 */;
	struct usbtest_param {
		unsigned test_num;
		unsigned iterations;
		unsigned length;
		unsigned vary;
		unsigned sglen;
		struct timeval duration;
	} cocci_id/* tools/usb/testusb.c 42 */;
	struct usbtest_param cocci_id/* tools/usb/testusb.c 372 */;
	char *cocci_id/* tools/usb/testusb.c 368 */;
	char **cocci_id/* tools/usb/testusb.c 363 */;
	unsigned long cocci_id/* tools/usb/testusb.c 352 */;
	unsigned *cocci_id/* tools/usb/testusb.c 350 */;
	char cocci_id/* tools/usb/testusb.c 342 */[];
	char cocci_id/* tools/usb/testusb.c 317 */[80];
	void *cocci_id/* tools/usb/testusb.c 291 */;
	struct usbdevfs_ioctl cocci_id/* tools/usb/testusb.c 282 */;
	unsigned cocci_id/* tools/usb/testusb.c 280 */;
	void cocci_id/* tools/usb/testusb.c 239 */;
	struct testdev *cocci_id/* tools/usb/testusb.c 237 */;
	FILE *cocci_id/* tools/usb/testusb.c 235 */;
	const struct stat *cocci_id/* tools/usb/testusb.c 233 */;
	const char *cocci_id/* tools/usb/testusb.c 233 */;
	int cocci_id/* tools/usb/testusb.c 233 */;
	struct usb_device_descriptor cocci_id/* tools/usb/testusb.c 153 */;
	unsigned char cocci_id/* tools/usb/testusb.c 138 */;
	union {
		char buf[255];
		struct usb_interface_descriptor intf;
	} cocci_id/* tools/usb/testusb.c 130 */;
	struct testdev {
		struct testdev *next;
		char *name;
		pthread_t thread;
		enum usb_device_speed speed;
		unsigned ifnum:8;
		unsigned forever:1;
		int test;
		struct usbtest_param param;
	} cocci_id/* tools/usb/testusb.c 115 */;
	enum usb_device_speed cocci_id/* tools/usb/testusb.c 104 */;
}
