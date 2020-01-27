cocci_test_suite() {
	unsigned long cocci_id/* drivers/usb/serial/cypress_m8.c 978 */;
	struct tty_struct *cocci_id/* drivers/usb/serial/cypress_m8.c 973 */;
	struct cypress_private {
		spinlock_t lock;
		int chiptype;
		int bytes_in;
		int bytes_out;
		int cmd_count;
		int cmd_ctrl;
		struct kfifo write_fifo;
		int write_urb_in_use;
		int write_urb_interval;
		int read_urb_interval;
		int comm_is_ok;
		__u8 line_control;
		__u8 current_status;
		__u8 current_config;
		__u8 rx_flags;
		enum packet_format pkt_fmt;
		int get_cfg_unsafe;
		int baud_rate;
		char prev_status;
	} cocci_id/* drivers/usb/serial/cypress_m8.c 89 */;
	__u8 cocci_id/* drivers/usb/serial/cypress_m8.c 869 */;
	unsigned int cocci_id/* drivers/usb/serial/cypress_m8.c 867 */;
	struct ktermios *cocci_id/* drivers/usb/serial/cypress_m8.c 862 */;
	enum packet_format{packet_format_1, packet_format_2,} cocci_id/* drivers/usb/serial/cypress_m8.c 84 */;
	const struct usb_device_id cocci_id/* drivers/usb/serial/cypress_m8.c 72 */[];
	const unsigned char *cocci_id/* drivers/usb/serial/cypress_m8.c 657 */;
	void cocci_id/* drivers/usb/serial/cypress_m8.c 637 */;
	struct usb_serial *cocci_id/* drivers/usb/serial/cypress_m8.c 501 */;
	struct cypress_private cocci_id/* drivers/usb/serial/cypress_m8.c 448 */;
	const unsigned int cocci_id/* drivers/usb/serial/cypress_m8.c 297 */;
	u8 *cocci_id/* drivers/usb/serial/cypress_m8.c 296 */;
	struct cypress_private *cocci_id/* drivers/usb/serial/cypress_m8.c 234 */;
	speed_t cocci_id/* drivers/usb/serial/cypress_m8.c 232 */;
	struct usb_serial_port *cocci_id/* drivers/usb/serial/cypress_m8.c 232 */;
	int cocci_id/* drivers/usb/serial/cypress_m8.c 232 */;
	bool cocci_id/* drivers/usb/serial/cypress_m8.c 226 */;
	struct usb_device *cocci_id/* drivers/usb/serial/cypress_m8.c 226 */;
	struct usb_serial_driver *const cocci_id/* drivers/usb/serial/cypress_m8.c 216 */[];
	struct usb_serial_driver cocci_id/* drivers/usb/serial/cypress_m8.c 190 */;
	void cocci_id/* drivers/usb/serial/cypress_m8.c 134 */(struct urb *urb);
	int cocci_id/* drivers/usb/serial/cypress_m8.c 130 */(struct tty_struct *tty);
	int cocci_id/* drivers/usb/serial/cypress_m8.c 128 */(struct tty_struct *tty,
							      unsigned int set,
							      unsigned int clear);
	void cocci_id/* drivers/usb/serial/cypress_m8.c 125 */(struct tty_struct *tty,
							       struct usb_serial_port *port,
							       struct ktermios *old);
	void cocci_id/* drivers/usb/serial/cypress_m8.c 124 */(struct tty_struct *tty);
	int cocci_id/* drivers/usb/serial/cypress_m8.c 120 */(struct tty_struct *tty,
							      struct usb_serial_port *port,
							      const unsigned char *buf,
							      int count);
	void cocci_id/* drivers/usb/serial/cypress_m8.c 119 */(struct usb_serial_port *port,
							       int on);
	void cocci_id/* drivers/usb/serial/cypress_m8.c 118 */(struct usb_serial_port *port);
	int cocci_id/* drivers/usb/serial/cypress_m8.c 117 */(struct tty_struct *tty,
							      struct usb_serial_port *port);
	int cocci_id/* drivers/usb/serial/cypress_m8.c 115 */(struct usb_serial_port *port);
	u8 cocci_id/* drivers/usb/serial/cypress_m8.c 1103 */;
	char cocci_id/* drivers/usb/serial/cypress_m8.c 1033 */;
	unsigned char *cocci_id/* drivers/usb/serial/cypress_m8.c 1031 */;
	struct device *cocci_id/* drivers/usb/serial/cypress_m8.c 1029 */;
	struct urb *cocci_id/* drivers/usb/serial/cypress_m8.c 1025 */;
}
