cocci_test_suite() {
	struct serial_struct *cocci_id/* drivers/tty/serial/xilinx_uartps.c 938 */;
	struct ktermios *cocci_id/* drivers/tty/serial/xilinx_uartps.c 685 */;
	unsigned long cocci_id/* drivers/tty/serial/xilinx_uartps.c 660 */;
	unsigned int cocci_id/* drivers/tty/serial/xilinx_uartps.c 659 */;
	struct clk_notifier_data *cocci_id/* drivers/tty/serial/xilinx_uartps.c 493 */;
	void *cocci_id/* drivers/tty/serial/xilinx_uartps.c 488 */;
	struct notifier_block *cocci_id/* drivers/tty/serial/xilinx_uartps.c 487 */;
	u32 *cocci_id/* drivers/tty/serial/xilinx_uartps.c 405 */;
	int *cocci_id/* drivers/tty/serial/xilinx_uartps.c 405 */;
	irqreturn_t cocci_id/* drivers/tty/serial/xilinx_uartps.c 354 */;
	bool cocci_id/* drivers/tty/serial/xilinx_uartps.c 221 */;
	char cocci_id/* drivers/tty/serial/xilinx_uartps.c 220 */;
	struct cdns_uart cocci_id/* drivers/tty/serial/xilinx_uartps.c 203 */;
	struct cdns_platform_data {
		u32 quirks;
	} cocci_id/* drivers/tty/serial/xilinx_uartps.c 200 */;
	struct cdns_uart {
		struct uart_port *port;
		struct clk *uartclk;
		struct clk *pclk;
		struct uart_driver *cdns_uart_driver;
		unsigned int baud;
		int id;
		struct notifier_block clk_rate_change_nb;
		u32 quirks;
		bool cts_override;
	} cocci_id/* drivers/tty/serial/xilinx_uartps.c 189 */;
	void __exit cocci_id/* drivers/tty/serial/xilinx_uartps.c 1771 */;
	struct platform_driver cocci_id/* drivers/tty/serial/xilinx_uartps.c 1754 */;
	const struct cdns_platform_data *cocci_id/* drivers/tty/serial/xilinx_uartps.c 1564 */;
	struct uart_driver *cocci_id/* drivers/tty/serial/xilinx_uartps.c 1489 */;
	const struct of_device_id *cocci_id/* drivers/tty/serial/xilinx_uartps.c 1488 */;
	struct resource *cocci_id/* drivers/tty/serial/xilinx_uartps.c 1486 */;
	struct platform_device *cocci_id/* drivers/tty/serial/xilinx_uartps.c 1407 */;
	int cocci_id/* drivers/tty/serial/xilinx_uartps.c 1400 */;
	const struct of_device_id cocci_id/* drivers/tty/serial/xilinx_uartps.c 1383 */[];
	const struct cdns_platform_data cocci_id/* drivers/tty/serial/xilinx_uartps.c 1379 */;
	struct cdns_uart *cocci_id/* drivers/tty/serial/xilinx_uartps.c 1366 */;
	struct device *cocci_id/* drivers/tty/serial/xilinx_uartps.c 1363 */;
	int __maybe_unused cocci_id/* drivers/tty/serial/xilinx_uartps.c 1363 */;
	char *cocci_id/* drivers/tty/serial/xilinx_uartps.c 1241 */;
	u32 cocci_id/* drivers/tty/serial/xilinx_uartps.c 1159 */;
	struct uart_port *cocci_id/* drivers/tty/serial/xilinx_uartps.c 1146 */;
	const char *cocci_id/* drivers/tty/serial/xilinx_uartps.c 1144 */;
	struct earlycon_device *cocci_id/* drivers/tty/serial/xilinx_uartps.c 1143 */;
	int __init cocci_id/* drivers/tty/serial/xilinx_uartps.c 1143 */;
	unsigned cocci_id/* drivers/tty/serial/xilinx_uartps.c 1136 */;
	struct console *cocci_id/* drivers/tty/serial/xilinx_uartps.c 1135 */;
	void cocci_id/* drivers/tty/serial/xilinx_uartps.c 1135 */;
	const struct uart_ops cocci_id/* drivers/tty/serial/xilinx_uartps.c 1099 */;
	unsigned char cocci_id/* drivers/tty/serial/xilinx_uartps.c 1057 */;
}
