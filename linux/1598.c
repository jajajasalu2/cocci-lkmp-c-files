cocci_test_suite() {
	struct keyspan_usa28_portStatusMessage *cocci_id/* drivers/usb/serial/keyspan.c 996 */;
	struct keyspan_usa26_portStatusMessage *cocci_id/* drivers/usb/serial/keyspan.c 877 */;
	int cocci_id/* drivers/usb/serial/keyspan.c 86 */(struct usb_serial *serial,
							  struct usb_serial_port *port,
							  int reset_port);
	const unsigned char *cocci_id/* drivers/usb/serial/keyspan.c 711 */;
	int cocci_id/* drivers/usb/serial/keyspan.c 66 */(struct usb_serial_port *port,
							  u32 baud_rate,
							  u32 baudclk,
							  u8 *rate_hi,
							  u8 *rate_low,
							  u8 *prescaler,
							  int portnum);
	int cocci_id/* drivers/usb/serial/keyspan.c 64 */(struct usb_serial *serial);
	struct ktermios *cocci_id/* drivers/usb/serial/keyspan.c 639 */;
	struct keyspan_port_private *cocci_id/* drivers/usb/serial/keyspan.c 625 */;
	struct usb_serial_port *cocci_id/* drivers/usb/serial/keyspan.c 624 */;
	struct tty_struct *cocci_id/* drivers/usb/serial/keyspan.c 622 */;
	void cocci_id/* drivers/usb/serial/keyspan.c 622 */;
	int cocci_id/* drivers/usb/serial/keyspan.c 62 */(struct tty_struct *tty,
							  unsigned int set,
							  unsigned int clear);
	int cocci_id/* drivers/usb/serial/keyspan.c 61 */(struct tty_struct *tty);
	void cocci_id/* drivers/usb/serial/keyspan.c 60 */(struct tty_struct *tty,
							   int break_state);
	void cocci_id/* drivers/usb/serial/keyspan.c 57 */(struct tty_struct *tty,
							   struct usb_serial_port *port,
							   struct ktermios *old);
	struct keyspan_port_private {
		int in_flip;
		int out_flip;
		const struct keyspan_device_details *device_details;
		struct urb *in_urbs[2];
		char *in_buffer[2];
		struct urb *out_urbs[2];
		char *out_buffer[2];
		struct urb *inack_urb;
		char *inack_buffer;
		struct urb *outcont_urb;
		char *outcont_buffer;
		int baud;
		int old_baud;
		unsigned int cflag;
		unsigned int old_cflag;
		enum{flow_none, flow_cts, flow_xon,} flow_control;
		int rts_state;
		int dtr_state;
		int cts_state;
		int dsr_state;
		int dcd_state;
		int ri_state;
		int break_on;
		unsigned long tx_start_time[2];
		int resend_cont;
	} cocci_id/* drivers/usb/serial/keyspan.c 568 */;
	void cocci_id/* drivers/usb/serial/keyspan.c 56 */(struct usb_serial_port *port,
							   int reset_port);
	struct keyspan_serial_private {
		const struct keyspan_device_details *device_details;
		struct urb *instat_urb;
		char *instat_buf;
		struct urb *indat_urb;
		char *indat_buf;
		struct urb *glocont_urb;
		char *glocont_buf;
		char *ctrl_buf;
	} cocci_id/* drivers/usb/serial/keyspan.c 551 */;
	int cocci_id/* drivers/usb/serial/keyspan.c 54 */(struct tty_struct *tty,
							  struct usb_serial_port *port,
							  const unsigned char *buf,
							  int count);
	const struct usb_device_id cocci_id/* drivers/usb/serial/keyspan.c 516 */[];
	int cocci_id/* drivers/usb/serial/keyspan.c 51 */(struct usb_serial_port *port);
	void cocci_id/* drivers/usb/serial/keyspan.c 49 */(struct usb_serial *serial);
	void cocci_id/* drivers/usb/serial/keyspan.c 47 */(struct usb_serial_port *port,
							   int on);
	void cocci_id/* drivers/usb/serial/keyspan.c 46 */(struct usb_serial_port *port);
	int cocci_id/* drivers/usb/serial/keyspan.c 45 */(struct tty_struct *tty,
							  struct usb_serial_port *port);
	const struct keyspan_device_details *cocci_id/* drivers/usb/serial/keyspan.c 448 */[];
	struct usb_serial_driver *const cocci_id/* drivers/usb/serial/keyspan.c 3101 */[];
	struct usb_serial_driver cocci_id/* drivers/usb/serial/keyspan.c 3029 */;
	struct callbacks *cocci_id/* drivers/usb/serial/keyspan.c 2894 */;
	struct keyspan_serial_private *cocci_id/* drivers/usb/serial/keyspan.c 2857 */;
	struct usb_serial *cocci_id/* drivers/usb/serial/keyspan.c 2855 */;
	struct usb_ctrlrequest cocci_id/* drivers/usb/serial/keyspan.c 2821 */;
	struct keyspan_serial_private cocci_id/* drivers/usb/serial/keyspan.c 2805 */;
	struct keyspan_usa67_portControlMessage cocci_id/* drivers/usb/serial/keyspan.c 2618 */;
	const struct keyspan_device_details cocci_id/* drivers/usb/serial/keyspan.c 257 */;
	struct keyspan_usa90_portControlMessage cocci_id/* drivers/usb/serial/keyspan.c 2488 */;
	unsigned char *cocci_id/* drivers/usb/serial/keyspan.c 2468 */;
	struct usb_ctrlrequest *cocci_id/* drivers/usb/serial/keyspan.c 2312 */;
	struct keyspan_usa49_portControlMessage cocci_id/* drivers/usb/serial/keyspan.c 2311 */;
	struct keyspan_usa28_portControlMessage cocci_id/* drivers/usb/serial/keyspan.c 2192 */;
	struct keyspan_usa26_portControlMessage cocci_id/* drivers/usb/serial/keyspan.c 2045 */;
	u8 cocci_id/* drivers/usb/serial/keyspan.c 1886 */;
	u32 cocci_id/* drivers/usb/serial/keyspan.c 1856 */;
	u8 *cocci_id/* drivers/usb/serial/keyspan.c 1856 */;
	struct callbacks {
		void (*instat_callback)(struct urb *);
		void (*glocont_callback)(struct urb *);
		void (*indat_callback)(struct urb *);
		void (*outdat_callback)(struct urb *);
		void (*inack_callback)(struct urb *);
		void (*outcont_callback)(struct urb *);
	} cocci_id/* drivers/usb/serial/keyspan.c 1771 */[];
	const char *cocci_id/* drivers/usb/serial/keyspan.c 1726 */;
	void (*cocci_id/* drivers/usb/serial/keyspan.c 1722 */)(struct urb *);
	void *cocci_id/* drivers/usb/serial/keyspan.c 1721 */;
	struct usb_endpoint_descriptor *cocci_id/* drivers/usb/serial/keyspan.c 1706 */;
	struct usb_host_interface *cocci_id/* drivers/usb/serial/keyspan.c 1705 */;
	int cocci_id/* drivers/usb/serial/keyspan.c 1703 */;
	const struct usb_serial *cocci_id/* drivers/usb/serial/keyspan.c 1702 */;
	const struct usb_endpoint_descriptor *cocci_id/* drivers/usb/serial/keyspan.c 1702 */;
	char *cocci_id/* drivers/usb/serial/keyspan.c 1618 */;
	struct keyspan_device_details {
		int product_id;
		enum{msg_usa26, msg_usa28, msg_usa49, msg_usa90, msg_usa67,} msg_format;
		int num_ports;
		int indat_endp_flip;
		int outdat_endp_flip;
		int indat_endpoints[KEYSPAN_MAX_NUM_PORTS];
		int outdat_endpoints[KEYSPAN_MAX_NUM_PORTS];
		int inack_endpoints[KEYSPAN_MAX_NUM_PORTS];
		int outcont_endpoints[KEYSPAN_MAX_NUM_PORTS];
		int instat_endpoint;
		int indat_endpoint;
		int glocont_endpoint;
		int (*calculate_baud_rate)(struct usb_serial_port *port,
					   u32 baud_rate, u32 baudclk,
					   u8 *rate_hi, u8 *rate_low,
					   u8 *prescaler, int portnum);
		u32 baudclk;
	} cocci_id/* drivers/usb/serial/keyspan.c 155 */;
	unsigned int cocci_id/* drivers/usb/serial/keyspan.c 1515 */;
	struct urb *cocci_id/* drivers/usb/serial/keyspan.c 1514 */;
	const struct keyspan_device_details *cocci_id/* drivers/usb/serial/keyspan.c 1511 */;
	struct keyspan_usa67_portStatusMessage cocci_id/* drivers/usb/serial/keyspan.c 1417 */;
	struct keyspan_usa67_portStatusMessage *cocci_id/* drivers/usb/serial/keyspan.c 1401 */;
	struct keyspan_usa90_portStatusMessage *cocci_id/* drivers/usb/serial/keyspan.c 1335 */;
	struct keyspan_usa49_portStatusMessage cocci_id/* drivers/usb/serial/keyspan.c 1093 */;
	struct keyspan_usa49_portStatusMessage *cocci_id/* drivers/usb/serial/keyspan.c 1077 */;
	struct keyspan_usa28_portStatusMessage cocci_id/* drivers/usb/serial/keyspan.c 1011 */;
}
