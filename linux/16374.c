cocci_test_suite() {
	struct roccat_report *cocci_id/* drivers/hid/hid-roccat.c 78 */;
	loff_t *cocci_id/* drivers/hid/hid-roccat.c 74 */;
	size_t cocci_id/* drivers/hid/hid-roccat.c 74 */;
	char __user *cocci_id/* drivers/hid/hid-roccat.c 73 */;
	ssize_t cocci_id/* drivers/hid/hid-roccat.c 73 */;
	struct roccat_device *cocci_id/* drivers/hid/hid-roccat.c 69 */[ROCCAT_MAX_DEVICES];
	struct cdev cocci_id/* drivers/hid/hid-roccat.c 67 */;
	struct roccat_reader {
		struct list_head node;
		struct roccat_device *device;
		int cbuf_start;
	} cocci_id/* drivers/hid/hid-roccat.c 60 */;
	dev_t cocci_id/* drivers/hid/hid-roccat.c 446 */;
	void __exit cocci_id/* drivers/hid/hid-roccat.c 444 */;
	int __init cocci_id/* drivers/hid/hid-roccat.c 414 */;
	const struct file_operations cocci_id/* drivers/hid/hid-roccat.c 404 */;
	int __user *cocci_id/* drivers/hid/hid-roccat.c 393 */;
	struct roccat_device {
		unsigned int minor;
		int report_size;
		int open;
		int exist;
		wait_queue_head_t wait;
		struct device *dev;
		struct hid_device *hid;
		struct list_head readers;
		struct mutex readers_lock;
		struct roccat_report cbuf[ROCCAT_CBUF_SIZE];
		int cbuf_end;
		struct mutex cbuf_lock;
	} cocci_id/* drivers/hid/hid-roccat.c 39 */;
	struct inode *cocci_id/* drivers/hid/hid-roccat.c 378 */;
	struct file *cocci_id/* drivers/hid/hid-roccat.c 376 */;
	unsigned long cocci_id/* drivers/hid/hid-roccat.c 376 */;
	long cocci_id/* drivers/hid/hid-roccat.c 376 */;
	void cocci_id/* drivers/hid/hid-roccat.c 351 */;
	struct roccat_report {
		uint8_t *value;
	} cocci_id/* drivers/hid/hid-roccat.c 35 */;
	struct roccat_device cocci_id/* drivers/hid/hid-roccat.c 300 */;
	struct roccat_device *cocci_id/* drivers/hid/hid-roccat.c 297 */;
	unsigned int cocci_id/* drivers/hid/hid-roccat.c 296 */;
	struct hid_device *cocci_id/* drivers/hid/hid-roccat.c 294 */;
	struct class *cocci_id/* drivers/hid/hid-roccat.c 294 */;
	int cocci_id/* drivers/hid/hid-roccat.c 294 */;
	uint8_t *cocci_id/* drivers/hid/hid-roccat.c 252 */;
	const u8 *cocci_id/* drivers/hid/hid-roccat.c 247 */;
	struct roccat_reader cocci_id/* drivers/hid/hid-roccat.c 155 */;
	struct roccat_reader *cocci_id/* drivers/hid/hid-roccat.c 151 */;
	__poll_t cocci_id/* drivers/hid/hid-roccat.c 137 */;
	poll_table *cocci_id/* drivers/hid/hid-roccat.c 137 */;
}
