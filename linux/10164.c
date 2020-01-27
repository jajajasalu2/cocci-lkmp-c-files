cocci_test_suite() {
	loff_t *cocci_id/* drivers/isdn/mISDN/timerdev.c 93 */;
	char __user *cocci_id/* drivers/isdn/mISDN/timerdev.c 93 */;
	size_t cocci_id/* drivers/isdn/mISDN/timerdev.c 93 */;
	ssize_t cocci_id/* drivers/isdn/mISDN/timerdev.c 92 */;
	struct mISDNtimer cocci_id/* drivers/isdn/mISDN/timerdev.c 75 */;
	struct list_head *cocci_id/* drivers/isdn/mISDN/timerdev.c 67 */;
	struct mISDNtimerdev *cocci_id/* drivers/isdn/mISDN/timerdev.c 66 */;
	struct inode *cocci_id/* drivers/isdn/mISDN/timerdev.c 64 */;
	struct file *cocci_id/* drivers/isdn/mISDN/timerdev.c 64 */;
	int cocci_id/* drivers/isdn/mISDN/timerdev.c 63 */;
	struct mISDNtimerdev cocci_id/* drivers/isdn/mISDN/timerdev.c 50 */;
	struct mISDNtimer {
		struct list_head list;
		struct mISDNtimerdev *dev;
		struct timer_list tl;
		int id;
	} cocci_id/* drivers/isdn/mISDN/timerdev.c 36 */;
	struct miscdevice cocci_id/* drivers/isdn/mISDN/timerdev.c 272 */;
	struct mISDNtimerdev {
		int next_id;
		struct list_head pending;
		struct list_head expired;
		wait_queue_head_t wait;
		u_int work;
		spinlock_t lock;
	} cocci_id/* drivers/isdn/mISDN/timerdev.c 27 */;
	const struct file_operations cocci_id/* drivers/isdn/mISDN/timerdev.c 262 */;
	u_int *cocci_id/* drivers/isdn/mISDN/timerdev.c 24 */;
	int __user *cocci_id/* drivers/isdn/mISDN/timerdev.c 229 */;
	unsigned long cocci_id/* drivers/isdn/mISDN/timerdev.c 217 */;
	unsigned int cocci_id/* drivers/isdn/mISDN/timerdev.c 217 */;
	long cocci_id/* drivers/isdn/mISDN/timerdev.c 216 */;
	u_long cocci_id/* drivers/isdn/mISDN/timerdev.c 159 */;
	struct mISDNtimer *cocci_id/* drivers/isdn/mISDN/timerdev.c 158 */;
	struct timer_list *cocci_id/* drivers/isdn/mISDN/timerdev.c 156 */;
	void cocci_id/* drivers/isdn/mISDN/timerdev.c 155 */;
	poll_table *cocci_id/* drivers/isdn/mISDN/timerdev.c 136 */;
	__poll_t cocci_id/* drivers/isdn/mISDN/timerdev.c 135 */;
}
