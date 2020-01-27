cocci_test_suite() {
	struct usb_serial *cocci_id/* drivers/usb/serial/garmin_gps.c 978 */;
	__u8 *cocci_id/* drivers/usb/serial/garmin_gps.c 959 */;
	struct usb_serial_port *cocci_id/* drivers/usb/serial/garmin_gps.c 927 */;
	void cocci_id/* drivers/usb/serial/garmin_gps.c 927 */;
	struct tty_struct *cocci_id/* drivers/usb/serial/garmin_gps.c 904 */;
	unsigned long cocci_id/* drivers/usb/serial/garmin_gps.c 850 */;
	struct garmin_data *cocci_id/* drivers/usb/serial/garmin_gps.c 848 */;
	int cocci_id/* drivers/usb/serial/garmin_gps.c 848 */;
	__u8 cocci_id/* drivers/usb/serial/garmin_gps.c 474 */;
	__u8 cocci_id/* drivers/usb/serial/garmin_gps.c 335 */[10];
	struct garmin_packet cocci_id/* drivers/usb/serial/garmin_gps.c 267 */;
	unsigned int cocci_id/* drivers/usb/serial/garmin_gps.c 258 */;
	char *cocci_id/* drivers/usb/serial/garmin_gps.c 240 */;
	const __u8 *cocci_id/* drivers/usb/serial/garmin_gps.c 216 */;
	const struct usb_device_id cocci_id/* drivers/usb/serial/garmin_gps.c 197 */[];
	const unsigned char cocci_id/* drivers/usb/serial/garmin_gps.c 182 */[];
	int cocci_id/* drivers/usb/serial/garmin_gps.c 171 */(struct usb_serial_port *port,
							      const unsigned char *buf,
							      int count,
							      int dismiss_ack);
	int cocci_id/* drivers/usb/serial/garmin_gps.c 170 */(struct garmin_data *garmin_data_p);
	struct usb_serial_driver *const cocci_id/* drivers/usb/serial/garmin_gps.c 1435 */[];
	struct usb_serial_driver cocci_id/* drivers/usb/serial/garmin_gps.c 1414 */;
	struct garmin_data cocci_id/* drivers/usb/serial/garmin_gps.c 1375 */;
	struct timer_list *cocci_id/* drivers/usb/serial/garmin_gps.c 1358 */;
	struct garmin_packet *cocci_id/* drivers/usb/serial/garmin_gps.c 1297 */;
	__le32 *cocci_id/* drivers/usb/serial/garmin_gps.c 1273 */;
	unsigned char *cocci_id/* drivers/usb/serial/garmin_gps.c 1165 */;
	struct urb *cocci_id/* drivers/usb/serial/garmin_gps.c 1160 */;
	unsigned cocci_id/* drivers/usb/serial/garmin_gps.c 1125 */;
	struct garmin_data {
		__u8 state;
		__u16 flags;
		__u8 mode;
		__u8 count;
		__u8 pkt_id;
		__u32 serial_num;
		struct timer_list timer;
		struct usb_serial_port *port;
		int seq_counter;
		int insize;
		int outsize;
		__u8 inbuffer[GPS_IN_BUFSIZ];
		__u8 outbuffer[GPS_OUT_BUFSIZ];
		__u8 privpkt[4 * 6];
		spinlock_t lock;
		struct list_head pktlist;
		struct usb_anchor write_urbs;
	} cocci_id/* drivers/usb/serial/garmin_gps.c 111 */;
	struct device *cocci_id/* drivers/usb/serial/garmin_gps.c 1044 */;
	const unsigned char *cocci_id/* drivers/usb/serial/garmin_gps.c 1042 */;
	struct garmin_packet {
		struct list_head list;
		int seq;
		int size;
		__u8 data[1];
	} cocci_id/* drivers/usb/serial/garmin_gps.c 102 */;
}
