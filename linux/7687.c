cocci_test_suite() {
	void __exit cocci_id/* drivers/tty/serial/uartlite.c 846 */;
	const struct uartlite_reg_ops cocci_id/* drivers/tty/serial/uartlite.c 83 */;
	struct platform_driver cocci_id/* drivers/tty/serial/uartlite.c 825 */;
	struct uartlite_data cocci_id/* drivers/tty/serial/uartlite.c 766 */;
	const __be32 *cocci_id/* drivers/tty/serial/uartlite.c 760 */;
	struct resource *cocci_id/* drivers/tty/serial/uartlite.c 755 */;
	struct platform_device *cocci_id/* drivers/tty/serial/uartlite.c 753 */;
	const struct of_device_id cocci_id/* drivers/tty/serial/uartlite.c 745 */[];
	void __iomem *cocci_id/* drivers/tty/serial/uartlite.c 73 */;
	int __maybe_unused cocci_id/* drivers/tty/serial/uartlite.c 727 */;
	struct uartlite_reg_ops {
		u32 (*in)(void __iomem *addr);
		void (*out)(u32 val, void __iomem *addr);
	} cocci_id/* drivers/tty/serial/uartlite.c 68 */;
	struct uartlite_data {
		const struct uartlite_reg_ops *reg_ops;
		struct clk *clk;
	} cocci_id/* drivers/tty/serial/uartlite.c 63 */;
	struct device *cocci_id/* drivers/tty/serial/uartlite.c 616 */;
	struct uart_port *cocci_id/* drivers/tty/serial/uartlite.c 60 */;
	const char *cocci_id/* drivers/tty/serial/uartlite.c 576 */;
	struct earlycon_device *cocci_id/* drivers/tty/serial/uartlite.c 575 */;
	int __init cocci_id/* drivers/tty/serial/uartlite.c 575 */;
	struct console *cocci_id/* drivers/tty/serial/uartlite.c 568 */;
	unsigned cocci_id/* drivers/tty/serial/uartlite.c 557 */;
	int cocci_id/* drivers/tty/serial/uartlite.c 547 */;
	void cocci_id/* drivers/tty/serial/uartlite.c 547 */;
	struct console cocci_id/* drivers/tty/serial/uartlite.c 537 */;
	struct uart_driver cocci_id/* drivers/tty/serial/uartlite.c 535 */;
	char *cocci_id/* drivers/tty/serial/uartlite.c 506 */;
	unsigned int cocci_id/* drivers/tty/serial/uartlite.c 478 */;
	unsigned long cocci_id/* drivers/tty/serial/uartlite.c 451 */;
	u8 cocci_id/* drivers/tty/serial/uartlite.c 450 */;
	const struct uart_ops cocci_id/* drivers/tty/serial/uartlite.c 420 */;
	unsigned char cocci_id/* drivers/tty/serial/uartlite.c 410 */;
	struct serial_struct *cocci_id/* drivers/tty/serial/uartlite.c 384 */;
	unsigned long long cocci_id/* drivers/tty/serial/uartlite.c 353 */;
	struct ktermios *cocci_id/* drivers/tty/serial/uartlite.c 302 */;
	irqreturn_t cocci_id/* drivers/tty/serial/uartlite.c 201 */;
	void *cocci_id/* drivers/tty/serial/uartlite.c 201 */;
	struct circ_buf *cocci_id/* drivers/tty/serial/uartlite.c 175 */;
	char cocci_id/* drivers/tty/serial/uartlite.c 127 */;
	struct tty_port *cocci_id/* drivers/tty/serial/uartlite.c 125 */;
	struct uart_port cocci_id/* drivers/tty/serial/uartlite.c 117 */[ULITE_NR_UARTS];
	struct uartlite_data *cocci_id/* drivers/tty/serial/uartlite.c 105 */;
	u32 cocci_id/* drivers/tty/serial/uartlite.c 103 */;
}
