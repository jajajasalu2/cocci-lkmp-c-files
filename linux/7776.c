cocci_test_suite() {
	bool cocci_id/* drivers/tty/serial/sc16is7xx.c 969 */;
	struct sc16is7xx_one *cocci_id/* drivers/tty/serial/sc16is7xx.c 966 */;
	struct sc16is7xx_port *cocci_id/* drivers/tty/serial/sc16is7xx.c 965 */;
	struct serial_rs485 *cocci_id/* drivers/tty/serial/sc16is7xx.c 963 */;
	struct ktermios *cocci_id/* drivers/tty/serial/sc16is7xx.c 867 */;
	struct uart_port *cocci_id/* drivers/tty/serial/sc16is7xx.c 859 */;
	struct sc16is7xx_one_config cocci_id/* drivers/tty/serial/sc16is7xx.c 775 */;
	const u32 cocci_id/* drivers/tty/serial/sc16is7xx.c 754 */;
	irqreturn_t cocci_id/* drivers/tty/serial/sc16is7xx.c 732 */;
	void *cocci_id/* drivers/tty/serial/sc16is7xx.c 732 */;
	struct kthread_work *cocci_id/* drivers/tty/serial/sc16is7xx.c 713 */;
	struct circ_buf *cocci_id/* drivers/tty/serial/sc16is7xx.c 636 */;
	const struct sc16is7xx_devtype cocci_id/* drivers/tty/serial/sc16is7xx.c 431 */;
	int cocci_id/* drivers/tty/serial/sc16is7xx.c 411 */;
	void cocci_id/* drivers/tty/serial/sc16is7xx.c 411 */;
	u8 cocci_id/* drivers/tty/serial/sc16is7xx.c 376 */;
	const u8 cocci_id/* drivers/tty/serial/sc16is7xx.c 375 */;
	unsigned int cocci_id/* drivers/tty/serial/sc16is7xx.c 372 */;
	struct sc16is7xx_one cocci_id/* drivers/tty/serial/sc16is7xx.c 344 */;
	struct sc16is7xx_port cocci_id/* drivers/tty/serial/sc16is7xx.c 343 */;
	struct uart_driver cocci_id/* drivers/tty/serial/sc16is7xx.c 337 */;
	struct sc16is7xx_port {
		const struct sc16is7xx_devtype *devtype;
		struct regmap *regmap;
		struct clk *clk;
#ifdef CONFIG_GPIOLIB
		struct gpio_chip gpio;
#endif
		unsigned char buf[SC16IS7XX_FIFO_SIZE];
		struct kthread_worker kworker;
		struct task_struct *kworker_task;
		struct kthread_work irq_work;
		struct mutex efr_lock;
		struct sc16is7xx_one p[0];
	} cocci_id/* drivers/tty/serial/sc16is7xx.c 320 */;
	struct sc16is7xx_one {
		struct uart_port port;
		u8 line;
		struct kthread_work tx_work;
		struct kthread_work reg_work;
		struct sc16is7xx_one_config config;
	} cocci_id/* drivers/tty/serial/sc16is7xx.c 312 */;
	struct sc16is7xx_one_config {
		unsigned int flags;
		u8 ier_clear;
	} cocci_id/* drivers/tty/serial/sc16is7xx.c 307 */;
	struct sc16is7xx_devtype {
		char name[10];
		int nr_gpio;
		int nr_uart;
	} cocci_id/* drivers/tty/serial/sc16is7xx.c 297 */;
	void __exit cocci_id/* drivers/tty/serial/sc16is7xx.c 1535 */;
	int __init cocci_id/* drivers/tty/serial/sc16is7xx.c 1496 */;
	struct i2c_driver cocci_id/* drivers/tty/serial/sc16is7xx.c 1484 */;
	const struct i2c_device_id cocci_id/* drivers/tty/serial/sc16is7xx.c 1472 */[];
	struct sc16is7xx_devtype *cocci_id/* drivers/tty/serial/sc16is7xx.c 1456 */;
	struct regmap *cocci_id/* drivers/tty/serial/sc16is7xx.c 1449 */;
	unsigned long cocci_id/* drivers/tty/serial/sc16is7xx.c 1448 */;
	const struct sc16is7xx_devtype *cocci_id/* drivers/tty/serial/sc16is7xx.c 1447 */;
	const struct i2c_device_id *cocci_id/* drivers/tty/serial/sc16is7xx.c 1445 */;
	struct i2c_client *cocci_id/* drivers/tty/serial/sc16is7xx.c 1444 */;
	struct spi_driver cocci_id/* drivers/tty/serial/sc16is7xx.c 1430 */;
	const struct spi_device_id cocci_id/* drivers/tty/serial/sc16is7xx.c 1417 */[];
	const struct spi_device_id *cocci_id/* drivers/tty/serial/sc16is7xx.c 1399 */;
	struct spi_device *cocci_id/* drivers/tty/serial/sc16is7xx.c 1378 */;
	struct regmap_config cocci_id/* drivers/tty/serial/sc16is7xx.c 1368 */;
	const struct of_device_id __maybe_unused cocci_id/* drivers/tty/serial/sc16is7xx.c 1357 */[];
	u32 cocci_id/* drivers/tty/serial/sc16is7xx.c 1183 */;
	struct sched_param cocci_id/* drivers/tty/serial/sc16is7xx.c 1181 */;
	struct device *cocci_id/* drivers/tty/serial/sc16is7xx.c 1177 */;
	unsigned cocci_id/* drivers/tty/serial/sc16is7xx.c 1148 */;
	struct gpio_chip *cocci_id/* drivers/tty/serial/sc16is7xx.c 1147 */;
	const struct uart_ops cocci_id/* drivers/tty/serial/sc16is7xx.c 1107 */;
	struct serial_struct *cocci_id/* drivers/tty/serial/sc16is7xx.c 1086 */;
	const char *cocci_id/* drivers/tty/serial/sc16is7xx.c 1066 */;
}
