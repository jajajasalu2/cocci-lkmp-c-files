cocci_test_suite() {
	struct omninet_data {
		__u8 od_outseq;
	} cocci_id/* drivers/usb/serial/omninet.c 97 */;
	struct omninet_header {
		__u8 oh_seq;
		__u8 oh_len;
		__u8 oh_xxx;
		__u8 oh_pad;
	} cocci_id/* drivers/usb/serial/omninet.c 90 */;
	struct usb_serial_driver *const cocci_id/* drivers/usb/serial/omninet.c 63 */[];
	struct usb_serial_driver cocci_id/* drivers/usb/serial/omninet.c 48 */;
	const struct usb_device_id cocci_id/* drivers/usb/serial/omninet.c 41 */[];
	int cocci_id/* drivers/usb/serial/omninet.c 38 */(struct usb_serial_port *port);
	int cocci_id/* drivers/usb/serial/omninet.c 36 */(struct usb_serial *serial,
							  struct usb_serial_endpoints *epds);
	int cocci_id/* drivers/usb/serial/omninet.c 34 */(struct usb_serial_port *port,
							  void *buf,
							  size_t count);
	void cocci_id/* drivers/usb/serial/omninet.c 33 */(struct urb *urb);
	struct omninet_header *cocci_id/* drivers/usb/serial/omninet.c 159 */;
	void *cocci_id/* drivers/usb/serial/omninet.c 156 */;
	size_t cocci_id/* drivers/usb/serial/omninet.c 156 */;
	char *cocci_id/* drivers/usb/serial/omninet.c 148 */;
	const unsigned char *cocci_id/* drivers/usb/serial/omninet.c 142 */;
	const struct omninet_header *cocci_id/* drivers/usb/serial/omninet.c 141 */;
	struct urb *cocci_id/* drivers/usb/serial/omninet.c 138 */;
	void cocci_id/* drivers/usb/serial/omninet.c 138 */;
	struct omninet_data *cocci_id/* drivers/usb/serial/omninet.c 113 */;
	struct usb_serial_port *cocci_id/* drivers/usb/serial/omninet.c 111 */;
	struct usb_serial_endpoints *cocci_id/* drivers/usb/serial/omninet.c 102 */;
	struct usb_serial *cocci_id/* drivers/usb/serial/omninet.c 101 */;
	int cocci_id/* drivers/usb/serial/omninet.c 101 */;
}
