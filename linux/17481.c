cocci_test_suite() {
	struct lppaca *cocci_id/* arch/powerpc/platforms/pseries/dtl.c 58 */;
	struct dtl_ring *cocci_id/* arch/powerpc/platforms/pseries/dtl.c 56 */;
	u64 cocci_id/* arch/powerpc/platforms/pseries/dtl.c 54 */;
	struct dtl_entry *cocci_id/* arch/powerpc/platforms/pseries/dtl.c 54 */;
	void cocci_id/* arch/powerpc/platforms/pseries/dtl.c 54 */;
	atomic_t cocci_id/* arch/powerpc/platforms/pseries/dtl.c 48 */;
	struct dtl_ring {
		u64 write_index;
		struct dtl_entry *write_ptr;
		struct dtl_entry *buf;
		struct dtl_entry *buf_end;
	} cocci_id/* arch/powerpc/platforms/pseries/dtl.c 39 */;
	int cocci_id/* arch/powerpc/platforms/pseries/dtl.c 36 */;
	char cocci_id/* arch/powerpc/platforms/pseries/dtl.c 324 */[10];
	struct dentry *cocci_id/* arch/powerpc/platforms/pseries/dtl.c 320 */;
	const struct file_operations cocci_id/* arch/powerpc/platforms/pseries/dtl.c 313 */;
	u8 cocci_id/* arch/powerpc/platforms/pseries/dtl.c 29 */;
	struct dtl_entry cocci_id/* arch/powerpc/platforms/pseries/dtl.c 256 */;
	loff_t *cocci_id/* arch/powerpc/platforms/pseries/dtl.c 250 */;
	char __user *cocci_id/* arch/powerpc/platforms/pseries/dtl.c 249 */;
	ssize_t cocci_id/* arch/powerpc/platforms/pseries/dtl.c 249 */;
	size_t cocci_id/* arch/powerpc/platforms/pseries/dtl.c 249 */;
	struct inode *cocci_id/* arch/powerpc/platforms/pseries/dtl.c 229 */;
	struct file *cocci_id/* arch/powerpc/platforms/pseries/dtl.c 229 */;
	struct dtl {
		struct dtl_entry *buf;
		int cpu;
		int buf_entries;
		u64 last_idx;
		spinlock_t lock;
	} cocci_id/* arch/powerpc/platforms/pseries/dtl.c 20 */;
	long int cocci_id/* arch/powerpc/platforms/pseries/dtl.c 171 */;
	u32 *cocci_id/* arch/powerpc/platforms/pseries/dtl.c 130 */;
	unsigned long cocci_id/* arch/powerpc/platforms/pseries/dtl.c 125 */;
	struct dtl *cocci_id/* arch/powerpc/platforms/pseries/dtl.c 116 */;
	__typeof__(struct dtl_ring) cocci_id/* /home/jaskaran/lkmp/coccinelle/standard.h 437 */;
	__typeof__(struct dtl) cocci_id/* /home/jaskaran/lkmp/coccinelle/standard.h 437 */;
}
