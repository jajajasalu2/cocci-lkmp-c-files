cocci_test_suite() {
	const struct tty_port_client_operations cocci_id/* drivers/tty/serdev/serdev-ttyport.c 68 */;
	struct serport cocci_id/* drivers/tty/serdev/serdev-ttyport.c 276 */;
	struct serport *cocci_id/* drivers/tty/serdev/serdev-ttyport.c 270 */;
	struct serdev_controller *cocci_id/* drivers/tty/serdev/serdev-ttyport.c 269 */;
	const struct tty_port_client_operations *cocci_id/* drivers/tty/serdev/serdev-ttyport.c 268 */;
	struct tty_driver *cocci_id/* drivers/tty/serdev/serdev-ttyport.c 266 */;
	int cocci_id/* drivers/tty/serdev/serdev-ttyport.c 266 */;
	struct tty_port *cocci_id/* drivers/tty/serdev/serdev-ttyport.c 264 */;
	struct device *cocci_id/* drivers/tty/serdev/serdev-ttyport.c 264 */;
	size_t cocci_id/* drivers/tty/serdev/serdev-ttyport.c 26 */;
	const struct serdev_controller_ops cocci_id/* drivers/tty/serdev/serdev-ttyport.c 250 */;
	const unsigned char *cocci_id/* drivers/tty/serdev/serdev-ttyport.c 25 */;
	long cocci_id/* drivers/tty/serdev/serdev-ttyport.c 220 */;
	enum serdev_parity cocci_id/* drivers/tty/serdev/serdev-ttyport.c 198 */;
	bool cocci_id/* drivers/tty/serdev/serdev-ttyport.c 183 */;
	unsigned int cocci_id/* drivers/tty/serdev/serdev-ttyport.c 169 */;
	struct tty_struct *cocci_id/* drivers/tty/serdev/serdev-ttyport.c 157 */;
	void cocci_id/* drivers/tty/serdev/serdev-ttyport.c 154 */;
	struct serport {
		struct tty_port *port;
		struct tty_struct *tty;
		struct tty_driver *tty_drv;
		int tty_idx;
		unsigned long flags;
	} cocci_id/* drivers/tty/serdev/serdev-ttyport.c 13 */;
	struct ktermios cocci_id/* drivers/tty/serdev/serdev-ttyport.c 109 */;
}
