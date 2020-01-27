cocci_test_suite() {
	struct msgbuf __user *cocci_id/* ipc/msg.c 996 */;
	long *cocci_id/* ipc/msg.c 970 */;
	struct compat_msgbuf {
		compat_long_t mtype;
		char mtext[1];
	} cocci_id/* ipc/msg.c 947 */;
	struct msg_sender cocci_id/* ipc/msg.c 849 */;
	struct msg_sender {
		struct list_head list;
		struct task_struct *tsk;
		size_t msgsz;
	} cocci_id/* ipc/msg.c 77 */;
	struct msginfo cocci_id/* ipc/msg.c 718 */;
	struct msqid64_ds cocci_id/* ipc/msg.c 708 */;
	struct ipc_namespace *cocci_id/* ipc/msg.c 706 */;
	int cocci_id/* ipc/msg.c 704 */;
	struct compat_msqid_ds cocci_id/* ipc/msg.c 689 */;
	struct compat_msqid64_ds cocci_id/* ipc/msg.c 673 */;
	struct compat_msqid_ds __user *cocci_id/* ipc/msg.c 660 */;
	struct compat_msqid64_ds __user *cocci_id/* ipc/msg.c 654 */;
	struct msg_receiver {
		struct list_head r_list;
		struct task_struct *r_tsk;
		int r_mode;
		long r_msgtype;
		long r_maxsize;
		struct msg_msg *r_msg;
	} cocci_id/* ipc/msg.c 65 */;
	struct msqid64_ds *cocci_id/* ipc/msg.c 649 */;
	struct compat_msqid_ds {
		struct compat_ipc_perm msg_perm;
		compat_uptr_t msg_first;
		compat_uptr_t msg_last;
		old_time32_t msg_stime;
		old_time32_t msg_rtime;
		old_time32_t msg_ctime;
		compat_ulong_t msg_lcbytes;
		compat_ulong_t msg_lqbytes;
		unsigned short msg_cbytes;
		unsigned short msg_qnum;
		unsigned short msg_qbytes;
		compat_ipc_pid_t msg_lspid;
		compat_ipc_pid_t msg_lrpid;
	} cocci_id/* ipc/msg.c 633 */;
	struct msqid_ds *cocci_id/* ipc/msg.c 612 */;
	struct msqid_ds __user *cocci_id/* ipc/msg.c 570 */;
	struct msg_queue {
		struct kern_ipc_perm q_perm;
		time64_t q_stime;
		time64_t q_rtime;
		time64_t q_ctime;
		unsigned long q_cbytes;
		unsigned long q_qnum;
		unsigned long q_qbytes;
		struct pid *q_lspid;
		struct pid *q_lrpid;
		struct list_head q_messages;
		struct list_head q_receivers;
		struct list_head q_senders;
	} cocci_id/* ipc/msg.c 48 */;
	struct msginfo *cocci_id/* ipc/msg.c 456 */;
	struct msqid_ds cocci_id/* ipc/msg.c 353 */;
	unsigned long cocci_id/* ipc/msg.c 343 */;
	struct ipc_params cocci_id/* ipc/msg.c 283 */;
	const struct ipc_ops cocci_id/* ipc/msg.c 279 */;
	key_t cocci_id/* ipc/msg.c 276 */;
	struct msg_queue cocci_id/* ipc/msg.c 256 */;
	struct kern_ipc_perm *cocci_id/* ipc/msg.c 253 */;
	struct msg_receiver *cocci_id/* ipc/msg.c 237 */;
	struct wake_q_head *cocci_id/* ipc/msg.c 235 */;
	void cocci_id/* ipc/msg.c 234 */;
	struct list_head *cocci_id/* ipc/msg.c 202 */;
	struct task_struct *cocci_id/* ipc/msg.c 201 */;
	struct msg_sender *cocci_id/* ipc/msg.c 183 */;
	bool cocci_id/* ipc/msg.c 176 */;
	struct ipc_params *cocci_id/* ipc/msg.c 133 */;
	void __init cocci_id/* ipc/msg.c 1315 */;
	struct user_namespace *cocci_id/* ipc/msg.c 1290 */;
	struct pid_namespace *cocci_id/* ipc/msg.c 1289 */;
	struct seq_file *cocci_id/* ipc/msg.c 1287 */;
	void *cocci_id/* ipc/msg.c 1287 */;
	ssize_t cocci_id/* ipc/msg.c 1254 */;
	compat_long_t cocci_id/* ipc/msg.c 1252 */;
	compat_uptr_t cocci_id/* ipc/msg.c 1251 */;
	compat_ssize_t cocci_id/* ipc/msg.c 1251 */;
	struct compat_msgbuf __user *cocci_id/* ipc/msg.c 1239 */;
	struct msg_msg *cocci_id/* ipc/msg.c 1237 */;
	void __user *cocci_id/* ipc/msg.c 1237 */;
	long cocci_id/* ipc/msg.c 1237 */;
	size_t cocci_id/* ipc/msg.c 1237 */;
	struct msgbuf *cocci_id/* ipc/msg.c 1230 */;
	struct kern_ipc_perm cocci_id/* ipc/msg.c 119 */;
	struct rcu_head *cocci_id/* ipc/msg.c 117 */;
	struct msg_receiver cocci_id/* ipc/msg.c 1098 */;
	struct msg_queue *cocci_id/* ipc/msg.c 1070 */;
	long (*cocci_id/* ipc/msg.c 1067 */)(void __user *, struct msg_msg *,
					     size_t);
}
