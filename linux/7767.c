cocci_test_suite() {
	struct uart_sunsu_port cocci_id/* drivers/tty/serial/sunsu.c 983 */[UART_NR];
	const struct uart_ops cocci_id/* drivers/tty/serial/sunsu.c 962 */;
	struct serial_struct *cocci_id/* drivers/tty/serial/sunsu.c 947 */;
	struct ktermios *cocci_id/* drivers/tty/serial/sunsu.c 908 */;
	struct uart_sunsu_port {
		struct uart_port port;
		unsigned char acr;
		unsigned char ier;
		unsigned short rev;
		unsigned char lcr;
		unsigned int lsr_break_flag;
		unsigned int cflag;
		enum su_type su_type;
		unsigned int type_probed;
		unsigned long reg_size;
#ifdef CONFIG_SERIO
		struct serio serio;
		int serio_open;
#endif
	} cocci_id/* drivers/tty/serial/sunsu.c 88 */;
	const struct serial_uart_config cocci_id/* drivers/tty/serial/sunsu.c 71 */[];
	struct serial_uart_config {
		char *name;
		int dfl_xmit_fifo_size;
		int flags;
	} cocci_id/* drivers/tty/serial/sunsu.c 62 */;
	struct uart_sunsu_port cocci_id/* drivers/tty/serial/sunsu.c 607 */;
	struct uart_port *cocci_id/* drivers/tty/serial/sunsu.c 604 */;
	char *cocci_id/* drivers/tty/serial/sunsu.c 60 */[];
	enum su_type{SU_PORT_NONE, SU_PORT_MS, SU_PORT_KBD, SU_PORT_PORT,} cocci_id/* drivers/tty/serial/sunsu.c 59 */;
	irqreturn_t cocci_id/* drivers/tty/serial/sunsu.c 535 */;
	void *cocci_id/* drivers/tty/serial/sunsu.c 535 */;
	void cocci_id/* drivers/tty/serial/sunsu.c 488 */(struct uart_port *port,
							  unsigned int cflag,
							  unsigned int iflag,
							  unsigned int quot);
	struct circ_buf *cocci_id/* drivers/tty/serial/sunsu.c 402 */;
	struct tty_port *cocci_id/* drivers/tty/serial/sunsu.c 326 */;
	unsigned char *cocci_id/* drivers/tty/serial/sunsu.c 324 */;
	unsigned char cocci_id/* drivers/tty/serial/sunsu.c 196 */;
	struct uart_sunsu_port *cocci_id/* drivers/tty/serial/sunsu.c 194 */;
	int cocci_id/* drivers/tty/serial/sunsu.c 194 */;
	void __exit cocci_id/* drivers/tty/serial/sunsu.c 1622 */;
	struct platform_driver cocci_id/* drivers/tty/serial/sunsu.c 1573 */;
	const struct of_device_id cocci_id/* drivers/tty/serial/sunsu.c 1554 */[];
	bool cocci_id/* drivers/tty/serial/sunsu.c 1442 */;
	struct resource *cocci_id/* drivers/tty/serial/sunsu.c 1440 */;
	struct platform_device *cocci_id/* drivers/tty/serial/sunsu.c 1436 */;
	const char *cocci_id/* drivers/tty/serial/sunsu.c 1400 */;
	enum su_type cocci_id/* drivers/tty/serial/sunsu.c 1394 */;
	struct device_node *cocci_id/* drivers/tty/serial/sunsu.c 1394 */;
	struct console *cocci_id/* drivers/tty/serial/sunsu.c 1385 */;
	void cocci_id/* drivers/tty/serial/sunsu.c 1385 */;
	struct console cocci_id/* drivers/tty/serial/sunsu.c 1371 */;
	struct ktermios cocci_id/* drivers/tty/serial/sunsu.c 1344 */;
	char *cocci_id/* drivers/tty/serial/sunsu.c 1342 */;
	int __init cocci_id/* drivers/tty/serial/sunsu.c 1342 */;
	unsigned long long cocci_id/* drivers/tty/serial/sunsu.c 1219 */;
	struct serio *cocci_id/* drivers/tty/serial/sunsu.c 1200 */;
	struct uart_driver cocci_id/* drivers/tty/serial/sunsu.c 1189 */;
	unsigned int cocci_id/* drivers/tty/serial/sunsu.c 108 */;
	unsigned long cocci_id/* drivers/tty/serial/sunsu.c 1043 */;
}
