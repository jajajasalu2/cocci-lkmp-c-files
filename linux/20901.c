cocci_test_suite() {
	const struct blk_mq_ops cocci_id/* arch/um/drivers/ubd_kern.c 907 */;
	struct gendisk *cocci_id/* arch/um/drivers/ubd_kern.c 872 */;
	struct gendisk **cocci_id/* arch/um/drivers/ubd_kern.c 869 */;
	struct ubd cocci_id/* arch/um/drivers/ubd_kern.c 865 */;
	struct device *cocci_id/* arch/um/drivers/ubd_kern.c 859 */;
	struct openflags cocci_id/* arch/um/drivers/ubd_kern.c 749 */;
	__u32 cocci_id/* arch/um/drivers/ubd_kern.c 676 */;
	char **cocci_id/* arch/um/drivers/ubd_kern.c 670 */;
	struct openflags *cocci_id/* arch/um/drivers/ubd_kern.c 669 */;
	struct uml_stat cocci_id/* arch/um/drivers/ubd_kern.c 640 */;
	unsigned long long cocci_id/* arch/um/drivers/ubd_kern.c 606 */;
	unsigned long cocci_id/* arch/um/drivers/ubd_kern.c 605 */;
	time_t cocci_id/* arch/um/drivers/ubd_kern.c 603 */;
	__u64 cocci_id/* arch/um/drivers/ubd_kern.c 603 */;
	char *cocci_id/* arch/um/drivers/ubd_kern.c 603 */;
	int cocci_id/* arch/um/drivers/ubd_kern.c 603 */;
	irqreturn_t cocci_id/* arch/um/drivers/ubd_kern.c 538 */;
	struct io_thread_req {
		struct request *req;
		int fds[2];
		unsigned long offsets[2];
		unsigned long long offset;
		unsigned long length;
		char *buffer;
		int sectorsize;
		unsigned long sector_mask;
		unsigned long long cow_offset;
		unsigned long bitmap_words[2];
		int error;
	} cocci_id/* arch/um/drivers/ubd_kern.c 50 */;
	long cocci_id/* arch/um/drivers/ubd_kern.c 48 */;
	struct io_thread_req *cocci_id/* arch/um/drivers/ubd_kern.c 471 */;
	int *cocci_id/* arch/um/drivers/ubd_kern.c 453 */;
	struct io_thread_req **cocci_id/* arch/um/drivers/ubd_kern.c 452 */;
	struct io_thread_req **cocci_id/* arch/um/drivers/ubd_kern.c 451 */[];
	char cocci_id/* arch/um/drivers/ubd_kern.c 213 */[64];
	struct proc_dir_entry *cocci_id/* arch/um/drivers/ubd_kern.c 212 */;
	const char *cocci_id/* arch/um/drivers/ubd_kern.c 210 */;
	struct seq_file *cocci_id/* arch/um/drivers/ubd_kern.c 204 */;
	void *cocci_id/* arch/um/drivers/ubd_kern.c 204 */;
	blk_status_t cocci_id/* arch/um/drivers/ubd_kern.c 195 */(struct blk_mq_hw_ctx *hctx,
								  const struct blk_mq_queue_data *bd);
	struct ubd cocci_id/* arch/um/drivers/ubd_kern.c 188 */[MAX_DEV];
	struct ubd {
		char *file;
		int count;
		int fd;
		__u64 size;
		struct openflags boot_openflags;
		struct openflags openflags;
		unsigned shared:1;
		unsigned no_cow:1;
		unsigned no_trim:1;
		struct cow cow;
		struct platform_device pdev;
		struct request_queue *queue;
		struct blk_mq_tag_set tag_set;
		spinlock_t lock;
	} cocci_id/* arch/um/drivers/ubd_kern.c 146 */;
	char __user *cocci_id/* arch/um/drivers/ubd_kern.c 1439 */;
	struct cdrom_volctrl cocci_id/* arch/um/drivers/ubd_kern.c 1433 */;
	u16 cocci_id/* arch/um/drivers/ubd_kern.c 1430 */[ATA_ID_WORDS];
	unsigned int cocci_id/* arch/um/drivers/ubd_kern.c 1427 */;
	fmode_t cocci_id/* arch/um/drivers/ubd_kern.c 1426 */;
	struct hd_geometry *cocci_id/* arch/um/drivers/ubd_kern.c 1416 */;
	struct block_device *cocci_id/* arch/um/drivers/ubd_kern.c 1416 */;
	const struct blk_mq_queue_data *cocci_id/* arch/um/drivers/ubd_kern.c 1376 */;
	blk_status_t cocci_id/* arch/um/drivers/ubd_kern.c 1375 */;
	u64 cocci_id/* arch/um/drivers/ubd_kern.c 1364 */;
	struct bio_vec cocci_id/* arch/um/drivers/ubd_kern.c 1362 */;
	struct req_iterator cocci_id/* arch/um/drivers/ubd_kern.c 1361 */;
	struct request *cocci_id/* arch/um/drivers/ubd_kern.c 1359 */;
	struct blk_mq_hw_ctx *cocci_id/* arch/um/drivers/ubd_kern.c 1359 */;
	struct cow {
		char *file;
		int fd;
		unsigned long *bitmap;
		unsigned long bitmap_len;
		int bitmap_offset;
		int data_offset;
	} cocci_id/* arch/um/drivers/ubd_kern.c 133 */;
	struct io_thread_req cocci_id/* arch/um/drivers/ubd_kern.c 1319 */;
	struct bio_vec *cocci_id/* arch/um/drivers/ubd_kern.c 1313 */;
	unsigned char *cocci_id/* arch/um/drivers/ubd_kern.c 1262 */;
	__u64 *cocci_id/* arch/um/drivers/ubd_kern.c 1253 */;
	unsigned long *cocci_id/* arch/um/drivers/ubd_kern.c 1252 */;
	void cocci_id/* arch/um/drivers/ubd_kern.c 1252 */;
	struct gendisk *cocci_id/* arch/um/drivers/ubd_kern.c 122 */[MAX_DEV];
	char cocci_id/* arch/um/drivers/ubd_kern.c 1142 */[sizeof("ubd_nnn\0")];
	struct platform_driver cocci_id/* arch/um/drivers/ubd_kern.c 1127 */;
	struct ubd *cocci_id/* arch/um/drivers/ubd_kern.c 1114 */;
	int __init cocci_id/* arch/um/drivers/ubd_kern.c 1112 */;
	const struct block_device_operations cocci_id/* arch/um/drivers/ubd_kern.c 111 */;
	struct mc_device cocci_id/* arch/um/drivers/ubd_kern.c 1095 */;
	int cocci_id/* arch/um/drivers/ubd_kern.c 107 */(struct block_device *bdev,
							 struct hd_geometry *geo);
	int cocci_id/* arch/um/drivers/ubd_kern.c 105 */(struct block_device *bdev,
							 fmode_t mode,
							 unsigned int cmd,
							 unsigned long arg);
	void cocci_id/* arch/um/drivers/ubd_kern.c 104 */(struct gendisk *disk,
							  fmode_t mode);
	int cocci_id/* arch/um/drivers/ubd_kern.c 103 */(struct block_device *bdev,
							 fmode_t mode);
}
