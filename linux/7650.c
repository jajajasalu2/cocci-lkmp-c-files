cocci_test_suite() {
	enum dma_data_direction cocci_id/* drivers/tty/goldfish.c 82 */;
	dma_addr_t cocci_id/* drivers/tty/goldfish.c 81 */;
	void *cocci_id/* drivers/tty/goldfish.c 62 */;
	void __iomem *cocci_id/* drivers/tty/goldfish.c 59 */;
	int cocci_id/* drivers/tty/goldfish.c 56 */;
	unsigned int cocci_id/* drivers/tty/goldfish.c 55 */;
	unsigned long cocci_id/* drivers/tty/goldfish.c 54 */;
	struct goldfish_tty *cocci_id/* drivers/tty/goldfish.c 53 */;
	void cocci_id/* drivers/tty/goldfish.c 53 */;
	u32 cocci_id/* drivers/tty/goldfish.c 50 */;
	struct platform_driver cocci_id/* drivers/tty/goldfish.c 471 */;
	const struct of_device_id cocci_id/* drivers/tty/goldfish.c 464 */[];
	int __init cocci_id/* drivers/tty/goldfish.c 451 */;
	struct earlycon_device *cocci_id/* drivers/tty/goldfish.c 446 */;
	const char *cocci_id/* drivers/tty/goldfish.c 444 */;
	struct console *cocci_id/* drivers/tty/goldfish.c 444 */;
	struct uart_port *cocci_id/* drivers/tty/goldfish.c 439 */;
	struct goldfish_tty {
		struct tty_port port;
		spinlock_t lock;
		void __iomem *base;
		u32 irq;
		int opencount;
		struct console console;
		u32 version;
		struct device *dev;
	} cocci_id/* drivers/tty/goldfish.c 36 */;
	struct device *cocci_id/* drivers/tty/goldfish.c 299 */;
	struct resource *cocci_id/* drivers/tty/goldfish.c 298 */;
	struct platform_device *cocci_id/* drivers/tty/goldfish.c 294 */;
	const struct tty_operations cocci_id/* drivers/tty/goldfish.c 235 */;
	const struct tty_port_operations cocci_id/* drivers/tty/goldfish.c 230 */;
	unsigned cocci_id/* drivers/tty/goldfish.c 223 */;
	char *cocci_id/* drivers/tty/goldfish.c 221 */;
	int *cocci_id/* drivers/tty/goldfish.c 215 */;
	struct tty_driver *cocci_id/* drivers/tty/goldfish.c 214 */;
	const unsigned char *cocci_id/* drivers/tty/goldfish.c 189 */;
	struct file *cocci_id/* drivers/tty/goldfish.c 179 */;
	struct goldfish_tty cocci_id/* drivers/tty/goldfish.c 160 */;
	struct tty_struct *cocci_id/* drivers/tty/goldfish.c 158 */;
	struct tty_port *cocci_id/* drivers/tty/goldfish.c 158 */;
	unsigned char *cocci_id/* drivers/tty/goldfish.c 142 */;
	irqreturn_t cocci_id/* drivers/tty/goldfish.c 137 */;
}
