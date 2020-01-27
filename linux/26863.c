cocci_test_suite() {
	struct pollfd cocci_id/* fs/select.c 984 */;
	struct poll_table_page {
		struct poll_table_page *next;
		struct poll_table_entry *entry;
		struct poll_table_entry entries[0];
	} cocci_id/* fs/select.c 97 */;
	struct poll_list *const cocci_id/* fs/select.c 969 */;
	long cocci_id/* fs/select.c 968 */[POLL_STACK_ALLOC / sizeof(long)];
	unsigned int cocci_id/* fs/select.c 960 */;
	struct pollfd *cocci_id/* fs/select.c 895 */;
	bool cocci_id/* fs/select.c 892 */;
	__poll_t cocci_id/* fs/select.c 878 */;
	u64 cocci_id/* fs/select.c 877 */;
	ktime_t cocci_id/* fs/select.c 875 */;
	struct poll_list *cocci_id/* fs/select.c 871 */;
	struct fd cocci_id/* fs/select.c 847 */;
	bool *cocci_id/* fs/select.c 842 */;
	struct poll_list cocci_id/* fs/select.c 832 */;
	struct poll_list {
		struct poll_list *next;
		int len;
		struct pollfd entries[0];
	} cocci_id/* fs/select.c 826 */;
	struct sel_arg_struct cocci_id/* fs/select.c 818 */;
	struct sel_arg_struct *cocci_id/* fs/select.c 816 */;
	struct sel_arg_struct {
		unsigned long n;
		fd_set __user *inp,*outp,*exp;
		struct __kernel_old_timeval __user *tvp;
	} cocci_id/* fs/select.c 810 */;
	size_t __user *cocci_id/* fs/select.c 780 */;
	sigset_t __user *__user *cocci_id/* fs/select.c 778 */;
	sigset_t __user *cocci_id/* fs/select.c 774 */;
	fd_set *cocci_id/* fs/select.c 769 */;
	const sigset_t __user *cocci_id/* fs/select.c 730 */;
	struct __kernel_old_timeval *cocci_id/* fs/select.c 723 */;
	struct __kernel_old_timeval cocci_id/* fs/select.c 704 */;
	struct __kernel_old_timeval __user *cocci_id/* fs/select.c 701 */;
	size_t cocci_id/* fs/select.c 627 */;
	fd_set __user *cocci_id/* fs/select.c 621 */;
	int cocci_id/* fs/select.c 55 */;
	struct timespec64 *cocci_id/* fs/select.c 52 */;
	long cocci_id/* fs/select.c 52 */;
	fd_set_bits *cocci_id/* fs/select.c 476 */;
	unsigned long __must_check cocci_id/* fs/select.c 399 */;
	struct {
		unsigned long *in,*out,*ex;
		unsigned long *res_in,*res_out,*res_ex;
	} cocci_id/* fs/select.c 373 */;
	enum poll_time_type{PT_TIMEVAL=0, PT_OLD_TIMEVAL=1, PT_TIMESPEC=2, PT_OLD_TIMESPEC=3,} cocci_id/* fs/select.c 290 */;
	time64_t cocci_id/* fs/select.c 273 */;
	ktime_t *cocci_id/* fs/select.c 237 */;
	struct poll_table_entry *cocci_id/* fs/select.c 225 */;
	struct poll_wqueues cocci_id/* fs/select.c 224 */;
	struct poll_wqueues *cocci_id/* fs/select.c 224 */;
	poll_table *cocci_id/* fs/select.c 222 */;
	wait_queue_head_t *cocci_id/* fs/select.c 221 */;
	struct file *cocci_id/* fs/select.c 221 */;
	void cocci_id/* fs/select.c 221 */;
	struct poll_table_entry cocci_id/* fs/select.c 214 */;
	wait_queue_entry_t *cocci_id/* fs/select.c 184 */;
	void *cocci_id/* fs/select.c 184 */;
	unsigned cocci_id/* fs/select.c 184 */;
	struct poll_table_page *cocci_id/* fs/select.c 140 */;
	struct timespec64 cocci_id/* fs/select.c 1298 */;
	compat_size_t cocci_id/* fs/select.c 1296 */;
	enum poll_time_type cocci_id/* fs/select.c 1296 */;
	compat_sigset_t __user *cocci_id/* fs/select.c 1295 */;
	void __user *cocci_id/* fs/select.c 1295 */;
	struct compat_sel_arg_struct {
		compat_ulong_t n;
		compat_uptr_t inp;
		compat_uptr_t outp;
		compat_uptr_t exp;
		compat_uptr_t tvp;
	} cocci_id/* fs/select.c 1275 */;
	struct old_timeval32 cocci_id/* fs/select.c 1250 */;
	struct old_timeval32 __user *cocci_id/* fs/select.c 1247 */;
	unsigned long *cocci_id/* fs/select.c 1208 */;
	long cocci_id/* fs/select.c 1182 */[SELECT_STACK_ALLOC / sizeof(long)];
	struct fdtable *cocci_id/* fs/select.c 1181 */;
	void cocci_id/* fs/select.c 118 */(struct file *filp,
					   wait_queue_head_t *wait_address,
					   poll_table *p);
	fd_set_bits cocci_id/* fs/select.c 1178 */;
	compat_ulong_t __user *cocci_id/* fs/select.c 1174 */;
	unsigned long cocci_id/* fs/select.c 1140 */;
	compat_ulong_t cocci_id/* fs/select.c 1133 */;
	struct old_timespec32 *cocci_id/* fs/select.c 1108 */;
	const sigset_t *cocci_id/* fs/select.c 1082 */;
	struct __kernel_timespec *cocci_id/* fs/select.c 1082 */;
	struct pollfd __user *cocci_id/* fs/select.c 1027 */;
	struct restart_block *cocci_id/* fs/select.c 1025 */;
}
