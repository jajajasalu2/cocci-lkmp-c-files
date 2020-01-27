cocci_test_suite() {
	struct ec_event_queue {
		int capacity;
		int head;
		int tail;
		struct ec_event *entries[0];
	} cocci_id/* drivers/platform/chrome/wilco_ec/event.c 95 */;
	struct ec_event {
		u16 size;
		u16 type;
		u16 event[0];
	}__packed cocci_id/* drivers/platform/chrome/wilco_ec/event.c 79 */;
	struct class cocci_id/* drivers/platform/chrome/wilco_ec/event.c 60 */;
	void __exit cocci_id/* drivers/platform/chrome/wilco_ec/event.c 567 */;
	dev_t cocci_id/* drivers/platform/chrome/wilco_ec/event.c 534 */;
	int __init cocci_id/* drivers/platform/chrome/wilco_ec/event.c 532 */;
	u16 cocci_id/* drivers/platform/chrome/wilco_ec/event.c 53 */;
	struct acpi_driver cocci_id/* drivers/platform/chrome/wilco_ec/event.c 520 */;
	const struct acpi_device_id cocci_id/* drivers/platform/chrome/wilco_ec/event.c 514 */[];
	struct device *cocci_id/* drivers/platform/chrome/wilco_ec/event.c 419 */;
	const struct file_operations cocci_id/* drivers/platform/chrome/wilco_ec/event.c 402 */;
	loff_t *cocci_id/* drivers/platform/chrome/wilco_ec/event.c 354 */;
	char __user *cocci_id/* drivers/platform/chrome/wilco_ec/event.c 353 */;
	ssize_t cocci_id/* drivers/platform/chrome/wilco_ec/event.c 353 */;
	__poll_t cocci_id/* drivers/platform/chrome/wilco_ec/event.c 324 */;
	poll_table *cocci_id/* drivers/platform/chrome/wilco_ec/event.c 324 */;
	struct event_device_data cocci_id/* drivers/platform/chrome/wilco_ec/event.c 309 */;
	struct inode *cocci_id/* drivers/platform/chrome/wilco_ec/event.c 305 */;
	struct file *cocci_id/* drivers/platform/chrome/wilco_ec/event.c 305 */;
	struct ec_event cocci_id/* drivers/platform/chrome/wilco_ec/event.c 294 */;
	acpi_status cocci_id/* drivers/platform/chrome/wilco_ec/event.c 266 */;
	union acpi_object *cocci_id/* drivers/platform/chrome/wilco_ec/event.c 265 */;
	struct acpi_buffer cocci_id/* drivers/platform/chrome/wilco_ec/event.c 264 */;
	void cocci_id/* drivers/platform/chrome/wilco_ec/event.c 262 */;
	size_t cocci_id/* drivers/platform/chrome/wilco_ec/event.c 217 */;
	struct ec_event *cocci_id/* drivers/platform/chrome/wilco_ec/event.c 216 */;
	struct event_device_data *cocci_id/* drivers/platform/chrome/wilco_ec/event.c 215 */;
	u32 cocci_id/* drivers/platform/chrome/wilco_ec/event.c 213 */;
	const u8 *cocci_id/* drivers/platform/chrome/wilco_ec/event.c 213 */;
	struct acpi_device *cocci_id/* drivers/platform/chrome/wilco_ec/event.c 213 */;
	int cocci_id/* drivers/platform/chrome/wilco_ec/event.c 213 */;
	struct event_device_data {
		struct ec_event_queue *events;
		spinlock_t queue_lock;
		wait_queue_head_t wq;
		struct device dev;
		struct cdev cdev;
		bool exist;
		atomic_t available;
	} cocci_id/* drivers/platform/chrome/wilco_ec/event.c 190 */;
	bool cocci_id/* drivers/platform/chrome/wilco_ec/event.c 119 */;
	struct ec_event_queue *cocci_id/* drivers/platform/chrome/wilco_ec/event.c 119 */;
}
