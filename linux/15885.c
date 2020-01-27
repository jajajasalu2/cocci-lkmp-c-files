cocci_test_suite() {
	va_list cocci_id/* drivers/staging/isdn/hysdn/hysdn_proclog.c 72 */;
	struct procdata *cocci_id/* drivers/staging/isdn/hysdn/hysdn_proclog.c 70 */;
	hysdn_card *cocci_id/* drivers/staging/isdn/hysdn/hysdn_proclog.c 68 */;
	char *cocci_id/* drivers/staging/isdn/hysdn/hysdn_proclog.c 68 */;
	void cocci_id/* drivers/staging/isdn/hysdn/hysdn_proclog.c 67 */;
	char cocci_id/* drivers/staging/isdn/hysdn/hysdn_proclog.c 58 */[ERRLOG_TEXT_SIZE + 40];
	tErrLogEntry *cocci_id/* drivers/staging/isdn/hysdn/hysdn_proclog.c 56 */;
	int cocci_id/* drivers/staging/isdn/hysdn/hysdn_proclog.c 56 */;
	struct procdata {
		struct proc_dir_entry *log;
		char log_name[15];
		struct log_data *log_head,*log_tail;
		int if_used;
		unsigned char logtmp[LOG_MAX_LINELEN];
		wait_queue_head_t rd_queue;
	} cocci_id/* drivers/staging/isdn/hysdn/hysdn_proclog.c 42 */;
	void *cocci_id/* drivers/staging/isdn/hysdn/hysdn_proclog.c 336 */;
	struct procdata cocci_id/* drivers/staging/isdn/hysdn/hysdn_proclog.c 328 */;
	struct log_data {
		struct log_data *next;
		unsigned long usage_cnt;
		void *proc_ctrl;
		char log_start[2];
	} cocci_id/* drivers/staging/isdn/hysdn/hysdn_proclog.c 32 */;
	const struct file_operations cocci_id/* drivers/staging/isdn/hysdn/hysdn_proclog.c 305 */;
	poll_table *cocci_id/* drivers/staging/isdn/hysdn/hysdn_proclog.c 285 */;
	__poll_t cocci_id/* drivers/staging/isdn/hysdn/hysdn_proclog.c 284 */;
	void cocci_id/* drivers/staging/isdn/hysdn/hysdn_proclog.c 27 */(hysdn_card *card,
									 char *cp);
	struct log_data **cocci_id/* drivers/staging/isdn/hysdn/hysdn_proclog.c 252 */;
	struct log_data *cocci_id/* drivers/staging/isdn/hysdn/hysdn_proclog.c 240 */;
	struct proc_dir_entry *cocci_id/* drivers/staging/isdn/hysdn/hysdn_proclog.c 24 */;
	struct inode *cocci_id/* drivers/staging/isdn/hysdn/hysdn_proclog.c 238 */;
	struct file *cocci_id/* drivers/staging/isdn/hysdn/hysdn_proclog.c 238 */;
	unsigned long cocci_id/* drivers/staging/isdn/hysdn/hysdn_proclog.c 212 */;
	loff_t *cocci_id/* drivers/staging/isdn/hysdn/hysdn_proclog.c 170 */;
	char __user *cocci_id/* drivers/staging/isdn/hysdn/hysdn_proclog.c 170 */;
	size_t cocci_id/* drivers/staging/isdn/hysdn/hysdn_proclog.c 170 */;
	ssize_t cocci_id/* drivers/staging/isdn/hysdn/hysdn_proclog.c 169 */;
	const char __user *cocci_id/* drivers/staging/isdn/hysdn/hysdn_proclog.c 154 */;
	struct log_data cocci_id/* drivers/staging/isdn/hysdn/hysdn_proclog.c 115 */;
}
