cocci_test_suite() {
	void cocci_id/* arch/um/os-Linux/sigio.c 530 */;
	char cocci_id/* arch/um/os-Linux/sigio.c 494 */[512];
	struct pollfds cocci_id/* arch/um/os-Linux/sigio.c 49 */;
	struct openpty_arg cocci_id/* arch/um/os-Linux/sigio.c 432 */;
	struct sigaction cocci_id/* arch/um/os-Linux/sigio.c 431 */;
	void (*cocci_id/* arch/um/os-Linux/sigio.c 429 */)(int, int);
	void __init cocci_id/* arch/um/os-Linux/sigio.c 429 */;
	struct openpty_arg *cocci_id/* arch/um/os-Linux/sigio.c 404 */;
	void *cocci_id/* arch/um/os-Linux/sigio.c 402 */;
	struct openpty_arg {
		int master;
		int slave;
		int err;
	} cocci_id/* arch/um/os-Linux/sigio.c 396 */;
	struct pollfds {
		struct pollfd *poll;
		int size;
		int used;
	} cocci_id/* arch/um/os-Linux/sigio.c 37 */;
	int cocci_id/* arch/um/os-Linux/sigio.c 35 */[2];
	struct pollfd cocci_id/* arch/um/os-Linux/sigio.c 193 */;
	struct pollfd *cocci_id/* arch/um/os-Linux/sigio.c 169 */;
	int cocci_id/* arch/um/os-Linux/sigio.c 167 */;
	char cocci_id/* arch/um/os-Linux/sigio.c 133 */;
	unsigned long cocci_id/* arch/um/os-Linux/sigio.c 131 */;
	struct pollfds *cocci_id/* arch/um/os-Linux/sigio.c 103 */;
}
