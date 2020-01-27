cocci_test_suite() {
	struct eerbuffer {
		struct list_head list;
		char **buffer;
		int buffersize;
		int buffer_page_count;
		int head;
		int tail;
		int residual;
	} cocci_id/* drivers/s390/block/dasd_eer.c 86 */;
	int __init cocci_id/* drivers/s390/block/dasd_eer.c 693 */;
	struct miscdevice *cocci_id/* drivers/s390/block/dasd_eer.c 691 */;
	const struct file_operations cocci_id/* drivers/s390/block/dasd_eer.c 682 */;
	__poll_t cocci_id/* drivers/s390/block/dasd_eer.c 665 */;
	poll_table *cocci_id/* drivers/s390/block/dasd_eer.c 665 */;
	loff_t *cocci_id/* drivers/s390/block/dasd_eer.c 602 */;
	size_t cocci_id/* drivers/s390/block/dasd_eer.c 602 */;
	char __user *cocci_id/* drivers/s390/block/dasd_eer.c 601 */;
	ssize_t cocci_id/* drivers/s390/block/dasd_eer.c 601 */;
	unsigned long cocci_id/* drivers/s390/block/dasd_eer.c 588 */;
	struct eerbuffer *cocci_id/* drivers/s390/block/dasd_eer.c 587 */;
	struct inode *cocci_id/* drivers/s390/block/dasd_eer.c 585 */;
	struct file *cocci_id/* drivers/s390/block/dasd_eer.c 585 */;
	struct eerbuffer cocci_id/* drivers/s390/block/dasd_eer.c 552 */;
	char cocci_id/* drivers/s390/block/dasd_eer.c 544 */[PAGE_SIZE];
	struct dasd_ccw_req *cocci_id/* drivers/s390/block/dasd_eer.c 519 */;
	struct dasd_device *cocci_id/* drivers/s390/block/dasd_eer.c 517 */;
	void cocci_id/* drivers/s390/block/dasd_eer.c 517 */;
	addr_t cocci_id/* drivers/s390/block/dasd_eer.c 494 */;
	__u32 cocci_id/* drivers/s390/block/dasd_eer.c 494 */;
	struct ccw1 *cocci_id/* drivers/s390/block/dasd_eer.c 461 */;
	void *cocci_id/* drivers/s390/block/dasd_eer.c 428 */;
	unsigned int cocci_id/* drivers/s390/block/dasd_eer.c 379 */;
	struct dasd_eer_header cocci_id/* drivers/s390/block/dasd_eer.c 344 */;
	struct timespec64 cocci_id/* drivers/s390/block/dasd_eer.c 343 */;
	struct dasd_eer_header {
		__u32 total_size;
		__u32 trigger;
		__u64 tv_sec;
		__u64 tv_usec;
		char busid[DASD_EER_BUSID_SIZE];
	}__attribute__((packed)) cocci_id/* drivers/s390/block/dasd_eer.c 278 */;
	char *cocci_id/* drivers/s390/block/dasd_eer.c 231 */;
	char **cocci_id/* drivers/s390/block/dasd_eer.c 226 */;
	int cocci_id/* drivers/s390/block/dasd_eer.c 226 */;
}
