cocci_test_suite() {
	int __init cocci_id/* kernel/kallsyms.c 708 */;
	const struct file_operations cocci_id/* kernel/kallsyms.c 701 */;
	struct kallsym_iter cocci_id/* kernel/kallsyms.c 684 */;
	loff_t *cocci_id/* kernel/kallsyms.c 682 */;
	struct inode *cocci_id/* kernel/kallsyms.c 664 */;
	struct file *cocci_id/* kernel/kallsyms.c 664 */;
	void cocci_id/* kernel/kallsyms.c 630 */;
	const struct seq_operations cocci_id/* kernel/kallsyms.c 623 */;
	size_t cocci_id/* kernel/kallsyms.c 58 */;
	struct seq_file *cocci_id/* kernel/kallsyms.c 575 */;
	loff_t cocci_id/* kernel/kallsyms.c 522 */;
	unsigned cocci_id/* kernel/kallsyms.c 510 */;
	const unsigned int cocci_id/* kernel/kallsyms.c 50 */[]__weak;
	const u16 cocci_id/* kernel/kallsyms.c 48 */[]__weak;
	struct kallsym_iter *cocci_id/* kernel/kallsyms.c 456 */;
	unsigned long *cocci_id/* kernel/kallsyms.c 450 */;
	unsigned int cocci_id/* kernel/kallsyms.c 450 */;
	int __weak cocci_id/* kernel/kallsyms.c 450 */;
	const unsigned long cocci_id/* kernel/kallsyms.c 44 */;
	struct kallsym_iter {
		loff_t pos;
		loff_t pos_arch_end;
		loff_t pos_mod_end;
		loff_t pos_ftrace_mod_end;
		unsigned long value;
		unsigned int nameoff;
		char type;
		char name[KSYM_NAME_LEN];
		char module_name[MODULE_NAME_LEN];
		int exported;
		int show_value;
	} cocci_id/* kernel/kallsyms.c 436 */;
	const unsigned int cocci_id/* kernel/kallsyms.c 41 */;
	const char *cocci_id/* kernel/kallsyms.c 359 */;
	char *cocci_id/* kernel/kallsyms.c 355 */;
	unsigned long cocci_id/* kernel/kallsyms.c 355 */;
	int cocci_id/* kernel/kallsyms.c 355 */;
	const u8 cocci_id/* kernel/kallsyms.c 35 */[]__weak;
	const int cocci_id/* kernel/kallsyms.c 34 */[]__weak;
	const unsigned long cocci_id/* kernel/kallsyms.c 33 */[]__weak;
	char **cocci_id/* kernel/kallsyms.c 284 */;
	void *cocci_id/* kernel/kallsyms.c 181 */;
	int (*cocci_id/* kernel/kallsyms.c 179 */)(void *, const char *,
						   struct module *,
						   unsigned long);
	char cocci_id/* kernel/kallsyms.c 165 */[KSYM_NAME_LEN];
	u32 cocci_id/* kernel/kallsyms.c 152 */;
	const u8 *cocci_id/* kernel/kallsyms.c 124 */;
	char cocci_id/* kernel/kallsyms.c 108 */;
}
