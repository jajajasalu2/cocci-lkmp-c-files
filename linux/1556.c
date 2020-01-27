cocci_test_suite() {
	struct usb_serial_driver cocci_id/* drivers/usb/serial/kobil_sct.c 77 */;
	const struct usb_device_id cocci_id/* drivers/usb/serial/kobil_sct.c 68 */[];
	void cocci_id/* drivers/usb/serial/kobil_sct.c 66 */(struct tty_struct *tty);
	void cocci_id/* drivers/usb/serial/kobil_sct.c 64 */(struct tty_struct *tty,
							     struct usb_serial_port *port,
							     struct ktermios *old);
	void cocci_id/* drivers/usb/serial/kobil_sct.c 62 */(struct urb *urb);
	int cocci_id/* drivers/usb/serial/kobil_sct.c 60 */(struct tty_struct *tty,
							    unsigned int set,
							    unsigned int clear);
	int cocci_id/* drivers/usb/serial/kobil_sct.c 59 */(struct tty_struct *tty);
	int cocci_id/* drivers/usb/serial/kobil_sct.c 57 */(struct tty_struct *tty,
							    unsigned int cmd,
							    unsigned long arg);
	int cocci_id/* drivers/usb/serial/kobil_sct.c 54 */(struct tty_struct *tty,
							    struct usb_serial_port *port,
							    const unsigned char *buf,
							    int count);
	struct kobil_private *cocci_id/* drivers/usb/serial/kobil_sct.c 535 */;
	unsigned long cocci_id/* drivers/usb/serial/kobil_sct.c 532 */;
	unsigned int cocci_id/* drivers/usb/serial/kobil_sct.c 532 */;
	int cocci_id/* drivers/usb/serial/kobil_sct.c 531 */;
	void cocci_id/* drivers/usb/serial/kobil_sct.c 53 */(struct usb_serial_port *port);
	int cocci_id/* drivers/usb/serial/kobil_sct.c 52 */(struct tty_struct *tty,
							    struct usb_serial_port *port);
	int cocci_id/* drivers/usb/serial/kobil_sct.c 50 */(struct usb_serial_port *probe);
	speed_t cocci_id/* drivers/usb/serial/kobil_sct.c 485 */;
	unsigned short cocci_id/* drivers/usb/serial/kobil_sct.c 483 */;
	struct ktermios *cocci_id/* drivers/usb/serial/kobil_sct.c 479 */;
	const unsigned char *cocci_id/* drivers/usb/serial/kobil_sct.c 295 */;
	struct urb *cocci_id/* drivers/usb/serial/kobil_sct.c 265 */;
	struct usb_serial_port *cocci_id/* drivers/usb/serial/kobil_sct.c 257 */;
	void cocci_id/* drivers/usb/serial/kobil_sct.c 257 */;
	unsigned char *cocci_id/* drivers/usb/serial/kobil_sct.c 171 */;
	struct device *cocci_id/* drivers/usb/serial/kobil_sct.c 168 */;
	struct tty_struct *cocci_id/* drivers/usb/serial/kobil_sct.c 156 */;
	struct kobil_private cocci_id/* drivers/usb/serial/kobil_sct.c 118 */;
	struct usb_serial *cocci_id/* drivers/usb/serial/kobil_sct.c 115 */;
	struct kobil_private {
		unsigned char buf[KOBIL_BUF_LENGTH];
		int filled;
		int cur_pos;
		__u16 device_type;
	} cocci_id/* drivers/usb/serial/kobil_sct.c 105 */;
	struct usb_serial_driver *const cocci_id/* drivers/usb/serial/kobil_sct.c 101 */[];
}
