cocci_test_suite() {
	const struct kernel_param *cocci_id/* drivers/tty/sysrq.c 994 */;
	const char *cocci_id/* drivers/tty/sysrq.c 993 */;
	struct input_handler cocci_id/* drivers/tty/sysrq.c 962 */;
	const struct input_device_id cocci_id/* drivers/tty/sysrq.c 952 */[];
	struct input_handle *cocci_id/* drivers/tty/sysrq.c 936 */;
	struct sysrq_state cocci_id/* drivers/tty/sysrq.c 902 */;
	struct sysrq_state *cocci_id/* drivers/tty/sysrq.c 899 */;
	const struct input_device_id *cocci_id/* drivers/tty/sysrq.c 897 */;
	struct input_dev *cocci_id/* drivers/tty/sysrq.c 896 */;
	struct input_handler *cocci_id/* drivers/tty/sysrq.c 895 */;
	char *cocci_id/* drivers/tty/sysrq.c 76 */;
	int __init cocci_id/* drivers/tty/sysrq.c 76 */;
	const __be32 *cocci_id/* drivers/tty/sysrq.c 716 */;
	struct property *cocci_id/* drivers/tty/sysrq.c 715 */;
	struct device_node *cocci_id/* drivers/tty/sysrq.c 714 */;
	u32 cocci_id/* drivers/tty/sysrq.c 713 */;
	unsigned int cocci_id/* drivers/tty/sysrq.c 678 */;
	struct timer_list *cocci_id/* drivers/tty/sysrq.c 656 */;
	unsigned short cocci_id/* drivers/tty/sysrq.c 626 */[SYSRQ_KEY_RESET_MAX];
	struct sysrq_state {
		struct input_handle handle;
		struct work_struct reinject_work;
		unsigned long key_down[BITS_TO_LONGS(KEY_CNT)];
		unsigned int alt;
		unsigned int alt_use;
		bool active;
		bool need_reinject;
		bool reinjecting;
		bool reset_canceled;
		bool reset_requested;
		unsigned long reset_keybit[BITS_TO_LONGS(KEY_CNT)];
		int reset_seq_len;
		int reset_seq_cnt;
		int reset_seq_version;
		struct timer_list keyreset_timer;
	} cocci_id/* drivers/tty/sysrq.c 605 */;
	const unsigned char cocci_id/* drivers/tty/sysrq.c 596 */[KEY_CNT];
	bool __read_mostly cocci_id/* drivers/tty/sysrq.c 59 */;
	int __read_mostly cocci_id/* drivers/tty/sysrq.c 58 */;
	struct sysrq_key_op *cocci_id/* drivers/tty/sysrq.c 528 */;
	bool cocci_id/* drivers/tty/sysrq.c 526 */;
	int cocci_id/* drivers/tty/sysrq.c 526 */;
	void cocci_id/* drivers/tty/sysrq.c 526 */;
	struct sysrq_key_op *cocci_id/* drivers/tty/sysrq.c 430 */[36];
	struct oom_control cocci_id/* drivers/tty/sysrq.c 364 */;
	const gfp_t cocci_id/* drivers/tty/sysrq.c 363 */;
	struct work_struct *cocci_id/* drivers/tty/sysrq.c 361 */;
	struct task_struct *cocci_id/* drivers/tty/sysrq.c 335 */;
	struct pt_regs *cocci_id/* drivers/tty/sysrq.c 242 */;
	unsigned long cocci_id/* drivers/tty/sysrq.c 215 */;
	void *cocci_id/* drivers/tty/sysrq.c 213 */;
	const struct file_operations cocci_id/* drivers/tty/sysrq.c 1111 */;
	char cocci_id/* drivers/tty/sysrq.c 1101 */;
	loff_t *cocci_id/* drivers/tty/sysrq.c 1098 */;
	size_t cocci_id/* drivers/tty/sysrq.c 1098 */;
	const char __user *cocci_id/* drivers/tty/sysrq.c 1097 */;
	struct file *cocci_id/* drivers/tty/sysrq.c 1097 */;
	ssize_t cocci_id/* drivers/tty/sysrq.c 1097 */;
	struct sysrq_key_op cocci_id/* drivers/tty/sysrq.c 109 */;
	unsigned short cocci_id/* drivers/tty/sysrq.c 1018 */;
	const struct kernel_param_ops cocci_id/* drivers/tty/sysrq.c 1012 */;
	unsigned short *cocci_id/* drivers/tty/sysrq.c 1006 */;
}
