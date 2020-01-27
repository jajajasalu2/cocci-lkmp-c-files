cocci_test_suite() {
	struct serio_raw_client cocci_id/* drivers/input/serio/serio_raw.c 95 */;
	struct inode *cocci_id/* drivers/input/serio/serio_raw.c 74 */;
	struct serio_raw_client *cocci_id/* drivers/input/serio/serio_raw.c 57 */;
	struct file *cocci_id/* drivers/input/serio/serio_raw.c 55 */;
	struct serio_driver cocci_id/* drivers/input/serio/serio_raw.c 428 */;
	struct serio_raw_client {
		struct fasync_struct *fasync;
		struct serio_raw *serio_raw;
		struct list_head node;
	} cocci_id/* drivers/input/serio/serio_raw.c 42 */;
	const struct serio_device_id cocci_id/* drivers/input/serio/serio_raw.c 410 */[];
	void cocci_id/* drivers/input/serio/serio_raw.c 391 */;
	long cocci_id/* drivers/input/serio/serio_raw.c 303 */;
	struct serio_raw cocci_id/* drivers/input/serio/serio_raw.c 296 */;
	struct serio_raw *cocci_id/* drivers/input/serio/serio_raw.c 293 */;
	atomic_t cocci_id/* drivers/input/serio/serio_raw.c 292 */;
	struct serio_driver *cocci_id/* drivers/input/serio/serio_raw.c 290 */;
	struct serio *cocci_id/* drivers/input/serio/serio_raw.c 290 */;
	int cocci_id/* drivers/input/serio/serio_raw.c 290 */;
	struct serio_raw {
		unsigned char queue[SERIO_RAW_QUEUE_LEN];
		unsigned int tail,head;
		char name[16];
		struct kref kref;
		struct serio *serio;
		struct miscdevice dev;
		wait_queue_head_t wait;
		struct list_head client_list;
		struct list_head node;
		bool dead;
	} cocci_id/* drivers/input/serio/serio_raw.c 28 */;
	unsigned int cocci_id/* drivers/input/serio/serio_raw.c 271 */;
	irqreturn_t cocci_id/* drivers/input/serio/serio_raw.c 270 */;
	unsigned char cocci_id/* drivers/input/serio/serio_raw.c 270 */;
	const struct file_operations cocci_id/* drivers/input/serio/serio_raw.c 254 */;
	__poll_t cocci_id/* drivers/input/serio/serio_raw.c 239 */;
	poll_table *cocci_id/* drivers/input/serio/serio_raw.c 239 */;
	const char __user *cocci_id/* drivers/input/serio/serio_raw.c 198 */;
	char cocci_id/* drivers/input/serio/serio_raw.c 162 */;
	loff_t *cocci_id/* drivers/input/serio/serio_raw.c 158 */;
	size_t cocci_id/* drivers/input/serio/serio_raw.c 158 */;
	char __user *cocci_id/* drivers/input/serio/serio_raw.c 157 */;
	ssize_t cocci_id/* drivers/input/serio/serio_raw.c 157 */;
	bool cocci_id/* drivers/input/serio/serio_raw.c 140 */;
	char *cocci_id/* drivers/input/serio/serio_raw.c 140 */;
	struct kref *cocci_id/* drivers/input/serio/serio_raw.c 115 */;
}
