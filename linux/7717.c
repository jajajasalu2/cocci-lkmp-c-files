cocci_test_suite() {
	unsigned char *cocci_id/* drivers/tty/serial/8250/8250_mtk.c 94 */;
	struct dma_tx_state cocci_id/* drivers/tty/serial/8250/8250_mtk.c 92 */;
	struct tty_port *cocci_id/* drivers/tty/serial/8250/8250_mtk.c 91 */;
	void cocci_id/* drivers/tty/serial/8250/8250_mtk.c 84 */(struct uart_8250_port *up);
	enum{MTK_UART_FC_NONE, MTK_UART_FC_SW, MTK_UART_FC_HW,} cocci_id/* drivers/tty/serial/8250/8250_mtk.c 77 */;
	const char *cocci_id/* drivers/tty/serial/8250/8250_mtk.c 630 */;
	struct mtk8250_data {
		int line;
		unsigned int rx_pos;
		unsigned int clk_count;
		struct clk *uart_clk;
		struct clk *bus_clk;
		struct uart_8250_dma *dma;
#ifdef CONFIG_SERIAL_8250_DMA
		enum dma_rx_status rx_status;
#endif
		int rx_wakeup_irq;
	} cocci_id/* drivers/tty/serial/8250/8250_mtk.c 63 */;
	struct earlycon_device *cocci_id/* drivers/tty/serial/8250/8250_mtk.c 629 */;
	int __init cocci_id/* drivers/tty/serial/8250/8250_mtk.c 629 */;
	struct platform_driver cocci_id/* drivers/tty/serial/8250/8250_mtk.c 617 */;
	const struct of_device_id cocci_id/* drivers/tty/serial/8250/8250_mtk.c 611 */[];
	struct device *cocci_id/* drivers/tty/serial/8250/8250_mtk.c 591 */;
	int __maybe_unused cocci_id/* drivers/tty/serial/8250/8250_mtk.c 591 */;
	enum dma_rx_status{DMA_RX_START=0, DMA_RX_RUNNING=1, DMA_RX_SHUTDOWN=2,} cocci_id/* drivers/tty/serial/8250/8250_mtk.c 56 */;
	struct resource *cocci_id/* drivers/tty/serial/8250/8250_mtk.c 485 */;
	struct uart_8250_port cocci_id/* drivers/tty/serial/8250/8250_mtk.c 484 */;
	struct platform_device *cocci_id/* drivers/tty/serial/8250/8250_mtk.c 482 */;
	bool cocci_id/* drivers/tty/serial/8250/8250_mtk.c 431 */;
	struct dma_chan *cocci_id/* drivers/tty/serial/8250/8250_mtk.c 431 */;
	void *cocci_id/* drivers/tty/serial/8250/8250_mtk.c 431 */;
	struct uart_port *cocci_id/* drivers/tty/serial/8250/8250_mtk.c 419 */;
	unsigned int cocci_id/* drivers/tty/serial/8250/8250_mtk.c 419 */;
	unsigned long cocci_id/* drivers/tty/serial/8250/8250_mtk.c 294 */;
	unsigned short cocci_id/* drivers/tty/serial/8250/8250_mtk.c 286 */[];
	struct ktermios *cocci_id/* drivers/tty/serial/8250/8250_mtk.c 283 */;
	struct uart_8250_port *cocci_id/* drivers/tty/serial/8250/8250_mtk.c 213 */;
	int cocci_id/* drivers/tty/serial/8250/8250_mtk.c 213 */;
	void cocci_id/* drivers/tty/serial/8250/8250_mtk.c 213 */;
	struct mtk8250_data *cocci_id/* drivers/tty/serial/8250/8250_mtk.c 148 */;
	struct uart_8250_dma *cocci_id/* drivers/tty/serial/8250/8250_mtk.c 147 */;
	struct dma_async_tx_descriptor *cocci_id/* drivers/tty/serial/8250/8250_mtk.c 127 */;
}
