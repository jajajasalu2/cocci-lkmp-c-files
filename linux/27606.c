cocci_test_suite() {
	dev_t cocci_id/* fs/block_dev.c 889 */;
	dev_t *cocci_id/* fs/block_dev.c 879 */;
	struct vfsmount *cocci_id/* fs/block_dev.c 847 */;
	void __init cocci_id/* fs/block_dev.c 844 */;
	struct file_system_type cocci_id/* fs/block_dev.c 835 */;
	struct pseudo_fs_context *cocci_id/* fs/block_dev.c 827 */;
	struct fs_context *cocci_id/* fs/block_dev.c 825 */;
	const struct super_operations cocci_id/* fs/block_dev.c 817 */;
	struct kmem_cache *cocci_id/* fs/block_dev.c 768 */;
	struct writeback_control *cocci_id/* fs/block_dev.c 738 */;
	const struct block_device_operations *cocci_id/* fs/block_dev.c 702 */;
	struct page *cocci_id/* fs/block_dev.c 700 */;
	sector_t cocci_id/* fs/block_dev.c 699 */;
	char cocci_id/* fs/block_dev.c 67 */[BDEVNAME_SIZE];
	struct page **cocci_id/* fs/block_dev.c 625 */;
	void **cocci_id/* fs/block_dev.c 625 */;
	struct list_head *cocci_id/* fs/block_dev.c 618 */;
	unsigned cocci_id/* fs/block_dev.c 618 */;
	struct block_device *cocci_id/* fs/block_dev.c 51 */;
	struct bdev_inode cocci_id/* fs/block_dev.c 48 */;
	struct inode *cocci_id/* fs/block_dev.c 46 */;
	struct bdev_inode *cocci_id/* fs/block_dev.c 46 */;
	const struct address_space_operations cocci_id/* fs/block_dev.c 44 */;
	struct bdev_inode {
		struct block_device bdev;
		struct inode vfs_inode;
	} cocci_id/* fs/block_dev.c 39 */;
	struct blkdev_dio cocci_id/* fs/block_dev.c 358 */;
	blk_qc_t cocci_id/* fs/block_dev.c 349 */;
	loff_t cocci_id/* fs/block_dev.c 348 */;
	bool cocci_id/* fs/block_dev.c 346 */;
	struct bio *cocci_id/* fs/block_dev.c 345 */;
	struct blkdev_dio *cocci_id/* fs/block_dev.c 344 */;
	struct blk_plug cocci_id/* fs/block_dev.c 343 */;
	struct file *cocci_id/* fs/block_dev.c 340 */;
	struct kiocb *cocci_id/* fs/block_dev.c 338 */;
	struct iov_iter *cocci_id/* fs/block_dev.c 338 */;
	int cocci_id/* fs/block_dev.c 338 */;
	ssize_t cocci_id/* fs/block_dev.c 337 */;
	struct task_struct *cocci_id/* fs/block_dev.c 322 */;
	struct request_queue *cocci_id/* fs/block_dev.c 293 */;
	struct bio_set cocci_id/* fs/block_dev.c 288 */;
	struct blkdev_dio {
		union {
			struct kiocb *iocb;
			struct task_struct *waiter;
		};
		size_t size;
		atomic_t ref;
		bool multi_bio:1;
		bool should_dirty:1;
		bool is_sync:1;
		struct bio bio;
	} cocci_id/* fs/block_dev.c 275 */;
	void (*cocci_id/* fs/block_dev.c 2238 */)(struct block_device *,
						  void *);
	struct super_block *cocci_id/* fs/block_dev.c 2219 */;
	struct bio_vec cocci_id/* fs/block_dev.c 221 */;
	struct path cocci_id/* fs/block_dev.c 2187 */;
	mm_segment_t cocci_id/* fs/block_dev.c 2166 */;
	const struct file_operations cocci_id/* fs/block_dev.c 2145 */;
	struct bio cocci_id/* fs/block_dev.c 210 */;
	struct address_space *cocci_id/* fs/block_dev.c 2084 */;
	long cocci_id/* fs/block_dev.c 2080 */;
	struct bio_vec cocci_id/* fs/block_dev.c 207 */[DIO_INLINE_BIO_VECS];
	gfp_t cocci_id/* fs/block_dev.c 2047 */;
	unsigned long cocci_id/* fs/block_dev.c 1969 */;
	void cocci_id/* fs/block_dev.c 1878 */;
	const char *cocci_id/* fs/block_dev.c 1785 */;
	struct buffer_head *cocci_id/* fs/block_dev.c 168 */;
	struct gendisk *cocci_id/* fs/block_dev.c 1559 */;
	fmode_t cocci_id/* fs/block_dev.c 1557 */;
	void cocci_id/* fs/block_dev.c 1509 */(struct block_device *bdev,
					       fmode_t mode, int for_part);
	unsigned int cocci_id/* fs/block_dev.c 1486 */;
	struct kobject *cocci_id/* fs/block_dev.c 1264 */;
	struct bd_holder_disk *cocci_id/* fs/block_dev.c 1253 */;
	struct bd_holder_disk {
		struct list_head list;
		struct gendisk *disk;
		int refcnt;
	} cocci_id/* fs/block_dev.c 1247 */;
	void *cocci_id/* fs/block_dev.c 1238 */;
	int *cocci_id/* fs/block_dev.c 1098 */;
	wait_queue_head_t *cocci_id/* fs/block_dev.c 1083 */;
}
