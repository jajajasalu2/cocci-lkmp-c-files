cocci_test_suite() {
	const char __user *cocci_id/* drivers/mailbox/mailbox-test.c 94 */;
	struct file *cocci_id/* drivers/mailbox/mailbox-test.c 86 */;
	struct platform_driver cocci_id/* drivers/mailbox/mailbox-test.c 433 */;
	const struct of_device_id cocci_id/* drivers/mailbox/mailbox-test.c 427 */[];
	resource_size_t cocci_id/* drivers/mailbox/mailbox-test.c 353 */;
	struct resource *cocci_id/* drivers/mailbox/mailbox-test.c 352 */;
	const char *cocci_id/* drivers/mailbox/mailbox-test.c 323 */;
	struct mbox_chan *cocci_id/* drivers/mailbox/mailbox-test.c 322 */;
	void *cocci_id/* drivers/mailbox/mailbox-test.c 312 */;
	struct mbox_client *cocci_id/* drivers/mailbox/mailbox-test.c 311 */;
	void cocci_id/* drivers/mailbox/mailbox-test.c 311 */;
	struct mbox_test_device {
		struct device *dev;
		void __iomem *tx_mmio;
		void __iomem *rx_mmio;
		struct mbox_chan *tx_channel;
		struct mbox_chan *rx_channel;
		char *rx_buffer;
		char *signal;
		char *message;
		spinlock_t lock;
		wait_queue_head_t waitq;
		struct fasync_struct *async_queue;
		struct dentry *root_debugfs_dir;
	} cocci_id/* drivers/mailbox/mailbox-test.c 31 */;
	bool cocci_id/* drivers/mailbox/mailbox-test.c 29 */;
	struct mbox_test_device *cocci_id/* drivers/mailbox/mailbox-test.c 256 */;
	struct platform_device *cocci_id/* drivers/mailbox/mailbox-test.c 255 */;
	int cocci_id/* drivers/mailbox/mailbox-test.c 255 */;
	const struct file_operations cocci_id/* drivers/mailbox/mailbox-test.c 246 */;
	struct poll_table_struct *cocci_id/* drivers/mailbox/mailbox-test.c 235 */;
	__poll_t cocci_id/* drivers/mailbox/mailbox-test.c 234 */;
	char *cocci_id/* drivers/mailbox/mailbox-test.c 167 */;
	loff_t *cocci_id/* drivers/mailbox/mailbox-test.c 163 */;
	size_t cocci_id/* drivers/mailbox/mailbox-test.c 163 */;
	char __user *cocci_id/* drivers/mailbox/mailbox-test.c 162 */;
	ssize_t cocci_id/* drivers/mailbox/mailbox-test.c 162 */;
	unsigned long cocci_id/* drivers/mailbox/mailbox-test.c 153 */;
}
