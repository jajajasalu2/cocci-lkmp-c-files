cocci_test_suite() {
	struct usb_serial_driver *const cocci_id/* drivers/usb/serial/kl5kusb105.c 96 */[];
	struct usb_serial_driver cocci_id/* drivers/usb/serial/kl5kusb105.c 75 */;
	const struct usb_device_id cocci_id/* drivers/usb/serial/kl5kusb105.c 68 */[];
	int cocci_id/* drivers/usb/serial/kl5kusb105.c 62 */(struct usb_serial_port *port,
							     void *dest,
							     size_t size);
	void cocci_id/* drivers/usb/serial/kl5kusb105.c 61 */(struct urb *urb);
	int cocci_id/* drivers/usb/serial/kl5kusb105.c 60 */(struct tty_struct *tty);
	void cocci_id/* drivers/usb/serial/kl5kusb105.c 58 */(struct tty_struct *tty,
							      struct usb_serial_port *port,
							      struct ktermios *old);
	void cocci_id/* drivers/usb/serial/kl5kusb105.c 57 */(struct usb_serial_port *port);
	int cocci_id/* drivers/usb/serial/kl5kusb105.c 56 */(struct tty_struct *tty,
							     struct usb_serial_port *port);
	int cocci_id/* drivers/usb/serial/kl5kusb105.c 54 */(struct usb_serial_port *port);
	speed_t cocci_id/* drivers/usb/serial/kl5kusb105.c 410 */;
	unsigned int cocci_id/* drivers/usb/serial/kl5kusb105.c 404 */;
	struct device *cocci_id/* drivers/usb/serial/kl5kusb105.c 403 */;
	struct ktermios *cocci_id/* drivers/usb/serial/kl5kusb105.c 400 */;
	unsigned cocci_id/* drivers/usb/serial/kl5kusb105.c 377 */;
	struct urb *cocci_id/* drivers/usb/serial/kl5kusb105.c 373 */;
	unsigned char *cocci_id/* drivers/usb/serial/kl5kusb105.c 361 */;
	void *cocci_id/* drivers/usb/serial/kl5kusb105.c 359 */;
	size_t cocci_id/* drivers/usb/serial/kl5kusb105.c 359 */;
	void cocci_id/* drivers/usb/serial/kl5kusb105.c 333 */;
	unsigned long cocci_id/* drivers/usb/serial/kl5kusb105.c 249 */;
	struct klsi_105_private *cocci_id/* drivers/usb/serial/kl5kusb105.c 246 */;
	struct tty_struct *cocci_id/* drivers/usb/serial/kl5kusb105.c 244 */;
	__u16 cocci_id/* drivers/usb/serial/kl5kusb105.c 171 */;
	u8 *cocci_id/* drivers/usb/serial/kl5kusb105.c 170 */;
	unsigned long *cocci_id/* drivers/usb/serial/kl5kusb105.c 167 */;
	const __u16 cocci_id/* drivers/usb/serial/kl5kusb105.c 149 */;
	struct klsi_105_port_settings cocci_id/* drivers/usb/serial/kl5kusb105.c 134 */;
	struct klsi_105_port_settings *cocci_id/* drivers/usb/serial/kl5kusb105.c 123 */;
	struct usb_serial_port *cocci_id/* drivers/usb/serial/kl5kusb105.c 122 */;
	int cocci_id/* drivers/usb/serial/kl5kusb105.c 122 */;
	struct klsi_105_private {
		struct klsi_105_port_settings cfg;
		unsigned long line_state;
		spinlock_t lock;
	} cocci_id/* drivers/usb/serial/kl5kusb105.c 108 */;
	struct klsi_105_port_settings {
		u8 pktlen;
		u8 baudrate;
		u8 databits;
		u8 unknown1;
		u8 unknown2;
	} cocci_id/* drivers/usb/serial/kl5kusb105.c 100 */;
}
