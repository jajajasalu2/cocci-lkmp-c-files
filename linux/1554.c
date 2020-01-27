cocci_test_suite() {
	struct ti_uart_config *cocci_id/* drivers/usb/serial/ti_usb_3410_5052.c 905 */;
	struct ktermios *cocci_id/* drivers/usb/serial/ti_usb_3410_5052.c 902 */;
	bool cocci_id/* drivers/usb/serial/ti_usb_3410_5052.c 863 */;
	const unsigned char *cocci_id/* drivers/usb/serial/ti_usb_3410_5052.c 813 */;
	__u8 cocci_id/* drivers/usb/serial/ti_usb_3410_5052.c 796 */;
	struct ti_device *cocci_id/* drivers/usb/serial/ti_usb_3410_5052.c 775 */;
	u16 cocci_id/* drivers/usb/serial/ti_usb_3410_5052.c 650 */;
	struct ti_device cocci_id/* drivers/usb/serial/ti_usb_3410_5052.c 528 */;
	struct usb_host_interface *cocci_id/* drivers/usb/serial/ti_usb_3410_5052.c 517 */;
	struct usb_serial_driver *const cocci_id/* drivers/usb/serial/ti_usb_3410_5052.c 484 */[];
	struct usb_serial_driver cocci_id/* drivers/usb/serial/ti_usb_3410_5052.c 416 */;
	const struct usb_device_id cocci_id/* drivers/usb/serial/ti_usb_3410_5052.c 352 */[];
	int cocci_id/* drivers/usb/serial/ti_usb_3410_5052.c 350 */;
	int cocci_id/* drivers/usb/serial/ti_usb_3410_5052.c 348 */(struct ti_device *tdev);
	int cocci_id/* drivers/usb/serial/ti_usb_3410_5052.c 345 */(struct usb_serial_port *port,
								    struct ti_device *tdev,
								    unsigned long addr,
								    u8 mask,
								    u8 byte);
	int cocci_id/* drivers/usb/serial/ti_usb_3410_5052.c 342 */(struct ti_device *tdev,
								    __u8 command,
								    __u16 moduleid,
								    __u16 value,
								    __u8 *data,
								    int size);
	int cocci_id/* drivers/usb/serial/ti_usb_3410_5052.c 338 */(struct ti_port *tport,
								    struct tty_struct *tty);
	void cocci_id/* drivers/usb/serial/ti_usb_3410_5052.c 337 */(struct ti_port *tport,
								     struct tty_struct *tty);
	void cocci_id/* drivers/usb/serial/ti_usb_3410_5052.c 335 */(struct ti_port *tport,
								     u8 msr);
	int cocci_id/* drivers/usb/serial/ti_usb_3410_5052.c 331 */(struct tty_struct *tty,
								    struct serial_struct *ss);
	int cocci_id/* drivers/usb/serial/ti_usb_3410_5052.c 330 */(struct ti_port *tport,
								    u8 *lsr);
	int cocci_id/* drivers/usb/serial/ti_usb_3410_5052.c 329 */(struct ti_port *tport,
								    unsigned int mcr);
	void cocci_id/* drivers/usb/serial/ti_usb_3410_5052.c 328 */(struct ti_port *tport);
	void cocci_id/* drivers/usb/serial/ti_usb_3410_5052.c 326 */(struct usb_serial_port *port,
								     unsigned char *data,
								     int length);
	void cocci_id/* drivers/usb/serial/ti_usb_3410_5052.c 323 */(struct urb *urb);
	void cocci_id/* drivers/usb/serial/ti_usb_3410_5052.c 321 */(struct tty_struct *tty,
								     int break_state);
	int cocci_id/* drivers/usb/serial/ti_usb_3410_5052.c 319 */(struct tty_struct *tty,
								    unsigned int set,
								    unsigned int clear);
	void cocci_id/* drivers/usb/serial/ti_usb_3410_5052.c 316 */(struct tty_struct *tty,
								     struct usb_serial_port *port,
								     struct ktermios *old_termios);
	void cocci_id/* drivers/usb/serial/ti_usb_3410_5052.c 314 */(struct tty_struct *tty);
	bool cocci_id/* drivers/usb/serial/ti_usb_3410_5052.c 313 */(struct usb_serial_port *port);
	int cocci_id/* drivers/usb/serial/ti_usb_3410_5052.c 312 */(struct tty_struct *tty);
	int cocci_id/* drivers/usb/serial/ti_usb_3410_5052.c 309 */(struct tty_struct *tty,
								    struct usb_serial_port *port,
								    const unsigned char *data,
								    int count);
	void cocci_id/* drivers/usb/serial/ti_usb_3410_5052.c 308 */(struct usb_serial_port *port);
	int cocci_id/* drivers/usb/serial/ti_usb_3410_5052.c 307 */(struct tty_struct *tty,
								    struct usb_serial_port *port);
	int cocci_id/* drivers/usb/serial/ti_usb_3410_5052.c 305 */(struct usb_serial_port *port);
	void cocci_id/* drivers/usb/serial/ti_usb_3410_5052.c 304 */(struct usb_serial *serial);
	int cocci_id/* drivers/usb/serial/ti_usb_3410_5052.c 303 */(struct usb_serial *serial);
	struct ti_device {
		struct mutex td_open_close_lock;
		int td_open_port_count;
		struct usb_serial *td_serial;
		int td_is_3410;
		bool td_rs485_only;
	} cocci_id/* drivers/usb/serial/ti_usb_3410_5052.c 295 */;
	struct ti_port {
		int tp_is_open;
		u8 tp_msr;
		u8 tp_shadow_mcr;
		u8 tp_uart_mode;
		unsigned int tp_uart_base_addr;
		struct ti_device *tp_tdev;
		struct usb_serial_port *tp_port;
		spinlock_t tp_lock;
		int tp_read_urb_state;
		int tp_write_urb_in_use;
	} cocci_id/* drivers/usb/serial/ti_usb_3410_5052.c 282 */;
	struct ti_firmware_header {
		__le16 wLength;
		u8 bCheckSum;
	}__packed cocci_id/* drivers/usb/serial/ti_usb_3410_5052.c 255 */;
	struct ti_interrupt {
		__u8 bICode;
		__u8 bIInfo;
	}__packed cocci_id/* drivers/usb/serial/ti_usb_3410_5052.c 241 */;
	struct ti_read_data_bytes {
		__u8 bCmdCode;
		__u8 bModuleId;
		__u8 bErrorCode;
		__u8 bData[0];
	}__packed cocci_id/* drivers/usb/serial/ti_usb_3410_5052.c 233 */;
	struct ti_read_data_request {
		__u8 bAddrType;
		__u8 bDataType;
		__u8 bDataCounter;
		__be16 wBaseAddrHi;
		__be16 wBaseAddrLo;
	}__packed cocci_id/* drivers/usb/serial/ti_usb_3410_5052.c 225 */;
	struct ti_write_data_bytes {
		u8 bAddrType;
		u8 bDataType;
		u8 bDataCounter;
		__be16 wBaseAddrHi;
		__be16 wBaseAddrLo;
		u8 bData[0];
	}__packed cocci_id/* drivers/usb/serial/ti_usb_3410_5052.c 216 */;
	struct ti_port_status {
		u8 bCmdCode;
		u8 bModuleId;
		u8 bErrorCode;
		u8 bMSR;
		u8 bLSR;
	}__packed cocci_id/* drivers/usb/serial/ti_usb_3410_5052.c 189 */;
	struct ti_uart_config {
		__be16 wBaudRate;
		__be16 wFlags;
		u8 bDataBits;
		u8 bParity;
		u8 bStopBits;
		char cXon;
		char cXoff;
		u8 bUartMode;
	}__packed cocci_id/* drivers/usb/serial/ti_usb_3410_5052.c 177 */;
	char cocci_id/* drivers/usb/serial/ti_usb_3410_5052.c 1615 */[32];
	const struct firmware *cocci_id/* drivers/usb/serial/ti_usb_3410_5052.c 1614 */;
	unsigned int cocci_id/* drivers/usb/serial/ti_usb_3410_5052.c 1612 */;
	struct ti_firmware_header cocci_id/* drivers/usb/serial/ti_usb_3410_5052.c 1588 */;
	struct ti_firmware_header *cocci_id/* drivers/usb/serial/ti_usb_3410_5052.c 1584 */;
	u8 cocci_id/* drivers/usb/serial/ti_usb_3410_5052.c 1582 */;
	u8 *cocci_id/* drivers/usb/serial/ti_usb_3410_5052.c 1579 */;
	struct usb_device *cocci_id/* drivers/usb/serial/ti_usb_3410_5052.c 1578 */;
	struct ti_write_data_bytes cocci_id/* drivers/usb/serial/ti_usb_3410_5052.c 1554 */;
	struct ti_write_data_bytes *cocci_id/* drivers/usb/serial/ti_usb_3410_5052.c 1549 */;
	__u16 cocci_id/* drivers/usb/serial/ti_usb_3410_5052.c 1525 */;
	__u8 *cocci_id/* drivers/usb/serial/ti_usb_3410_5052.c 1525 */;
	struct async_icount *cocci_id/* drivers/usb/serial/ti_usb_3410_5052.c 1438 */;
	unsigned cocci_id/* drivers/usb/serial/ti_usb_3410_5052.c 1403 */;
	struct serial_struct *cocci_id/* drivers/usb/serial/ti_usb_3410_5052.c 1399 */;
	struct ti_port_status cocci_id/* drivers/usb/serial/ti_usb_3410_5052.c 1374 */;
	struct ti_port_status *cocci_id/* drivers/usb/serial/ti_usb_3410_5052.c 1372 */;
	unsigned long cocci_id/* drivers/usb/serial/ti_usb_3410_5052.c 1196 */;
	struct device *cocci_id/* drivers/usb/serial/ti_usb_3410_5052.c 1194 */;
	struct urb *cocci_id/* drivers/usb/serial/ti_usb_3410_5052.c 1190 */;
	unsigned char *cocci_id/* drivers/usb/serial/ti_usb_3410_5052.c 1115 */;
	struct usb_serial *cocci_id/* drivers/usb/serial/ti_usb_3410_5052.c 1112 */;
	unsigned char cocci_id/* drivers/usb/serial/ti_usb_3410_5052.c 1103 */;
	struct ti_port *cocci_id/* drivers/usb/serial/ti_usb_3410_5052.c 1085 */;
	struct usb_serial_port *cocci_id/* drivers/usb/serial/ti_usb_3410_5052.c 1084 */;
	struct tty_struct *cocci_id/* drivers/usb/serial/ti_usb_3410_5052.c 1082 */;
	void cocci_id/* drivers/usb/serial/ti_usb_3410_5052.c 1082 */;
}
