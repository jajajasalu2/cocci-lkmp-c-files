cocci_test_suite() {
	u32 cocci_id/* drivers/tty/serial/8250/8250_lpss.c 80 */;
	unsigned long cocci_id/* drivers/tty/serial/8250/8250_lpss.c 77 */;
	struct ktermios *cocci_id/* drivers/tty/serial/8250/8250_lpss.c 72 */;
	void cocci_id/* drivers/tty/serial/8250/8250_lpss.c 72 */;
	struct dw8250_port_data *cocci_id/* drivers/tty/serial/8250/8250_lpss.c 67 */;
	struct lpss8250 {
		struct dw8250_port_data data;
		struct lpss8250_board *board;
		struct dw_dma_chip dma_chip;
		struct dw_dma_slave dma_param;
		u8 dma_maxburst;
	} cocci_id/* drivers/tty/serial/8250/8250_lpss.c 57 */;
	struct lpss8250_board {
		unsigned long freq;
		unsigned int base_baud;
		int (*setup)(struct lpss8250 *, struct uart_port *p);
		void (*exit)(struct lpss8250 *);
	} cocci_id/* drivers/tty/serial/8250/8250_lpss.c 50 */;
	struct lpss8250 cocci_id/* drivers/tty/serial/8250/8250_lpss.c 48 */;
	struct pci_driver cocci_id/* drivers/tty/serial/8250/8250_lpss.c 386 */;
	const struct pci_device_id cocci_id/* drivers/tty/serial/8250/8250_lpss.c 368 */[];
	const struct lpss8250_board cocci_id/* drivers/tty/serial/8250/8250_lpss.c 350 */;
	struct lpss8250_board *cocci_id/* drivers/tty/serial/8250/8250_lpss.c 295 */;
	struct uart_8250_port cocci_id/* drivers/tty/serial/8250/8250_lpss.c 277 */;
	const struct pci_device_id *cocci_id/* drivers/tty/serial/8250/8250_lpss.c 275 */;
	struct device *cocci_id/* drivers/tty/serial/8250/8250_lpss.c 248 */;
	struct uart_8250_dma *cocci_id/* drivers/tty/serial/8250/8250_lpss.c 246 */;
	struct uart_8250_port *cocci_id/* drivers/tty/serial/8250/8250_lpss.c 244 */;
	bool cocci_id/* drivers/tty/serial/8250/8250_lpss.c 233 */;
	struct dma_chan *cocci_id/* drivers/tty/serial/8250/8250_lpss.c 233 */;
	void *cocci_id/* drivers/tty/serial/8250/8250_lpss.c 233 */;
	struct dw_dma_chip *cocci_id/* drivers/tty/serial/8250/8250_lpss.c 207 */;
	const struct dw_dma_platform_data cocci_id/* drivers/tty/serial/8250/8250_lpss.c 160 */;
	struct pci_dev *cocci_id/* drivers/tty/serial/8250/8250_lpss.c 123 */;
	struct dw_dma_slave *cocci_id/* drivers/tty/serial/8250/8250_lpss.c 122 */;
	struct lpss8250 *cocci_id/* drivers/tty/serial/8250/8250_lpss.c 120 */;
	int cocci_id/* drivers/tty/serial/8250/8250_lpss.c 120 */;
	struct uart_port *cocci_id/* drivers/tty/serial/8250/8250_lpss.c 110 */;
	unsigned int cocci_id/* drivers/tty/serial/8250/8250_lpss.c 110 */;
}
