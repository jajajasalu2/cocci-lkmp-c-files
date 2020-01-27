cocci_test_suite() {
	struct usb_serial_driver *const cocci_id/* drivers/usb/serial/quatech2.c 997 */[];
	struct usb_serial_driver cocci_id/* drivers/usb/serial/quatech2.c 970 */;
	const struct usb_device_id cocci_id/* drivers/usb/serial/quatech2.c 95 */[];
	const unsigned char *cocci_id/* drivers/usb/serial/quatech2.c 923 */;
	struct async_icount *cocci_id/* drivers/usb/serial/quatech2.c 868 */;
	const struct qt2_device_detail cocci_id/* drivers/usb/serial/quatech2.c 84 */[];
	u16 cocci_id/* drivers/usb/serial/quatech2.c 804 */;
	struct qt2_port_private *cocci_id/* drivers/usb/serial/quatech2.c 802 */;
	void cocci_id/* drivers/usb/serial/quatech2.c 799 */;
	struct qt2_device_detail {
		int product_id;
		int num_ports;
	} cocci_id/* drivers/usb/serial/quatech2.c 75 */;
	struct qt2_serial_private *cocci_id/* drivers/usb/serial/quatech2.c 669 */;
	struct usb_serial *cocci_id/* drivers/usb/serial/quatech2.c 667 */;
	unsigned char cocci_id/* drivers/usb/serial/quatech2.c 506 */;
	bool cocci_id/* drivers/usb/serial/quatech2.c 503 */;
	struct urb *cocci_id/* drivers/usb/serial/quatech2.c 498 */;
	unsigned char *cocci_id/* drivers/usb/serial/quatech2.c 493 */;
	struct usb_serial_port *cocci_id/* drivers/usb/serial/quatech2.c 459 */;
	struct serial_struct *cocci_id/* drivers/usb/serial/quatech2.c 457 */;
	struct tty_struct *cocci_id/* drivers/usb/serial/quatech2.c 456 */;
	unsigned long cocci_id/* drivers/usb/serial/quatech2.c 343 */;
	unsigned int cocci_id/* drivers/usb/serial/quatech2.c 271 */;
	struct ktermios *cocci_id/* drivers/usb/serial/quatech2.c 265 */;
	struct qt2_device_detail cocci_id/* drivers/usb/serial/quatech2.c 248 */;
	struct usb_serial_endpoints *cocci_id/* drivers/usb/serial/quatech2.c 246 */;
	unsigned cocci_id/* drivers/usb/serial/quatech2.c 220 */;
	u8 *cocci_id/* drivers/usb/serial/quatech2.c 190 */;
	u8 cocci_id/* drivers/usb/serial/quatech2.c 172 */;
	struct usb_device *cocci_id/* drivers/usb/serial/quatech2.c 171 */;
	int cocci_id/* drivers/usb/serial/quatech2.c 146 */;
	void cocci_id/* drivers/usb/serial/quatech2.c 132 */(struct urb *urb);
	void cocci_id/* drivers/usb/serial/quatech2.c 129 */(struct usb_serial_port *port,
							     unsigned char *ch);
	struct qt2_port_private {
		u8 device_port;
		spinlock_t urb_lock;
		bool urb_in_use;
		struct urb *write_urb;
		char *write_buffer;
		spinlock_t lock;
		u8 shadowLSR;
		u8 shadowMSR;
		struct usb_serial_port *port;
	} cocci_id/* drivers/usb/serial/quatech2.c 114 */;
	struct qt2_serial_private {
		unsigned char current_port;
		struct urb *read_urb;
		char *read_buffer;
	} cocci_id/* drivers/usb/serial/quatech2.c 107 */;
}
