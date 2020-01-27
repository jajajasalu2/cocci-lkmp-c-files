cocci_test_suite() {
	struct tty_port *cocci_id/* drivers/tty/serial/timbuart.c 82 */;
	u8 cocci_id/* drivers/tty/serial/timbuart.c 72 */;
	struct platform_driver cocci_id/* drivers/tty/serial/timbuart.c 491 */;
	unsigned long cocci_id/* drivers/tty/serial/timbuart.c 454 */;
	struct resource *cocci_id/* drivers/tty/serial/timbuart.c 417 */;
	struct platform_device *cocci_id/* drivers/tty/serial/timbuart.c 413 */;
	struct uart_driver cocci_id/* drivers/tty/serial/timbuart.c 404 */;
	const struct uart_ops cocci_id/* drivers/tty/serial/timbuart.c 385 */;
	struct serial_struct *cocci_id/* drivers/tty/serial/timbuart.c 379 */;
	irqreturn_t cocci_id/* drivers/tty/serial/timbuart.c 37 */(int irq,
								   void *devid);
	void cocci_id/* drivers/tty/serial/timbuart.c 35 */(struct uart_port *port,
							    u32 isr, u32 *ier);
	irqreturn_t cocci_id/* drivers/tty/serial/timbuart.c 349 */;
	void *cocci_id/* drivers/tty/serial/timbuart.c 349 */;
	int cocci_id/* drivers/tty/serial/timbuart.c 32 */[];
	const char *cocci_id/* drivers/tty/serial/timbuart.c 307 */;
	short cocci_id/* drivers/tty/serial/timbuart.c 284 */;
	struct ktermios *cocci_id/* drivers/tty/serial/timbuart.c 280 */;
	int cocci_id/* drivers/tty/serial/timbuart.c 268 */;
	struct timbuart_port {
		struct uart_port port;
		struct tasklet_struct tasklet;
		int usedma;
		u32 last_ier;
		struct platform_device *dev;
	} cocci_id/* drivers/tty/serial/timbuart.c 24 */;
	struct uart_port *cocci_id/* drivers/tty/serial/timbuart.c 235 */;
	void cocci_id/* drivers/tty/serial/timbuart.c 235 */;
	unsigned int cocci_id/* drivers/tty/serial/timbuart.c 199 */;
	u32 cocci_id/* drivers/tty/serial/timbuart.c 153 */;
	u32 *cocci_id/* drivers/tty/serial/timbuart.c 153 */;
	struct circ_buf *cocci_id/* drivers/tty/serial/timbuart.c 123 */;
	struct timbuart_port cocci_id/* drivers/tty/serial/timbuart.c 122 */;
	struct timbuart_port *cocci_id/* drivers/tty/serial/timbuart.c 121 */;
}
