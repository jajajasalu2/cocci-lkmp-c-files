cocci_test_suite() {
	struct dz_port cocci_id/* drivers/tty/serial/dz.c 91 */;
	struct console cocci_id/* drivers/tty/serial/dz.c 890 */;
	struct uart_driver cocci_id/* drivers/tty/serial/dz.c 889 */;
	struct dz_mux cocci_id/* drivers/tty/serial/dz.c 87 */;
	int __init cocci_id/* drivers/tty/serial/dz.c 864 */;
	char *cocci_id/* drivers/tty/serial/dz.c 859 */;
	unsigned int cocci_id/* drivers/tty/serial/dz.c 855 */;
	const char *cocci_id/* drivers/tty/serial/dz.c 854 */;
	struct console *cocci_id/* drivers/tty/serial/dz.c 853 */;
	struct dz_mux {
		struct dz_port dport[DZ_NB_PORT];
		atomic_t map_guard;
		atomic_t irq_guard;
		int initialised;
	} cocci_id/* drivers/tty/serial/dz.c 80 */;
	void __init cocci_id/* drivers/tty/serial/dz.c 762 */;
	const struct uart_ops cocci_id/* drivers/tty/serial/dz.c 743 */;
	struct dz_port {
		struct dz_mux *mux;
		struct uart_port port;
		unsigned int cflag;
	} cocci_id/* drivers/tty/serial/dz.c 74 */;
	struct serial_struct *cocci_id/* drivers/tty/serial/dz.c 732 */;
	char cocci_id/* drivers/tty/serial/dz.c 71 */[]__initdata;
	struct ktermios *cocci_id/* drivers/tty/serial/dz.c 565 */;
	unsigned short cocci_id/* drivers/tty/serial/dz.c 497 */;
	unsigned long cocci_id/* drivers/tty/serial/dz.c 496 */;
	struct uart_port *cocci_id/* drivers/tty/serial/dz.c 489 */;
	int cocci_id/* drivers/tty/serial/dz.c 489 */;
	struct dz_mux *cocci_id/* drivers/tty/serial/dz.c 339 */;
	irqreturn_t cocci_id/* drivers/tty/serial/dz.c 337 */;
	void *cocci_id/* drivers/tty/serial/dz.c 337 */;
	u16 cocci_id/* drivers/tty/serial/dz.c 316 */;
	struct dz_port *cocci_id/* drivers/tty/serial/dz.c 309 */;
	void cocci_id/* drivers/tty/serial/dz.c 309 */;
	struct circ_buf *cocci_id/* drivers/tty/serial/dz.c 259 */;
	unsigned char cocci_id/* drivers/tty/serial/dz.c 188 */;
	int cocci_id/* drivers/tty/serial/dz.c 187 */[DZ_NB_PORT];
	struct uart_icount *cocci_id/* drivers/tty/serial/dz.c 186 */;
	void __iomem *cocci_id/* drivers/tty/serial/dz.c 105 */;
	unsigned cocci_id/* drivers/tty/serial/dz.c 103 */;
}
