cocci_test_suite() {
	char cocci_id/* drivers/s390/block/dcssblk.c 948 */[DCSSBLK_PARM_LEN + 1];
	void cocci_id/* drivers/s390/block/dcssblk.c 944 */;
	void *cocci_id/* drivers/s390/block/dcssblk.c 927 */;
	unsigned long cocci_id/* drivers/s390/block/dcssblk.c 923 */;
	resource_size_t cocci_id/* drivers/s390/block/dcssblk.c 922 */;
	pfn_t *cocci_id/* drivers/s390/block/dcssblk.c 920 */;
	void **cocci_id/* drivers/s390/block/dcssblk.c 920 */;
	ssize_t cocci_id/* drivers/s390/block/dcssblk.c 92 */(struct device *dev,
							      struct device_attribute *attr,
							      const char *buf,
							      size_t count);
	pgoff_t cocci_id/* drivers/s390/block/dcssblk.c 919 */;
	struct dcssblk_dev_info *cocci_id/* drivers/s390/block/dcssblk.c 919 */;
	long cocci_id/* drivers/s390/block/dcssblk.c 918 */;
	struct bvec_iter cocci_id/* drivers/s390/block/dcssblk.c 859 */;
	struct bio_vec cocci_id/* drivers/s390/block/dcssblk.c 858 */;
	struct request_queue *cocci_id/* drivers/s390/block/dcssblk.c 855 */;
	struct bio *cocci_id/* drivers/s390/block/dcssblk.c 855 */;
	blk_qc_t cocci_id/* drivers/s390/block/dcssblk.c 854 */;
	struct segment_info {
		struct list_head lh;
		char segment_name[DCSS_BUS_ID_SIZE];
		unsigned long start;
		unsigned long end;
		int segment_type;
	} cocci_id/* drivers/s390/block/dcssblk.c 84 */;
	struct gendisk *cocci_id/* drivers/s390/block/dcssblk.c 827 */;
	fmode_t cocci_id/* drivers/s390/block/dcssblk.c 809 */;
	struct block_device *cocci_id/* drivers/s390/block/dcssblk.c 809 */;
	struct dcssblk_dev_info {
		struct list_head lh;
		struct device dev;
		char segment_name[DCSS_BUS_ID_SIZE];
		atomic_t use_count;
		struct gendisk *gd;
		unsigned long start;
		unsigned long end;
		int segment_type;
		unsigned char save_pending;
		unsigned char is_shared;
		struct request_queue *dcssblk_queue;
		int num_of_segments;
		struct list_head seg_list;
		struct dax_device *dax_dev;
	} cocci_id/* drivers/s390/block/dcssblk.c 67 */;
	const struct dax_operations cocci_id/* drivers/s390/block/dcssblk.c 60 */;
	struct dcssblk_dev_info cocci_id/* drivers/s390/block/dcssblk.c 596 */;
	char *cocci_id/* drivers/s390/block/dcssblk.c 552 */;
	struct segment_info *cocci_id/* drivers/s390/block/dcssblk.c 551 */;
	int cocci_id/* drivers/s390/block/dcssblk.c 549 */;
	const char *cocci_id/* drivers/s390/block/dcssblk.c 547 */;
	struct device_attribute *cocci_id/* drivers/s390/block/dcssblk.c 547 */;
	struct device *cocci_id/* drivers/s390/block/dcssblk.c 547 */;
	size_t cocci_id/* drivers/s390/block/dcssblk.c 547 */;
	ssize_t cocci_id/* drivers/s390/block/dcssblk.c 546 */;
	const struct attribute_group *cocci_id/* drivers/s390/block/dcssblk.c 538 */[];
	struct attribute_group cocci_id/* drivers/s390/block/dcssblk.c 535 */;
	struct attribute *cocci_id/* drivers/s390/block/dcssblk.c 529 */[];
	struct iov_iter *cocci_id/* drivers/s390/block/dcssblk.c 49 */;
	struct dax_device *cocci_id/* drivers/s390/block/dcssblk.c 48 */;
	const struct block_device_operations cocci_id/* drivers/s390/block/dcssblk.c 42 */;
	char cocci_id/* drivers/s390/block/dcssblk.c 39 */[DCSSBLK_PARM_LEN];
	long cocci_id/* drivers/s390/block/dcssblk.c 36 */(struct dax_device *dax_dev,
							   pgoff_t pgoff,
							   long nr_pages,
							   void **kaddr,
							   pfn_t *pfn);
	blk_qc_t cocci_id/* drivers/s390/block/dcssblk.c 34 */(struct request_queue *q,
							       struct bio *bio);
	void cocci_id/* drivers/s390/block/dcssblk.c 33 */(struct gendisk *disk,
							   fmode_t mode);
	int cocci_id/* drivers/s390/block/dcssblk.c 32 */(struct block_device *bdev,
							  fmode_t mode);
	struct segment_info **cocci_id/* drivers/s390/block/dcssblk.c 300 */;
	struct segment_info cocci_id/* drivers/s390/block/dcssblk.c 243 */;
	int __init cocci_id/* drivers/s390/block/dcssblk.c 1079 */;
	void __exit cocci_id/* drivers/s390/block/dcssblk.c 1070 */;
	struct platform_device *cocci_id/* drivers/s390/block/dcssblk.c 1064 */;
	struct platform_driver cocci_id/* drivers/s390/block/dcssblk.c 1057 */;
	const struct dev_pm_ops cocci_id/* drivers/s390/block/dcssblk.c 1051 */;
	struct rw_semaphore cocci_id/* drivers/s390/block/dcssblk.c 103 */;
}
