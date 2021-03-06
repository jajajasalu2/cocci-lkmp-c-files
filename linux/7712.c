cocci_test_suite() {
	irqreturn_t cocci_id/* drivers/tty/serial/imx.c 852 */;
	void cocci_id/* drivers/tty/serial/imx.c 800 */(struct imx_port *sport);
	struct dma_async_tx_descriptor *cocci_id/* drivers/tty/serial/imx.c 591 */;
	u32 *cocci_id/* drivers/tty/serial/imx.c 387 */;
	struct imx_port_ucrs *cocci_id/* drivers/tty/serial/imx.c 377 */;
	const struct of_device_id cocci_id/* drivers/tty/serial/imx.c 275 */[];
	void __exit cocci_id/* drivers/tty/serial/imx.c 2570 */;
	const struct platform_device_id cocci_id/* drivers/tty/serial/imx.c 256 */[];
	int __init cocci_id/* drivers/tty/serial/imx.c 2556 */;
	struct platform_driver cocci_id/* drivers/tty/serial/imx.c 2544 */;
	const struct dev_pm_ops cocci_id/* drivers/tty/serial/imx.c 2532 */;
	bool cocci_id/* drivers/tty/serial/imx.c 2427 */;
	struct imx_uart_data cocci_id/* drivers/tty/serial/imx.c 237 */[];
	struct imx_port_ucrs {
		unsigned int ucr1;
		unsigned int ucr2;
		unsigned int ucr3;
	} cocci_id/* drivers/tty/serial/imx.c 231 */;
	struct resource *cocci_id/* drivers/tty/serial/imx.c 2199 */;
	void __iomem *cocci_id/* drivers/tty/serial/imx.c 2196 */;
	struct platform_device *cocci_id/* drivers/tty/serial/imx.c 2193 */;
	struct imx_uart_data *cocci_id/* drivers/tty/serial/imx.c 2184 */;
	struct imxuart_platform_data *cocci_id/* drivers/tty/serial/imx.c 2181 */;
	struct device_node *cocci_id/* drivers/tty/serial/imx.c 2143 */;
	const char *cocci_id/* drivers/tty/serial/imx.c 2108 */;
	struct earlycon_device *cocci_id/* drivers/tty/serial/imx.c 2108 */;
	int __init cocci_id/* drivers/tty/serial/imx.c 2107 */;
	unsigned cocci_id/* drivers/tty/serial/imx.c 2100 */;
	struct console *cocci_id/* drivers/tty/serial/imx.c 2099 */;
	struct console cocci_id/* drivers/tty/serial/imx.c 2076 */;
	struct uart_driver cocci_id/* drivers/tty/serial/imx.c 2075 */;
	char *cocci_id/* drivers/tty/serial/imx.c 2027 */;
	unsigned int cocci_id/* drivers/tty/serial/imx.c 1974 */;
	int *cocci_id/* drivers/tty/serial/imx.c 1968 */;
	void __init cocci_id/* drivers/tty/serial/imx.c 1967 */;
	struct imx_port {
		struct uart_port port;
		struct timer_list timer;
		unsigned int old_status;
		unsigned int have_rtscts:1;
		unsigned int have_rtsgpio:1;
		unsigned int dte_mode:1;
		struct clk *clk_ipg;
		struct clk *clk_per;
		const struct imx_uart_data *devdata;
		struct mctrl_gpios *gpios;
		unsigned int ucr1;
		unsigned int ucr2;
		unsigned int ucr3;
		unsigned int ucr4;
		unsigned int ufcr;
		unsigned int dma_is_enabled:1;
		unsigned int dma_is_rxing:1;
		unsigned int dma_is_txing:1;
		struct dma_chan *dma_chan_rx,*dma_chan_tx;
		struct scatterlist rx_sgl,tx_sgl[2];
		void *rx_buf;
		struct circ_buf rx_ring;
		unsigned int rx_periods;
		dma_cookie_t rx_cookie;
		unsigned int tx_bytes;
		unsigned int dma_tx_nents;
		unsigned int saved_reg[10];
		bool context_saved;
	} cocci_id/* drivers/tty/serial/imx.c 195 */;
	struct imx_port_ucrs cocci_id/* drivers/tty/serial/imx.c 1909 */;
	struct imx_uart_data {
		unsigned uts_reg;
		enum imx_uart_type devtype;
	} cocci_id/* drivers/tty/serial/imx.c 190 */;
	struct imx_port *cocci_id/* drivers/tty/serial/imx.c 1889 */[UART_NR];
	const struct uart_ops cocci_id/* drivers/tty/serial/imx.c 1866 */;
	struct serial_rs485 *cocci_id/* drivers/tty/serial/imx.c 1828 */;
	enum imx_uart_type{IMX1_UART, IMX21_UART, IMX53_UART, IMX6Q_UART,} cocci_id/* drivers/tty/serial/imx.c 182 */;
	unsigned char cocci_id/* drivers/tty/serial/imx.c 1806 */;
	struct serial_struct *cocci_id/* drivers/tty/serial/imx.c 1724 */;
	speed_t cocci_id/* drivers/tty/serial/imx.c 1663 */;
	uint64_t cocci_id/* drivers/tty/serial/imx.c 1548 */;
	struct ktermios *cocci_id/* drivers/tty/serial/imx.c 1538 */;
	struct device *cocci_id/* drivers/tty/serial/imx.c 1229 */;
	struct dma_slave_config cocci_id/* drivers/tty/serial/imx.c 1228 */;
	struct tty_port *cocci_id/* drivers/tty/serial/imx.c 1162 */;
	enum dma_status cocci_id/* drivers/tty/serial/imx.c 1053 */;
	struct circ_buf *cocci_id/* drivers/tty/serial/imx.c 1052 */;
	struct dma_tx_state cocci_id/* drivers/tty/serial/imx.c 1051 */;
	struct scatterlist *cocci_id/* drivers/tty/serial/imx.c 1049 */;
	struct dma_chan *cocci_id/* drivers/tty/serial/imx.c 1048 */;
	void *cocci_id/* drivers/tty/serial/imx.c 1045 */;
	struct timer_list *cocci_id/* drivers/tty/serial/imx.c 1023 */;
	u32 cocci_id/* drivers/tty/serial/imx.c 1005 */;
	unsigned long cocci_id/* drivers/tty/serial/imx.c 1004 */;
	struct imx_port *cocci_id/* drivers/tty/serial/imx.c 1003 */;
	struct uart_port *cocci_id/* drivers/tty/serial/imx.c 1001 */;
	int cocci_id/* drivers/tty/serial/imx.c 1001 */;
	void cocci_id/* drivers/tty/serial/imx.c 1001 */;
}
