cocci_test_suite() {
	void cocci_id/* drivers/usb/serial/ftdi_sio.c 99 */(struct ftdi_private *priv);
	int cocci_id/* drivers/usb/serial/ftdi_sio.c 97 */(struct usb_serial *serial);
	struct ftdi_sio_quirk {
		int (*probe)(struct usb_serial *);
		void (*port_probe)(struct ftdi_private *);
	} cocci_id/* drivers/usb/serial/ftdi_sio.c 88 */;
	struct ftdi_private {
		enum ftdi_chip_type chip_type;
		int baud_base;
		int custom_divisor;
		u16 last_set_data_value;
		int flags;
		unsigned long last_dtr_rts;
		char prev_status;
		char transmit_empty;
		u16 interface;
		speed_t force_baud;
		int force_rtscts;
		unsigned int latency;
		unsigned short max_packet_size;
		struct mutex cfg_lock;
#ifdef CONFIG_GPIOLIB
		struct gpio_chip gc;
		struct mutex gpio_lock;
		bool gpio_registered;
		bool gpio_used;
		u8 gpio_altfunc;
		u8 gpio_output;
		u8 gpio_value;
#endif
	} cocci_id/* drivers/usb/serial/ftdi_sio.c 51 */;
	void __user *cocci_id/* drivers/usb/serial/ftdi_sio.c 2906 */;
	unsigned long cocci_id/* drivers/usb/serial/ftdi_sio.c 2903 */;
	unsigned char cocci_id/* drivers/usb/serial/ftdi_sio.c 2811 */[2];
	struct ktermios *cocci_id/* drivers/usb/serial/ftdi_sio.c 2641 */;
	bool cocci_id/* drivers/usb/serial/ftdi_sio.c 2622 */;
	struct urb *cocci_id/* drivers/usb/serial/ftdi_sio.c 2574 */;
	char cocci_id/* drivers/usb/serial/ftdi_sio.c 2486 */;
	char *cocci_id/* drivers/usb/serial/ftdi_sio.c 2483 */;
	void *cocci_id/* drivers/usb/serial/ftdi_sio.c 2447 */;
	struct usb_serial *cocci_id/* drivers/usb/serial/ftdi_sio.c 2344 */;
	struct usb_interface *cocci_id/* drivers/usb/serial/ftdi_sio.c 2333 */;
	void cocci_id/* drivers/usb/serial/ftdi_sio.c 2284 */;
	struct ftdi_private cocci_id/* drivers/usb/serial/ftdi_sio.c 2243 */;
	const struct ftdi_sio_quirk *cocci_id/* drivers/usb/serial/ftdi_sio.c 2240 */;
	struct ftdi_sio_quirk *cocci_id/* drivers/usb/serial/ftdi_sio.c 2224 */;
	const struct usb_device_id *cocci_id/* drivers/usb/serial/ftdi_sio.c 2221 */;
	u8 cocci_id/* drivers/usb/serial/ftdi_sio.c 2113 */;
	const u16 cocci_id/* drivers/usb/serial/ftdi_sio.c 2109 */;
	__le16 *cocci_id/* drivers/usb/serial/ftdi_sio.c 2088 */;
	u8 *cocci_id/* drivers/usb/serial/ftdi_sio.c 2036 */;
	struct gpio_chip *cocci_id/* drivers/usb/serial/ftdi_sio.c 1953 */;
	unsigned long *cocci_id/* drivers/usb/serial/ftdi_sio.c 1923 */;
	unsigned int cocci_id/* drivers/usb/serial/ftdi_sio.c 1720 */;
	const char *cocci_id/* drivers/usb/serial/ftdi_sio.c 1715 */;
	struct device_attribute *cocci_id/* drivers/usb/serial/ftdi_sio.c 1715 */;
	size_t cocci_id/* drivers/usb/serial/ftdi_sio.c 1715 */;
	struct device *cocci_id/* drivers/usb/serial/ftdi_sio.c 1714 */;
	ssize_t cocci_id/* drivers/usb/serial/ftdi_sio.c 1714 */;
	struct usb_endpoint_descriptor *cocci_id/* drivers/usb/serial/ftdi_sio.c 1646 */;
	unsigned cocci_id/* drivers/usb/serial/ftdi_sio.c 1557 */;
	unsigned int __user *cocci_id/* drivers/usb/serial/ftdi_sio.c 1537 */;
	struct serial_struct *cocci_id/* drivers/usb/serial/ftdi_sio.c 1474 */;
	const struct usb_device_id cocci_id/* drivers/usb/serial/ftdi_sio.c 147 */[];
	unsigned char *cocci_id/* drivers/usb/serial/ftdi_sio.c 1429 */;
	struct usb_device *cocci_id/* drivers/usb/serial/ftdi_sio.c 1428 */;
	struct ftdi_private *cocci_id/* drivers/usb/serial/ftdi_sio.c 1427 */;
	struct usb_serial_port *cocci_id/* drivers/usb/serial/ftdi_sio.c 1425 */;
	int cocci_id/* drivers/usb/serial/ftdi_sio.c 1425 */;
	u32 cocci_id/* drivers/usb/serial/ftdi_sio.c 1377 */;
	u16 cocci_id/* drivers/usb/serial/ftdi_sio.c 1375 */;
	struct tty_struct *cocci_id/* drivers/usb/serial/ftdi_sio.c 1372 */;
	const struct ftdi_sio_quirk cocci_id/* drivers/usb/serial/ftdi_sio.c 121 */;
	const unsigned char cocci_id/* drivers/usb/serial/ftdi_sio.c 1188 */[8];
	unsigned short int cocci_id/* drivers/usb/serial/ftdi_sio.c 1140 */;
	struct usb_serial_driver *const cocci_id/* drivers/usb/serial/ftdi_sio.c 1126 */[];
	struct usb_serial_driver cocci_id/* drivers/usb/serial/ftdi_sio.c 1095 */;
	u32 cocci_id/* drivers/usb/serial/ftdi_sio.c 1093 */(int baud);
	u32 cocci_id/* drivers/usb/serial/ftdi_sio.c 1092 */(int baud,
							     int base);
	unsigned short int cocci_id/* drivers/usb/serial/ftdi_sio.c 1089 */(int baud);
	unsigned short int cocci_id/* drivers/usb/serial/ftdi_sio.c 1088 */(int baud,
									    int base);
	int cocci_id/* drivers/usb/serial/ftdi_sio.c 1085 */(struct usb_serial_port *port,
							     unsigned char status[2]);
	bool cocci_id/* drivers/usb/serial/ftdi_sio.c 1084 */(struct usb_serial_port *port);
	void cocci_id/* drivers/usb/serial/ftdi_sio.c 1083 */(struct tty_struct *tty,
							      int break_state);
	int cocci_id/* drivers/usb/serial/ftdi_sio.c 1079 */(struct tty_struct *tty,
							     struct serial_struct *ss);
	int cocci_id/* drivers/usb/serial/ftdi_sio.c 1077 */(struct tty_struct *tty,
							     unsigned int cmd,
							     unsigned long arg);
	int cocci_id/* drivers/usb/serial/ftdi_sio.c 1075 */(struct tty_struct *tty,
							     unsigned int set,
							     unsigned int clear);
	int cocci_id/* drivers/usb/serial/ftdi_sio.c 1074 */(struct tty_struct *tty);
	void cocci_id/* drivers/usb/serial/ftdi_sio.c 1072 */(struct tty_struct *tty,
							      struct usb_serial_port *port,
							      struct ktermios *old);
	int cocci_id/* drivers/usb/serial/ftdi_sio.c 1070 */(struct usb_serial_port *port,
							     void *dest,
							     size_t size);
	void cocci_id/* drivers/usb/serial/ftdi_sio.c 1069 */(struct urb *urb);
	void cocci_id/* drivers/usb/serial/ftdi_sio.c 1068 */(struct usb_serial_port *port,
							      int on);
	int cocci_id/* drivers/usb/serial/ftdi_sio.c 1067 */(struct tty_struct *tty,
							     struct usb_serial_port *port);
	int cocci_id/* drivers/usb/serial/ftdi_sio.c 1065 */(struct usb_serial_port *port);
	int cocci_id/* drivers/usb/serial/ftdi_sio.c 1063 */(struct usb_serial *serial,
							     const struct usb_device_id *id);
	const char *cocci_id/* drivers/usb/serial/ftdi_sio.c 1044 */[];
}
