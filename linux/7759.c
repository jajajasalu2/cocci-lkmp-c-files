cocci_test_suite() {
	unsigned int *cocci_id/* drivers/tty/serial/serial_mctrl_gpio.c 76 */;
	struct gpio_desc *cocci_id/* drivers/tty/serial/serial_mctrl_gpio.c 66 */;
	struct gpio_desc *cocci_id/* drivers/tty/serial/serial_mctrl_gpio.c 48 */[UART_GPIO_MAX];
	bool cocci_id/* drivers/tty/serial/serial_mctrl_gpio.c 40 */;
	unsigned int cocci_id/* drivers/tty/serial/serial_mctrl_gpio.c 40 */;
	enum mctrl_gpio_idx cocci_id/* drivers/tty/serial/serial_mctrl_gpio.c 283 */;
	struct mctrl_gpios *cocci_id/* drivers/tty/serial/serial_mctrl_gpio.c 281 */;
	void cocci_id/* drivers/tty/serial/serial_mctrl_gpio.c 281 */;
	const struct {
		const char *name;
		unsigned int mctrl;
		enum gpiod_flags flags;
	} cocci_id/* drivers/tty/serial/serial_mctrl_gpio.c 27 */[UART_GPIO_MAX];
	struct device *cocci_id/* drivers/tty/serial/serial_mctrl_gpio.c 238 */;
	int cocci_id/* drivers/tty/serial/serial_mctrl_gpio.c 204 */;
	struct uart_port *cocci_id/* drivers/tty/serial/serial_mctrl_gpio.c 192 */;
	struct mctrl_gpios {
		struct uart_port *port;
		struct gpio_desc *gpio[UART_GPIO_MAX];
		int irq[UART_GPIO_MAX];
		unsigned int mctrl_prev;
		bool mctrl_on;
	} cocci_id/* drivers/tty/serial/serial_mctrl_gpio.c 19 */;
	unsigned long cocci_id/* drivers/tty/serial/serial_mctrl_gpio.c 162 */;
	u32 cocci_id/* drivers/tty/serial/serial_mctrl_gpio.c 160 */;
	irqreturn_t cocci_id/* drivers/tty/serial/serial_mctrl_gpio.c 156 */;
	void *cocci_id/* drivers/tty/serial/serial_mctrl_gpio.c 156 */;
	char *cocci_id/* drivers/tty/serial/serial_mctrl_gpio.c 127 */;
}
