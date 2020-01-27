cocci_test_suite() {
	struct mct_u232_private {
		struct urb *read_urb;
		spinlock_t lock;
		unsigned int control_state;
		unsigned char last_lcr;
		unsigned char last_lsr;
		unsigned char last_msr;
		unsigned int rx_flags;
	} cocci_id/* drivers/usb/serial/mct_u232.c 97 */;
	struct usb_serial_driver *const cocci_id/* drivers/usb/serial/mct_u232.c 93 */[];
	struct usb_serial_driver cocci_id/* drivers/usb/serial/mct_u232.c 69 */;
	unsigned long cocci_id/* drivers/usb/serial/mct_u232.c 686 */;
	unsigned char cocci_id/* drivers/usb/serial/mct_u232.c 685 */;
	struct mct_u232_private *cocci_id/* drivers/usb/serial/mct_u232.c 684 */;
	struct usb_serial_port *cocci_id/* drivers/usb/serial/mct_u232.c 683 */;
	struct tty_struct *cocci_id/* drivers/usb/serial/mct_u232.c 681 */;
	int cocci_id/* drivers/usb/serial/mct_u232.c 681 */;
	void cocci_id/* drivers/usb/serial/mct_u232.c 681 */;
	const struct usb_device_id cocci_id/* drivers/usb/serial/mct_u232.c 60 */[];
	struct ktermios *cocci_id/* drivers/usb/serial/mct_u232.c 598 */;
	void cocci_id/* drivers/usb/serial/mct_u232.c 53 */(struct tty_struct *tty);
	int cocci_id/* drivers/usb/serial/mct_u232.c 51 */(struct tty_struct *tty,
							   unsigned int set,
							   unsigned int clear);
	struct urb *cocci_id/* drivers/usb/serial/mct_u232.c 508 */;
	int cocci_id/* drivers/usb/serial/mct_u232.c 50 */(struct tty_struct *tty);
	void cocci_id/* drivers/usb/serial/mct_u232.c 49 */(struct tty_struct *tty,
							    int break_state);
	unsigned int cocci_id/* drivers/usb/serial/mct_u232.c 483 */;
	void cocci_id/* drivers/usb/serial/mct_u232.c 47 */(struct tty_struct *tty,
							    struct usb_serial_port *port,
							    struct ktermios *old);
	void cocci_id/* drivers/usb/serial/mct_u232.c 46 */(struct urb *urb);
	void cocci_id/* drivers/usb/serial/mct_u232.c 45 */(struct usb_serial_port *port,
							    int on);
	void cocci_id/* drivers/usb/serial/mct_u232.c 44 */(struct usb_serial_port *port);
	int cocci_id/* drivers/usb/serial/mct_u232.c 43 */(struct tty_struct *tty,
							   struct usb_serial_port *port);
	int cocci_id/* drivers/usb/serial/mct_u232.c 42 */(struct usb_serial_port *remove);
	int cocci_id/* drivers/usb/serial/mct_u232.c 41 */(struct usb_serial_port *port);
	unsigned int *cocci_id/* drivers/usb/serial/mct_u232.c 351 */;
	struct async_icount *cocci_id/* drivers/usb/serial/mct_u232.c 336 */;
	unsigned char *cocci_id/* drivers/usb/serial/mct_u232.c 306 */;
	speed_t cocci_id/* drivers/usb/serial/mct_u232.c 120 */;
	speed_t *cocci_id/* drivers/usb/serial/mct_u232.c 120 */;
	struct usb_serial *cocci_id/* drivers/usb/serial/mct_u232.c 119 */;
}
