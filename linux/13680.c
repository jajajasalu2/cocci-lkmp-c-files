cocci_test_suite() {
	struct smsdvb_debugfs *cocci_id/* drivers/media/common/siano/smsdvb-debugfs.c 451 */;
	struct dentry *cocci_id/* drivers/media/common/siano/smsdvb-debugfs.c 450 */;
	struct smscore_device_t *cocci_id/* drivers/media/common/siano/smsdvb-debugfs.c 449 */;
	struct smsdvb_client_t *cocci_id/* drivers/media/common/siano/smsdvb-debugfs.c 447 */;
	int cocci_id/* drivers/media/common/siano/smsdvb-debugfs.c 447 */;
	const struct file_operations cocci_id/* drivers/media/common/siano/smsdvb-debugfs.c 435 */;
	char *cocci_id/* drivers/media/common/siano/smsdvb-debugfs.c 38 */;
	loff_t *cocci_id/* drivers/media/common/siano/smsdvb-debugfs.c 378 */;
	size_t cocci_id/* drivers/media/common/siano/smsdvb-debugfs.c 378 */;
	char __user *cocci_id/* drivers/media/common/siano/smsdvb-debugfs.c 377 */;
	ssize_t cocci_id/* drivers/media/common/siano/smsdvb-debugfs.c 377 */;
	__poll_t cocci_id/* drivers/media/common/siano/smsdvb-debugfs.c 362 */;
	poll_table *cocci_id/* drivers/media/common/siano/smsdvb-debugfs.c 362 */;
	struct sms_stats *cocci_id/* drivers/media/common/siano/smsdvb-debugfs.c 35 */;
	struct smsdvb_debugfs cocci_id/* drivers/media/common/siano/smsdvb-debugfs.c 342 */;
	struct kref *cocci_id/* drivers/media/common/siano/smsdvb-debugfs.c 338 */;
	void cocci_id/* drivers/media/common/siano/smsdvb-debugfs.c 338 */;
	struct inode *cocci_id/* drivers/media/common/siano/smsdvb-debugfs.c 321 */;
	struct file *cocci_id/* drivers/media/common/siano/smsdvb-debugfs.c 321 */;
	struct smsdvb_debugfs {
		struct kref refcount;
		spinlock_t lock;
		char stats_data[PAGE_SIZE];
		unsigned stats_count;
		bool stats_was_read;
		wait_queue_head_t stats_queue;
	} cocci_id/* drivers/media/common/siano/smsdvb-debugfs.c 23 */;
	struct sms_isdbt_stats_ex *cocci_id/* drivers/media/common/siano/smsdvb-debugfs.c 228 */;
	struct sms_isdbt_stats *cocci_id/* drivers/media/common/siano/smsdvb-debugfs.c 138 */;
}
