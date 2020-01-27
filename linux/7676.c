cocci_test_suite() {
	struct max3100_port {
		struct uart_port port;
		struct spi_device *spi;
		int cts;
		int tx_empty;
		spinlock_t conf_lock;
		int conf_commit;
		int conf;
		int rts_commit;
		int rts;
		int baud;
		int parity;
#define MAX3100_PARITY_ON 1
#define MAX3100_PARITY_ODD 2
#define MAX3100_7BIT 4
		int rx_enabled;
		int irq;
		int minor;
		int crystal;
		int loopback;
		struct workqueue_struct *workqueue;
		struct work_struct work;
		int force_end_work;
		int suspending;
		void (*max3100_hw_suspend)(int suspend);
		int poll_time;
		struct timer_list timer;
	} cocci_id/* drivers/tty/serial/max3100.c 92 */;
	struct spi_driver cocci_id/* drivers/tty/serial/max3100.c 895 */;
	struct device *cocci_id/* drivers/tty/serial/max3100.c 868 */;
	struct plat_max3100 *cocci_id/* drivers/tty/serial/max3100.c 740 */;
	struct spi_device *cocci_id/* drivers/tty/serial/max3100.c 737 */;
	struct uart_driver cocci_id/* drivers/tty/serial/max3100.c 727 */;
	const struct uart_ops cocci_id/* drivers/tty/serial/max3100.c 708 */;
	struct max3100_port cocci_id/* drivers/tty/serial/max3100.c 702 */;
	struct max3100_port *cocci_id/* drivers/tty/serial/max3100.c 701 */;
	struct uart_port *cocci_id/* drivers/tty/serial/max3100.c 699 */;
	int cocci_id/* drivers/tty/serial/max3100.c 699 */;
	void cocci_id/* drivers/tty/serial/max3100.c 699 */;
	struct serial_struct *cocci_id/* drivers/tty/serial/max3100.c 666 */;
	const char *cocci_id/* drivers/tty/serial/max3100.c 633 */;
	char cocci_id/* drivers/tty/serial/max3100.c 583 */[12];
	u32 cocci_id/* drivers/tty/serial/max3100.c 428 */;
	unsigned cocci_id/* drivers/tty/serial/max3100.c 427 */;
	struct ktermios *cocci_id/* drivers/tty/serial/max3100.c 420 */;
	unsigned int cocci_id/* drivers/tty/serial/max3100.c 385 */;
	irqreturn_t cocci_id/* drivers/tty/serial/max3100.c 324 */;
	void *cocci_id/* drivers/tty/serial/max3100.c 324 */;
	struct circ_buf *cocci_id/* drivers/tty/serial/max3100.c 262 */;
	struct work_struct *cocci_id/* drivers/tty/serial/max3100.c 256 */;
	struct spi_transfer cocci_id/* drivers/tty/serial/max3100.c 196 */;
	struct spi_message cocci_id/* drivers/tty/serial/max3100.c 193 */;
	struct timer_list *cocci_id/* drivers/tty/serial/max3100.c 181 */;
	void cocci_id/* drivers/tty/serial/max3100.c 173 */(struct work_struct *w);
	u16 *cocci_id/* drivers/tty/serial/max3100.c 162 */;
	u16 cocci_id/* drivers/tty/serial/max3100.c 157 */;
	struct max3100_port *cocci_id/* drivers/tty/serial/max3100.c 136 */[MAX_MAX3100];
}
