cocci_test_suite() {
	struct circ_buf *cocci_id/* drivers/tty/serial/tegra-tcu.c 95 */;
	bool cocci_id/* drivers/tty/serial/tegra-tcu.c 67 */;
	struct platform_driver cocci_id/* drivers/tty/serial/tegra-tcu.c 286 */;
	const struct of_device_id cocci_id/* drivers/tty/serial/tegra-tcu.c 281 */[];
	struct uart_port *cocci_id/* drivers/tty/serial/tegra-tcu.c 179 */;
	struct platform_device *cocci_id/* drivers/tty/serial/tegra-tcu.c 177 */;
	u32 cocci_id/* drivers/tty/serial/tegra-tcu.c 165 */;
	unsigned long cocci_id/* drivers/tty/serial/tegra-tcu.c 165 */;
	struct tty_port *cocci_id/* drivers/tty/serial/tegra-tcu.c 164 */;
	struct mbox_client *cocci_id/* drivers/tty/serial/tegra-tcu.c 161 */;
	void *cocci_id/* drivers/tty/serial/tegra-tcu.c 161 */;
	struct console *cocci_id/* drivers/tty/serial/tegra-tcu.c 155 */;
	char *cocci_id/* drivers/tty/serial/tegra-tcu.c 155 */;
	int cocci_id/* drivers/tty/serial/tegra-tcu.c 155 */;
	struct tegra_tcu cocci_id/* drivers/tty/serial/tegra-tcu.c 150 */;
	struct tegra_tcu *cocci_id/* drivers/tty/serial/tegra-tcu.c 150 */;
	unsigned int cocci_id/* drivers/tty/serial/tegra-tcu.c 148 */;
	const char *cocci_id/* drivers/tty/serial/tegra-tcu.c 147 */;
	void cocci_id/* drivers/tty/serial/tegra-tcu.c 147 */;
	const struct uart_ops cocci_id/* drivers/tty/serial/tegra-tcu.c 133 */;
	struct ktermios *cocci_id/* drivers/tty/serial/tegra-tcu.c 128 */;
	struct tegra_tcu {
		struct uart_driver driver;
#if IS_ENABLED(CONFIG_SERIAL_TEGRA_TCU_CONSOLE)
		struct console console;
#endif
		struct uart_port port;
		struct mbox_client tx_client,rx_client;
		struct mbox_chan *tx,*rx;
	} cocci_id/*  1 */;
}
