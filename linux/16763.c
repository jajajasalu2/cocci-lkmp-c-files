cocci_test_suite() {
	struct serio cocci_id/* drivers/input/serio/userio.c 88 */;
	struct userio_device cocci_id/* drivers/input/serio/userio.c 80 */;
	struct userio_device *cocci_id/* drivers/input/serio/userio.c 78 */;
	struct inode *cocci_id/* drivers/input/serio/userio.c 76 */;
	struct file *cocci_id/* drivers/input/serio/userio.c 76 */;
	int cocci_id/* drivers/input/serio/userio.c 76 */;
	struct serio *cocci_id/* drivers/input/serio/userio.c 55 */;
	unsigned char cocci_id/* drivers/input/serio/userio.c 55 */;
	struct userio_device {
		struct serio *serio;
		struct mutex mutex;
		bool running;
		u8 head;
		u8 tail;
		spinlock_t buf_lock;
		unsigned char buf[USERIO_BUFSIZE];
		wait_queue_head_t waitq;
	} cocci_id/* drivers/input/serio/userio.c 35 */;
	struct miscdevice cocci_id/* drivers/input/serio/userio.c 33 */;
	const struct file_operations cocci_id/* drivers/input/serio/userio.c 263 */;
	__poll_t cocci_id/* drivers/input/serio/userio.c 251 */;
	poll_table *cocci_id/* drivers/input/serio/userio.c 251 */;
	struct userio_cmd cocci_id/* drivers/input/serio/userio.c 183 */;
	const char __user *cocci_id/* drivers/input/serio/userio.c 179 */;
	unsigned long cocci_id/* drivers/input/serio/userio.c 128 */;
	unsigned char cocci_id/* drivers/input/serio/userio.c 127 */[USERIO_BUFSIZE];
	loff_t *cocci_id/* drivers/input/serio/userio.c 122 */;
	size_t cocci_id/* drivers/input/serio/userio.c 122 */;
	char __user *cocci_id/* drivers/input/serio/userio.c 121 */;
	ssize_t cocci_id/* drivers/input/serio/userio.c 121 */;
}
