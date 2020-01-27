cocci_test_suite() {
	struct sccnxp_pdata cocci_id/* drivers/tty/serial/sccnxp.c 953 */;
	void (*cocci_id/* drivers/tty/serial/sccnxp.c 932 */)(void *);
	struct sccnxp_chip *cocci_id/* drivers/tty/serial/sccnxp.c 907 */;
	struct sccnxp_port cocci_id/* drivers/tty/serial/sccnxp.c 898 */;
	struct clk *cocci_id/* drivers/tty/serial/sccnxp.c 892 */;
	void __iomem *cocci_id/* drivers/tty/serial/sccnxp.c 891 */;
	struct sccnxp_pdata *cocci_id/* drivers/tty/serial/sccnxp.c 888 */;
	struct resource *cocci_id/* drivers/tty/serial/sccnxp.c 887 */;
	struct platform_device *cocci_id/* drivers/tty/serial/sccnxp.c 885 */;
	const struct platform_device_id cocci_id/* drivers/tty/serial/sccnxp.c 872 */[];
	struct console *cocci_id/* drivers/tty/serial/sccnxp.c 859 */;
	char *cocci_id/* drivers/tty/serial/sccnxp.c 859 */;
	const char *cocci_id/* drivers/tty/serial/sccnxp.c 848 */;
	unsigned cocci_id/* drivers/tty/serial/sccnxp.c 848 */;
	const struct uart_ops cocci_id/* drivers/tty/serial/sccnxp.c 816 */;
	struct serial_struct *cocci_id/* drivers/tty/serial/sccnxp.c 806 */;
	struct ktermios *cocci_id/* drivers/tty/serial/sccnxp.c 643 */;
	unsigned long cocci_id/* drivers/tty/serial/sccnxp.c 634 */;
	struct sccnxp_port *cocci_id/* drivers/tty/serial/sccnxp.c 633 */;
	struct uart_port *cocci_id/* drivers/tty/serial/sccnxp.c 631 */;
	int cocci_id/* drivers/tty/serial/sccnxp.c 631 */;
	void cocci_id/* drivers/tty/serial/sccnxp.c 631 */;
	u8 cocci_id/* drivers/tty/serial/sccnxp.c 589 */;
	unsigned int cocci_id/* drivers/tty/serial/sccnxp.c 587 */;
	irqreturn_t cocci_id/* drivers/tty/serial/sccnxp.c 515 */;
	void *cocci_id/* drivers/tty/serial/sccnxp.c 515 */;
	struct timer_list *cocci_id/* drivers/tty/serial/sccnxp.c 503 */;
	struct circ_buf *cocci_id/* drivers/tty/serial/sccnxp.c 447 */;
	const struct {
		u8 csr;
		u8 acr;
		u8 mr0;
		int baud;
	} cocci_id/* drivers/tty/serial/sccnxp.c 270 */[];
	int *cocci_id/* drivers/tty/serial/sccnxp.c 258 */;
	const struct sccnxp_chip cocci_id/* drivers/tty/serial/sccnxp.c 139 */;
	struct sccnxp_port {
		struct uart_driver uart;
		struct uart_port port[SCCNXP_MAX_UARTS];
		bool opened[SCCNXP_MAX_UARTS];
		int irq;
		u8 imr;
		struct sccnxp_chip *chip;
#ifdef CONFIG_SERIAL_SCCNXP_CONSOLE
		struct console console;
#endif
		spinlock_t lock;
		bool poll;
		struct timer_list timer;
		struct sccnxp_pdata pdata;
		struct regulator *regulator;
	} cocci_id/* drivers/tty/serial/sccnxp.c 115 */;
	struct platform_driver cocci_id/* drivers/tty/serial/sccnxp.c 1059 */;
	struct sccnxp_chip {
		const char *name;
		unsigned int nr;
		unsigned long freq_min;
		unsigned long freq_std;
		unsigned long freq_max;
		unsigned int flags;
		unsigned int fifosize;
		unsigned int trwd;
	} cocci_id/* drivers/tty/serial/sccnxp.c 103 */;
}
