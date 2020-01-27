cocci_test_suite() {
	char cocci_id/* drivers/misc/kgdbts.c 828 */[BREAK_INSTR_SIZE];
	char cocci_id/* drivers/misc/kgdbts.c 695 */;
	unsigned char cocci_id/* drivers/misc/kgdbts.c 693 */;
	struct test_struct cocci_id/* drivers/misc/kgdbts.c 563 */[];
	char *cocci_id/* drivers/misc/kgdbts.c 220 */;
	unsigned long cocci_id/* drivers/misc/kgdbts.c 220 */;
	void cocci_id/* drivers/misc/kgdbts.c 220 */;
	void *cocci_id/* drivers/misc/kgdbts.c 179 */;
	struct test_state cocci_id/* drivers/misc/kgdbts.c 177 */;
	struct test_state {
		char *name;
		struct test_struct *tst;
		int idx;
		int (*run_test)(int, int);
		int (*validate_put)(char *);
	} cocci_id/* drivers/misc/kgdbts.c 169 */;
	struct test_struct {
		char *get;
		char *put;
		void (*get_handler)(char *);
		int (*put_handler)(char *, char *);
	} cocci_id/* drivers/misc/kgdbts.c 162 */;
	void cocci_id/* drivers/misc/kgdbts.c 160 */(char *buf);
	struct kparam_string cocci_id/* drivers/misc/kgdbts.c 155 */;
	char cocci_id/* drivers/misc/kgdbts.c 151 */[MAX_CONFIG_LEN];
	struct pt_regs cocci_id/* drivers/misc/kgdbts.c 145 */;
	unsigned long cocci_id/* drivers/misc/kgdbts.c 142 */[(NUMREGBYTES + sizeof(unsigned long) - 1) / sizeof(unsigned long)];
	int cocci_id/* drivers/misc/kgdbts.c 132 */;
	char cocci_id/* drivers/misc/kgdbts.c 114 */[BUFMAX];
	struct kgdb_io cocci_id/* drivers/misc/kgdbts.c 113 */;
	size_t cocci_id/* drivers/misc/kgdbts.c 1126 */;
	const struct kernel_param *cocci_id/* drivers/misc/kgdbts.c 1124 */;
	const char *cocci_id/* drivers/misc/kgdbts.c 1123 */;
	u8 cocci_id/* drivers/misc/kgdbts.c 1117 */;
	int __init cocci_id/* drivers/misc/kgdbts.c 1097 */;
}
