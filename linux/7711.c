cocci_test_suite() {
	struct zilog_layout *cocci_id/* drivers/tty/serial/ip22zilog.c 991 */;
	struct zilog_layout *__init cocci_id/* drivers/tty/serial/ip22zilog.c 977 */;
	struct zilog_layout **cocci_id/* drivers/tty/serial/ip22zilog.c 968 */;
	struct uart_ip22zilog_port cocci_id/* drivers/tty/serial/ip22zilog.c 967 */;
	void __init cocci_id/* drivers/tty/serial/ip22zilog.c 964 */;
	void *__init cocci_id/* drivers/tty/serial/ip22zilog.c 959 */;
	unsigned long cocci_id/* drivers/tty/serial/ip22zilog.c 959 */;
	const struct uart_ops cocci_id/* drivers/tty/serial/ip22zilog.c 934 */;
	struct serial_struct *cocci_id/* drivers/tty/serial/ip22zilog.c 929 */;
	struct ktermios *cocci_id/* drivers/tty/serial/ip22zilog.c 879 */;
	unsigned char cocci_id/* drivers/tty/serial/ip22zilog.c 697 */;
	int cocci_id/* drivers/tty/serial/ip22zilog.c 689 */;
	struct zilog_channel *cocci_id/* drivers/tty/serial/ip22zilog.c 688 */;
	struct uart_ip22zilog_port *cocci_id/* drivers/tty/serial/ip22zilog.c 686 */;
	void cocci_id/* drivers/tty/serial/ip22zilog.c 686 */;
	struct uart_ip22zilog_port {
		struct uart_port port;
		struct uart_ip22zilog_port *next;
		unsigned char curregs[NUM_ZSREGS];
		unsigned int flags;
#define IP22ZILOG_FLAG_IS_CONS 0x00000004
#define IP22ZILOG_FLAG_IS_KGDB 0x00000008
#define IP22ZILOG_FLAG_MODEM_STATUS 0x00000010
#define IP22ZILOG_FLAG_IS_CHANNEL_A 0x00000020
#define IP22ZILOG_FLAG_REGS_HELD 0x00000040
#define IP22ZILOG_FLAG_TX_STOPPED 0x00000080
#define IP22ZILOG_FLAG_TX_ACTIVE 0x00000100
#define IP22ZILOG_FLAG_RESET_DONE 0x00000200
		unsigned int tty_break;
		unsigned char parity_mask;
		unsigned char prev_status;
	} cocci_id/* drivers/tty/serial/ip22zilog.c 66 */;
	struct uart_port *cocci_id/* drivers/tty/serial/ip22zilog.c 658 */;
	struct circ_buf *cocci_id/* drivers/tty/serial/ip22zilog.c 608 */;
	bool cocci_id/* drivers/tty/serial/ip22zilog.c 438 */;
	irqreturn_t cocci_id/* drivers/tty/serial/ip22zilog.c 430 */;
	unsigned char *cocci_id/* drivers/tty/serial/ip22zilog.c 162 */;
	void *cocci_id/* drivers/tty/serial/ip22zilog.c 1206 */;
	void __exit cocci_id/* drivers/tty/serial/ip22zilog.c 1191 */;
	struct console cocci_id/* drivers/tty/serial/ip22zilog.c 1058 */;
	struct uart_driver cocci_id/* drivers/tty/serial/ip22zilog.c 1056 */;
	struct console *cocci_id/* drivers/tty/serial/ip22zilog.c 1031 */;
	char *cocci_id/* drivers/tty/serial/ip22zilog.c 1031 */;
	int __init cocci_id/* drivers/tty/serial/ip22zilog.c 1031 */;
	const char *cocci_id/* drivers/tty/serial/ip22zilog.c 1020 */;
	unsigned int cocci_id/* drivers/tty/serial/ip22zilog.c 1020 */;
}
