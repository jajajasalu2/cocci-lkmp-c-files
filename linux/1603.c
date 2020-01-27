cocci_test_suite() {
	struct edgeport_fw_hdr cocci_id/* drivers/usb/serial/io_ti.c 970 */;
	u8 cocci_id/* drivers/usb/serial/io_ti.c 965 */;
	u16 cocci_id/* drivers/usb/serial/io_ti.c 964 */;
	struct edgeport_serial *cocci_id/* drivers/usb/serial/io_ti.c 961 */;
	int *cocci_id/* drivers/usb/serial/io_ti.c 911 */;
	struct usb_serial *cocci_id/* drivers/usb/serial/io_ti.c 910 */;
	void *cocci_id/* drivers/usb/serial/io_ti.c 910 */;
	struct edgeport_port {
		__u16 uart_base;
		__u16 dma_address;
		__u8 shadow_msr;
		__u8 shadow_mcr;
		__u8 shadow_lsr;
		__u8 lsr_mask;
		__u32 ump_read_timeout;
		int baud_rate;
		int close_pending;
		int lsr_event;
		struct edgeport_serial *edge_serial;
		struct usb_serial_port *port;
		__u8 bUartMode;
		spinlock_t ep_lock;
		int ep_read_urb_state;
		int ep_write_urb_in_use;
	} cocci_id/* drivers/usb/serial/io_ti.c 91 */;
	struct ti_i2c_image_header cocci_id/* drivers/usb/serial/io_ti.c 843 */;
	struct edgeport_fw_hdr {
		u8 major_version;
		u8 minor_version;
		__le16 build_number;
		__le16 length;
		u8 checksum;
	}__packed cocci_id/* drivers/usb/serial/io_ti.c 83 */;
	struct ti_i2c_firmware_rec cocci_id/* drivers/usb/serial/io_ti.c 824 */;
	struct edgeport_fw_hdr *cocci_id/* drivers/usb/serial/io_ti.c 807 */;
	struct ti_i2c_firmware_rec *cocci_id/* drivers/usb/serial/io_ti.c 806 */;
	struct ti_i2c_image_header *cocci_id/* drivers/usb/serial/io_ti.c 805 */;
	struct ti_i2c_desc *cocci_id/* drivers/usb/serial/io_ti.c 804 */;
	__u8 cocci_id/* drivers/usb/serial/io_ti.c 803 */;
	__u8 *cocci_id/* drivers/usb/serial/io_ti.c 800 */;
	const struct firmware *cocci_id/* drivers/usb/serial/io_ti.c 798 */;
	u8 *cocci_id/* drivers/usb/serial/io_ti.c 798 */;
	int cocci_id/* drivers/usb/serial/io_ti.c 798 */;
	struct ti_i2c_desc cocci_id/* drivers/usb/serial/io_ti.c 709 */;
	struct product_info {
		int TiMode;
		__u8 hardware_type;
	}__attribute__((packed)) cocci_id/* drivers/usb/serial/io_ti.c 67 */;
	struct usb_device *cocci_id/* drivers/usb/serial/io_ti.c 577 */;
	struct out_endpoint_desc_block *cocci_id/* drivers/usb/serial/io_ti.c 528 */;
	struct usb_serial_driver *const cocci_id/* drivers/usb/serial/io_ti.c 2781 */[];
	struct usb_serial_driver cocci_id/* drivers/usb/serial/io_ti.c 2703 */;
	pm_message_t cocci_id/* drivers/usb/serial/io_ti.c 2684 */;
	size_t cocci_id/* drivers/usb/serial/io_ti.c 2655 */;
	struct device_attribute *cocci_id/* drivers/usb/serial/io_ti.c 2646 */;
	char *cocci_id/* drivers/usb/serial/io_ti.c 2646 */;
	ssize_t cocci_id/* drivers/usb/serial/io_ti.c 2645 */;
	unsigned char cocci_id/* drivers/usb/serial/io_ti.c 2511 */;
	struct usb_serial_endpoints *cocci_id/* drivers/usb/serial/io_ti.c 2508 */;
	struct edgeport_serial cocci_id/* drivers/usb/serial/io_ti.c 2491 */;
	struct work_struct *cocci_id/* drivers/usb/serial/io_ti.c 2486 */;
	struct usb_serial_port *cocci_id/* drivers/usb/serial/io_ti.c 2464 */;
	struct serial_struct *cocci_id/* drivers/usb/serial/io_ti.c 2441 */;
	unsigned int cocci_id/* drivers/usb/serial/io_ti.c 2417 */;
	__u16 cocci_id/* drivers/usb/serial/io_ti.c 2343 */;
	int cocci_id/* drivers/usb/serial/io_ti.c 234 */(struct usb_serial_port *port);
	int cocci_id/* drivers/usb/serial/io_ti.c 230 */(struct edgeport_serial *serial,
							 const struct firmware *fw);
	void cocci_id/* drivers/usb/serial/io_ti.c 226 */(struct usb_serial_port *port,
							  struct tty_struct *tty);
	void cocci_id/* drivers/usb/serial/io_ti.c 224 */(struct tty_struct *tty,
							  struct usb_serial_port *port,
							  struct ktermios *old_termios);
	unsigned cocci_id/* drivers/usb/serial/io_ti.c 2234 */;
	struct ump_uart_config *cocci_id/* drivers/usb/serial/io_ti.c 2232 */;
	struct device *cocci_id/* drivers/usb/serial/io_ti.c 2231 */;
	struct ktermios *cocci_id/* drivers/usb/serial/io_ti.c 2229 */;
	struct edgeport_port *cocci_id/* drivers/usb/serial/io_ti.c 2229 */;
	struct tty_struct *cocci_id/* drivers/usb/serial/io_ti.c 2228 */;
	void cocci_id/* drivers/usb/serial/io_ti.c 2228 */;
	int cocci_id/* drivers/usb/serial/io_ti.c 222 */(struct edgeport_port *edge_port);
	void cocci_id/* drivers/usb/serial/io_ti.c 221 */(struct edgeport_port *edge_port);
	void cocci_id/* drivers/usb/serial/io_ti.c 218 */(struct usb_serial_port *port,
							  unsigned char *data,
							  int length);
	bool cocci_id/* drivers/usb/serial/io_ti.c 2125 */;
	const unsigned char *cocci_id/* drivers/usb/serial/io_ti.c 2017 */;
	unsigned long cocci_id/* drivers/usb/serial/io_ti.c 1732 */;
	unsigned char *cocci_id/* drivers/usb/serial/io_ti.c 1731 */;
	struct urb *cocci_id/* drivers/usb/serial/io_ti.c 1727 */;
	struct async_icount *cocci_id/* drivers/usb/serial/io_ti.c 1593 */;
	struct edge_ti_manuf_descriptor *cocci_id/* drivers/usb/serial/io_ti.c 1386 */;
	const struct usb_device_id cocci_id/* drivers/usb/serial/io_ti.c 132 */[];
	struct edgeport_serial {
		struct product_info product_info;
		u8 TI_I2C_Type;
		u8 TiReadI2C;
		struct mutex es_lock;
		int num_ports_open;
		struct usb_serial *serial;
		struct delayed_work heartbeat_work;
		int fw_version;
		bool use_heartbeat;
	} cocci_id/* drivers/usb/serial/io_ti.c 115 */;
	const char *cocci_id/* drivers/usb/serial/io_ti.c 1008 */;
	struct usb_interface_descriptor *cocci_id/* drivers/usb/serial/io_ti.c 1006 */;
}
