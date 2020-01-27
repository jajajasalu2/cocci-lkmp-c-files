cocci_test_suite() {
	struct usb_serial_port *cocci_id/* drivers/usb/serial/pl2303.c 971 */;
	struct tty_struct *cocci_id/* drivers/usb/serial/pl2303.c 969 */;
	int cocci_id/* drivers/usb/serial/pl2303.c 969 */;
	void cocci_id/* drivers/usb/serial/pl2303.c 969 */;
	u16 cocci_id/* drivers/usb/serial/pl2303.c 951 */;
	struct serial_struct *cocci_id/* drivers/usb/serial/pl2303.c 937 */;
	struct pl2303_private *cocci_id/* drivers/usb/serial/pl2303.c 928 */;
	u8 cocci_id/* drivers/usb/serial/pl2303.c 811 */;
	struct ktermios *cocci_id/* drivers/usb/serial/pl2303.c 653 */;
	bool cocci_id/* drivers/usb/serial/pl2303.c 638 */;
	const struct pl2303_type_data *cocci_id/* drivers/usb/serial/pl2303.c 638 */;
	const struct ktermios *cocci_id/* drivers/usb/serial/pl2303.c 627 */;
	unsigned char cocci_id/* drivers/usb/serial/pl2303.c 586 */[7];
	speed_t cocci_id/* drivers/usb/serial/pl2303.c 560 */;
	struct pl2303_serial_private *cocci_id/* drivers/usb/serial/pl2303.c 559 */;
	u8 cocci_id/* drivers/usb/serial/pl2303.c 556 */[4];
	unsigned int cocci_id/* drivers/usb/serial/pl2303.c 518 */;
	unsigned char cocci_id/* drivers/usb/serial/pl2303.c 507 */[4];
	unsigned cocci_id/* drivers/usb/serial/pl2303.c 486 */;
	const speed_t cocci_id/* drivers/usb/serial/pl2303.c 480 */[];
	enum pl2303_type cocci_id/* drivers/usb/serial/pl2303.c 364 */;
	const struct usb_device_id cocci_id/* drivers/usb/serial/pl2303.c 35 */[];
	struct device *cocci_id/* drivers/usb/serial/pl2303.c 344 */;
	unsigned long cocci_id/* drivers/usb/serial/pl2303.c 343 */;
	struct usb_serial_endpoints *cocci_id/* drivers/usb/serial/pl2303.c 341 */;
	struct usb_serial *cocci_id/* drivers/usb/serial/pl2303.c 340 */;
	struct usb_endpoint_descriptor *cocci_id/* drivers/usb/serial/pl2303.c 317 */;
	struct usb_host_interface *cocci_id/* drivers/usb/serial/pl2303.c 316 */;
	struct usb_device *cocci_id/* drivers/usb/serial/pl2303.c 314 */;
	struct usb_interface *cocci_id/* drivers/usb/serial/pl2303.c 313 */;
	void *cocci_id/* drivers/usb/serial/pl2303.c 300 */;
	const struct usb_device_id *cocci_id/* drivers/usb/serial/pl2303.c 298 */;
	u8 *cocci_id/* drivers/usb/serial/pl2303.c 273 */;
	unsigned char cocci_id/* drivers/usb/serial/pl2303.c 214 */[1];
	const struct pl2303_type_data cocci_id/* drivers/usb/serial/pl2303.c 199 */[TYPE_COUNT];
	struct pl2303_private {
		spinlock_t lock;
		u8 line_control;
		u8 line_status;
		u8 line_settings[7];
	} cocci_id/* drivers/usb/serial/pl2303.c 191 */;
	struct pl2303_serial_private {
		const struct pl2303_type_data *type;
		unsigned long quirks;
	} cocci_id/* drivers/usb/serial/pl2303.c 186 */;
	struct pl2303_type_data {
		speed_t max_baud_rate;
		unsigned long quirks;
		unsigned int no_autoxonxoff:1;
	} cocci_id/* drivers/usb/serial/pl2303.c 180 */;
	enum pl2303_type{TYPE_01, TYPE_HX, TYPE_HXN, TYPE_COUNT,} cocci_id/* drivers/usb/serial/pl2303.c 173 */;
	void cocci_id/* drivers/usb/serial/pl2303.c 171 */(struct usb_serial_port *port,
							   bool enable);
	struct usb_serial_driver *const cocci_id/* drivers/usb/serial/pl2303.c 1147 */[];
	struct usb_serial_driver cocci_id/* drivers/usb/serial/pl2303.c 1116 */;
	char cocci_id/* drivers/usb/serial/pl2303.c 1071 */;
	unsigned char *cocci_id/* drivers/usb/serial/pl2303.c 1070 */;
	struct urb *cocci_id/* drivers/usb/serial/pl2303.c 1066 */;
}
