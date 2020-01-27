cocci_test_suite() {
	enum{ERASE, WERASE, KILL,} cocci_id/* drivers/tty/n_tty.c 982 */;
	struct n_tty_data {
		size_t read_head;
		size_t commit_head;
		size_t canon_head;
		size_t echo_head;
		size_t echo_commit;
		size_t echo_mark;
	DECLARE_BITMAP(char_map,256)
		;
		unsigned long overrun_time;
		int num_overrun;
		bool no_room;
		unsigned char lnext:1,erasing:1,raw:1,real_raw:1,icanon:1;
		unsigned char push:1;
		char read_buf[N_TTY_BUF_SIZE];
	DECLARE_BITMAP(read_flags,N_TTY_BUF_SIZE)
		;
		unsigned char echo_buf[N_TTY_BUF_SIZE];
		size_t read_tail;
		size_t line_start;
		unsigned int column;
		unsigned int canon_column;
		size_t echo_tail;
		struct mutex atomic_read_lock;
		struct mutex output_lock;
	} cocci_id/* drivers/tty/n_tty.c 90 */;
	unsigned int cocci_id/* drivers/tty/n_tty.c 657 */;
	unsigned char cocci_id/* drivers/tty/n_tty.c 631 */;
	struct n_tty_data *cocci_id/* drivers/tty/n_tty.c 628 */;
	size_t cocci_id/* drivers/tty/n_tty.c 626 */;
	void __init cocci_id/* drivers/tty/n_tty.c 2501 */;
	struct tty_ldisc_ops *cocci_id/* drivers/tty/n_tty.c 2493 */;
	struct tty_ldisc_ops cocci_id/* drivers/tty/n_tty.c 2470 */;
	unsigned int __user *cocci_id/* drivers/tty/n_tty.c 2464 */;
	int __user *cocci_id/* drivers/tty/n_tty.c 2456 */;
	unsigned long cocci_id/* drivers/tty/n_tty.c 2429 */;
	poll_table *cocci_id/* drivers/tty/n_tty.c 2403 */;
	__poll_t cocci_id/* drivers/tty/n_tty.c 2402 */;
	ssize_t cocci_id/* drivers/tty/n_tty.c 224 */;
	long cocci_id/* drivers/tty/n_tty.c 2141 */;
	unsigned char __user *cocci_id/* drivers/tty/n_tty.c 2133 */;
	struct file *cocci_id/* drivers/tty/n_tty.c 2099 */;
	ssize_t cocci_id/* drivers/tty/n_tty.c 2082 */(struct file *,
						       const char __user *,
						       size_t, loff_t *);
	size_t *cocci_id/* drivers/tty/n_tty.c 2020 */;
	unsigned char __user **cocci_id/* drivers/tty/n_tty.c 2019 */;
	unsigned char *cocci_id/* drivers/tty/n_tty.c 1978 */;
	struct ktermios *cocci_id/* drivers/tty/n_tty.c 1794 */;
	void *cocci_id/* drivers/tty/n_tty.c 172 */;
	void __user *cocci_id/* drivers/tty/n_tty.c 167 */;
	char cocci_id/* drivers/tty/n_tty.c 1635 */;
	bool cocci_id/* drivers/tty/n_tty.c 1625 */;
	char *cocci_id/* drivers/tty/n_tty.c 1622 */;
	const unsigned char *cocci_id/* drivers/tty/n_tty.c 1621 */;
	u8 *cocci_id/* drivers/tty/n_tty.c 158 */;
	struct pid *cocci_id/* drivers/tty/n_tty.c 1114 */;
	struct tty_struct *cocci_id/* drivers/tty/n_tty.c 1112 */;
	int cocci_id/* drivers/tty/n_tty.c 1112 */;
	void cocci_id/* drivers/tty/n_tty.c 1112 */;
}
