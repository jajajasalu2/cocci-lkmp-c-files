cocci_test_suite() {
	struct serial_card_type cocci_id/* drivers/tty/serial/8250/8250_acorn.c 94 */;
	struct serial_card_info cocci_id/* drivers/tty/serial/8250/8250_acorn.c 47 */;
	unsigned int cocci_id/* drivers/tty/serial/8250/8250_acorn.c 45 */;
	unsigned long cocci_id/* drivers/tty/serial/8250/8250_acorn.c 44 */;
	struct uart_8250_port cocci_id/* drivers/tty/serial/8250/8250_acorn.c 43 */;
	struct serial_card_type *cocci_id/* drivers/tty/serial/8250/8250_acorn.c 42 */;
	struct serial_card_info *cocci_id/* drivers/tty/serial/8250/8250_acorn.c 41 */;
	const struct ecard_id *cocci_id/* drivers/tty/serial/8250/8250_acorn.c 39 */;
	struct expansion_card *cocci_id/* drivers/tty/serial/8250/8250_acorn.c 39 */;
	int cocci_id/* drivers/tty/serial/8250/8250_acorn.c 38 */;
	struct serial_card_info {
		unsigned int num_ports;
		int ports[MAX_PORTS];
		void __iomem *vaddr;
	} cocci_id/* drivers/tty/serial/8250/8250_acorn.c 32 */;
	struct serial_card_type {
		unsigned int num_ports;
		unsigned int uartclk;
		unsigned int type;
		unsigned int offset[MAX_PORTS];
	} cocci_id/* drivers/tty/serial/8250/8250_acorn.c 25 */;
	void __exit cocci_id/* drivers/tty/serial/8250/8250_acorn.c 128 */;
	void cocci_id/* drivers/tty/serial/8250/8250_acorn.c 128 */;
	int __init cocci_id/* drivers/tty/serial/8250/8250_acorn.c 123 */;
	struct ecard_driver cocci_id/* drivers/tty/serial/8250/8250_acorn.c 114 */;
	const struct ecard_id cocci_id/* drivers/tty/serial/8250/8250_acorn.c 108 */[];
}
