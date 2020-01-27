cocci_test_suite() {
	struct uleds_user_dev cocci_id/* drivers/leds/uleds.c 92 */;
	const char *cocci_id/* drivers/leds/uleds.c 77 */;
	const char __user *cocci_id/* drivers/leds/uleds.c 73 */;
	struct inode *cocci_id/* drivers/leds/uleds.c 52 */;
	struct file *cocci_id/* drivers/leds/uleds.c 52 */;
	int cocci_id/* drivers/leds/uleds.c 52 */;
	struct uleds_device cocci_id/* drivers/leds/uleds.c 42 */;
	struct uleds_device *cocci_id/* drivers/leds/uleds.c 42 */;
	enum led_brightness cocci_id/* drivers/leds/uleds.c 40 */;
	struct led_classdev *cocci_id/* drivers/leds/uleds.c 39 */;
	void cocci_id/* drivers/leds/uleds.c 39 */;
	struct miscdevice cocci_id/* drivers/leds/uleds.c 37 */;
	struct uleds_device {
		struct uleds_user_dev user_dev;
		struct led_classdev led_cdev;
		struct mutex mutex;
		enum uleds_state state;
		wait_queue_head_t waitq;
		int brightness;
		bool new_data;
	} cocci_id/* drivers/leds/uleds.c 27 */;
	enum uleds_state{ULEDS_STATE_UNKNOWN, ULEDS_STATE_REGISTERED,} cocci_id/* drivers/leds/uleds.c 22 */;
	void __exit cocci_id/* drivers/leds/uleds.c 218 */;
	int __init cocci_id/* drivers/leds/uleds.c 212 */;
	const struct file_operations cocci_id/* drivers/leds/uleds.c 196 */;
	__poll_t cocci_id/* drivers/leds/uleds.c 170 */;
	poll_table *cocci_id/* drivers/leds/uleds.c 170 */;
	loff_t *cocci_id/* drivers/leds/uleds.c 132 */;
	char __user *cocci_id/* drivers/leds/uleds.c 131 */;
	ssize_t cocci_id/* drivers/leds/uleds.c 131 */;
	size_t cocci_id/* drivers/leds/uleds.c 131 */;
}
