cocci_test_suite() {
	loff_t *cocci_id/* arch/s390/kernel/diag.c 90 */;
	struct diag_stat *cocci_id/* arch/s390/kernel/diag.c 58 */;
	struct seq_file *cocci_id/* arch/s390/kernel/diag.c 56 */;
	struct diag210 *cocci_id/* arch/s390/kernel/diag.c 54 */( );
	struct diag_ops cocci_id/* arch/s390/kernel/diag.c 53 */( );
	const struct diag_desc cocci_id/* arch/s390/kernel/diag.c 29 */[NR_DIAG_STAT];
	struct diag_desc {
		int code;
		char *name;
	} cocci_id/* arch/s390/kernel/diag.c 24 */;
	enum diag26c_sc cocci_id/* arch/s390/kernel/diag.c 217 */;
	struct diag210 *cocci_id/* arch/s390/kernel/diag.c 180 */;
	struct diag_stat {
		unsigned int counter[NR_DIAG_STAT];
	} cocci_id/* arch/s390/kernel/diag.c 18 */;
	unsigned long *cocci_id/* arch/s390/kernel/diag.c 153 */;
	void *cocci_id/* arch/s390/kernel/diag.c 153 */;
	unsigned long cocci_id/* arch/s390/kernel/diag.c 153 */;
	int cocci_id/* arch/s390/kernel/diag.c 153 */;
	enum diag_stat_enum cocci_id/* arch/s390/kernel/diag.c 129 */;
	void cocci_id/* arch/s390/kernel/diag.c 129 */;
	int __init cocci_id/* arch/s390/kernel/diag.c 120 */;
	const struct file_operations cocci_id/* arch/s390/kernel/diag.c 112 */;
	struct inode *cocci_id/* arch/s390/kernel/diag.c 107 */;
	struct file *cocci_id/* arch/s390/kernel/diag.c 107 */;
	const struct seq_operations cocci_id/* arch/s390/kernel/diag.c 100 */;
	__typeof__(struct diag_stat) cocci_id/* /home/jaskaran/lkmp/coccinelle/standard.h 437 */;
}
