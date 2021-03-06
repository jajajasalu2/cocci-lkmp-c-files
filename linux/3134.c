cocci_test_suite() {
	int *cocci_id/* drivers/block/nbd.c 984 */;
	const struct blk_mq_queue_data *cocci_id/* drivers/block/nbd.c 951 */;
	blk_status_t cocci_id/* drivers/block/nbd.c 950 */;
	struct blk_mq_hw_ctx *cocci_id/* drivers/block/nbd.c 950 */;
	struct nbd_sock *cocci_id/* drivers/block/nbd.c 820 */;
	struct nbd_cmd *cocci_id/* drivers/block/nbd.c 798 */;
	struct request *cocci_id/* drivers/block/nbd.c 796 */;
	struct recv_thread_args cocci_id/* drivers/block/nbd.c 771 */;
	struct bio_vec cocci_id/* drivers/block/nbd.c 735 */;
	struct req_iterator cocci_id/* drivers/block/nbd.c 734 */;
	struct link_dead_args {
		struct work_struct work;
		int index;
	} cocci_id/* drivers/block/nbd.c 70 */;
	struct iov_iter cocci_id/* drivers/block/nbd.c 673 */;
	struct kvec cocci_id/* drivers/block/nbd.c 672 */;
	u16 cocci_id/* drivers/block/nbd.c 670 */;
	struct nbd_reply cocci_id/* drivers/block/nbd.c 666 */;
	struct recv_thread_args {
		struct work_struct work;
		struct nbd_device *nbd;
		int index;
	} cocci_id/* drivers/block/nbd.c 64 */;
	struct bvec_iter cocci_id/* drivers/block/nbd.c 608 */;
	unsigned long long cocci_id/* drivers/block/nbd.c 579 */;
	struct nbd_sock {
		struct socket *sock;
		struct mutex tx_lock;
		struct request *pending;
		int sent;
		bool dead;
		int fallback_index;
		int cookie;
	} cocci_id/* drivers/block/nbd.c 54 */;
	struct bio *cocci_id/* drivers/block/nbd.c 525 */;
	struct msghdr cocci_id/* drivers/block/nbd.c 465 */;
	struct iov_iter *cocci_id/* drivers/block/nbd.c 460 */;
	enum blk_eh_timer_return cocci_id/* drivers/block/nbd.c 381 */;
	loff_t cocci_id/* drivers/block/nbd.c 323 */;
	struct nbd_device cocci_id/* drivers/block/nbd.c 2409 */;
	void __exit cocci_id/* drivers/block/nbd.c 2397 */;
	struct list_head *cocci_id/* drivers/block/nbd.c 2390 */;
	struct nbd_request cocci_id/* drivers/block/nbd.c 2344 */;
	int __init cocci_id/* drivers/block/nbd.c 2340 */;
	struct link_dead_args cocci_id/* drivers/block/nbd.c 2334 */;
	struct link_dead_args *cocci_id/* drivers/block/nbd.c 2334 */;
	struct work_struct *cocci_id/* drivers/block/nbd.c 2332 */;
	struct sk_buff *cocci_id/* drivers/block/nbd.c 2286 */;
	struct genl_info *cocci_id/* drivers/block/nbd.c 2284 */;
	u8 cocci_id/* drivers/block/nbd.c 2245 */;
	size_t cocci_id/* drivers/block/nbd.c 2235 */;
	struct genl_family cocci_id/* drivers/block/nbd.c 2182 */;
	const struct genl_multicast_group cocci_id/* drivers/block/nbd.c 2178 */[];
	const struct genl_ops cocci_id/* drivers/block/nbd.c 2155 */[];
	const struct device_attribute cocci_id/* drivers/block/nbd.c 215 */;
	struct device_attribute *cocci_id/* drivers/block/nbd.c 207 */;
	char *cocci_id/* drivers/block/nbd.c 207 */;
	ssize_t cocci_id/* drivers/block/nbd.c 206 */;
	const char *cocci_id/* drivers/block/nbd.c 194 */;
	struct nlattr *cocci_id/* drivers/block/nbd.c 1935 */[NBD_SOCK_MAX + 1];
	struct nlattr *cocci_id/* drivers/block/nbd.c 1930 */;
	u32 cocci_id/* drivers/block/nbd.c 178 */;
	const struct nla_policy __attribute__((unused)) cocci_id/* drivers/block/nbd.c 1769 */[NBD_DEVICE_ATTR_MAX + 1];
	const struct nla_policy cocci_id/* drivers/block/nbd.c 1762 */[NBD_SOCK_MAX + 1];
	const struct nla_policy cocci_id/* drivers/block/nbd.c 1750 */[NBD_ATTR_MAX + 1];
	u64 cocci_id/* drivers/block/nbd.c 175 */;
	struct nbd_device **cocci_id/* drivers/block/nbd.c 1740 */;
	void *cocci_id/* drivers/block/nbd.c 1737 */;
	struct nbd_cmd cocci_id/* drivers/block/nbd.c 1682 */;
	struct request_queue *cocci_id/* drivers/block/nbd.c 1652 */;
	struct gendisk *cocci_id/* drivers/block/nbd.c 1651 */;
	const struct blk_mq_ops cocci_id/* drivers/block/nbd.c 1641 */;
	struct blk_mq_tag_set *cocci_id/* drivers/block/nbd.c 1631 */;
	struct device *cocci_id/* drivers/block/nbd.c 160 */;
	void cocci_id/* drivers/block/nbd.c 157 */(struct work_struct *work);
	int cocci_id/* drivers/block/nbd.c 156 */(struct sk_buff *skb,
						  struct genl_info *info);
	const struct file_operations cocci_id/* drivers/block/nbd.c 1554 */;
	void cocci_id/* drivers/block/nbd.c 155 */(struct genl_info *info,
						   int index);
	struct inode *cocci_id/* drivers/block/nbd.c 1549 */;
	struct file *cocci_id/* drivers/block/nbd.c 1549 */;
	void cocci_id/* drivers/block/nbd.c 154 */(struct nbd_device *nbd);
	struct seq_file *cocci_id/* drivers/block/nbd.c 1526 */;
	int cocci_id/* drivers/block/nbd.c 152 */(struct nbd_device *nbd);
	const struct block_device_operations cocci_id/* drivers/block/nbd.c 1493 */;
	struct nbd_config cocci_id/* drivers/block/nbd.c 1427 */;
	void cocci_id/* drivers/block/nbd.c 1423 */;
	fmode_t cocci_id/* drivers/block/nbd.c 1393 */;
	struct dentry *cocci_id/* drivers/block/nbd.c 139 */;
	struct nbd_config *cocci_id/* drivers/block/nbd.c 1343 */;
	unsigned long cocci_id/* drivers/block/nbd.c 1341 */;
	unsigned int cocci_id/* drivers/block/nbd.c 1341 */;
	struct nbd_device *cocci_id/* drivers/block/nbd.c 1340 */;
	struct block_device *cocci_id/* drivers/block/nbd.c 1340 */;
	int cocci_id/* drivers/block/nbd.c 1340 */;
	struct nbd_cmd {
		struct nbd_device *nbd;
		struct mutex lock;
		int index;
		int cookie;
		int retries;
		blk_status_t status;
		unsigned long flags;
		u32 cmd_cookie;
	} cocci_id/* drivers/block/nbd.c 127 */;
	struct recv_thread_args *cocci_id/* drivers/block/nbd.c 1061 */;
	struct nbd_device {
		struct blk_mq_tag_set tag_set;
		int index;
		refcount_t config_refs;
		refcount_t refs;
		struct nbd_config *config;
		struct mutex config_lock;
		struct gendisk *disk;
		struct workqueue_struct *recv_workq;
		struct list_head list;
		struct task_struct *task_recv;
		struct task_struct *task_setup;
		struct completion *destroy_complete;
		unsigned long flags;
	} cocci_id/* drivers/block/nbd.c 106 */;
	struct nbd_sock cocci_id/* drivers/block/nbd.c 1038 */;
	struct nbd_sock **cocci_id/* drivers/block/nbd.c 1008 */;
	struct socket *cocci_id/* drivers/block/nbd.c 1007 */;
	bool cocci_id/* drivers/block/nbd.c 1004 */;
	struct nbd_config {
		u32 flags;
		unsigned long runtime_flags;
		u64 dead_conn_timeout;
		struct nbd_sock **socks;
		int num_connections;
		atomic_t live_connections;
		wait_queue_head_t conn_wait;
		atomic_t recv_threads;
		wait_queue_head_t recv_wq;
		loff_t blksize;
		loff_t bytesize;
#if IS_ENABLED(CONFIG_DEBUG_FS)
		struct dentry *dbg_dir;
#endif
	} cocci_id/*  1 */;
}
