cocci_test_suite() {
	struct pci_driver cocci_id/* drivers/tty/serial/8250/8250_exar.c 786 */;
	const struct pci_device_id cocci_id/* drivers/tty/serial/8250/8250_exar.c 747 */[];
	const struct exar8250_board cocci_id/* drivers/tty/serial/8250/8250_exar.c 695 */;
	struct device *cocci_id/* drivers/tty/serial/8250/8250_exar.c 664 */;
	int __maybe_unused cocci_id/* drivers/tty/serial/8250/8250_exar.c 664 */;
	struct uart_8250_port cocci_id/* drivers/tty/serial/8250/8250_exar.c 567 */;
	struct exar8250_board *cocci_id/* drivers/tty/serial/8250/8250_exar.c 566 */;
	const struct pci_device_id *cocci_id/* drivers/tty/serial/8250/8250_exar.c 563 */;
	irqreturn_t cocci_id/* drivers/tty/serial/8250/8250_exar.c 555 */;
	void cocci_id/* drivers/tty/serial/8250/8250_exar.c 536 */;
	const struct dmi_system_id *cocci_id/* drivers/tty/serial/8250/8250_exar.c 483 */;
	const struct exar8250_platform *cocci_id/* drivers/tty/serial/8250/8250_exar.c 482 */;
	const struct dmi_system_id cocci_id/* drivers/tty/serial/8250/8250_exar.c 468 */[];
	const struct exar8250_platform cocci_id/* drivers/tty/serial/8250/8250_exar.c 398 */;
	u8 cocci_id/* drivers/tty/serial/8250/8250_exar.c 380 */;
	u8 __iomem *cocci_id/* drivers/tty/serial/8250/8250_exar.c 379 */;
	struct serial_rs485 *cocci_id/* drivers/tty/serial/8250/8250_exar.c 376 */;
	const struct property_entry cocci_id/* drivers/tty/serial/8250/8250_exar.c 359 */[];
	struct platform_device *cocci_id/* drivers/tty/serial/8250/8250_exar.c 341 */;
	const struct property_entry *cocci_id/* drivers/tty/serial/8250/8250_exar.c 339 */;
	struct pci_dev *cocci_id/* drivers/tty/serial/8250/8250_exar.c 338 */;
	void *cocci_id/* drivers/tty/serial/8250/8250_exar.c 337 */;
	unsigned char cocci_id/* drivers/tty/serial/8250/8250_exar.c 212 */;
	const struct exar8250_board *cocci_id/* drivers/tty/serial/8250/8250_exar.c 210 */;
	struct uart_8250_port *cocci_id/* drivers/tty/serial/8250/8250_exar.c 208 */;
	unsigned int cocci_id/* drivers/tty/serial/8250/8250_exar.c 207 */;
	struct exar8250 *cocci_id/* drivers/tty/serial/8250/8250_exar.c 206 */;
	int cocci_id/* drivers/tty/serial/8250/8250_exar.c 206 */;
	struct circ_buf *cocci_id/* drivers/tty/serial/8250/8250_exar.c 191 */;
	bool cocci_id/* drivers/tty/serial/8250/8250_exar.c 189 */;
	unsigned int *cocci_id/* drivers/tty/serial/8250/8250_exar.c 149 */;
	struct uart_port *cocci_id/* drivers/tty/serial/8250/8250_exar.c 133 */;
	struct exar8250 {
		unsigned int nr;
		struct exar8250_board *board;
		void __iomem *virt;
		int line[0];
	} cocci_id/* drivers/tty/serial/8250/8250_exar.c 126 */;
	struct exar8250_board {
		unsigned int num_ports;
		unsigned int reg_shift;
		int (*setup)(struct exar8250 *, struct pci_dev *,
			     struct uart_8250_port *, int);
		void (*exit)(struct pci_dev *pcidev);
	} cocci_id/* drivers/tty/serial/8250/8250_exar.c 118 */;
	struct exar8250_platform {
		int (*rs485_config)(struct uart_port *, struct serial_rs485 *);
		int (*register_gpio)(struct pci_dev *,
				     struct uart_8250_port *);
	} cocci_id/* drivers/tty/serial/8250/8250_exar.c 106 */;
	struct exar8250 cocci_id/* drivers/tty/serial/8250/8250_exar.c 104 */;
}
