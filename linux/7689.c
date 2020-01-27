cocci_test_suite() {
	struct serial_struct *cocci_id/* drivers/tty/serial/sunzilog.c 999 */;
	struct ktermios *cocci_id/* drivers/tty/serial/sunzilog.c 944 */;
	struct uart_sunzilog_port *cocci_id/* drivers/tty/serial/sunzilog.c 786 */;
	struct uart_port *cocci_id/* drivers/tty/serial/sunzilog.c 758 */;
	struct uart_sunzilog_port {
		struct uart_port port;
		struct uart_sunzilog_port *next;
		unsigned char curregs[NUM_ZSREGS];
		unsigned int flags;
#define SUNZILOG_FLAG_CONS_KEYB 0x00000001
#define SUNZILOG_FLAG_CONS_MOUSE 0x00000002
#define SUNZILOG_FLAG_IS_CONS 0x00000004
#define SUNZILOG_FLAG_IS_KGDB 0x00000008
#define SUNZILOG_FLAG_MODEM_STATUS 0x00000010
#define SUNZILOG_FLAG_IS_CHANNEL_A 0x00000020
#define SUNZILOG_FLAG_REGS_HELD 0x00000040
#define SUNZILOG_FLAG_TX_STOPPED 0x00000080
#define SUNZILOG_FLAG_TX_ACTIVE 0x00000100
#define SUNZILOG_FLAG_ESCC 0x00000200
#define SUNZILOG_FLAG_ISR_HANDLER 0x00000400
		unsigned int cflag;
		unsigned char parity_mask;
		unsigned char prev_status;
#ifdef CONFIG_SERIO
		struct serio serio;
		int serio_open;
#endif
	} cocci_id/* drivers/tty/serial/sunzilog.c 74 */;
	struct circ_buf *cocci_id/* drivers/tty/serial/sunzilog.c 708 */;
	struct tty_port *cocci_id/* drivers/tty/serial/sunzilog.c 536 */;
	irqreturn_t cocci_id/* drivers/tty/serial/sunzilog.c 529 */;
	void *cocci_id/* drivers/tty/serial/sunzilog.c 529 */;
	unsigned int cocci_id/* drivers/tty/serial/sunzilog.c 286 */;
	unsigned char cocci_id/* drivers/tty/serial/sunzilog.c 183 */;
	struct zilog_channel __iomem *cocci_id/* drivers/tty/serial/sunzilog.c 179 */;
	unsigned char *cocci_id/* drivers/tty/serial/sunzilog.c 179 */;
	int cocci_id/* drivers/tty/serial/sunzilog.c 179 */;
	void __exit cocci_id/* drivers/tty/serial/sunzilog.c 1618 */;
	struct device_node *cocci_id/* drivers/tty/serial/sunzilog.c 1553 */;
	struct platform_driver cocci_id/* drivers/tty/serial/sunzilog.c 1542 */;
	const struct of_device_id cocci_id/* drivers/tty/serial/sunzilog.c 1534 */[];
	unsigned long long cocci_id/* drivers/tty/serial/sunzilog.c 1495 */;
	void __iomem *cocci_id/* drivers/tty/serial/sunzilog.c 1436 */;
	struct zilog_layout cocci_id/* drivers/tty/serial/sunzilog.c 1422 */;
	struct platform_device *cocci_id/* drivers/tty/serial/sunzilog.c 1403 */;
	struct serio *cocci_id/* drivers/tty/serial/sunzilog.c 1307 */;
	struct console *cocci_id/* drivers/tty/serial/sunzilog.c 1276 */;
	void cocci_id/* drivers/tty/serial/sunzilog.c 1276 */;
	struct console cocci_id/* drivers/tty/serial/sunzilog.c 1266 */;
	char *cocci_id/* drivers/tty/serial/sunzilog.c 1221 */;
	const char *cocci_id/* drivers/tty/serial/sunzilog.c 1203 */;
	struct zilog_layout __iomem *cocci_id/* drivers/tty/serial/sunzilog.c 1112 */;
	struct uart_sunzilog_port cocci_id/* drivers/tty/serial/sunzilog.c 1093 */;
	unsigned long cocci_id/* drivers/tty/serial/sunzilog.c 1089 */;
	int __init cocci_id/* drivers/tty/serial/sunzilog.c 1086 */;
	struct uart_driver cocci_id/* drivers/tty/serial/sunzilog.c 1079 */;
	struct zilog_layout __iomem **cocci_id/* drivers/tty/serial/sunzilog.c 1075 */;
	void cocci_id/* drivers/tty/serial/sunzilog.c 107 */(struct uart_port *port, int ch);
	const struct uart_ops cocci_id/* drivers/tty/serial/sunzilog.c 1050 */;
}
