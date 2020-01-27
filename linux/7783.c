cocci_test_suite() {
	struct sbd_duart {
		struct sbd_port sport[2];
		unsigned long mapctrl;
		refcount_t map_guard;
	} cocci_id/* drivers/tty/serial/sb1250-duart.c 99 */;
	struct sbd_duart *cocci_id/* drivers/tty/serial/sb1250-duart.c 956 */;
	void __exit cocci_id/* drivers/tty/serial/sb1250-duart.c 951 */;
	struct console cocci_id/* drivers/tty/serial/sb1250-duart.c 891 */;
	struct uart_driver cocci_id/* drivers/tty/serial/sb1250-duart.c 890 */;
	struct sbd_port {
		struct sbd_duart *duart;
		struct uart_port port;
		unsigned char __iomem *memctrl;
		int tx_stopped;
		int initialised;
	} cocci_id/* drivers/tty/serial/sb1250-duart.c 88 */;
	struct console *cocci_id/* drivers/tty/serial/sb1250-duart.c 864 */;
	char *cocci_id/* drivers/tty/serial/sb1250-duart.c 864 */;
	int __init cocci_id/* drivers/tty/serial/sb1250-duart.c 864 */;
	unsigned long cocci_id/* drivers/tty/serial/sb1250-duart.c 842 */;
	unsigned int cocci_id/* drivers/tty/serial/sb1250-duart.c 836 */;
	const char *cocci_id/* drivers/tty/serial/sb1250-duart.c 835 */;
	void __init cocci_id/* drivers/tty/serial/sb1250-duart.c 774 */;
	const struct uart_ops cocci_id/* drivers/tty/serial/sb1250-duart.c 754 */;
	struct serial_struct *cocci_id/* drivers/tty/serial/sb1250-duart.c 740 */;
	struct ktermios *cocci_id/* drivers/tty/serial/sb1250-duart.c 538 */;
	irqreturn_t cocci_id/* drivers/tty/serial/sb1250-duart.c 442 */;
	void *cocci_id/* drivers/tty/serial/sb1250-duart.c 442 */;
	struct circ_buf *cocci_id/* drivers/tty/serial/sb1250-duart.c 389 */;
	struct uart_icount *cocci_id/* drivers/tty/serial/sb1250-duart.c 338 */;
	struct uart_port *cocci_id/* drivers/tty/serial/sb1250-duart.c 324 */;
	int __maybe_unused cocci_id/* drivers/tty/serial/sb1250-duart.c 213 */;
	unsigned char cocci_id/* drivers/tty/serial/sb1250-duart.c 159 */;
	void cocci_id/* drivers/tty/serial/sb1250-duart.c 153 */;
	void __iomem *cocci_id/* drivers/tty/serial/sb1250-duart.c 123 */;
	u64 cocci_id/* drivers/tty/serial/sb1250-duart.c 121 */;
	struct sbd_port *cocci_id/* drivers/tty/serial/sb1250-duart.c 121 */;
	int cocci_id/* drivers/tty/serial/sb1250-duart.c 121 */;
	struct sbd_duart cocci_id/* drivers/tty/serial/sb1250-duart.c 107 */[DUART_MAX_CHIP];
	struct sbd_port cocci_id/* drivers/tty/serial/sb1250-duart.c 105 */;
}
