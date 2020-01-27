cocci_test_suite() {
	char cocci_id/* drivers/tty/tty_audit.c 71 */[sizeof(current->comm)];
	uid_t cocci_id/* drivers/tty/tty_audit.c 65 */;
	pid_t cocci_id/* drivers/tty/tty_audit.c 64 */;
	struct audit_buffer *cocci_id/* drivers/tty/tty_audit.c 63 */;
	unsigned char *cocci_id/* drivers/tty/tty_audit.c 61 */;
	const char *cocci_id/* drivers/tty/tty_audit.c 60 */;
	dev_t cocci_id/* drivers/tty/tty_audit.c 206 */;
	unsigned int cocci_id/* drivers/tty/tty_audit.c 204 */;
	struct tty_audit_buf *cocci_id/* drivers/tty/tty_audit.c 203 */;
	const void *cocci_id/* drivers/tty/tty_audit.c 201 */;
	struct tty_struct *cocci_id/* drivers/tty/tty_audit.c 201 */;
	size_t cocci_id/* drivers/tty/tty_audit.c 201 */;
	void cocci_id/* drivers/tty/tty_audit.c 201 */;
	int cocci_id/* drivers/tty/tty_audit.c 153 */;
	struct tty_audit_buf {
		struct mutex mutex;
		dev_t dev;
		unsigned icanon:1;
		size_t valid;
		unsigned char *data;
	} cocci_id/* drivers/tty/tty_audit.c 14 */;
	char cocci_id/* drivers/tty/tty_audit.c 136 */;
	struct signal_struct *cocci_id/* drivers/tty/tty_audit.c 128 */;
}
