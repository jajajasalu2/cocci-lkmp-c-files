cocci_test_suite() {
	struct ktermios *cocci_id/* drivers/tty/serial/qcom_geni_serial.c 945 */;
	unsigned int *cocci_id/* drivers/tty/serial/qcom_geni_serial.c 927 */;
	unsigned long cocci_id/* drivers/tty/serial/qcom_geni_serial.c 915 */;
	irqreturn_t cocci_id/* drivers/tty/serial/qcom_geni_serial.c 769 */;
	void *cocci_id/* drivers/tty/serial/qcom_geni_serial.c 769 */;
	u8 cocci_id/* drivers/tty/serial/qcom_geni_serial.c 719 */[sizeof(u32)];
	struct circ_buf *cocci_id/* drivers/tty/serial/qcom_geni_serial.c 674 */;
	unsigned char *cocci_id/* drivers/tty/serial/qcom_geni_serial.c 526 */;
	struct tty_port *cocci_id/* drivers/tty/serial/qcom_geni_serial.c 483 */;
	unsigned char cocci_id/* drivers/tty/serial/qcom_geni_serial.c 482 */[sizeof(u32)];
	size_t cocci_id/* drivers/tty/serial/qcom_geni_serial.c 398 */;
	u32 cocci_id/* drivers/tty/serial/qcom_geni_serial.c 384 */;
	int cocci_id/* drivers/tty/serial/qcom_geni_serial.c 383 */;
	unsigned int cocci_id/* drivers/tty/serial/qcom_geni_serial.c 381 */;
	const char *cocci_id/* drivers/tty/serial/qcom_geni_serial.c 380 */;
	struct uart_port *cocci_id/* drivers/tty/serial/qcom_geni_serial.c 380 */;
	void cocci_id/* drivers/tty/serial/qcom_geni_serial.c 379 */;
	unsigned char cocci_id/* drivers/tty/serial/qcom_geni_serial.c 361 */;
	bool cocci_id/* drivers/tty/serial/qcom_geni_serial.c 254 */;
	struct qcom_geni_serial_port *cocci_id/* drivers/tty/serial/qcom_geni_serial.c 254 */;
	struct qcom_geni_serial_port cocci_id/* drivers/tty/serial/qcom_geni_serial.c 191 */;
	struct device_attribute *cocci_id/* drivers/tty/serial/qcom_geni_serial.c 168 */;
	char *cocci_id/* drivers/tty/serial/qcom_geni_serial.c 168 */;
	struct device *cocci_id/* drivers/tty/serial/qcom_geni_serial.c 167 */;
	ssize_t cocci_id/* drivers/tty/serial/qcom_geni_serial.c 167 */;
	void __exit cocci_id/* drivers/tty/serial/qcom_geni_serial.c 1429 */;
	struct qcom_geni_serial_port cocci_id/* drivers/tty/serial/qcom_geni_serial.c 140 */[GENI_UART_PORTS];
	struct platform_driver cocci_id/* drivers/tty/serial/qcom_geni_serial.c 1396 */;
	const struct of_device_id cocci_id/* drivers/tty/serial/qcom_geni_serial.c 1389 */[];
	const struct dev_pm_ops cocci_id/* drivers/tty/serial/qcom_geni_serial.c 1384 */;
	int __maybe_unused cocci_id/* drivers/tty/serial/qcom_geni_serial.c 1373 */;
	const unsigned long cocci_id/* drivers/tty/serial/qcom_geni_serial.c 132 */[];
	void cocci_id/* drivers/tty/serial/qcom_geni_serial.c 130 */(struct uart_port *uport);
	unsigned int cocci_id/* drivers/tty/serial/qcom_geni_serial.c 129 */(struct uart_port *port);
	int cocci_id/* drivers/tty/serial/qcom_geni_serial.c 127 */(struct uart_port *uport,
								    u32 bytes,
								    bool drop);
	struct resource *cocci_id/* drivers/tty/serial/qcom_geni_serial.c 1259 */;
	struct platform_device *cocci_id/* drivers/tty/serial/qcom_geni_serial.c 1253 */;
	struct uart_driver cocci_id/* drivers/tty/serial/qcom_geni_serial.c 125 */;
	const struct uart_ops cocci_id/* drivers/tty/serial/qcom_geni_serial.c 123 */;
	struct console cocci_id/* drivers/tty/serial/qcom_geni_serial.c 1166 */;
	struct uart_driver *cocci_id/* drivers/tty/serial/qcom_geni_serial.c 1156 */;
	int __init cocci_id/* drivers/tty/serial/qcom_geni_serial.c 1156 */;
	struct geni_se cocci_id/* drivers/tty/serial/qcom_geni_serial.c 1115 */;
	struct earlycon_device *cocci_id/* drivers/tty/serial/qcom_geni_serial.c 1105 */;
	struct console *cocci_id/* drivers/tty/serial/qcom_geni_serial.c 1061 */;
	struct qcom_geni_serial_port {
		struct uart_port uport;
		struct geni_se se;
		char name[20];
		u32 tx_fifo_depth;
		u32 tx_fifo_width;
		u32 rx_fifo_depth;
		bool setup;
		int (*handle_rx)(struct uart_port *uport, u32 bytes,
				 bool drop);
		unsigned int baud;
		unsigned int tx_bytes_pw;
		unsigned int rx_bytes_pw;
		u32 *rx_fifo;
		u32 loopback;
		bool brk;
		unsigned int tx_remaining;
		int wakeup_irq;
	} cocci_id/* drivers/tty/serial/qcom_geni_serial.c 103 */;
}
