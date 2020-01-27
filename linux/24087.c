cocci_test_suite() {
	struct cache_queue cocci_id/* net/sunrpc/cache.c 998 */;
	struct cache_reader *cocci_id/* net/sunrpc/cache.c 986 */;
	unsigned long cocci_id/* net/sunrpc/cache.c 982 */;
	struct inode *cocci_id/* net/sunrpc/cache.c 981 */;
	struct file *cocci_id/* net/sunrpc/cache.c 981 */;
	__poll_t cocci_id/* net/sunrpc/cache.c 954 */;
	poll_table *cocci_id/* net/sunrpc/cache.c 954 */;
	struct page *cocci_id/* net/sunrpc/cache.c 913 */;
	struct address_space *cocci_id/* net/sunrpc/cache.c 909 */;
	char cocci_id/* net/sunrpc/cache.c 897 */[8192];
	size_t cocci_id/* net/sunrpc/cache.c 879 */;
	const char __user *cocci_id/* net/sunrpc/cache.c 878 */;
	char *cocci_id/* net/sunrpc/cache.c 878 */;
	ssize_t cocci_id/* net/sunrpc/cache.c 878 */;
	char __user *cocci_id/* net/sunrpc/cache.c 796 */;
	struct cache_reader {
		struct cache_queue q;
		int offset;
	} cocci_id/* net/sunrpc/cache.c 779 */;
	struct cache_request {
		struct cache_queue q;
		struct cache_head *item;
		char *buf;
		int len;
		int readers;
	} cocci_id/* net/sunrpc/cache.c 772 */;
	struct cache_queue {
		struct list_head list;
		int reader;
	} cocci_id/* net/sunrpc/cache.c 768 */;
	struct cache_deferred_req cocci_id/* net/sunrpc/cache.c 743 */;
	struct list_head cocci_id/* net/sunrpc/cache.c 728 */;
	bool cocci_id/* net/sunrpc/cache.c 677 */;
	struct thread_deferred_req cocci_id/* net/sunrpc/cache.c 613 */;
	struct thread_deferred_req *cocci_id/* net/sunrpc/cache.c 612 */;
	struct thread_deferred_req {
		struct cache_deferred_req handle;
		struct completion completion;
	} cocci_id/* net/sunrpc/cache.c 605 */;
	int cocci_id/* net/sunrpc/cache.c 579 */;
	struct cache_deferred_req *cocci_id/* net/sunrpc/cache.c 577 */;
	void cocci_id/* net/sunrpc/cache.c 577 */;
	struct hlist_head cocci_id/* net/sunrpc/cache.c 565 */[DFR_HASHSIZE];
	void cocci_id/* net/sunrpc/cache.c 56 */(struct cache_head *head,
						 struct cache_detail *detail);
	struct work_struct *cocci_id/* net/sunrpc/cache.c 482 */;
	struct hlist_node *cocci_id/* net/sunrpc/cache.c 444 */;
	struct hlist_head *cocci_id/* net/sunrpc/cache.c 443 */;
	struct cache_detail cocci_id/* net/sunrpc/cache.c 423 */;
	bool cocci_id/* net/sunrpc/cache.c 41 */(struct cache_detail *detail);
	struct list_head *cocci_id/* net/sunrpc/cache.c 407 */;
	void cocci_id/* net/sunrpc/cache.c 40 */(struct cache_head *item);
	bool cocci_id/* net/sunrpc/cache.c 39 */(struct cache_req *req,
						 struct cache_head *item);
	struct delayed_work cocci_id/* net/sunrpc/cache.c 361 */;
	void cocci_id/* net/sunrpc/cache.c 360 */(struct work_struct *work);
	long cocci_id/* net/sunrpc/cache.c 277 */;
	struct cache_req *cocci_id/* net/sunrpc/cache.c 274 */;
	umode_t cocci_id/* net/sunrpc/cache.c 1865 */;
	const char *cocci_id/* net/sunrpc/cache.c 1865 */;
	struct dentry *cocci_id/* net/sunrpc/cache.c 1864 */;
	const struct file_operations cocci_id/* net/sunrpc/cache.c 1793 */;
	struct hlist_head cocci_id/* net/sunrpc/cache.c 1726 */;
	const struct cache_detail *cocci_id/* net/sunrpc/cache.c 1717 */;
	struct net *cocci_id/* net/sunrpc/cache.c 1717 */;
	void __init cocci_id/* net/sunrpc/cache.c 1693 */;
	struct sunrpc_net *cocci_id/* net/sunrpc/cache.c 1657 */;
	struct proc_dir_entry *cocci_id/* net/sunrpc/cache.c 1656 */;
	char cocci_id/* net/sunrpc/cache.c 1489 */[20];
	char cocci_id/* net/sunrpc/cache.c 1477 */[22];
	const struct seq_operations cocci_id/* net/sunrpc/cache.c 1423 */;
	time_t cocci_id/* net/sunrpc/cache.c 142 */;
	void cocci_id/* net/sunrpc/cache.c 140 */(struct cache_detail *detail,
						  struct cache_head *ch);
	struct cache_head cocci_id/* net/sunrpc/cache.c 1343 */;
	struct cache_detail *cocci_id/* net/sunrpc/cache.c 1322 */;
	struct cache_head *cocci_id/* net/sunrpc/cache.c 1321 */;
	unsigned int cocci_id/* net/sunrpc/cache.c 1320 */;
	loff_t cocci_id/* net/sunrpc/cache.c 1319 */;
	loff_t *cocci_id/* net/sunrpc/cache.c 1317 */;
	struct seq_file *cocci_id/* net/sunrpc/cache.c 1317 */;
	void *cocci_id/* net/sunrpc/cache.c 1317 */;
	char **cocci_id/* net/sunrpc/cache.c 1111 */;
	int *cocci_id/* net/sunrpc/cache.c 1111 */;
	struct cache_request cocci_id/* net/sunrpc/cache.c 1082 */;
	struct cache_request *cocci_id/* net/sunrpc/cache.c 1075 */;
	struct cache_queue *cocci_id/* net/sunrpc/cache.c 1074 */;
	int __user *cocci_id/* net/sunrpc/cache.c 1007 */;
}
