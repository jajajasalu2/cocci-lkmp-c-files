cocci_test_suite() {
	void cocci_id/* drivers/usb/serial/ch341.c 92 */(struct tty_struct *tty,
							 struct usb_serial_port *port,
							 struct ktermios *old_termios);
	struct ch341_private {
		spinlock_t lock;
		unsigned baud_rate;
		u8 mcr;
		u8 msr;
		u8 lcr;
	} cocci_id/* drivers/usb/serial/ch341.c 84 */;
	const struct usb_device_id cocci_id/* drivers/usb/serial/ch341.c 76 */[];
	struct usb_serial_driver *const cocci_id/* drivers/usb/serial/ch341.c 691 */[];
	struct usb_serial_driver cocci_id/* drivers/usb/serial/ch341.c 669 */;
	struct usb_serial *cocci_id/* drivers/usb/serial/ch341.c 642 */;
	unsigned char *cocci_id/* drivers/usb/serial/ch341.c 585 */;
	struct urb *cocci_id/* drivers/usb/serial/ch341.c 582 */;
	size_t cocci_id/* drivers/usb/serial/ch341.c 539 */;
	uint8_t *cocci_id/* drivers/usb/serial/ch341.c 479 */;
	struct usb_serial_port *cocci_id/* drivers/usb/serial/ch341.c 476 */;
	uint16_t cocci_id/* drivers/usb/serial/ch341.c 475 */;
	const uint16_t cocci_id/* drivers/usb/serial/ch341.c 474 */;
	struct tty_struct *cocci_id/* drivers/usb/serial/ch341.c 472 */;
	int cocci_id/* drivers/usb/serial/ch341.c 472 */;
	void cocci_id/* drivers/usb/serial/ch341.c 472 */;
	struct ktermios *cocci_id/* drivers/usb/serial/ch341.c 408 */;
	unsigned long cocci_id/* drivers/usb/serial/ch341.c 350 */;
	struct ch341_private *cocci_id/* drivers/usb/serial/ch341.c 341 */;
	struct ch341_private cocci_id/* drivers/usb/serial/ch341.c 306 */;
	char *cocci_id/* drivers/usb/serial/ch341.c 274 */;
	const unsigned int cocci_id/* drivers/usb/serial/ch341.c 273 */;
	struct usb_device *cocci_id/* drivers/usb/serial/ch341.c 271 */;
	unsigned int cocci_id/* drivers/usb/serial/ch341.c 164 */;
	speed_t cocci_id/* drivers/usb/serial/ch341.c 162 */;
	const speed_t cocci_id/* drivers/usb/serial/ch341.c 145 */[];
	unsigned cocci_id/* drivers/usb/serial/ch341.c 115 */;
	u8 cocci_id/* drivers/usb/serial/ch341.c 114 */;
	u16 cocci_id/* drivers/usb/serial/ch341.c 114 */;
}
