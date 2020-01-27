cocci_test_suite() {
	struct cyberjack_private {
		spinlock_t lock;
		short rdtodo;
		unsigned char wrbuf[5 * 64];
		short wrfilled;
		short wrsent;
	} cocci_id/* drivers/usb/serial/cyberjack.c 92 */;
	struct usb_serial_driver *const cocci_id/* drivers/usb/serial/cyberjack.c 88 */[];
	struct usb_serial_driver cocci_id/* drivers/usb/serial/cyberjack.c 68 */;
	const struct usb_device_id cocci_id/* drivers/usb/serial/cyberjack.c 61 */[];
	void cocci_id/* drivers/usb/serial/cyberjack.c 58 */(struct urb *urb);
	int cocci_id/* drivers/usb/serial/cyberjack.c 56 */(struct tty_struct *tty);
	int cocci_id/* drivers/usb/serial/cyberjack.c 54 */(struct tty_struct *tty,
							    struct usb_serial_port *port,
							    const unsigned char *buf,
							    int count);
	void cocci_id/* drivers/usb/serial/cyberjack.c 53 */(struct usb_serial_port *port);
	int cocci_id/* drivers/usb/serial/cyberjack.c 51 */(struct tty_struct *tty,
							    struct usb_serial_port *port);
	int cocci_id/* drivers/usb/serial/cyberjack.c 49 */(struct usb_serial_port *port);
	short cocci_id/* drivers/usb/serial/cyberjack.c 314 */;
	unsigned char *cocci_id/* drivers/usb/serial/cyberjack.c 312 */;
	struct device *cocci_id/* drivers/usb/serial/cyberjack.c 311 */;
	struct urb *cocci_id/* drivers/usb/serial/cyberjack.c 307 */;
	unsigned short cocci_id/* drivers/usb/serial/cyberjack.c 272 */;
	const unsigned char *cocci_id/* drivers/usb/serial/cyberjack.c 161 */;
	struct usb_serial_port *cocci_id/* drivers/usb/serial/cyberjack.c 154 */;
	void cocci_id/* drivers/usb/serial/cyberjack.c 154 */;
	unsigned long cocci_id/* drivers/usb/serial/cyberjack.c 139 */;
	struct cyberjack_private *cocci_id/* drivers/usb/serial/cyberjack.c 138 */;
	struct tty_struct *cocci_id/* drivers/usb/serial/cyberjack.c 135 */;
	int cocci_id/* drivers/usb/serial/cyberjack.c 135 */;
	struct cyberjack_private cocci_id/* drivers/usb/serial/cyberjack.c 105 */;
}
