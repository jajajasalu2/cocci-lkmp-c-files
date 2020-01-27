cocci_test_suite() {
	struct nfs_pgio_header *cocci_id/* fs/nfs/write.c 981 */;
	struct nfs_open_context *cocci_id/* fs/nfs/write.c 960 */;
	u32 cocci_id/* fs/nfs/write.c 940 */;
	struct nfs_direct_req *cocci_id/* fs/nfs/write.c 926 */;
	unsigned long cocci_id/* fs/nfs/write.c 767 */;
	struct nfs_inode *cocci_id/* fs/nfs/write.c 749 */;
	mempool_t *cocci_id/* fs/nfs/write.c 71 */;
	struct kmem_cache *cocci_id/* fs/nfs/write.c 70 */;
	struct nfs_pageio_descriptor cocci_id/* fs/nfs/write.c 670 */;
	struct nfs_pageio_descriptor *cocci_id/* fs/nfs/write.c 651 */;
	struct nfs_page *cocci_id/* fs/nfs/write.c 64 */(struct nfs_inode *nfsi,
							 struct page *page);
	void cocci_id/* fs/nfs/write.c 62 */(struct nfs_commit_info *cinfo,
					     struct inode *inode);
	void cocci_id/* fs/nfs/write.c 61 */(struct nfs_page *req);
	const struct nfs_rw_ops cocci_id/* fs/nfs/write.c 59 */;
	const struct nfs_commit_completion_ops cocci_id/* fs/nfs/write.c 58 */;
	const struct nfs_pgio_completion_ops cocci_id/* fs/nfs/write.c 57 */;
	const struct rpc_call_ops cocci_id/* fs/nfs/write.c 56 */;
	struct nfs_io_completion {
		void (*complete)(void *data);
		void *data;
		struct kref refcount;
	} cocci_id/* fs/nfs/write.c 46 */;
	pgoff_t cocci_id/* fs/nfs/write.c 226 */;
	unsigned int cocci_id/* fs/nfs/write.c 222 */;
	struct nfs_commit_data cocci_id/* fs/nfs/write.c 2131 */;
	struct nfs_pgio_header cocci_id/* fs/nfs/write.c 2119 */;
	int __init cocci_id/* fs/nfs/write.c 2116 */;
	enum migrate_mode cocci_id/* fs/nfs/write.c 2096 */;
	struct writeback_control cocci_id/* fs/nfs/write.c 2064 */;
	loff_t cocci_id/* fs/nfs/write.c 1997 */;
	struct address_space *cocci_id/* fs/nfs/write.c 1996 */;
	struct nfs_commit_info cocci_id/* fs/nfs/write.c 1917 */;
	struct writeback_control *cocci_id/* fs/nfs/write.c 1914 */;
	struct inode *cocci_id/* fs/nfs/write.c 1913 */;
	int cocci_id/* fs/nfs/write.c 1913 */;
	long long cocci_id/* fs/nfs/write.c 1847 */;
	unsigned long long cocci_id/* fs/nfs/write.c 1845 */;
	struct nfs_server *cocci_id/* fs/nfs/write.c 1835 */;
	struct nfs_commit_data *cocci_id/* fs/nfs/write.c 1820 */;
	struct rpc_task *cocci_id/* fs/nfs/write.c 1818 */;
	void *cocci_id/* fs/nfs/write.c 1818 */;
	struct nfs_commit_info *cocci_id/* fs/nfs/write.c 1798 */;
	struct pnfs_layout_segment *cocci_id/* fs/nfs/write.c 1735 */;
	struct rpc_task_setup cocci_id/* fs/nfs/write.c 1692 */;
	struct rpc_message cocci_id/* fs/nfs/write.c 1687 */;
	const struct rpc_call_ops *cocci_id/* fs/nfs/write.c 1682 */;
	const struct nfs_rpc_ops *cocci_id/* fs/nfs/write.c 1681 */;
	struct rpc_clnt *cocci_id/* fs/nfs/write.c 1680 */;
	struct nfs_mds_commit_info *cocci_id/* fs/nfs/write.c 1662 */;
	u64 cocci_id/* fs/nfs/write.c 1522 */;
	struct nfs_pgio_res *cocci_id/* fs/nfs/write.c 1521 */;
	struct nfs_pgio_args *cocci_id/* fs/nfs/write.c 1520 */;
	struct nfs_fattr *cocci_id/* fs/nfs/write.c 1518 */;
	umode_t cocci_id/* fs/nfs/write.c 1497 */;
	const struct inode *cocci_id/* fs/nfs/write.c 1495 */;
	struct nfs_pgio_mirror *cocci_id/* fs/nfs/write.c 1470 */;
	const struct nfs_pageio_ops *cocci_id/* fs/nfs/write.c 1457 */;
	const struct nfs_pgio_completion_ops *cocci_id/* fs/nfs/write.c 1454 */;
	struct nfs_page *cocci_id/* fs/nfs/write.c 1426 */;
	struct list_head *cocci_id/* fs/nfs/write.c 1424 */;
	void cocci_id/* fs/nfs/write.c 1424 */;
	struct rpc_task_setup *cocci_id/* fs/nfs/write.c 1400 */;
	struct rpc_message *cocci_id/* fs/nfs/write.c 1398 */;
	struct file_lock cocci_id/* fs/nfs/write.c 1334 */;
	struct kref *cocci_id/* fs/nfs/write.c 132 */;
	struct file_lock_context *cocci_id/* fs/nfs/write.c 1317 */;
	struct page *cocci_id/* fs/nfs/write.c 1314 */;
	struct file *cocci_id/* fs/nfs/write.c 1314 */;
	struct file_lock *cocci_id/* fs/nfs/write.c 1300 */;
	bool cocci_id/* fs/nfs/write.c 1299 */;
	struct auth_cred cocci_id/* fs/nfs/write.c 1259 */;
	struct rpc_cred *cocci_id/* fs/nfs/write.c 1258 */;
	struct rpc_auth *cocci_id/* fs/nfs/write.c 1257 */;
	void (*cocci_id/* fs/nfs/write.c 125 */)(void *);
	struct nfs_io_completion cocci_id/* fs/nfs/write.c 121 */;
	struct nfs_lock_context *cocci_id/* fs/nfs/write.c 1198 */;
	gfp_t cocci_id/* fs/nfs/write.c 119 */;
	struct nfs_io_completion *cocci_id/* fs/nfs/write.c 119 */;
	const int cocci_id/* fs/nfs/write.c 1089 */;
}
