cocci_test_suite() {
	struct ktermios *cocci_id/* drivers/tty/serial/max310x.c 898 */;
	struct max310x_one cocci_id/* drivers/tty/serial/max310x.c 875 */;
	struct work_struct *cocci_id/* drivers/tty/serial/max310x.c 873 */;
	bool cocci_id/* drivers/tty/serial/max310x.c 829 */;
	irqreturn_t cocci_id/* drivers/tty/serial/max310x.c 826 */;
	void *cocci_id/* drivers/tty/serial/max310x.c 826 */;
	struct circ_buf *cocci_id/* drivers/tty/serial/max310x.c 750 */;
	struct spi_transfer cocci_id/* drivers/tty/serial/max310x.c 642 */[];
	struct max310x_one *cocci_id/* drivers/tty/serial/max310x.c 641 */;
	u8 *cocci_id/* drivers/tty/serial/max310x.c 639 */;
	long cocci_id/* drivers/tty/serial/max310x.c 559 */;
	long *cocci_id/* drivers/tty/serial/max310x.c 542 */;
	const struct max310x_devtype cocci_id/* drivers/tty/serial/max310x.c 440 */;
	struct uart_port *cocci_id/* drivers/tty/serial/max310x.c 407 */;
	void cocci_id/* drivers/tty/serial/max310x.c 407 */;
	unsigned int cocci_id/* drivers/tty/serial/max310x.c 388 */;
	struct max310x_port *cocci_id/* drivers/tty/serial/max310x.c 387 */;
	struct device *cocci_id/* drivers/tty/serial/max310x.c 385 */;
	int cocci_id/* drivers/tty/serial/max310x.c 385 */;
	u8 cocci_id/* drivers/tty/serial/max310x.c 290 */;
	struct uart_driver cocci_id/* drivers/tty/serial/max310x.c 279 */;
	struct max310x_port {
		struct max310x_devtype *devtype;
		struct regmap *regmap;
		struct clk *clk;
#ifdef CONFIG_GPIOLIB
		struct gpio_chip gpio;
#endif
		struct max310x_one p[0];
	} cocci_id/* drivers/tty/serial/max310x.c 269 */;
	struct max310x_one {
		struct uart_port port;
		struct work_struct tx_work;
		struct work_struct md_work;
		struct work_struct rs_work;
		u8 wr_header;
		u8 rd_header;
		u8 rx_buf[MAX310X_FIFO_SIZE];
	} cocci_id/* drivers/tty/serial/max310x.c 256 */;
	struct max310x_devtype {
		char name[9];
		int nr;
		u8 mode1;
		int (*detect)(struct device *);
		void (*power)(struct uart_port *, int);
	} cocci_id/* drivers/tty/serial/max310x.c 248 */;
	void __exit cocci_id/* drivers/tty/serial/max310x.c 1537 */;
	int __init cocci_id/* drivers/tty/serial/max310x.c 1519 */;
	struct spi_driver cocci_id/* drivers/tty/serial/max310x.c 1507 */;
	const struct spi_device_id cocci_id/* drivers/tty/serial/max310x.c 1498 */[];
	const struct spi_device_id *cocci_id/* drivers/tty/serial/max310x.c 1482 */;
	const struct of_device_id *cocci_id/* drivers/tty/serial/max310x.c 1475 */;
	struct spi_device *cocci_id/* drivers/tty/serial/max310x.c 1460 */;
	struct regmap_config cocci_id/* drivers/tty/serial/max310x.c 1449 */;
	const struct of_device_id __maybe_unused cocci_id/* drivers/tty/serial/max310x.c 1440 */[];
	void __iomem *cocci_id/* drivers/tty/serial/max310x.c 1350 */;
	struct clk *cocci_id/* drivers/tty/serial/max310x.c 1257 */;
	struct regmap *cocci_id/* drivers/tty/serial/max310x.c 1254 */;
	struct max310x_devtype *cocci_id/* drivers/tty/serial/max310x.c 1253 */;
	unsigned long cocci_id/* drivers/tty/serial/max310x.c 1232 */;
	struct gpio_chip *cocci_id/* drivers/tty/serial/max310x.c 1207 */;
	unsigned cocci_id/* drivers/tty/serial/max310x.c 1207 */;
	int __maybe_unused cocci_id/* drivers/tty/serial/max310x.c 1171 */;
	const struct uart_ops cocci_id/* drivers/tty/serial/max310x.c 1140 */;
	struct serial_struct *cocci_id/* drivers/tty/serial/max310x.c 1125 */;
	const char *cocci_id/* drivers/tty/serial/max310x.c 1106 */;
	struct serial_rs485 *cocci_id/* drivers/tty/serial/max310x.c 1030 */;
}
