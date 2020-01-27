cocci_test_suite() {
	struct stat cocci_id/* arch/um/drivers/pty.c 80 */;
	char *cocci_id/* arch/um/drivers/pty.c 78 */;
	int cocci_id/* arch/um/drivers/pty.c 78 */;
	struct pty_chan *cocci_id/* arch/um/drivers/pty.c 43 */;
	char **cocci_id/* arch/um/drivers/pty.c 41 */;
	void *cocci_id/* arch/um/drivers/pty.c 40 */;
	struct pty_chan cocci_id/* arch/um/drivers/pty.c 34 */;
	const struct chan_opts *cocci_id/* arch/um/drivers/pty.c 26 */;
	struct pty_chan {
		void (*announce)(char *dev_name, int dev);
		int dev;
		int raw;
		struct termios tt;
		char dev_name[sizeof("/dev/pts/0123456\0")];
	} cocci_id/* arch/um/drivers/pty.c 18 */;
	const struct chan_ops cocci_id/* arch/um/drivers/pty.c 154 */;
	char cocci_id/* arch/um/drivers/pty.c 118 */[sizeof("/dev/ptyxx\0")];
}
