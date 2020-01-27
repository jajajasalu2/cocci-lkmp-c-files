cocci_test_suite() {
	struct usb_serial_endpoints *cocci_id/* drivers/usb/serial/ipaq.c 551 */;
	struct usb_serial *cocci_id/* drivers/usb/serial/ipaq.c 550 */;
	struct usb_serial_port *cocci_id/* drivers/usb/serial/ipaq.c 516 */;
	struct tty_struct *cocci_id/* drivers/usb/serial/ipaq.c 515 */;
	struct usb_serial_driver *const cocci_id/* drivers/usb/serial/ipaq.c 511 */[];
	struct usb_serial_driver cocci_id/* drivers/usb/serial/ipaq.c 497 */;
	const struct usb_device_id cocci_id/* drivers/usb/serial/ipaq.c 36 */[];
	int cocci_id/* drivers/usb/serial/ipaq.c 34 */(struct usb_serial *serial);
	int cocci_id/* drivers/usb/serial/ipaq.c 32 */(struct usb_serial *serial,
						       struct usb_serial_endpoints *epds);
	int cocci_id/* drivers/usb/serial/ipaq.c 30 */(struct tty_struct *tty,
						       struct usb_serial_port *port);
	int cocci_id/* drivers/usb/serial/ipaq.c 26 */;
}
