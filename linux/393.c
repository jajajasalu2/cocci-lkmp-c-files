cocci_test_suite() {
	void cocci_id/* kernel/acct.c 96 */(struct bsd_acct_struct *acct);
	struct bsd_acct_struct {
		struct fs_pin pin;
		atomic_long_t count;
		struct rcu_head rcu;
		struct mutex lock;
		int active;
		unsigned long needcheck;
		struct file *file;
		struct pid_namespace *ns;
		struct work_struct work;
		struct completion done;
	} cocci_id/* kernel/acct.c 83 */;
	int cocci_id/* kernel/acct.c 74 */[3];
	struct vm_area_struct *cocci_id/* kernel/acct.c 540 */;
	unsigned long cocci_id/* kernel/acct.c 537 */;
	u64 cocci_id/* kernel/acct.c 536 */;
	struct pacct_struct *cocci_id/* kernel/acct.c 535 */;
	long cocci_id/* kernel/acct.c 533 */;
	void cocci_id/* kernel/acct.c 533 */;
	loff_t cocci_id/* kernel/acct.c 519 */;
	const struct cred *cocci_id/* kernel/acct.c 475 */;
	acct_t cocci_id/* kernel/acct.c 473 */;
	u16 cocci_id/* kernel/acct.c 447 */;
	struct tty_struct *cocci_id/* kernel/acct.c 419 */;
	acct_t *cocci_id/* kernel/acct.c 415 */;
	s64 cocci_id/* kernel/acct.c 397 */;
	unsigned cocci_id/* kernel/acct.c 392 */;
	u32 cocci_id/* kernel/acct.c 390 */;
	comp2_t cocci_id/* kernel/acct.c 357 */;
	comp_t cocci_id/* kernel/acct.c 315 */;
	struct pid_namespace *cocci_id/* kernel/acct.c 297 */;
	struct filename *cocci_id/* kernel/acct.c 281 */;
	int cocci_id/* kernel/acct.c 275 */;
	const char *cocci_id/* kernel/acct.c 273 */;
	struct bsd_acct_struct cocci_id/* kernel/acct.c 202 */;
	struct fs_pin *cocci_id/* kernel/acct.c 199 */;
	struct vfsmount *cocci_id/* kernel/acct.c 196 */;
	struct file *cocci_id/* kernel/acct.c 195 */;
	struct work_struct *cocci_id/* kernel/acct.c 183 */;
	struct bsd_acct_struct *cocci_id/* kernel/acct.c 144 */;
	struct kstatfs cocci_id/* kernel/acct.c 103 */;
}