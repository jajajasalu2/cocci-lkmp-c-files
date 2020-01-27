cocci_test_suite() {
	struct r3964_info cocci_id/* drivers/tty/n_r3964.c 955 */;
	struct r3964_message cocci_id/* drivers/tty/n_r3964.c 853 */;
	unsigned long cocci_id/* drivers/tty/n_r3964.c 848 */;
	struct r3964_message *cocci_id/* drivers/tty/n_r3964.c 847 */;
	struct r3964_block_header *cocci_id/* drivers/tty/n_r3964.c 845 */;
	struct r3964_client_info *cocci_id/* drivers/tty/n_r3964.c 844 */;
	int cocci_id/* drivers/tty/n_r3964.c 844 */;
	void cocci_id/* drivers/tty/n_r3964.c 844 */;
	struct r3964_client_info cocci_id/* drivers/tty/n_r3964.c 793 */;
	struct r3964_client_info **cocci_id/* drivers/tty/n_r3964.c 758 */;
	struct pid *cocci_id/* drivers/tty/n_r3964.c 755 */;
	struct timer_list *cocci_id/* drivers/tty/n_r3964.c 698 */;
	const char cocci_id/* drivers/tty/n_r3964.c 670 */;
	const unsigned char cocci_id/* drivers/tty/n_r3964.c 557 */;
	unsigned char *cocci_id/* drivers/tty/n_r3964.c 532 */;
	struct r3964_block_header cocci_id/* drivers/tty/n_r3964.c 524 */;
	struct tty_struct *cocci_id/* drivers/tty/n_r3964.c 386 */;
	unsigned char cocci_id/* drivers/tty/n_r3964.c 376 */;
	struct r3964_info *cocci_id/* drivers/tty/n_r3964.c 303 */;
	int __init cocci_id/* drivers/tty/n_r3964.c 202 */;
	void __exit cocci_id/* drivers/tty/n_r3964.c 186 */;
	char cocci_id/* drivers/tty/n_r3964.c 167 */[16 * 3 + 1];
	const unsigned char *cocci_id/* drivers/tty/n_r3964.c 164 */;
	unsigned int cocci_id/* drivers/tty/n_r3964.c 164 */;
	struct tty_ldisc_ops cocci_id/* drivers/tty/n_r3964.c 147 */;
	void cocci_id/* drivers/tty/n_r3964.c 144 */(struct tty_struct *tty,
						     const unsigned char *cp,
						     char *fp, int count);
	__poll_t cocci_id/* drivers/tty/n_r3964.c 142 */(struct tty_struct *tty,
							 struct file *file,
							 struct poll_table_struct *wait);
	void cocci_id/* drivers/tty/n_r3964.c 141 */(struct tty_struct *tty,
						     struct ktermios *old);
	int cocci_id/* drivers/tty/n_r3964.c 138 */(struct tty_struct *tty,
						    struct file *file,
						    unsigned int cmd,
						    unsigned long arg);
	ssize_t cocci_id/* drivers/tty/n_r3964.c 133 */(struct tty_struct *tty,
							struct file *file,
							const unsigned char *buf,
							size_t nr);
	ssize_t cocci_id/* drivers/tty/n_r3964.c 131 */(struct tty_struct *tty,
							struct file *file,
							unsigned char __user *buf,
							size_t nr);
	void cocci_id/* drivers/tty/n_r3964.c 130 */(struct tty_struct *tty);
	int cocci_id/* drivers/tty/n_r3964.c 129 */(struct tty_struct *tty);
	char *cocci_id/* drivers/tty/n_r3964.c 1267 */;
	void cocci_id/* drivers/tty/n_r3964.c 126 */(struct r3964_info *pInfo,
						     struct r3964_client_info *pClient);
	struct poll_table_struct *cocci_id/* drivers/tty/n_r3964.c 1242 */;
	__poll_t cocci_id/* drivers/tty/n_r3964.c 1241 */;
	struct r3964_message *cocci_id/* drivers/tty/n_r3964.c 124 */(struct r3964_info *pInfo,
								      struct r3964_client_info *pClient);
	struct ktermios *cocci_id/* drivers/tty/n_r3964.c 1235 */;
	struct file *cocci_id/* drivers/tty/n_r3964.c 1221 */;
	void cocci_id/* drivers/tty/n_r3964.c 122 */(struct r3964_client_info *pClient,
						     int msg_id, int arg,
						     int error_code,
						     struct r3964_block_header *pBlock);
	unsigned char __user *cocci_id/* drivers/tty/n_r3964.c 1214 */;
	int cocci_id/* drivers/tty/n_r3964.c 120 */(struct r3964_info *pInfo,
						    struct pid *pid,
						    unsigned char __user *buf);
	int cocci_id/* drivers/tty/n_r3964.c 119 */(struct r3964_info *pInfo,
						    struct pid *pid, int arg);
	void cocci_id/* drivers/tty/n_r3964.c 118 */(struct timer_list *t);
	void cocci_id/* drivers/tty/n_r3964.c 117 */(struct r3964_info *pInfo,
						     const char flag);
	void cocci_id/* drivers/tty/n_r3964.c 116 */(struct r3964_info *pInfo,
						     const unsigned char c);
	void cocci_id/* drivers/tty/n_r3964.c 114 */(struct r3964_info *pInfo);
	void cocci_id/* drivers/tty/n_r3964.c 112 */(struct r3964_info *pInfo,
						     unsigned char ch);
	void cocci_id/* drivers/tty/n_r3964.c 111 */(struct r3964_info *pInfo,
						     int error_code);
	void cocci_id/* drivers/tty/n_r3964.c 110 */(struct r3964_info *,
						     struct r3964_block_header *);
	struct r3964_client_message cocci_id/* drivers/tty/n_r3964.c 1067 */;
	size_t cocci_id/* drivers/tty/n_r3964.c 1062 */;
	ssize_t cocci_id/* drivers/tty/n_r3964.c 1061 */;
}
