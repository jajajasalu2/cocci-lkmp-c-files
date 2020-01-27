cocci_test_suite() {
	unsigned int cocci_id/* drivers/tty/serial/8250/8250_dw.c 85 */;
	void __iomem *cocci_id/* drivers/tty/serial/8250/8250_dw.c 80 */;
	struct uart_port *cocci_id/* drivers/tty/serial/8250/8250_dw.c 78 */;
	int cocci_id/* drivers/tty/serial/8250/8250_dw.c 78 */;
	void cocci_id/* drivers/tty/serial/8250/8250_dw.c 78 */;
	struct uart_8250_port *cocci_id/* drivers/tty/serial/8250/8250_dw.c 72 */;
	struct platform_driver cocci_id/* drivers/tty/serial/8250/8250_dw.c 647 */;
	const struct acpi_device_id cocci_id/* drivers/tty/serial/8250/8250_dw.c 631 */[];
	const struct of_device_id cocci_id/* drivers/tty/serial/8250/8250_dw.c 622 */[];
	struct dw8250_data cocci_id/* drivers/tty/serial/8250/8250_dw.c 54 */;
	struct dw8250_port_data *cocci_id/* drivers/tty/serial/8250/8250_dw.c 52 */;
	u32 cocci_id/* drivers/tty/serial/8250/8250_dw.c 393 */;
	struct device *cocci_id/* drivers/tty/serial/8250/8250_dw.c 389 */;
	struct resource *cocci_id/* drivers/tty/serial/8250/8250_dw.c 387 */;
	struct uart_8250_port cocci_id/* drivers/tty/serial/8250/8250_dw.c 386 */;
	struct platform_device *cocci_id/* drivers/tty/serial/8250/8250_dw.c 384 */;
	struct dw8250_data {
		struct dw8250_port_data data;
		u8 usr_reg;
		int msr_mask_on;
		int msr_mask_off;
		struct clk *clk;
		struct clk *pclk;
		struct reset_control *rst;
		unsigned int skip_autocfg:1;
		unsigned int uart_16550_compatible:1;
	} cocci_id/* drivers/tty/serial/8250/8250_dw.c 38 */;
	struct device_node *cocci_id/* drivers/tty/serial/8250/8250_dw.c 343 */;
	bool cocci_id/* drivers/tty/serial/8250/8250_dw.c 330 */;
	struct dma_chan *cocci_id/* drivers/tty/serial/8250/8250_dw.c 330 */;
	void *cocci_id/* drivers/tty/serial/8250/8250_dw.c 330 */;
	struct ktermios *cocci_id/* drivers/tty/serial/8250/8250_dw.c 306 */;
	long cocci_id/* drivers/tty/serial/8250/8250_dw.c 280 */;
	unsigned long cocci_id/* drivers/tty/serial/8250/8250_dw.c 228 */;
	struct dw8250_data *cocci_id/* drivers/tty/serial/8250/8250_dw.c 225 */;
	u8 cocci_id/* drivers/tty/serial/8250/8250_dw.c 168 */;
}
