cocci_test_suite() {
	struct gs_port {
		struct tty_port port;
		spinlock_t port_lock;
		struct gserial *port_usb;
#ifdef CONFIG_U_SERIAL_CONSOLE
		struct gs_console *console;
#endif
		u8 port_num;
		struct list_head read_pool;
		int read_started;
		int read_allocated;
		struct list_head read_queue;
		unsigned n_read;
		struct delayed_work push;
		struct list_head write_pool;
		int write_started;
		int write_allocated;
		struct kfifo port_write_buf;
		wait_queue_head_t drain_wait;
		bool write_busy;
		wait_queue_head_t close_wait;
		struct usb_cdc_line_coding port_line_coding;
	} cocci_id/* drivers/usb/gadget/function/u_serial.c 98 */;
	struct tty_driver *cocci_id/* drivers/usb/gadget/function/u_serial.c 940 */;
	struct console *cocci_id/* drivers/usb/gadget/function/u_serial.c 940 */;
	const char *cocci_id/* drivers/usb/gadget/function/u_serial.c 922 */;
	struct gs_console cocci_id/* drivers/usb/gadget/function/u_serial.c 912 */;
	struct work_struct *cocci_id/* drivers/usb/gadget/function/u_serial.c 910 */;
	char cocci_id/* drivers/usb/gadget/function/u_serial.c 897 */[64];
	size_t cocci_id/* drivers/usb/gadget/function/u_serial.c 883 */;
	struct usb_ep *cocci_id/* drivers/usb/gadget/function/u_serial.c 882 */;
	struct usb_request *cocci_id/* drivers/usb/gadget/function/u_serial.c 881 */;
	struct gs_console *cocci_id/* drivers/usb/gadget/function/u_serial.c 879 */;
	void cocci_id/* drivers/usb/gadget/function/u_serial.c 879 */;
	struct gs_console {
		struct console console;
		struct work_struct work;
		spinlock_t lock;
		struct usb_request *req;
		struct kfifo buf;
		size_t missed;
	} cocci_id/* drivers/usb/gadget/function/u_serial.c 85 */;
	const struct tty_operations cocci_id/* drivers/usb/gadget/function/u_serial.c 837 */;
	struct gserial *cocci_id/* drivers/usb/gadget/function/u_serial.c 823 */;
	struct gs_port *cocci_id/* drivers/usb/gadget/function/u_serial.c 821 */;
	struct tty_struct *cocci_id/* drivers/usb/gadget/function/u_serial.c 819 */;
	unsigned long cocci_id/* drivers/usb/gadget/function/u_serial.c 788 */;
	unsigned char cocci_id/* drivers/usb/gadget/function/u_serial.c 739 */;
	const unsigned char *cocci_id/* drivers/usb/gadget/function/u_serial.c 720 */;
	struct file *cocci_id/* drivers/usb/gadget/function/u_serial.c 662 */;
	int *cocci_id/* drivers/usb/gadget/function/u_serial.c 504 */;
	void (*cocci_id/* drivers/usb/gadget/function/u_serial.c 503 */)(struct usb_ep *,
									 struct usb_request *);
	struct list_head *cocci_id/* drivers/usb/gadget/function/u_serial.c 502 */;
	int cocci_id/* drivers/usb/gadget/function/u_serial.c 502 */;
	struct usb_request cocci_id/* drivers/usb/gadget/function/u_serial.c 494 */;
	char *cocci_id/* drivers/usb/gadget/function/u_serial.c 395 */;
	bool cocci_id/* drivers/usb/gadget/function/u_serial.c 362 */;
	struct delayed_work *cocci_id/* drivers/usb/gadget/function/u_serial.c 358 */;
	u8 *cocci_id/* drivers/usb/gadget/function/u_serial.c 260 */;
	gfp_t cocci_id/* drivers/usb/gadget/function/u_serial.c 160 */;
	unsigned cocci_id/* drivers/usb/gadget/function/u_serial.c 160 */;
	u8 cocci_id/* drivers/usb/gadget/function/u_serial.c 1284 */;
	struct portmaster {
		struct mutex lock;
		struct gs_port *port;
	} cocci_id/* drivers/usb/gadget/function/u_serial.c 128 */[MAX_U_SERIAL_PORTS];
	unsigned char *cocci_id/* drivers/usb/gadget/function/u_serial.c 1252 */;
	struct device *cocci_id/* drivers/usb/gadget/function/u_serial.c 1210 */;
	struct usb_cdc_line_coding cocci_id/* drivers/usb/gadget/function/u_serial.c 1208 */;
	struct gs_port cocci_id/* drivers/usb/gadget/function/u_serial.c 1140 */;
	struct usb_cdc_line_coding *cocci_id/* drivers/usb/gadget/function/u_serial.c 1129 */;
	ssize_t cocci_id/* drivers/usb/gadget/function/u_serial.c 1087 */;
}
