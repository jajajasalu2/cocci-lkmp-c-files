cocci_test_suite() {
	const struct usb_device_id cocci_id/* drivers/usb/serial/io_edgeport.c 89 */[];
	unsigned long cocci_id/* drivers/usb/serial/io_edgeport.c 765 */;
	unsigned char *cocci_id/* drivers/usb/serial/io_edgeport.c 761 */;
	struct urb *cocci_id/* drivers/usb/serial/io_edgeport.c 757 */;
	struct edgeport_product_info cocci_id/* drivers/usb/serial/io_edgeport.c 589 */;
	struct edge_compatibility_bits *cocci_id/* drivers/usb/serial/io_edgeport.c 572 */;
	struct edge_compatibility_descriptor *cocci_id/* drivers/usb/serial/io_edgeport.c 571 */;
	struct edgeport_product_info *cocci_id/* drivers/usb/serial/io_edgeport.c 469 */;
	void cocci_id/* drivers/usb/serial/io_edgeport.c 334 */(char *string,
								int buflen,
								__le16 *unicode,
								int unicode_size);
	void cocci_id/* drivers/usb/serial/io_edgeport.c 331 */(struct edgeport_serial *edge_serial);
	int cocci_id/* drivers/usb/serial/io_edgeport.c 328 */(struct usb_serial *serial,
							       __u16 extAddr,
							       __u16 addr,
							       __u16 length,
							       const __u8 *data);
	int cocci_id/* drivers/usb/serial/io_edgeport.c 326 */(struct usb_serial *serial,
							       __u16 extAddr,
							       __u16 addr,
							       __u16 length,
							       __u8 *data);
	struct usb_serial_driver *constcocci_id/* drivers/usb/serial/io_edgeport.c 3233 */[];
	void cocci_id/* drivers/usb/serial/io_edgeport.c 321 */(struct edgeport_serial *edge_serial,
								struct edgeport_port *edge_port);
	int cocci_id/* drivers/usb/serial/io_edgeport.c 319 */(struct edgeport_port *edge_port,
							       unsigned char *buffer,
							       int writeLength);
	int cocci_id/* drivers/usb/serial/io_edgeport.c 317 */(struct edgeport_port *edge_port,
							       __u8 regNum,
							       __u8 regValue);
	void cocci_id/* drivers/usb/serial/io_edgeport.c 314 */(struct tty_struct *tty,
								struct edgeport_port *edge_port,
								struct ktermios *old_termios);
	int cocci_id/* drivers/usb/serial/io_edgeport.c 312 */(struct edgeport_port *edge_port,
							       int baudRate);
	int cocci_id/* drivers/usb/serial/io_edgeport.c 311 */(struct device *dev,
							       int baud_rate,
							       int *divisor);
	int cocci_id/* drivers/usb/serial/io_edgeport.c 309 */(struct edgeport_port *edge_port,
							       __u8 command,
							       __u8 param);
	struct usb_serial_driver cocci_id/* drivers/usb/serial/io_edgeport.c 3089 */;
	void cocci_id/* drivers/usb/serial/io_edgeport.c 307 */(struct edgeport_port *edge_port,
								__u8 lsrData,
								__u8 lsr,
								__u8 data);
	void cocci_id/* drivers/usb/serial/io_edgeport.c 306 */(struct edgeport_port *edge_port,
								__u8 newMsr);
	void cocci_id/* drivers/usb/serial/io_edgeport.c 304 */(struct usb_serial_port *port,
								unsigned char *data,
								int length);
	struct usb_serial *cocci_id/* drivers/usb/serial/io_edgeport.c 3031 */;
	void cocci_id/* drivers/usb/serial/io_edgeport.c 302 */(struct edgeport_serial *edge_serial,
								__u8 byte2,
								__u8 byte3);
	void cocci_id/* drivers/usb/serial/io_edgeport.c 300 */(struct edgeport_serial *edge_serial,
								unsigned char *buffer,
								__u16 bufferLength);
	int cocci_id/* drivers/usb/serial/io_edgeport.c 295 */(struct usb_serial_port *port);
	void cocci_id/* drivers/usb/serial/io_edgeport.c 293 */(struct usb_serial *serial);
	int cocci_id/* drivers/usb/serial/io_edgeport.c 292 */(struct usb_serial *serial);
	struct usb_endpoint_descriptor *cocci_id/* drivers/usb/serial/io_edgeport.c 2912 */;
	struct usb_host_interface *cocci_id/* drivers/usb/serial/io_edgeport.c 2904 */;
	int cocci_id/* drivers/usb/serial/io_edgeport.c 290 */(struct tty_struct *tty,
							       unsigned int set,
							       unsigned int clear);
	void cocci_id/* drivers/usb/serial/io_edgeport.c 288 */(struct tty_struct *tty,
								int break_state);
	int cocci_id/* drivers/usb/serial/io_edgeport.c 286 */(struct tty_struct *tty,
							       unsigned int cmd,
							       unsigned long arg);
	struct edge_compatibility_bits cocci_id/* drivers/usb/serial/io_edgeport.c 2854 */;
	struct edgeport_serial cocci_id/* drivers/usb/serial/io_edgeport.c 2831 */;
	void cocci_id/* drivers/usb/serial/io_edgeport.c 283 */(struct tty_struct *tty,
								struct usb_serial_port *port,
								struct ktermios *old_termios);
	const __u32 cocci_id/* drivers/usb/serial/io_edgeport.c 2824 */[3];
	bool cocci_id/* drivers/usb/serial/io_edgeport.c 2821 */;
	struct usb_device *cocci_id/* drivers/usb/serial/io_edgeport.c 2817 */;
	void cocci_id/* drivers/usb/serial/io_edgeport.c 281 */(struct tty_struct *tty);
	int cocci_id/* drivers/usb/serial/io_edgeport.c 280 */(struct tty_struct *tty);
	int cocci_id/* drivers/usb/serial/io_edgeport.c 277 */(struct tty_struct *tty,
							       struct usb_serial_port *port,
							       const unsigned char *buf,
							       int count);
	void cocci_id/* drivers/usb/serial/io_edgeport.c 276 */(struct usb_serial_port *port);
	int cocci_id/* drivers/usb/serial/io_edgeport.c 275 */(struct tty_struct *tty,
							       struct usb_serial_port *port);
	const char *cocci_id/* drivers/usb/serial/io_edgeport.c 2742 */;
	const struct firmware *cocci_id/* drivers/usb/serial/io_edgeport.c 2741 */;
	const struct ihex_binrec *cocci_id/* drivers/usb/serial/io_edgeport.c 2740 */;
	__u8 *cocci_id/* drivers/usb/serial/io_edgeport.c 2708 */;
	void cocci_id/* drivers/usb/serial/io_edgeport.c 270 */(struct urb *urb);
	char cocci_id/* drivers/usb/serial/io_edgeport.c 2654 */[30];
	atomic_t cocci_id/* drivers/usb/serial/io_edgeport.c 263 */;
	char cocci_id/* drivers/usb/serial/io_edgeport.c 2626 */;
	__le16 *cocci_id/* drivers/usb/serial/io_edgeport.c 2615 */;
	char *cocci_id/* drivers/usb/serial/io_edgeport.c 2614 */;
	unsigned char cocci_id/* drivers/usb/serial/io_edgeport.c 2530 */;
	__u8 cocci_id/* drivers/usb/serial/io_edgeport.c 2452 */;
	unsigned cocci_id/* drivers/usb/serial/io_edgeport.c 2451 */;
	struct edgeport_serial *cocci_id/* drivers/usb/serial/io_edgeport.c 2448 */;
	struct ktermios *cocci_id/* drivers/usb/serial/io_edgeport.c 2445 */;
	struct tty_struct *cocci_id/* drivers/usb/serial/io_edgeport.c 2444 */;
	const struct divisor_table_entry cocci_id/* drivers/usb/serial/io_edgeport.c 240 */[];
	int *cocci_id/* drivers/usb/serial/io_edgeport.c 2356 */;
	u32 cocci_id/* drivers/usb/serial/io_edgeport.c 2306 */;
	struct divisor_table_entry {
		__u32 BaudRate;
		__u16 Divisor;
	} cocci_id/* drivers/usb/serial/io_edgeport.c 229 */;
	const __u8 *cocci_id/* drivers/usb/serial/io_edgeport.c 2123 */;
	struct async_icount *cocci_id/* drivers/usb/serial/io_edgeport.c 2038 */;
	struct edgeport_serial {
		char name[MAX_NAME_LEN + 2];
		struct edge_manuf_descriptor manuf_descriptor;
		struct edge_boot_descriptor boot_descriptor;
		struct edgeport_product_info product_info;
		struct edge_compatibility_descriptor epic_descriptor;
		int is_epic;
		__u8 interrupt_in_endpoint;
		unsigned char *interrupt_in_buffer;
		struct urb *interrupt_read_urb;
		__u8 bulk_in_endpoint;
		unsigned char *bulk_in_buffer;
		struct urb *read_urb;
		bool read_in_progress;
		spinlock_t es_lock;
		__u8 bulk_out_endpoint;
		__s16 rxBytesAvail;
		enum RXSTATE rxState;
		__u8 rxHeader1;
		__u8 rxHeader2;
		__u8 rxHeader3;
		__u8 rxPort;
		__u8 rxStatusCode;
		__u8 rxStatusParam;
		__s16 rxBytesRemaining;
		struct usb_serial *serial;
	} cocci_id/* drivers/usb/serial/io_edgeport.c 194 */;
	struct usb_serial_port *cocci_id/* drivers/usb/serial/io_edgeport.c 1683 */;
	unsigned int __user *cocci_id/* drivers/usb/serial/io_edgeport.c 1671 */;
	unsigned int cocci_id/* drivers/usb/serial/io_edgeport.c 1663 */;
	struct serial_struct *cocci_id/* drivers/usb/serial/io_edgeport.c 1641 */;
	struct edgeport_port {
		__u16 txCredits;
		__u16 maxTxCredits;
		struct TxFifo txfifo;
		struct urb *write_urb;
		bool write_in_progress;
		spinlock_t ep_lock;
		__u8 shadowLCR;
		__u8 shadowMCR;
		__u8 shadowMSR;
		__u8 shadowLSR;
		__u8 shadowXonChar;
		__u8 shadowXoffChar;
		__u8 validDataMask;
		__u32 baudRate;
		bool open;
		bool openPending;
		bool commandPending;
		bool closePending;
		bool chaseResponsePending;
		wait_queue_head_t wait_chase;
		wait_queue_head_t wait_open;
		wait_queue_head_t wait_command;
		struct usb_serial_port *port;
	} cocci_id/* drivers/usb/serial/io_edgeport.c 161 */;
	struct TxFifo {
		unsigned int head;
		unsigned int tail;
		unsigned int count;
		unsigned int size;
		unsigned char *fifo;
	} cocci_id/* drivers/usb/serial/io_edgeport.c 152 */;
	enum RXSTATE{EXPECT_HDR1=0, EXPECT_HDR2=1, EXPECT_DATA=2, EXPECT_HDR3=3,} cocci_id/* drivers/usb/serial/io_edgeport.c 139 */;
	const unsigned char *cocci_id/* drivers/usb/serial/io_edgeport.c 1189 */;
	__u32 cocci_id/* drivers/usb/serial/io_edgeport.c 1085 */;
	struct TxFifo *cocci_id/* drivers/usb/serial/io_edgeport.c 1084 */;
	int cocci_id/* drivers/usb/serial/io_edgeport.c 1028 */;
	__u16 cocci_id/* drivers/usb/serial/io_edgeport.c 1027 */;
	struct device *cocci_id/* drivers/usb/serial/io_edgeport.c 1025 */;
	struct edgeport_port *cocci_id/* drivers/usb/serial/io_edgeport.c 1023 */;
	void cocci_id/* drivers/usb/serial/io_edgeport.c 1023 */;
}
