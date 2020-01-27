cocci_test_suite() {
	bool cocci_id/* fs/nfs/direct.c 759 */;
	struct work_struct *cocci_id/* fs/nfs/direct.c 731 */;
	struct nfs_commit_info *cocci_id/* fs/nfs/direct.c 702 */;
	struct nfs_page *cocci_id/* fs/nfs/direct.c 675 */;
	struct nfs_commit_info cocci_id/* fs/nfs/direct.c 674 */;
	struct nfs_direct_req {
		struct kref kref;
		struct nfs_open_context *ctx;
		struct nfs_lock_context *l_ctx;
		struct kiocb *iocb;
		struct inode *inode;
		atomic_t io_count;
		spinlock_t lock;
		loff_t io_start;
		ssize_t count,max_count,bytes_left,error;
		struct completion completion;
		struct nfs_mds_commit_info mds_cinfo;
		struct pnfs_ds_commit_info ds_cinfo;
		struct work_struct work;
		int flags;
#define NFS_ODIRECT_DO_COMMIT (1)
#define NFS_ODIRECT_RESCHED_WRITES (2)
#define NFS_ODIRECT_SHOULD_DIRTY (3)
					struct nfs_writeverf verf;
	} cocci_id/* fs/nfs/direct.c 67 */;
	struct kmem_cache *cocci_id/* fs/nfs/direct.c 65 */;
	struct list_head *cocci_id/* fs/nfs/direct.c 609 */;
	long long cocci_id/* fs/nfs/direct.c 554 */;
	struct nfs_lock_context *cocci_id/* fs/nfs/direct.c 548 */;
	struct address_space *cocci_id/* fs/nfs/direct.c 545 */;
	struct file *cocci_id/* fs/nfs/direct.c 544 */;
	unsigned int cocci_id/* fs/nfs/direct.c 479 */;
	unsigned cocci_id/* fs/nfs/direct.c 467 */;
	struct page **cocci_id/* fs/nfs/direct.c 464 */;
	size_t cocci_id/* fs/nfs/direct.c 454 */;
	struct nfs_pageio_descriptor cocci_id/* fs/nfs/direct.c 451 */;
	const struct nfs_pgio_completion_ops cocci_id/* fs/nfs/direct.c 433 */;
	struct nfs_pgio_header *cocci_id/* fs/nfs/direct.c 428 */;
	struct page *cocci_id/* fs/nfs/direct.c 402 */;
	unsigned long cocci_id/* fs/nfs/direct.c 388 */;
	long cocci_id/* fs/nfs/direct.c 373 */;
	struct nfs_direct_req cocci_id/* fs/nfs/direct.c 317 */;
	struct kref *cocci_id/* fs/nfs/direct.c 315 */;
	struct inode *cocci_id/* fs/nfs/direct.c 266 */;
	struct kiocb *cocci_id/* fs/nfs/direct.c 264 */;
	struct iov_iter *cocci_id/* fs/nfs/direct.c 264 */;
	ssize_t cocci_id/* fs/nfs/direct.c 264 */;
	struct nfs_writeverf *cocci_id/* fs/nfs/direct.c 242 */;
	struct nfs_commit_data *cocci_id/* fs/nfs/direct.c 240 */;
	int cocci_id/* fs/nfs/direct.c 239 */;
	const struct nfs_writeverf *cocci_id/* fs/nfs/direct.c 203 */;
	struct nfs_writeverf cocci_id/* fs/nfs/direct.c 199 */;
	struct nfs_client *cocci_id/* fs/nfs/direct.c 164 */;
	loff_t cocci_id/* fs/nfs/direct.c 139 */;
	const struct nfs_pgio_header *cocci_id/* fs/nfs/direct.c 137 */;
	struct nfs_direct_req *cocci_id/* fs/nfs/direct.c 105 */;
	void cocci_id/* fs/nfs/direct.c 105 */;
	int __init cocci_id/* fs/nfs/direct.c 1031 */;
	void cocci_id/* fs/nfs/direct.c 103 */(struct work_struct *work);
	void cocci_id/* fs/nfs/direct.c 102 */(struct nfs_direct_req *dreq);
	const struct nfs_commit_completion_ops cocci_id/* fs/nfs/direct.c 101 */;
}
