cocci_test_suite() {
	struct seq_file *cocci_id/* drivers/mmc/core/sdio_uart.c 962 */;
	void *cocci_id/* drivers/mmc/core/sdio_uart.c 962 */;
	struct sdio_uart_port *cocci_id/* drivers/mmc/core/sdio_uart.c 83 */[UART_NR];
	char cocci_id/* drivers/mmc/core/sdio_uart.c 812 */;
	const unsigned char *cocci_id/* drivers/mmc/core/sdio_uart.c 777 */;
	struct file *cocci_id/* drivers/mmc/core/sdio_uart.c 765 */;
	struct sdio_uart_port {
		struct tty_port port;
		unsigned int index;
		struct sdio_func *func;
		struct mutex func_lock;
		struct task_struct *in_sdio_uart_irq;
		unsigned int regs_offset;
		struct kfifo xmit_fifo;
		spinlock_t write_lock;
		struct uart_icount icount;
		unsigned int uartclk;
		unsigned int mctrl;
		unsigned int rx_mctrl;
		unsigned int read_status_mask;
		unsigned int ignore_status_mask;
		unsigned char x_char;
		unsigned char ier;
		unsigned char lcr;
	} cocci_id/* drivers/mmc/core/sdio_uart.c 63 */;
	struct sdio_uart_port cocci_id/* drivers/mmc/core/sdio_uart.c 597 */;
	struct tty_struct *cocci_id/* drivers/mmc/core/sdio_uart.c 594 */;
	struct tty_port *cocci_id/* drivers/mmc/core/sdio_uart.c 594 */;
	struct sdio_func *cocci_id/* drivers/mmc/core/sdio_uart.c 512 */;
	struct uart_icount {
		__u32 cts;
		__u32 dsr;
		__u32 rng;
		__u32 dcd;
		__u32 rx;
		__u32 tx;
		__u32 frame;
		__u32 overrun;
		__u32 parity;
		__u32 brk;
	} cocci_id/* drivers/mmc/core/sdio_uart.c 50 */;
	u8 cocci_id/* drivers/mmc/core/sdio_uart.c 429 */[16];
	struct kfifo *cocci_id/* drivers/mmc/core/sdio_uart.c 426 */;
	unsigned int *cocci_id/* drivers/mmc/core/sdio_uart.c 371 */;
	struct ktermios *cocci_id/* drivers/mmc/core/sdio_uart.c 247 */;
	void cocci_id/* drivers/mmc/core/sdio_uart.c 187 */;
	unsigned char cocci_id/* drivers/mmc/core/sdio_uart.c 182 */;
	struct sdio_uart_port *cocci_id/* drivers/mmc/core/sdio_uart.c 180 */;
	unsigned int cocci_id/* drivers/mmc/core/sdio_uart.c 180 */;
	int cocci_id/* drivers/mmc/core/sdio_uart.c 180 */;
	void __exit cocci_id/* drivers/mmc/core/sdio_uart.c 1172 */;
	struct tty_driver *cocci_id/* drivers/mmc/core/sdio_uart.c 1136 */;
	int __init cocci_id/* drivers/mmc/core/sdio_uart.c 1133 */;
	struct sdio_driver cocci_id/* drivers/mmc/core/sdio_uart.c 1126 */;
	const struct sdio_device_id cocci_id/* drivers/mmc/core/sdio_uart.c 1118 */[];
	struct device *cocci_id/* drivers/mmc/core/sdio_uart.c 1098 */;
	unsigned cocci_id/* drivers/mmc/core/sdio_uart.c 109 */;
	struct sdio_func_tuple *cocci_id/* drivers/mmc/core/sdio_uart.c 1056 */;
	const struct sdio_device_id *cocci_id/* drivers/mmc/core/sdio_uart.c 1037 */;
	const struct tty_operations cocci_id/* drivers/mmc/core/sdio_uart.c 1015 */;
	const struct tty_port_operations cocci_id/* drivers/mmc/core/sdio_uart.c 1007 */;
}