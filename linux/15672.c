cocci_test_suite() {
	char cocci_id/* drivers/staging/greybus/loopback.c 982 */[DEBUGFS_NAMELEN];
	struct device *cocci_id/* drivers/staging/greybus/loopback.c 980 */;
	struct gb_connection *cocci_id/* drivers/staging/greybus/loopback.c 978 */;
	struct greybus_descriptor_cport *cocci_id/* drivers/staging/greybus/loopback.c 977 */;
	const struct greybus_bundle_id *cocci_id/* drivers/staging/greybus/loopback.c 975 */;
	struct seq_file *cocci_id/* drivers/staging/greybus/loopback.c 963 */;
	struct mutex *cocci_id/* drivers/staging/greybus/loopback.c 942 */;
	struct kfifo *cocci_id/* drivers/staging/greybus/loopback.c 941 */;
	bool cocci_id/* drivers/staging/greybus/loopback.c 798 */;
	unsigned char *cocci_id/* drivers/staging/greybus/loopback.c 789 */;
	struct gb_operation_msg_hdr cocci_id/* drivers/staging/greybus/loopback.c 754 */;
	struct gb_loopback_stats *cocci_id/* drivers/staging/greybus/loopback.c 722 */;
	struct gb_loopback_stats cocci_id/* drivers/staging/greybus/loopback.c 700 */;
	struct gb_loopback_transfer_response cocci_id/* drivers/staging/greybus/loopback.c 634 */;
	size_t cocci_id/* drivers/staging/greybus/loopback.c 598 */;
	struct gb_loopback_transfer_response *cocci_id/* drivers/staging/greybus/loopback.c 597 */;
	struct gb_loopback {
		struct gb_connection *connection;
		struct dentry *file;
		struct kfifo kfifo_lat;
		struct mutex mutex;
		struct task_struct *task;
		struct device *dev;
		wait_queue_head_t wq;
		wait_queue_head_t wq_completion;
		atomic_t outstanding_operations;
		ktime_t ts;
		struct gb_loopback_stats latency;
		struct gb_loopback_stats throughput;
		struct gb_loopback_stats requests_per_second;
		struct gb_loopback_stats apbridge_unipro_latency;
		struct gb_loopback_stats gbphy_firmware_latency;
		int type;
		int async;
		int id;
		u32 size;
		u32 iteration_max;
		u32 iteration_count;
		int us_wait;
		u32 error;
		u32 requests_completed;
		u32 requests_timedout;
		u32 timeout;
		u32 jiffy_timeout;
		u32 timeout_min;
		u32 timeout_max;
		u32 outstanding_operations_max;
		u64 elapsed_nsecs;
		u32 apbridge_latency_ts;
		u32 gbphy_latency_ts;
		u32 send_count;
	} cocci_id/* drivers/staging/greybus/loopback.c 59 */;
	struct gb_loopback_transfer_request *cocci_id/* drivers/staging/greybus/loopback.c 576 */;
	u32 cocci_id/* drivers/staging/greybus/loopback.c 574 */;
	struct gb_loopback_async_operation {
		struct gb_loopback *gb;
		struct gb_operation *operation;
		ktime_t ts;
		int (*completion)(struct gb_loopback_async_operation *op_async);
	} cocci_id/* drivers/staging/greybus/loopback.c 52 */;
	struct gb_loopback_device cocci_id/* drivers/staging/greybus/loopback.c 50 */;
	struct gb_operation *cocci_id/* drivers/staging/greybus/loopback.c 471 */;
	struct gb_loopback_async_operation *cocci_id/* drivers/staging/greybus/loopback.c 470 */;
	void *cocci_id/* drivers/staging/greybus/loopback.c 466 */;
	struct gb_loopback *cocci_id/* drivers/staging/greybus/loopback.c 465 */;
	int cocci_id/* drivers/staging/greybus/loopback.c 465 */;
	ktime_t cocci_id/* drivers/staging/greybus/loopback.c 427 */;
	void cocci_id/* drivers/staging/greybus/loopback.c 423 */;
	struct gb_loopback_device {
		struct dentry *root;
		u32 count;
		size_t size_max;
		spinlock_t lock;
		wait_queue_head_t wq;
	} cocci_id/* drivers/staging/greybus/loopback.c 40 */;
	u64 cocci_id/* drivers/staging/greybus/loopback.c 357 */;
	void cocci_id/* drivers/staging/greybus/loopback.c 349 */(struct gb_loopback *gb,
								  bool error);
	struct gb_loopback_stats {
		u32 min;
		u32 max;
		u64 sum;
		u32 count;
	} cocci_id/* drivers/staging/greybus/loopback.c 33 */;
	struct attribute *cocci_id/* drivers/staging/greybus/loopback.c 316 */[];
	void cocci_id/* drivers/staging/greybus/loopback.c 232 */(struct gb_loopback *gb);
	void __exit cocci_id/* drivers/staging/greybus/loopback.c 1169 */;
	struct greybus_driver cocci_id/* drivers/staging/greybus/loopback.c 1137 */;
	const struct greybus_bundle_id cocci_id/* drivers/staging/greybus/loopback.c 1131 */[];
	unsigned int cocci_id/* drivers/staging/greybus/loopback.c 113 */;
	unsigned long cocci_id/* drivers/staging/greybus/loopback.c 1097 */;
	struct gb_bundle *cocci_id/* drivers/staging/greybus/loopback.c 1094 */;
	struct gb_loopback_transfer_request cocci_id/* drivers/staging/greybus/loopback.c 1019 */;
	struct class cocci_id/* drivers/staging/greybus/loopback.c 101 */;
}