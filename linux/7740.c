cocci_test_suite() {
	struct resource *cocci_id/* drivers/tty/serial/8250/8250_bcm2835aux.c 28 */;
	struct bcm2835aux_data *cocci_id/* drivers/tty/serial/8250/8250_bcm2835aux.c 27 */;
	struct platform_device *cocci_id/* drivers/tty/serial/8250/8250_bcm2835aux.c 25 */;
	int cocci_id/* drivers/tty/serial/8250/8250_bcm2835aux.c 25 */;
	struct bcm2835aux_data {
		struct uart_8250_port uart;
		struct clk *clk;
		int line;
	} cocci_id/* drivers/tty/serial/8250/8250_bcm2835aux.c 19 */;
	struct platform_driver cocci_id/* drivers/tty/serial/8250/8250_bcm2835aux.c 128 */;
	const struct of_device_id cocci_id/* drivers/tty/serial/8250/8250_bcm2835aux.c 122 */[];
}
