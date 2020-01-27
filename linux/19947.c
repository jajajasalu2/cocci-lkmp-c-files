cocci_test_suite() {
	tb_sample_t cocci_id/* arch/mips/sibyte/common/sb_tbprof.c 76 */;
	struct sbprof_tb cocci_id/* arch/mips/sibyte/common/sb_tbprof.c 70 */;
	void __exit cocci_id/* arch/mips/sibyte/common/sb_tbprof.c 583 */;
	long long cocci_id/* arch/mips/sibyte/common/sb_tbprof.c 572 */;
	struct sbprof_tb {
		wait_queue_head_t tb_sync;
		wait_queue_head_t tb_read;
		struct mutex lock;
		enum open_status open;
		tb_sample_t *sbprof_tbbuf;
		int next_tb_sample;
		volatile int tb_enable;
		volatile int tb_armed;
	} cocci_id/* arch/mips/sibyte/common/sb_tbprof.c 57 */;
	struct class *cocci_id/* arch/mips/sibyte/common/sb_tbprof.c 544 */;
	struct device *cocci_id/* arch/mips/sibyte/common/sb_tbprof.c 543 */;
	int __init cocci_id/* arch/mips/sibyte/common/sb_tbprof.c 541 */;
	const struct file_operations cocci_id/* arch/mips/sibyte/common/sb_tbprof.c 527 */;
	int *cocci_id/* arch/mips/sibyte/common/sb_tbprof.c 515 */;
	enum open_status{SB_CLOSED, SB_OPENING, SB_OPEN,} cocci_id/* arch/mips/sibyte/common/sb_tbprof.c 51 */;
	unsigned long cocci_id/* arch/mips/sibyte/common/sb_tbprof.c 493 */;
	unsigned int cocci_id/* arch/mips/sibyte/common/sb_tbprof.c 492 */;
	struct file *cocci_id/* arch/mips/sibyte/common/sb_tbprof.c 491 */;
	long cocci_id/* arch/mips/sibyte/common/sb_tbprof.c 491 */;
	u64 cocci_id/* arch/mips/sibyte/common/sb_tbprof.c 49 */[6 * 256];
	loff_t *cocci_id/* arch/mips/sibyte/common/sb_tbprof.c 441 */;
	size_t cocci_id/* arch/mips/sibyte/common/sb_tbprof.c 441 */;
	char *cocci_id/* arch/mips/sibyte/common/sb_tbprof.c 440 */;
	ssize_t cocci_id/* arch/mips/sibyte/common/sb_tbprof.c 440 */;
	struct inode *cocci_id/* arch/mips/sibyte/common/sb_tbprof.c 389 */;
	irqreturn_t cocci_id/* arch/mips/sibyte/common/sb_tbprof.c 241 */;
	void *cocci_id/* arch/mips/sibyte/common/sb_tbprof.c 241 */;
	int cocci_id/* arch/mips/sibyte/common/sb_tbprof.c 241 */;
	u64 *cocci_id/* arch/mips/sibyte/common/sb_tbprof.c 197 */;
	u64 cocci_id/* arch/mips/sibyte/common/sb_tbprof.c 144 */;
	void cocci_id/* arch/mips/sibyte/common/sb_tbprof.c 142 */;
}
