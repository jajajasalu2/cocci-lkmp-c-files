cocci_test_suite() {
	struct timerfd_ctx cocci_id/* fs/timerfd.c 84 */;
	ktime_t cocci_id/* fs/timerfd.c 82 */;
	enum alarmtimer_restart cocci_id/* fs/timerfd.c 81 */;
	struct alarm *cocci_id/* fs/timerfd.c 81 */;
	enum hrtimer_restart cocci_id/* fs/timerfd.c 73 */;
	struct hrtimer *cocci_id/* fs/timerfd.c 73 */;
	struct old_itimerspec32 *cocci_id/* fs/timerfd.c 585 */;
	const struct old_itimerspec32 *cocci_id/* fs/timerfd.c 568 */;
	struct itimerspec64 cocci_id/* fs/timerfd.c 559 */;
	struct __kernel_itimerspec *cocci_id/* fs/timerfd.c 557 */;
	const struct __kernel_itimerspec *cocci_id/* fs/timerfd.c 540 */;
	bool cocci_id/* fs/timerfd.c 51 */;
	struct fd cocci_id/* fs/timerfd.c 509 */;
	struct itimerspec64 *cocci_id/* fs/timerfd.c 507 */;
	int cocci_id/* fs/timerfd.c 507 */;
	const struct itimerspec64 *cocci_id/* fs/timerfd.c 436 */;
	struct fd *cocci_id/* fs/timerfd.c 374 */;
	const struct file_operations cocci_id/* fs/timerfd.c 365 */;
	u64 __user *cocci_id/* fs/timerfd.c 340 */;
	u64 cocci_id/* fs/timerfd.c 338 */;
	struct file *cocci_id/* fs/timerfd.c 331 */;
	unsigned int cocci_id/* fs/timerfd.c 331 */;
	long cocci_id/* fs/timerfd.c 331 */;
	unsigned long long cocci_id/* fs/timerfd.c 319 */;
	struct timespec64 cocci_id/* fs/timerfd.c 305 */;
	struct seq_file *cocci_id/* fs/timerfd.c 302 */;
	struct timerfd_ctx {
		union {
			struct hrtimer tmr;
			struct alarm alarm;
		} t;
		ktime_t tintv;
		ktime_t moffs;
		wait_queue_head_t wqh;
		u64 ticks;
		int clockid;
		short unsigned expired;
		short unsigned settime_flags;
		struct rcu_head rcu;
		struct list_head clist;
		spinlock_t cancel_lock;
		bool might_cancel;
	} cocci_id/* fs/timerfd.c 30 */;
	loff_t *cocci_id/* fs/timerfd.c 247 */;
	char __user *cocci_id/* fs/timerfd.c 246 */;
	ssize_t cocci_id/* fs/timerfd.c 246 */;
	size_t cocci_id/* fs/timerfd.c 246 */;
	__poll_t cocci_id/* fs/timerfd.c 230 */;
	poll_table *cocci_id/* fs/timerfd.c 230 */;
	struct inode *cocci_id/* fs/timerfd.c 216 */;
	enum hrtimer_mode cocci_id/* fs/timerfd.c 175 */;
	struct timerfd_ctx *cocci_id/* fs/timerfd.c 117 */;
	void cocci_id/* fs/timerfd.c 117 */;
	unsigned long cocci_id/* fs/timerfd.c 100 */;
}
