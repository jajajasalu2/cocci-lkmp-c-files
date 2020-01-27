cocci_test_suite() {
	struct mid8250 {
		int line;
		int dma_index;
		struct pci_dev *dma_dev;
		struct uart_8250_dma dma;
		struct mid8250_board *board;
		struct hsu_dma_chip dma_chip;
	} cocci_id/* drivers/tty/serial/8250/8250_mid.c 42 */;
	struct pci_driver cocci_id/* drivers/tty/serial/8250/8250_mid.c 384 */;
	const struct pci_device_id cocci_id/* drivers/tty/serial/8250/8250_mid.c 373 */[];
	const struct mid8250_board cocci_id/* drivers/tty/serial/8250/8250_mid.c 363 */;
	struct mid8250_board {
		unsigned int flags;
		unsigned long freq;
		unsigned int base_baud;
		int (*setup)(struct mid8250 *, struct uart_port *p);
		void (*exit)(struct mid8250 *);
	} cocci_id/* drivers/tty/serial/8250/8250_mid.c 34 */;
	struct mid8250 cocci_id/* drivers/tty/serial/8250/8250_mid.c 32 */;
	struct mid8250_board *cocci_id/* drivers/tty/serial/8250/8250_mid.c 296 */;
	struct uart_8250_port cocci_id/* drivers/tty/serial/8250/8250_mid.c 283 */;
	const struct pci_device_id *cocci_id/* drivers/tty/serial/8250/8250_mid.c 281 */;
	struct device *cocci_id/* drivers/tty/serial/8250/8250_mid.c 249 */;
	struct uart_8250_dma *cocci_id/* drivers/tty/serial/8250/8250_mid.c 248 */;
	struct hsu_dma_slave *cocci_id/* drivers/tty/serial/8250/8250_mid.c 237 */;
	bool cocci_id/* drivers/tty/serial/8250/8250_mid.c 235 */;
	struct dma_chan *cocci_id/* drivers/tty/serial/8250/8250_mid.c 235 */;
	void *cocci_id/* drivers/tty/serial/8250/8250_mid.c 235 */;
	unsigned long cocci_id/* drivers/tty/serial/8250/8250_mid.c 206 */;
	unsigned short cocci_id/* drivers/tty/serial/8250/8250_mid.c 205 */;
	struct ktermios *cocci_id/* drivers/tty/serial/8250/8250_mid.c 200 */;
	struct mid8250 *cocci_id/* drivers/tty/serial/8250/8250_mid.c 190 */;
	void cocci_id/* drivers/tty/serial/8250/8250_mid.c 190 */;
	struct pci_dev *cocci_id/* drivers/tty/serial/8250/8250_mid.c 161 */;
	struct hsu_dma_chip *cocci_id/* drivers/tty/serial/8250/8250_mid.c 160 */;
	u32 cocci_id/* drivers/tty/serial/8250/8250_mid.c 132 */;
	unsigned int cocci_id/* drivers/tty/serial/8250/8250_mid.c 131 */;
	struct uart_8250_port *cocci_id/* drivers/tty/serial/8250/8250_mid.c 130 */;
	struct uart_port *cocci_id/* drivers/tty/serial/8250/8250_mid.c 127 */;
	int cocci_id/* drivers/tty/serial/8250/8250_mid.c 127 */;
}
