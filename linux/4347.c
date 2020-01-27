cocci_test_suite() {
	struct ipmi_reg_list *cocci_id/* drivers/char/ipmi/ipmi_devintf.c 893 */;
	void __exit cocci_id/* drivers/char/ipmi/ipmi_devintf.c 891 */;
	void cocci_id/* drivers/char/ipmi/ipmi_devintf.c 891 */;
	struct inode *cocci_id/* drivers/char/ipmi/ipmi_devintf.c 87 */;
	int __init cocci_id/* drivers/char/ipmi/ipmi_devintf.c 853 */;
	struct ipmi_smi_watcher cocci_id/* drivers/char/ipmi/ipmi_devintf.c 846 */;
	const struct ipmi_user_hndl cocci_id/* drivers/char/ipmi/ipmi_devintf.c 82 */;
	dev_t cocci_id/* drivers/char/ipmi/ipmi_devintf.c 813 */;
	struct device *cocci_id/* drivers/char/ipmi/ipmi_devintf.c 811 */;
	struct class *cocci_id/* drivers/char/ipmi/ipmi_devintf.c 809 */;
	struct ipmi_reg_list {
		dev_t dev;
		struct list_head link;
	} cocci_id/* drivers/char/ipmi/ipmi_devintf.c 802 */;
	const struct file_operations cocci_id/* drivers/char/ipmi/ipmi_devintf.c 778 */;
	struct compat_ipmi_recv cocci_id/* drivers/char/ipmi/ipmi_devintf.c 761 */;
	struct ipmi_recv cocci_id/* drivers/char/ipmi/ipmi_devintf.c 760 */;
	struct compat_ipmi_req_settime cocci_id/* drivers/char/ipmi/ipmi_devintf.c 747 */;
	struct ipmi_req_settime cocci_id/* drivers/char/ipmi/ipmi_devintf.c 746 */;
	int cocci_id/* drivers/char/ipmi/ipmi_devintf.c 728 */;
	struct compat_ipmi_req cocci_id/* drivers/char/ipmi/ipmi_devintf.c 727 */;
	struct ipmi_req cocci_id/* drivers/char/ipmi/ipmi_devintf.c 726 */;
	struct ipmi_file_private *cocci_id/* drivers/char/ipmi/ipmi_devintf.c 721 */;
	unsigned long cocci_id/* drivers/char/ipmi/ipmi_devintf.c 719 */;
	struct file *cocci_id/* drivers/char/ipmi/ipmi_devintf.c 718 */;
	unsigned int cocci_id/* drivers/char/ipmi/ipmi_devintf.c 718 */;
	long cocci_id/* drivers/char/ipmi/ipmi_devintf.c 718 */;
	struct compat_ipmi_recv *cocci_id/* drivers/char/ipmi/ipmi_devintf.c 690 */;
	struct compat_ipmi_req_settime *cocci_id/* drivers/char/ipmi/ipmi_devintf.c 682 */;
	struct ipmi_req_settime *cocci_id/* drivers/char/ipmi/ipmi_devintf.c 681 */;
	struct compat_ipmi_req *cocci_id/* drivers/char/ipmi/ipmi_devintf.c 673 */;
	struct ipmi_req *cocci_id/* drivers/char/ipmi/ipmi_devintf.c 672 */;
	struct compat_ipmi_msg *cocci_id/* drivers/char/ipmi/ipmi_devintf.c 664 */;
	struct ipmi_msg *cocci_id/* drivers/char/ipmi/ipmi_devintf.c 663 */;
	struct compat_ipmi_req_settime {
		struct compat_ipmi_req req;
		compat_int_t retries;
		compat_uint_t retry_time_ms;
	} cocci_id/* drivers/char/ipmi/ipmi_devintf.c 654 */;
	struct compat_ipmi_recv {
		compat_int_t recv_type;
		compat_uptr_t addr;
		compat_uint_t addr_len;
		compat_long_t msgid;
		struct compat_ipmi_msg msg;
	} cocci_id/* drivers/char/ipmi/ipmi_devintf.c 646 */;
	struct compat_ipmi_req {
		compat_uptr_t addr;
		compat_uint_t addr_len;
		compat_long_t msgid;
		struct compat_ipmi_msg msg;
	} cocci_id/* drivers/char/ipmi/ipmi_devintf.c 639 */;
	struct compat_ipmi_msg {
		u8 netfn;
		u8 cmd;
		u16 data_len;
		compat_uptr_t data;
	} cocci_id/* drivers/char/ipmi/ipmi_devintf.c 632 */;
	__poll_t cocci_id/* drivers/char/ipmi/ipmi_devintf.c 57 */;
	poll_table *cocci_id/* drivers/char/ipmi/ipmi_devintf.c 57 */;
	struct ipmi_timing_parms cocci_id/* drivers/char/ipmi/ipmi_devintf.c 551 */;
	struct ipmi_channel_lun_address_set cocci_id/* drivers/char/ipmi/ipmi_devintf.c 485 */;
	unsigned char cocci_id/* drivers/char/ipmi/ipmi_devintf.c 437 */;
	void *cocci_id/* drivers/char/ipmi/ipmi_devintf.c 40 */;
	struct ipmi_recv_msg *cocci_id/* drivers/char/ipmi/ipmi_devintf.c 39 */;
	struct ipmi_cmdspec_chans cocci_id/* drivers/char/ipmi/ipmi_devintf.c 381 */;
	struct ipmi_cmdspec cocci_id/* drivers/char/ipmi/ipmi_devintf.c 353 */;
	struct ipmi_recv *cocci_id/* drivers/char/ipmi/ipmi_devintf.c 287 */;
	void __user *cocci_id/* drivers/char/ipmi/ipmi_devintf.c 287 */;
	struct ipmi_file_private {
		struct ipmi_user *user;
		spinlock_t recv_msg_lock;
		struct list_head recv_msgs;
		struct fasync_struct *fasync_queue;
		wait_queue_head_t wait;
		struct mutex recv_mutex;
		int default_retries;
		unsigned int default_retry_time_ms;
	} cocci_id/* drivers/char/ipmi/ipmi_devintf.c 27 */;
	struct ipmi_recv_msg cocci_id/* drivers/char/ipmi/ipmi_devintf.c 227 */;
	struct list_head *cocci_id/* drivers/char/ipmi/ipmi_devintf.c 204 */;
	int (*cocci_id/* drivers/char/ipmi/ipmi_devintf.c 200 */)(struct ipmi_recv *,
								  void __user *);
	bool cocci_id/* drivers/char/ipmi/ipmi_devintf.c 199 */;
	struct kernel_ipmi_msg cocci_id/* drivers/char/ipmi/ipmi_devintf.c 147 */;
	struct ipmi_addr cocci_id/* drivers/char/ipmi/ipmi_devintf.c 146 */;
	struct ipmi_user *cocci_id/* drivers/char/ipmi/ipmi_devintf.c 140 */;
}
