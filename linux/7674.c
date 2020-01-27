cocci_test_suite() {
	struct platform_driver cocci_id/* drivers/tty/serial/mvebu-uart.c 958 */;
	struct mvebu_uart_driver_data cocci_id/* drivers/tty/serial/mvebu-uart.c 933 */;
	struct uart_regs_layout {
		unsigned int rbr;
		unsigned int tsh;
		unsigned int ctrl;
		unsigned int intr;
	} cocci_id/* drivers/tty/serial/mvebu-uart.c 93 */;
	struct mvebu_uart_driver_data *cocci_id/* drivers/tty/serial/mvebu-uart.c 862 */;
	struct mvebu_uart cocci_id/* drivers/tty/serial/mvebu-uart.c 856 */;
	enum{UART_IRQ_SUM=0, UART_RX_IRQ=0, UART_TX_IRQ, UART_IRQ_COUNT,} cocci_id/* drivers/tty/serial/mvebu-uart.c 83 */;
	const struct of_device_id *cocci_id/* drivers/tty/serial/mvebu-uart.c 802 */;
	struct resource *cocci_id/* drivers/tty/serial/mvebu-uart.c 801 */;
	struct platform_device *cocci_id/* drivers/tty/serial/mvebu-uart.c 799 */;
	const struct of_device_id cocci_id/* drivers/tty/serial/mvebu-uart.c 794 */[];
	const struct dev_pm_ops cocci_id/* drivers/tty/serial/mvebu-uart.c 788 */;
	struct device *cocci_id/* drivers/tty/serial/mvebu-uart.c 770 */;
	int __init cocci_id/* drivers/tty/serial/mvebu-uart.c 728 */;
	struct console cocci_id/* drivers/tty/serial/mvebu-uart.c 718 */;
	struct uart_driver cocci_id/* drivers/tty/serial/mvebu-uart.c 716 */;
	struct console *cocci_id/* drivers/tty/serial/mvebu-uart.c 692 */;
	char *cocci_id/* drivers/tty/serial/mvebu-uart.c 692 */;
	const char *cocci_id/* drivers/tty/serial/mvebu-uart.c 657 */;
	struct earlycon_device *cocci_id/* drivers/tty/serial/mvebu-uart.c 628 */;
	int __init cocci_id/* drivers/tty/serial/mvebu-uart.c 627 */;
	unsigned cocci_id/* drivers/tty/serial/mvebu-uart.c 620 */;
	const struct uart_ops cocci_id/* drivers/tty/serial/mvebu-uart.c 574 */;
	unsigned char cocci_id/* drivers/tty/serial/mvebu-uart.c 557 */;
	struct ktermios *cocci_id/* drivers/tty/serial/mvebu-uart.c 481 */;
	u32 cocci_id/* drivers/tty/serial/mvebu-uart.c 450 */;
	struct mvebu_uart *cocci_id/* drivers/tty/serial/mvebu-uart.c 448 */;
	struct uart_port *cocci_id/* drivers/tty/serial/mvebu-uart.c 446 */;
	unsigned int cocci_id/* drivers/tty/serial/mvebu-uart.c 446 */;
	int cocci_id/* drivers/tty/serial/mvebu-uart.c 446 */;
	irqreturn_t cocci_id/* drivers/tty/serial/mvebu-uart.c 336 */;
	void *cocci_id/* drivers/tty/serial/mvebu-uart.c 336 */;
	char cocci_id/* drivers/tty/serial/mvebu-uart.c 240 */;
	struct tty_port *cocci_id/* drivers/tty/serial/mvebu-uart.c 238 */;
	unsigned long cocci_id/* drivers/tty/serial/mvebu-uart.c 224 */;
	void cocci_id/* drivers/tty/serial/mvebu-uart.c 221 */;
	struct circ_buf *cocci_id/* drivers/tty/serial/mvebu-uart.c 195 */;
	struct uart_port cocci_id/* drivers/tty/serial/mvebu-uart.c 155 */[MVEBU_NR_UARTS];
	struct mvebu_uart_pm_regs {
		unsigned int rbr;
		unsigned int tsh;
		unsigned int ctrl;
		unsigned int intr;
		unsigned int stat;
		unsigned int brdv;
		unsigned int osamp;
	} cocci_id/* drivers/tty/serial/mvebu-uart.c 116 */;
	struct mvebu_uart_driver_data {
		bool is_ext;
		struct uart_regs_layout regs;
		struct uart_flags flags;
	} cocci_id/* drivers/tty/serial/mvebu-uart.c 109 */;
	struct uart_flags {
		unsigned int ctrl_tx_rdy_int;
		unsigned int ctrl_rx_rdy_int;
		unsigned int stat_tx_rdy;
		unsigned int stat_rx_rdy;
	} cocci_id/* drivers/tty/serial/mvebu-uart.c 101 */;
	struct mvebu_uart {
		struct uart_port *port;
		struct clk *clk;
		int irq[UART_IRQ_COUNT];
		unsigned char __iomem *nb;
		struct mvebu_uart_driver_data *data;
#if defined(CONFIG_PM)
		struct mvebu_uart_pm_regs pm_regs;
#endif
	} cocci_id/*  1 */;
}
