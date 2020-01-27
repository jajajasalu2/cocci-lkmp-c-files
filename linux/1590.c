cocci_test_suite() {
	struct belkin_sa_private {
		spinlock_t lock;
		unsigned long control_state;
		unsigned char last_lsr;
		unsigned char last_msr;
		int bad_flow_control;
	} cocci_id/* drivers/usb/serial/belkin_sa.c 90 */;
	struct usb_serial_driver *const cocci_id/* drivers/usb/serial/belkin_sa.c 86 */[];
	struct usb_serial_driver cocci_id/* drivers/usb/serial/belkin_sa.c 66 */;
	const struct usb_device_id cocci_id/* drivers/usb/serial/belkin_sa.c 54 */[];
	int cocci_id/* drivers/usb/serial/belkin_sa.c 50 */(struct tty_struct *tty,
							    unsigned int set,
							    unsigned int clear);
	int cocci_id/* drivers/usb/serial/belkin_sa.c 49 */(struct tty_struct *tty);
	void cocci_id/* drivers/usb/serial/belkin_sa.c 48 */(struct tty_struct *tty,
							     int break_state);
	void cocci_id/* drivers/usb/serial/belkin_sa.c 46 */(struct tty_struct *tty,
							     struct usb_serial_port *port,
							     struct ktermios *old);
	void cocci_id/* drivers/usb/serial/belkin_sa.c 45 */(struct urb *urb);
	void cocci_id/* drivers/usb/serial/belkin_sa.c 43 */(struct usb_serial_port *port);
	struct usb_serial *cocci_id/* drivers/usb/serial/belkin_sa.c 423 */;
	struct usb_serial_port *cocci_id/* drivers/usb/serial/belkin_sa.c 422 */;
	struct tty_struct *cocci_id/* drivers/usb/serial/belkin_sa.c 420 */;
	int cocci_id/* drivers/usb/serial/belkin_sa.c 420 */;
	void cocci_id/* drivers/usb/serial/belkin_sa.c 420 */;
	int cocci_id/* drivers/usb/serial/belkin_sa.c 41 */(struct tty_struct *tty,
							    struct usb_serial_port *port);
	int cocci_id/* drivers/usb/serial/belkin_sa.c 39 */(struct usb_serial_port *port);
	speed_t cocci_id/* drivers/usb/serial/belkin_sa.c 290 */;
	__u16 cocci_id/* drivers/usb/serial/belkin_sa.c 286 */;
	unsigned int cocci_id/* drivers/usb/serial/belkin_sa.c 282 */;
	struct ktermios *cocci_id/* drivers/usb/serial/belkin_sa.c 278 */;
	char cocci_id/* drivers/usb/serial/belkin_sa.c 243 */;
	unsigned char cocci_id/* drivers/usb/serial/belkin_sa.c 242 */;
	unsigned long cocci_id/* drivers/usb/serial/belkin_sa.c 241 */;
	unsigned char *cocci_id/* drivers/usb/serial/belkin_sa.c 240 */;
	struct urb *cocci_id/* drivers/usb/serial/belkin_sa.c 236 */;
	struct belkin_sa_private cocci_id/* drivers/usb/serial/belkin_sa.c 117 */;
	struct belkin_sa_private *cocci_id/* drivers/usb/serial/belkin_sa.c 115 */;
	struct usb_device *cocci_id/* drivers/usb/serial/belkin_sa.c 114 */;
}
