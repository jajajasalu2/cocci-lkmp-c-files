cocci_test_suite() {
	long cocci_id/* drivers/tty/serial/sunhv.c 81 */;
	int __init cocci_id/* drivers/tty/serial/sunhv.c 641 */;
	struct platform_driver cocci_id/* drivers/tty/serial/sunhv.c 632 */;
	const struct of_device_id cocci_id/* drivers/tty/serial/sunhv.c 620 */[];
	unsigned char __iomem *cocci_id/* drivers/tty/serial/sunhv.c 560 */;
	struct uart_port cocci_id/* drivers/tty/serial/sunhv.c 533 */;
	unsigned long cocci_id/* drivers/tty/serial/sunhv.c 527 */;
	struct uart_port *cocci_id/* drivers/tty/serial/sunhv.c 526 */;
	struct platform_device *cocci_id/* drivers/tty/serial/sunhv.c 524 */;
	struct console cocci_id/* drivers/tty/serial/sunhv.c 515 */;
	struct console *cocci_id/* drivers/tty/serial/sunhv.c 494 */;
	unsigned cocci_id/* drivers/tty/serial/sunhv.c 494 */;
	char cocci_id/* drivers/tty/serial/sunhv.c 482 */;
	char *cocci_id/* drivers/tty/serial/sunhv.c 42 */;
	unsigned long *cocci_id/* drivers/tty/serial/sunhv.c 418 */;
	const char *cocci_id/* drivers/tty/serial/sunhv.c 417 */;
	unsigned int cocci_id/* drivers/tty/serial/sunhv.c 417 */;
	int cocci_id/* drivers/tty/serial/sunhv.c 417 */;
	struct uart_driver cocci_id/* drivers/tty/serial/sunhv.c 397 */;
	const struct uart_ops cocci_id/* drivers/tty/serial/sunhv.c 378 */;
	struct serial_struct *cocci_id/* drivers/tty/serial/sunhv.c 373 */;
	struct ktermios *cocci_id/* drivers/tty/serial/sunhv.c 329 */;
	void cocci_id/* drivers/tty/serial/sunhv.c 298 */;
	irqreturn_t cocci_id/* drivers/tty/serial/sunhv.c 220 */;
	void *cocci_id/* drivers/tty/serial/sunhv.c 220 */;
	struct circ_buf *cocci_id/* drivers/tty/serial/sunhv.c 205 */;
	struct tty_port *cocci_id/* drivers/tty/serial/sunhv.c 190 */;
	const struct sunhv_ops *cocci_id/* drivers/tty/serial/sunhv.c 188 */;
	const struct sunhv_ops cocci_id/* drivers/tty/serial/sunhv.c 178 */;
	struct sunhv_ops {
		void (*transmit_chars)(struct uart_port *port,
				       struct circ_buf *xmit);
		int (*receive_chars)(struct uart_port *port);
	} cocci_id/* drivers/tty/serial/sunhv.c 173 */;
}
