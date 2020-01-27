cocci_test_suite() {
	void cocci_id/* drivers/usb/serial/whiteheat.c 93 */(struct tty_struct *tty,
							     int break_state);
	int cocci_id/* drivers/usb/serial/whiteheat.c 91 */(struct tty_struct *tty,
							    unsigned int set,
							    unsigned int clear);
	int cocci_id/* drivers/usb/serial/whiteheat.c 90 */(struct tty_struct *tty);
	void cocci_id/* drivers/usb/serial/whiteheat.c 88 */(struct tty_struct *tty,
							     struct usb_serial_port *port,
							     struct ktermios *old);
	int cocci_id/* drivers/usb/serial/whiteheat.c 86 */(struct tty_struct *tty,
							    struct serial_struct *ss);
	void cocci_id/* drivers/usb/serial/whiteheat.c 85 */(struct usb_serial_port *port);
	int cocci_id/* drivers/usb/serial/whiteheat.c 83 */(struct tty_struct *tty,
							    struct usb_serial_port *port);
	struct usb_serial *cocci_id/* drivers/usb/serial/whiteheat.c 783 */;
	struct whiteheat_purge cocci_id/* drivers/usb/serial/whiteheat.c 751 */;
	__u8 cocci_id/* drivers/usb/serial/whiteheat.c 749 */;
	struct whiteheat_set_rdb cocci_id/* drivers/usb/serial/whiteheat.c 740 */;
	int cocci_id/* drivers/usb/serial/whiteheat.c 74 */(struct usb_serial *serial,
							    const struct usb_device_id *id);
	const struct usb_device_id cocci_id/* drivers/usb/serial/whiteheat.c 64 */[];
	speed_t cocci_id/* drivers/usb/serial/whiteheat.c 639 */;
	unsigned int cocci_id/* drivers/usb/serial/whiteheat.c 638 */;
	struct whiteheat_port_settings cocci_id/* drivers/usb/serial/whiteheat.c 637 */;
	struct tty_struct *cocci_id/* drivers/usb/serial/whiteheat.c 633 */;
	__u8 *cocci_id/* drivers/usb/serial/whiteheat.c 629 */;
	struct whiteheat_simple cocci_id/* drivers/usb/serial/whiteheat.c 625 */;
	struct whiteheat_dr_info cocci_id/* drivers/usb/serial/whiteheat.c 603 */;
	bool cocci_id/* drivers/usb/serial/whiteheat.c 581 */;
	struct device *cocci_id/* drivers/usb/serial/whiteheat.c 553 */;
	struct whiteheat_private *cocci_id/* drivers/usb/serial/whiteheat.c 552 */;
	unsigned char *cocci_id/* drivers/usb/serial/whiteheat.c 495 */;
	int cocci_id/* drivers/usb/serial/whiteheat.c 494 */;
	struct whiteheat_command_private *cocci_id/* drivers/usb/serial/whiteheat.c 493 */;
	struct usb_serial_port *cocci_id/* drivers/usb/serial/whiteheat.c 492 */;
	struct urb *cocci_id/* drivers/usb/serial/whiteheat.c 490 */;
	void cocci_id/* drivers/usb/serial/whiteheat.c 490 */;
	struct ktermios *cocci_id/* drivers/usb/serial/whiteheat.c 464 */;
	struct serial_struct *cocci_id/* drivers/usb/serial/whiteheat.c 446 */;
	struct whiteheat_command_private cocci_id/* drivers/usb/serial/whiteheat.c 287 */;
	struct whiteheat_hw_info *cocci_id/* drivers/usb/serial/whiteheat.c 223 */;
	const struct usb_device_id *cocci_id/* drivers/usb/serial/whiteheat.c 194 */;
	int cocci_id/* drivers/usb/serial/whiteheat.c 165 */(struct usb_serial_port *port,
							     __u8 rxtx);
	int cocci_id/* drivers/usb/serial/whiteheat.c 164 */(struct usb_serial_port *port,
							     __u8 onoff);
	void cocci_id/* drivers/usb/serial/whiteheat.c 161 */(struct tty_struct *tty);
	int cocci_id/* drivers/usb/serial/whiteheat.c 160 */(struct usb_serial_port *port);
	int cocci_id/* drivers/usb/serial/whiteheat.c 157 */(struct usb_serial_port *port,
							     __u8 command,
							     __u8 *data,
							     __u8 datasize);
	void cocci_id/* drivers/usb/serial/whiteheat.c 155 */(struct urb *urb);
	void cocci_id/* drivers/usb/serial/whiteheat.c 153 */(struct usb_serial *serial);
	int cocci_id/* drivers/usb/serial/whiteheat.c 152 */(struct usb_serial *serial);
	struct whiteheat_private {
		__u8 mcr;
	} cocci_id/* drivers/usb/serial/whiteheat.c 146 */;
	struct whiteheat_command_private {
		struct mutex mutex;
		__u8 port_running;
		__u8 command_finished;
		wait_queue_head_t wait_command;
		__u8 result_buffer[64];
	} cocci_id/* drivers/usb/serial/whiteheat.c 136 */;
	struct usb_serial_driver *const cocci_id/* drivers/usb/serial/whiteheat.c 132 */[];
	struct usb_serial_driver cocci_id/* drivers/usb/serial/whiteheat.c 107 */;
}
