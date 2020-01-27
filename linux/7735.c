cocci_test_suite() {
	struct serial_cfg_mem {
		tuple_t tuple;
		cisparse_t parse;
		u_char buf[256];
	} cocci_id/* drivers/tty/serial/8250/serial_cs.c 93 */;
	struct pcmcia_driver cocci_id/* drivers/tty/serial/8250/serial_cs.c 856 */;
	struct serial_info {
		struct pcmcia_device *p_dev;
		int ndev;
		int multi;
		int slave;
		int manfid;
		int prodid;
		int c950ctrl;
		int line[4];
		const struct serial_quirk *quirk;
	} cocci_id/* drivers/tty/serial/8250/serial_cs.c 81 */;
	struct serial_quirk {
		unsigned int manfid;
		unsigned int prodid;
		int multi;
		void (*config)(struct pcmcia_device *);
		void (*setup)(struct pcmcia_device *, struct uart_8250_port *);
		void (*wakeup)(struct pcmcia_device *);
		int (*post)(struct pcmcia_device *);
	} cocci_id/* drivers/tty/serial/8250/serial_cs.c 71 */;
	const struct pcmcia_device_id cocci_id/* drivers/tty/serial/8250/serial_cs.c 682 */[];
	int cocci_id/* drivers/tty/serial/8250/serial_cs.c 62 */;
	struct serial_info *cocci_id/* drivers/tty/serial/8250/serial_cs.c 526 */;
	struct pcmcia_device *cocci_id/* drivers/tty/serial/8250/serial_cs.c 524 */;
	int *cocci_id/* drivers/tty/serial/8250/serial_cs.c 483 */;
	void *cocci_id/* drivers/tty/serial/8250/serial_cs.c 481 */;
	const unsigned int cocci_id/* drivers/tty/serial/8250/serial_cs.c 421 */[5];
	const int cocci_id/* drivers/tty/serial/8250/serial_cs.c 399 */[2];
	unsigned int cocci_id/* drivers/tty/serial/8250/serial_cs.c 378 */;
	unsigned long cocci_id/* drivers/tty/serial/8250/serial_cs.c 364 */;
	struct uart_8250_port cocci_id/* drivers/tty/serial/8250/serial_cs.c 346 */;
	int cocci_id/* drivers/tty/serial/8250/serial_cs.c 261 */(struct pcmcia_device *link);
	const struct serial_quirk cocci_id/* drivers/tty/serial/8250/serial_cs.c 188 */[];
	void cocci_id/* drivers/tty/serial/8250/serial_cs.c 135 */;
	u8 cocci_id/* drivers/tty/serial/8250/serial_cs.c 115 */;
	struct uart_8250_port *cocci_id/* drivers/tty/serial/8250/serial_cs.c 108 */;
}
