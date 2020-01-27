cocci_test_suite() {
	void __exit cocci_id/* drivers/tty/n_hdlc.c 981 */;
	const char cocci_id/* drivers/tty/n_hdlc.c 978 */[]__exitdata;
	int __init cocci_id/* drivers/tty/n_hdlc.c 949 */;
	const char cocci_id/* drivers/tty/n_hdlc.c 942 */[]__initconst;
	struct n_hdlc_buf cocci_id/* drivers/tty/n_hdlc.c 932 */;
	unsigned long cocci_id/* drivers/tty/n_hdlc.c 926 */;
	struct n_hdlc_buf_list *cocci_id/* drivers/tty/n_hdlc.c 924 */;
	poll_table *cocci_id/* drivers/tty/n_hdlc.c 801 */;
	__poll_t cocci_id/* drivers/tty/n_hdlc.c 800 */;
	int __user *cocci_id/* drivers/tty/n_hdlc.c 758 */;
	unsigned int cocci_id/* drivers/tty/n_hdlc.c 730 */;
	struct file *cocci_id/* drivers/tty/n_hdlc.c 729 */;
	const unsigned char *cocci_id/* drivers/tty/n_hdlc.c 646 */;
	__u8 __user *cocci_id/* drivers/tty/n_hdlc.c 561 */;
	size_t cocci_id/* drivers/tty/n_hdlc.c 561 */;
	ssize_t cocci_id/* drivers/tty/n_hdlc.c 560 */;
	char *cocci_id/* drivers/tty/n_hdlc.c 494 */;
	const __u8 *cocci_id/* drivers/tty/n_hdlc.c 493 */;
	struct tty_ldisc_ops cocci_id/* drivers/tty/n_hdlc.c 214 */;
	struct n_hdlc_buf *cocci_id/* drivers/tty/n_hdlc.c 199 */;
	struct n_hdlc *cocci_id/* drivers/tty/n_hdlc.c 198 */;
	struct tty_struct *cocci_id/* drivers/tty/n_hdlc.c 196 */;
	void cocci_id/* drivers/tty/n_hdlc.c 196 */;
	void cocci_id/* drivers/tty/n_hdlc.c 187 */(struct tty_struct *tty,
						    const __u8 *cp, char *fp,
						    int count);
	void cocci_id/* drivers/tty/n_hdlc.c 186 */(struct tty_struct *tty);
	int cocci_id/* drivers/tty/n_hdlc.c 185 */(struct tty_struct *tty);
	__poll_t cocci_id/* drivers/tty/n_hdlc.c 183 */(struct tty_struct *tty,
							struct file *filp,
							poll_table *wait);
	int cocci_id/* drivers/tty/n_hdlc.c 181 */(struct tty_struct *tty,
						   struct file *file,
						   unsigned int cmd,
						   unsigned long arg);
	ssize_t cocci_id/* drivers/tty/n_hdlc.c 179 */(struct tty_struct *tty,
						       struct file *file,
						       const unsigned char *buf,
						       size_t nr);
	ssize_t cocci_id/* drivers/tty/n_hdlc.c 177 */(struct tty_struct *tty,
						       struct file *file,
						       __u8 __user *buf,
						       size_t nr);
	int cocci_id/* drivers/tty/n_hdlc.c 170 */;
	struct n_hdlc *cocci_id/* drivers/tty/n_hdlc.c 166 */(void);
	struct n_hdlc_buf *cocci_id/* drivers/tty/n_hdlc.c 162 */(struct n_hdlc_buf_list *list);
	void cocci_id/* drivers/tty/n_hdlc.c 160 */(struct n_hdlc_buf_list *list,
						    struct n_hdlc_buf *buf);
	void cocci_id/* drivers/tty/n_hdlc.c 158 */(struct n_hdlc_buf_list *buf_list,
						    struct n_hdlc_buf *buf);
	struct n_hdlc {
		int magic;
		__u32 flags;
		struct tty_struct *tty;
		struct tty_struct *backup_tty;
		int tbusy;
		int woke_up;
		struct n_hdlc_buf_list tx_buf_list;
		struct n_hdlc_buf_list rx_buf_list;
		struct n_hdlc_buf_list tx_free_buf_list;
		struct n_hdlc_buf_list rx_free_buf_list;
	} cocci_id/* drivers/tty/n_hdlc.c 142 */;
	struct n_hdlc_buf_list {
		struct list_head list;
		int count;
		spinlock_t spinlock;
	} cocci_id/* drivers/tty/n_hdlc.c 123 */;
	struct n_hdlc_buf {
		struct list_head list_item;
		int count;
		char buf[1];
	} cocci_id/* drivers/tty/n_hdlc.c 115 */;
}
