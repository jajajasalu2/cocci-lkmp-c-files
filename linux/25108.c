cocci_test_suite() {
	struct sockaddr *cocci_id/* net/9p/trans_fd.c 935 */;
	ushort cocci_id/* net/9p/trans_fd.c 934 */;
	struct sockaddr_in cocci_id/* net/9p/trans_fd.c 927 */;
	struct socket *cocci_id/* net/9p/trans_fd.c 925 */;
	int cocci_id/* net/9p/trans_fd.c 925 */;
	struct p9_poll_wait {
		struct p9_conn *conn;
		wait_queue_entry_t wait;
		wait_queue_head_t *wait_addr;
	} cocci_id/* net/9p/trans_fd.c 85 */;
	struct p9_trans_fd cocci_id/* net/9p/trans_fd.c 800 */;
	enum{Rworksched=1, Rpending=2, Wworksched=4, Wpending=8,} cocci_id/* net/9p/trans_fd.c 78 */;
	substring_t cocci_id/* net/9p/trans_fd.c 742 */[MAX_OPT_ARGS];
	struct p9_fd_opts *cocci_id/* net/9p/trans_fd.c 739 */;
	struct seq_file *cocci_id/* net/9p/trans_fd.c 717 */;
	const match_table_t cocci_id/* net/9p/trans_fd.c 70 */;
	enum{Opt_port, Opt_rfdno, Opt_wfdno, Opt_err, Opt_privport,} cocci_id/* net/9p/trans_fd.c 63 */;
	struct p9_trans_fd *cocci_id/* net/9p/trans_fd.c 578 */;
	__poll_t cocci_id/* net/9p/trans_fd.c 577 */;
	struct p9_client *cocci_id/* net/9p/trans_fd.c 575 */;
	wait_queue_head_t *cocci_id/* net/9p/trans_fd.c 544 */;
	poll_table *cocci_id/* net/9p/trans_fd.c 544 */;
	struct file *cocci_id/* net/9p/trans_fd.c 544 */;
	struct p9_poll_wait cocci_id/* net/9p/trans_fd.c 521 */;
	wait_queue_entry_t *cocci_id/* net/9p/trans_fd.c 518 */;
	struct p9_fd_opts {
		int rfd;
		int wfd;
		u16 port;
		bool privport;
	} cocci_id/* net/9p/trans_fd.c 51 */;
	struct p9_req_t cocci_id/* net/9p/trans_fd.c 458 */;
	ssize_t cocci_id/* net/9p/trans_fd.c 412 */;
	struct p9_trans_module cocci_id/* net/9p/trans_fd.c 41 */;
	loff_t cocci_id/* net/9p/trans_fd.c 251 */;
	void *cocci_id/* net/9p/trans_fd.c 247 */;
	struct poll_table_struct *cocci_id/* net/9p/trans_fd.c 219 */;
	int *cocci_id/* net/9p/trans_fd.c 219 */;
	struct p9_req_t *cocci_id/* net/9p/trans_fd.c 187 */;
	struct p9_conn *cocci_id/* net/9p/trans_fd.c 185 */;
	void cocci_id/* net/9p/trans_fd.c 185 */;
	struct p9_poll_wait *cocci_id/* net/9p/trans_fd.c 163 */;
	unsigned long cocci_id/* net/9p/trans_fd.c 159 */;
	unsigned int cocci_id/* net/9p/trans_fd.c 155 */;
	void cocci_id/* net/9p/trans_fd.c 148 */(struct work_struct *work);
	struct p9_trans_fd {
		struct file *rd;
		struct file *wr;
		struct p9_conn conn;
	} cocci_id/* net/9p/trans_fd.c 142 */;
	struct p9_conn {
		struct list_head mux_list;
		struct p9_client *client;
		int err;
		struct list_head req_list;
		struct list_head unsent_req_list;
		struct p9_req_t *rreq;
		struct p9_req_t *wreq;
		char tmp_buf[7];
		struct p9_fcall rc;
		int wpos;
		int wsize;
		char *wbuf;
		struct list_head poll_pending_link;
		struct p9_poll_wait poll_wait[MAXPOLLWADDR];
		poll_table pt;
		struct work_struct rq;
		struct work_struct wq;
		unsigned long wsched;
	} cocci_id/* net/9p/trans_fd.c 113 */;
	struct p9_conn cocci_id/* net/9p/trans_fd.c 1117 */;
	struct work_struct *cocci_id/* net/9p/trans_fd.c 1108 */;
	struct p9_fd_opts cocci_id/* net/9p/trans_fd.c 1040 */;
	const char *cocci_id/* net/9p/trans_fd.c 1037 */;
	char *cocci_id/* net/9p/trans_fd.c 1037 */;
	struct sockaddr_un cocci_id/* net/9p/trans_fd.c 1001 */;
}
