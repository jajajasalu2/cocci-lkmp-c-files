cocci_test_suite() {
	int __init cocci_id/* drivers/tty/serial/lantiq.c 928 */;
	struct platform_driver cocci_id/* drivers/tty/serial/lantiq.c 921 */;
	const struct of_device_id cocci_id/* drivers/tty/serial/lantiq.c 915 */[];
	const struct ltq_soc_data cocci_id/* drivers/tty/serial/lantiq.c 909 */;
	struct ltq_uart_port cocci_id/* drivers/tty/serial/lantiq.c 835 */;
	struct resource *cocci_id/* drivers/tty/serial/lantiq.c 824 */;
	struct device_node *cocci_id/* drivers/tty/serial/lantiq.c 821 */;
	struct platform_device *cocci_id/* drivers/tty/serial/lantiq.c 819 */;
	struct uart_port *cocci_id/* drivers/tty/serial/lantiq.c 784 */;
	struct ltq_uart_port *cocci_id/* drivers/tty/serial/lantiq.c 782 */;
	struct device *cocci_id/* drivers/tty/serial/lantiq.c 782 */;
	int cocci_id/* drivers/tty/serial/lantiq.c 782 */;
	struct resource cocci_id/* drivers/tty/serial/lantiq.c 722 */[3];
	struct earlycon_device *cocci_id/* drivers/tty/serial/lantiq.c 697 */;
	struct console cocci_id/* drivers/tty/serial/lantiq.c 669 */;
	struct console *cocci_id/* drivers/tty/serial/lantiq.c 641 */;
	char *cocci_id/* drivers/tty/serial/lantiq.c 641 */;
	unsigned long cocci_id/* drivers/tty/serial/lantiq.c 626 */;
	u_int cocci_id/* drivers/tty/serial/lantiq.c 623 */;
	const char *cocci_id/* drivers/tty/serial/lantiq.c 623 */;
	const struct uart_ops cocci_id/* drivers/tty/serial/lantiq.c 583 */;
	struct serial_struct *cocci_id/* drivers/tty/serial/lantiq.c 571 */;
	struct ktermios *cocci_id/* drivers/tty/serial/lantiq.c 411 */;
	unsigned int cocci_id/* drivers/tty/serial/lantiq.c 332 */;
	void *cocci_id/* drivers/tty/serial/lantiq.c 270 */;
	irqreturn_t cocci_id/* drivers/tty/serial/lantiq.c 269 */;
	struct circ_buf *cocci_id/* drivers/tty/serial/lantiq.c 227 */;
	u8 cocci_id/* drivers/tty/serial/lantiq.c 171 */;
	struct tty_port *cocci_id/* drivers/tty/serial/lantiq.c 165 */;
	u32 cocci_id/* drivers/tty/serial/lantiq.c 125 */;
	void __iomem *cocci_id/* drivers/tty/serial/lantiq.c 125 */;
	void cocci_id/* drivers/tty/serial/lantiq.c 125 */;
	struct ltq_uart_port {
		struct uart_port port;
		struct clk *freqclk;
		struct clk *clk;
		unsigned int tx_irq;
		unsigned int rx_irq;
		unsigned int err_irq;
		unsigned int common_irq;
		spinlock_t lock;
		const struct ltq_soc_data *soc;
	} cocci_id/* drivers/tty/serial/lantiq.c 110 */;
	struct ltq_soc_data {
		int (*fetch_irq)(struct device *dev,
				 struct ltq_uart_port *ltq_port);
		int (*request_irq)(struct uart_port *port);
		void (*free_irq)(struct uart_port *port);
	} cocci_id/* drivers/tty/serial/lantiq.c 104 */;
	struct uart_driver cocci_id/* drivers/tty/serial/lantiq.c 102 */;
	struct ltq_uart_port *cocci_id/* drivers/tty/serial/lantiq.c 101 */[MAXPORTS];
	void cocci_id/* drivers/tty/serial/lantiq.c 100 */(struct uart_port *port);
}
