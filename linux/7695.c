cocci_test_suite() {
	u32 cocci_id/* drivers/tty/serial/mxs-auart.c 876 */[1];
	struct dma_chan *cocci_id/* drivers/tty/serial/mxs-auart.c 875 */;
	struct scatterlist *cocci_id/* drivers/tty/serial/mxs-auart.c 874 */;
	struct dma_async_tx_descriptor *cocci_id/* drivers/tty/serial/mxs-auart.c 873 */;
	u32 cocci_id/* drivers/tty/serial/mxs-auart.c 853 */;
	struct tty_port *cocci_id/* drivers/tty/serial/mxs-auart.c 851 */;
	void *cocci_id/* drivers/tty/serial/mxs-auart.c 848 */;
	int cocci_id/* drivers/tty/serial/mxs-auart.c 847 */(struct mxs_auart_port *s);
	unsigned cocci_id/* drivers/tty/serial/mxs-auart.c 735 */;
	struct serial_struct *cocci_id/* drivers/tty/serial/mxs-auart.c 713 */;
	u8 cocci_id/* drivers/tty/serial/mxs-auart.c 651 */;
	struct circ_buf *cocci_id/* drivers/tty/serial/mxs-auart.c 534 */;
	void cocci_id/* drivers/tty/serial/mxs-auart.c 529 */(struct mxs_auart_port *s);
	struct mxs_auart_port cocci_id/* drivers/tty/serial/mxs-auart.c 527 */;
	void cocci_id/* drivers/tty/serial/mxs-auart.c 525 */(struct uart_port *u);
	void __iomem *cocci_id/* drivers/tty/serial/mxs-auart.c 520 */;
	const struct mxs_auart_port *cocci_id/* drivers/tty/serial/mxs-auart.c 493 */;
	bool cocci_id/* drivers/tty/serial/mxs-auart.c 482 */;
	const struct of_device_id cocci_id/* drivers/tty/serial/mxs-auart.c 458 */[];
	const struct platform_device_id cocci_id/* drivers/tty/serial/mxs-auart.c 450 */[];
	struct mxs_auart_port {
		struct uart_port port;
#define MXS_AUART_DMA_ENABLED 0x2
#define MXS_AUART_DMA_TX_SYNC 2
#define MXS_AUART_DMA_RX_READY 3
#define MXS_AUART_RTSCTS 4
		unsigned long flags;
		unsigned int mctrl_prev;
		enum mxs_auart_type devtype;
		const struct vendor_data *vendor;
		struct clk *clk;
		struct clk *clk_ahb;
		struct device *dev;
		struct scatterlist tx_sgl;
		struct dma_chan *tx_dma_chan;
		void *tx_dma_buf;
		struct scatterlist rx_sgl;
		struct dma_chan *rx_dma_chan;
		void *rx_dma_buf;
		struct mctrl_gpios *gpios;
		int gpio_irq[UART_GPIO_MAX];
		bool ms_irq_enabled;
	} cocci_id/* drivers/tty/serial/mxs-auart.c 420 */;
	const struct vendor_data cocci_id/* drivers/tty/serial/mxs-auart.c 412 */;
	const u16 cocci_id/* drivers/tty/serial/mxs-auart.c 386 */[REG_ARRAY_SIZE];
	enum{REG_CTRL0, REG_CTRL1, REG_CTRL2, REG_LINECTRL, REG_LINECTRL2, REG_INTR, REG_DATA, REG_STAT, REG_DEBUG, REG_VERSION, REG_AUTOBAUD, REG_ARRAY_SIZE,} cocci_id/* drivers/tty/serial/mxs-auart.c 369 */;
	struct vendor_data {
		const u16 *reg_offset;
	} cocci_id/* drivers/tty/serial/mxs-auart.c 365 */;
	enum mxs_auart_type{IMX23_AUART, IMX28_AUART, ASM9260_AUART,} cocci_id/* drivers/tty/serial/mxs-auart.c 359 */;
	struct uart_driver cocci_id/* drivers/tty/serial/mxs-auart.c 357 */;
	void __exit cocci_id/* drivers/tty/serial/mxs-auart.c 1803 */;
	int __init cocci_id/* drivers/tty/serial/mxs-auart.c 1784 */;
	struct platform_driver cocci_id/* drivers/tty/serial/mxs-auart.c 1775 */;
	struct resource *cocci_id/* drivers/tty/serial/mxs-auart.c 1651 */;
	const struct of_device_id *cocci_id/* drivers/tty/serial/mxs-auart.c 1646 */;
	struct platform_device *cocci_id/* drivers/tty/serial/mxs-auart.c 1644 */;
	enum mctrl_gpio_idx cocci_id/* drivers/tty/serial/mxs-auart.c 1608 */;
	struct gpio_desc *cocci_id/* drivers/tty/serial/mxs-auart.c 1581 */;
	struct device *cocci_id/* drivers/tty/serial/mxs-auart.c 1578 */;
	struct device_node *cocci_id/* drivers/tty/serial/mxs-auart.c 1557 */;
	struct console cocci_id/* drivers/tty/serial/mxs-auart.c 1472 */;
	int cocci_id/* drivers/tty/serial/mxs-auart.c 1439 */;
	struct console *cocci_id/* drivers/tty/serial/mxs-auart.c 1436 */;
	char *cocci_id/* drivers/tty/serial/mxs-auart.c 1436 */;
	int __init cocci_id/* drivers/tty/serial/mxs-auart.c 1435 */;
	unsigned int cocci_id/* drivers/tty/serial/mxs-auart.c 1405 */;
	struct uart_port *cocci_id/* drivers/tty/serial/mxs-auart.c 1404 */;
	struct mxs_auart_port *cocci_id/* drivers/tty/serial/mxs-auart.c 1401 */;
	int *cocci_id/* drivers/tty/serial/mxs-auart.c 1401 */;
	void __init cocci_id/* drivers/tty/serial/mxs-auart.c 1400 */;
	const char *cocci_id/* drivers/tty/serial/mxs-auart.c 1355 */;
	void cocci_id/* drivers/tty/serial/mxs-auart.c 1354 */;
	struct mxs_auart_port *cocci_id/* drivers/tty/serial/mxs-auart.c 1337 */[MXS_AUART_PORTS];
	const struct uart_ops cocci_id/* drivers/tty/serial/mxs-auart.c 1317 */;
	irqreturn_t cocci_id/* drivers/tty/serial/mxs-auart.c 1127 */;
	struct ktermios *cocci_id/* drivers/tty/serial/mxs-auart.c 1117 */;
}
