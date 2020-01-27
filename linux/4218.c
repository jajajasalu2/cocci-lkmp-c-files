cocci_test_suite() {
	struct chardev_priv cocci_id/* drivers/platform/chrome/cros_ec_chardev.c 97 */;
	void *cocci_id/* drivers/platform/chrome/cros_ec_chardev.c 95 */;
	struct notifier_block *cocci_id/* drivers/platform/chrome/cros_ec_chardev.c 93 */;
	struct ec_response_get_version *cocci_id/* drivers/platform/chrome/cros_ec_chardev.c 60 */;
	const char *const cocci_id/* drivers/platform/chrome/cros_ec_chardev.c 57 */[];
	char *cocci_id/* drivers/platform/chrome/cros_ec_chardev.c 55 */;
	struct ec_event {
		struct list_head node;
		size_t size;
		u8 event_type;
		u8 data[0];
	} cocci_id/* drivers/platform/chrome/cros_ec_chardev.c 48 */;
	struct platform_driver cocci_id/* drivers/platform/chrome/cros_ec_chardev.c 406 */;
	struct chardev_priv {
		struct cros_ec_dev *ec_dev;
		struct notifier_block notifier;
		wait_queue_head_t wait_event;
		unsigned long event_mask;
		struct list_head events;
		size_t event_len;
	} cocci_id/* drivers/platform/chrome/cros_ec_chardev.c 39 */;
	struct chardev_data *cocci_id/* drivers/platform/chrome/cros_ec_chardev.c 379 */;
	struct cros_ec_platform *cocci_id/* drivers/platform/chrome/cros_ec_chardev.c 378 */;
	struct platform_device *cocci_id/* drivers/platform/chrome/cros_ec_chardev.c 375 */;
	const struct file_operations cocci_id/* drivers/platform/chrome/cros_ec_chardev.c 364 */;
	void __user *cocci_id/* drivers/platform/chrome/cros_ec_chardev.c 353 */;
	struct cros_ec_dev *cocci_id/* drivers/platform/chrome/cros_ec_chardev.c 346 */;
	unsigned long cocci_id/* drivers/platform/chrome/cros_ec_chardev.c 343 */;
	struct file *cocci_id/* drivers/platform/chrome/cros_ec_chardev.c 342 */;
	unsigned int cocci_id/* drivers/platform/chrome/cros_ec_chardev.c 342 */;
	long cocci_id/* drivers/platform/chrome/cros_ec_chardev.c 342 */;
	struct chardev_data {
		struct cros_ec_dev *ec_dev;
		struct miscdevice misc;
	} cocci_id/* drivers/platform/chrome/cros_ec_chardev.c 34 */;
	struct cros_ec_readmem cocci_id/* drivers/platform/chrome/cros_ec_chardev.c 321 */;
	struct cros_ec_device *cocci_id/* drivers/platform/chrome/cros_ec_chardev.c 320 */;
	struct cros_ec_command cocci_id/* drivers/platform/chrome/cros_ec_chardev.c 278 */;
	struct cros_ec_command *cocci_id/* drivers/platform/chrome/cros_ec_chardev.c 277 */;
	char cocci_id/* drivers/platform/chrome/cros_ec_chardev.c 204 */[sizeof(struct ec_response_get_version) + sizeof(CROS_EC_DEV_VERSION)];
	loff_t *cocci_id/* drivers/platform/chrome/cros_ec_chardev.c 202 */;
	size_t cocci_id/* drivers/platform/chrome/cros_ec_chardev.c 202 */;
	char __user *cocci_id/* drivers/platform/chrome/cros_ec_chardev.c 201 */;
	ssize_t cocci_id/* drivers/platform/chrome/cros_ec_chardev.c 201 */;
	__poll_t cocci_id/* drivers/platform/chrome/cros_ec_chardev.c 189 */;
	poll_table *cocci_id/* drivers/platform/chrome/cros_ec_chardev.c 189 */;
	struct miscdevice *cocci_id/* drivers/platform/chrome/cros_ec_chardev.c 163 */;
	struct inode *cocci_id/* drivers/platform/chrome/cros_ec_chardev.c 161 */;
	struct ec_event cocci_id/* drivers/platform/chrome/cros_ec_chardev.c 149 */;
	int cocci_id/* drivers/platform/chrome/cros_ec_chardev.c 129 */;
	bool cocci_id/* drivers/platform/chrome/cros_ec_chardev.c 126 */;
	struct ec_event *cocci_id/* drivers/platform/chrome/cros_ec_chardev.c 125 */;
	struct chardev_priv *cocci_id/* drivers/platform/chrome/cros_ec_chardev.c 125 */;
}
