cocci_test_suite() {
	char *cocci_id/* drivers/tty/ipwireless/tty.c 66 */[];
	char *cocci_id/* drivers/tty/ipwireless/tty.c 64 */;
	struct tty_driver *cocci_id/* drivers/tty/ipwireless/tty.c 62 */;
	struct ipw_tty *cocci_id/* drivers/tty/ipwireless/tty.c 60 */[IPWIRELESS_PCMCIA_MINORS];
	const struct tty_operations cocci_id/* drivers/tty/ipwireless/tty.c 552 */;
	struct ipw_tty {
		struct tty_port port;
		int index;
		struct ipw_hardware *hardware;
		unsigned int channel_idx;
		unsigned int secondary_channel_idx;
		int tty_type;
		struct ipw_network *network;
		unsigned int control_lines;
		struct mutex ipw_tty_mutex;
		int tx_bytes_queued;
		int closing;
	} cocci_id/* drivers/tty/ipwireless/tty.c 46 */;
	struct ipw_tty cocci_id/* drivers/tty/ipwireless/tty.c 442 */;
	struct ipw_network *cocci_id/* drivers/tty/ipwireless/tty.c 439 */;
	struct ipw_hardware *cocci_id/* drivers/tty/ipwireless/tty.c 438 */;
	int cocci_id/* drivers/tty/ipwireless/tty.c 437 */;
	int __user *cocci_id/* drivers/tty/ipwireless/tty.c 405 */;
	unsigned long cocci_id/* drivers/tty/ipwireless/tty.c 385 */;
	unsigned int cocci_id/* drivers/tty/ipwireless/tty.c 289 */;
	struct serial_struct *cocci_id/* drivers/tty/ipwireless/tty.c 252 */;
	const unsigned char *cocci_id/* drivers/tty/ipwireless/tty.c 192 */;
	void *cocci_id/* drivers/tty/ipwireless/tty.c 179 */;
	unsigned char *cocci_id/* drivers/tty/ipwireless/tty.c 155 */;
	struct file *cocci_id/* drivers/tty/ipwireless/tty.c 149 */;
	struct tty_struct *cocci_id/* drivers/tty/ipwireless/tty.c 119 */;
	struct ipw_tty *cocci_id/* drivers/tty/ipwireless/tty.c 114 */;
	void cocci_id/* drivers/tty/ipwireless/tty.c 114 */;
}
