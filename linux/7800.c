cocci_test_suite() {
	bool cocci_id/* drivers/tty/amiserial.c 958 */;
	struct serial_struct *cocci_id/* drivers/tty/amiserial.c 937 */;
	struct serial_state {
		struct tty_port tport;
		struct circ_buf xmit;
		struct async_icount icount;
		unsigned long port;
		int baud_base;
		int xmit_fifo_size;
		int custom_divisor;
		int read_status_mask;
		int ignore_status_mask;
		int timeout;
		int quot;
		int IER;
		int MCR;
		int x_char;
	} cocci_id/* drivers/tty/amiserial.c 84 */;
	const unsigned char *cocci_id/* drivers/tty/amiserial.c 786 */;
	short cocci_id/* drivers/tty/amiserial.c 724 */;
	unsigned cocci_id/* drivers/tty/amiserial.c 613 */;
	struct ktermios *cocci_id/* drivers/tty/amiserial.c 609 */;
	struct tty_struct *cocci_id/* drivers/tty/amiserial.c 608 */;
	unsigned char *cocci_id/* drivers/tty/amiserial.c 499 */;
	irqreturn_t cocci_id/* drivers/tty/amiserial.c 425 */;
	struct async_icount *cocci_id/* drivers/tty/amiserial.c 345 */;
	struct console cocci_id/* drivers/tty/amiserial.c 1698 */;
	struct tty_driver *cocci_id/* drivers/tty/amiserial.c 1692 */;
	struct console *cocci_id/* drivers/tty/amiserial.c 1692 */;
	int *cocci_id/* drivers/tty/amiserial.c 1692 */;
	unsigned short cocci_id/* drivers/tty/amiserial.c 1679 */;
	const char *cocci_id/* drivers/tty/amiserial.c 1676 */;
	unsigned char cocci_id/* drivers/tty/amiserial.c 1665 */;
	char cocci_id/* drivers/tty/amiserial.c 1663 */;
	struct platform_driver cocci_id/* drivers/tty/amiserial.c 1645 */;
	int __exit cocci_id/* drivers/tty/amiserial.c 1626 */;
	struct platform_device *cocci_id/* drivers/tty/amiserial.c 1534 */;
	int __init cocci_id/* drivers/tty/amiserial.c 1534 */;
	const struct tty_port_operations cocci_id/* drivers/tty/amiserial.c 1526 */;
	unsigned long cocci_id/* drivers/tty/amiserial.c 1514 */;
	struct serial_state cocci_id/* drivers/tty/amiserial.c 1512 */;
	struct serial_state *cocci_id/* drivers/tty/amiserial.c 1512 */;
	void cocci_id/* drivers/tty/amiserial.c 1510 */;
	struct tty_port *cocci_id/* drivers/tty/amiserial.c 1505 */;
	int cocci_id/* drivers/tty/amiserial.c 1505 */;
	const struct tty_operations cocci_id/* drivers/tty/amiserial.c 1478 */;
	void *cocci_id/* drivers/tty/amiserial.c 1452 */;
	char cocci_id/* drivers/tty/amiserial.c 1406 */[30];
	struct seq_file *cocci_id/* drivers/tty/amiserial.c 1403 */;
	struct file *cocci_id/* drivers/tty/amiserial.c 1258 */;
	struct serial_state cocci_id/* drivers/tty/amiserial.c 117 */[1];
	void __user *cocci_id/* drivers/tty/amiserial.c 1140 */;
	void cocci_id/* drivers/tty/amiserial.c 114 */(struct tty_struct *tty,
						       int timeout);
	void cocci_id/* drivers/tty/amiserial.c 112 */(struct tty_struct *tty,
						       struct serial_state *info,
						       struct ktermios *old);
	struct async_icount cocci_id/* drivers/tty/amiserial.c 1114 */;
	struct serial_icounter_struct *cocci_id/* drivers/tty/amiserial.c 1111 */;
	unsigned int cocci_id/* drivers/tty/amiserial.c 1030 */;
	char *cocci_id/* drivers/tty/amiserial.c 103 */;
	unsigned int __user *cocci_id/* drivers/tty/amiserial.c 1027 */;
}
