cocci_test_suite() {
	const int cocci_id/* drivers/input/tablet/hanwang.c 92 */[];
	const struct hanwang_features cocci_id/* drivers/input/tablet/hanwang.c 75 */[];
	struct hanwang_features {
		unsigned short pid;
		char *name;
		enum hanwang_tablet_type type;
		int pkg_len;
		int max_x;
		int max_y;
		int max_tilt_x;
		int max_tilt_y;
		int max_pressure;
	} cocci_id/* drivers/input/tablet/hanwang.c 63 */;
	struct hanwang {
		unsigned char *data;
		dma_addr_t data_dma;
		struct input_dev *dev;
		struct usb_device *usbdev;
		struct urb *irq;
		const struct hanwang_features *features;
		unsigned int current_tool;
		unsigned int current_id;
		char name[64];
		char phys[32];
	} cocci_id/* drivers/input/tablet/hanwang.c 50 */;
	enum hanwang_tablet_type{HANWANG_ART_MASTER_III, HANWANG_ART_MASTER_HD, HANWANG_ART_MASTER_II,} cocci_id/* drivers/input/tablet/hanwang.c 44 */;
	struct usb_driver cocci_id/* drivers/input/tablet/hanwang.c 439 */;
	const struct usb_device_id cocci_id/* drivers/input/tablet/hanwang.c 431 */[];
	struct usb_interface *cocci_id/* drivers/input/tablet/hanwang.c 418 */;
	struct hanwang cocci_id/* drivers/input/tablet/hanwang.c 328 */;
	struct usb_endpoint_descriptor *cocci_id/* drivers/input/tablet/hanwang.c 319 */;
	const struct usb_device_id *cocci_id/* drivers/input/tablet/hanwang.c 316 */;
	int cocci_id/* drivers/input/tablet/hanwang.c 302 */;
	bool cocci_id/* drivers/input/tablet/hanwang.c 300 */;
	struct usb_device *cocci_id/* drivers/input/tablet/hanwang.c 300 */;
	struct hanwang *cocci_id/* drivers/input/tablet/hanwang.c 300 */;
	struct input_dev *cocci_id/* drivers/input/tablet/hanwang.c 293 */;
	void cocci_id/* drivers/input/tablet/hanwang.c 293 */;
	struct urb *cocci_id/* drivers/input/tablet/hanwang.c 252 */;
	__be16 *cocci_id/* drivers/input/tablet/hanwang.c 181 */;
	u16 cocci_id/* drivers/input/tablet/hanwang.c 114 */;
	enum hanwang_tablet_type cocci_id/* drivers/input/tablet/hanwang.c 112 */;
	unsigned char *cocci_id/* drivers/input/tablet/hanwang.c 109 */;
}
