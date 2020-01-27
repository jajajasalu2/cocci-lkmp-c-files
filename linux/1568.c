cocci_test_suite() {
	unsigned char *cocci_id/* drivers/usb/serial/oti6858.c 769 */;
	struct urb *cocci_id/* drivers/usb/serial/oti6858.c 765 */;
	struct oti6858_control_pkt {
		__le16 divisor;
#define OTI6858_MAX_BAUD_RATE 3000000
		u8 frame_fmt;
#define FMT_STOP_BITS_MASK 0xc0
#define FMT_STOP_BITS_1 0x00
#define FMT_STOP_BITS_2 0x40
#define FMT_PARITY_MASK 0x38
#define FMT_PARITY_NONE 0x00
#define FMT_PARITY_ODD 0x08
#define FMT_PARITY_EVEN 0x18
#define FMT_PARITY_MARK 0x28
#define FMT_PARITY_SPACE 0x38
#define FMT_DATA_BITS_MASK 0x03
#define FMT_DATA_BITS_5 0x00
#define FMT_DATA_BITS_6 0x01
#define FMT_DATA_BITS_7 0x02
#define FMT_DATA_BITS_8 0x03
		u8 something;
		u8 control;
#define CONTROL_MASK 0x0c
#define CONTROL_DTR_HIGH 0x08
#define CONTROL_RTS_HIGH 0x04
		u8 tx_status;
#define TX_BUFFER_EMPTIED 0x09
		u8 pin_state;
#define PIN_MASK 0x3f
#define PIN_MSR_MASK 0x1b
#define PIN_RTS 0x20
#define PIN_CTS 0x10
#define PIN_DSR 0x08
#define PIN_DTR 0x04
#define PIN_RI 0x02
#define PIN_DCD 0x01
		u8 rx_bytes_avail;
		;
	} cocci_id/* drivers/usb/serial/oti6858.c 75 */;
	u8 cocci_id/* drivers/usb/serial/oti6858.c 698 */;
	unsigned cocci_id/* drivers/usb/serial/oti6858.c 615 */;
	const struct usb_device_id cocci_id/* drivers/usb/serial/oti6858.c 57 */[];
	struct oti6858_private *cocci_id/* drivers/usb/serial/oti6858.c 559 */;
	void cocci_id/* drivers/usb/serial/oti6858.c 557 */;
	struct oti6858_control_pkt *cocci_id/* drivers/usb/serial/oti6858.c 505 */;
	struct usb_serial *cocci_id/* drivers/usb/serial/oti6858.c 504 */;
	__le16 cocci_id/* drivers/usb/serial/oti6858.c 406 */;
	unsigned int cocci_id/* drivers/usb/serial/oti6858.c 404 */;
	struct ktermios *cocci_id/* drivers/usb/serial/oti6858.c 400 */;
	unsigned long cocci_id/* drivers/usb/serial/oti6858.c 385 */;
	struct usb_serial_port *cocci_id/* drivers/usb/serial/oti6858.c 383 */;
	struct tty_struct *cocci_id/* drivers/usb/serial/oti6858.c 381 */;
	int cocci_id/* drivers/usb/serial/oti6858.c 381 */;
	const unsigned char *cocci_id/* drivers/usb/serial/oti6858.c 358 */;
	u8 *cocci_id/* drivers/usb/serial/oti6858.c 267 */;
	struct oti6858_private cocci_id/* drivers/usb/serial/oti6858.c 263 */;
	struct work_struct *cocci_id/* drivers/usb/serial/oti6858.c 260 */;
	struct oti6858_private {
		spinlock_t lock;
		struct oti6858_control_pkt status;
		struct {
			u8 read_urb_in_use;
			u8 write_urb_in_use;
		} flags;
		struct delayed_work delayed_write_work;
		struct {
			__le16 divisor;
			u8 frame_fmt;
			u8 control;
		} pending_setup;
		u8 transient;
		u8 setup_done;
		struct delayed_work delayed_setup_work;
		struct usb_serial_port *port;
	} cocci_id/* drivers/usb/serial/oti6858.c 169 */;
	struct usb_serial_driver *constcocci_id/* drivers/usb/serial/oti6858.c 165 */[];
	struct usb_serial_driver cocci_id/* drivers/usb/serial/oti6858.c 138 */;
	int cocci_id/* drivers/usb/serial/oti6858.c 134 */(struct usb_serial_port *port);
	int cocci_id/* drivers/usb/serial/oti6858.c 132 */(struct tty_struct *tty, unsigned int set, unsigned int clear);
	int cocci_id/* drivers/usb/serial/oti6858.c 130 */(struct tty_struct *tty);
	int cocci_id/* drivers/usb/serial/oti6858.c 127 */(struct tty_struct *tty, struct usb_serial_port *port, const unsigned char *buf, int count);
	void cocci_id/* drivers/usb/serial/oti6858.c 125 */(struct urb *urb);
	void cocci_id/* drivers/usb/serial/oti6858.c 123 */(struct tty_struct *tty);
	void cocci_id/* drivers/usb/serial/oti6858.c 121 */(struct tty_struct *tty, struct usb_serial_port *port, struct ktermios *old);
	void cocci_id/* drivers/usb/serial/oti6858.c 120 */(struct usb_serial_port *port);
	int cocci_id/* drivers/usb/serial/oti6858.c 119 */(struct tty_struct *tty, struct usb_serial_port *port);
	struct oti6858_control_pkt cocci_id/* drivers/usb/serial/oti6858.c 112 */;
}
