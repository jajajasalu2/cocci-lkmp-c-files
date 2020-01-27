cocci_test_suite() {
	const unsigned char *cocci_id/* drivers/usb/serial/digi_acceleport.c 906 */;
	unsigned char cocci_id/* drivers/usb/serial/digi_acceleport.c 866 */[4];
	struct usb_serial_port *cocci_id/* drivers/usb/serial/digi_acceleport.c 865 */;
	struct tty_struct *cocci_id/* drivers/usb/serial/digi_acceleport.c 863 */;
	int cocci_id/* drivers/usb/serial/digi_acceleport.c 863 */;
	void cocci_id/* drivers/usb/serial/digi_acceleport.c 863 */;
	speed_t cocci_id/* drivers/usb/serial/digi_acceleport.c 687 */;
	struct device *cocci_id/* drivers/usb/serial/digi_acceleport.c 678 */;
	struct ktermios *cocci_id/* drivers/usb/serial/digi_acceleport.c 675 */;
	unsigned char cocci_id/* drivers/usb/serial/digi_acceleport.c 600 */[2];
	struct digi_port cocci_id/* drivers/usb/serial/digi_acceleport.c 370 */;
	struct work_struct *cocci_id/* drivers/usb/serial/digi_acceleport.c 367 */;
	spinlock_t *cocci_id/* drivers/usb/serial/digi_acceleport.c 346 */;
	unsigned long cocci_id/* drivers/usb/serial/digi_acceleport.c 346 */;
	wait_queue_head_t *cocci_id/* drivers/usb/serial/digi_acceleport.c 345 */;
	long cocci_id/* drivers/usb/serial/digi_acceleport.c 344 */;
	struct usb_serial_driver *const cocci_id/* drivers/usb/serial/digi_acceleport.c 325 */[];
	struct usb_serial_driver cocci_id/* drivers/usb/serial/digi_acceleport.c 264 */;
	const struct usb_device_id cocci_id/* drivers/usb/serial/digi_acceleport.c 250 */[];
	int cocci_id/* drivers/usb/serial/digi_acceleport.c 240 */(struct urb *urb);
	void cocci_id/* drivers/usb/serial/digi_acceleport.c 239 */(struct urb *urb);
	int cocci_id/* drivers/usb/serial/digi_acceleport.c 237 */(struct usb_serial_port *port);
	void cocci_id/* drivers/usb/serial/digi_acceleport.c 235 */(struct usb_serial *serial);
	int cocci_id/* drivers/usb/serial/digi_acceleport.c 234 */(struct usb_serial *serial);
	void cocci_id/* drivers/usb/serial/digi_acceleport.c 232 */(struct usb_serial_port *port,
								    int on);
	void cocci_id/* drivers/usb/serial/digi_acceleport.c 231 */(struct usb_serial_port *port);
	int cocci_id/* drivers/usb/serial/digi_acceleport.c 230 */(struct tty_struct *tty,
								   struct usb_serial_port *port);
	int cocci_id/* drivers/usb/serial/digi_acceleport.c 229 */(struct tty_struct *tty);
	int cocci_id/* drivers/usb/serial/digi_acceleport.c 225 */(struct tty_struct *tty,
								   struct usb_serial_port *port,
								   const unsigned char *buf,
								   int count);
	int cocci_id/* drivers/usb/serial/digi_acceleport.c 223 */(struct tty_struct *tty,
								   unsigned int set,
								   unsigned int clear);
	void cocci_id/* drivers/usb/serial/digi_acceleport.c 221 */(struct tty_struct *tty,
								    int break_state);
	void cocci_id/* drivers/usb/serial/digi_acceleport.c 219 */(struct tty_struct *tty,
								    struct usb_serial_port *port,
								    struct ktermios *old_termios);
	void cocci_id/* drivers/usb/serial/digi_acceleport.c 217 */(struct tty_struct *tty);
	int cocci_id/* drivers/usb/serial/digi_acceleport.c 215 */(struct usb_serial_port *port,
								   unsigned long timeout);
	int cocci_id/* drivers/usb/serial/digi_acceleport.c 213 */(struct usb_serial_port *port,
								   unsigned int modem_signals,
								   int interruptible);
	int cocci_id/* drivers/usb/serial/digi_acceleport.c 211 */(struct usb_serial_port *port,
								   unsigned char *buf,
								   int count,
								   unsigned long timeout);
	int cocci_id/* drivers/usb/serial/digi_acceleport.c 209 */(struct usb_serial_port *port,
								   unsigned char *buf,
								   int count,
								   int interruptible);
	void cocci_id/* drivers/usb/serial/digi_acceleport.c 208 */(struct work_struct *work);
	struct digi_port {
		spinlock_t dp_port_lock;
		int dp_port_num;
		int dp_out_buf_len;
		unsigned char dp_out_buf[DIGI_OUT_BUF_SIZE];
		int dp_write_urb_in_use;
		unsigned int dp_modem_signals;
		int dp_transmit_idle;
		wait_queue_head_t dp_transmit_idle_wait;
		int dp_throttled;
		int dp_throttle_restart;
		wait_queue_head_t dp_flush_wait;
		wait_queue_head_t dp_close_wait;
		struct work_struct dp_wakeup_work;
		struct usb_serial_port *dp_port;
	} cocci_id/* drivers/usb/serial/digi_acceleport.c 188 */;
	struct digi_serial {
		spinlock_t ds_serial_lock;
		struct usb_serial_port *ds_oob_port;
		int ds_oob_port_num;
		int ds_device_started;
	} cocci_id/* drivers/usb/serial/digi_acceleport.c 181 */;
	unsigned int cocci_id/* drivers/usb/serial/digi_acceleport.c 1480 */;
	unsigned char *cocci_id/* drivers/usb/serial/digi_acceleport.c 1383 */;
	struct digi_serial *cocci_id/* drivers/usb/serial/digi_acceleport.c 1322 */;
	struct urb *cocci_id/* drivers/usb/serial/digi_acceleport.c 1318 */;
	struct usb_serial *cocci_id/* drivers/usb/serial/digi_acceleport.c 1278 */;
	unsigned cocci_id/* drivers/usb/serial/digi_acceleport.c 1229 */;
	unsigned char cocci_id/* drivers/usb/serial/digi_acceleport.c 1130 */[32];
	struct ktermios cocci_id/* drivers/usb/serial/digi_acceleport.c 1094 */;
	struct digi_port *cocci_id/* drivers/usb/serial/digi_acceleport.c 1068 */;
	unsigned char cocci_id/* drivers/usb/serial/digi_acceleport.c 1019 */;
}
