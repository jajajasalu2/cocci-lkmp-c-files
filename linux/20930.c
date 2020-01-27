cocci_test_suite() {
	struct xterm_wait cocci_id/* arch/um/drivers/xterm_kern.c 47 */;
	struct xterm_wait *cocci_id/* arch/um/drivers/xterm_kern.c 37 */;
	int *cocci_id/* arch/um/drivers/xterm_kern.c 35 */;
	int cocci_id/* arch/um/drivers/xterm_kern.c 35 */;
	irqreturn_t cocci_id/* arch/um/drivers/xterm_kern.c 20 */;
	void *cocci_id/* arch/um/drivers/xterm_kern.c 20 */;
	struct xterm_wait {
		struct completion ready;
		int fd;
		int pid;
		int new_fd;
	} cocci_id/* arch/um/drivers/xterm_kern.c 13 */;
}
