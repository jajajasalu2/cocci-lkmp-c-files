cocci_test_suite() {
	void __exit cocci_id/* drivers/char/ppdev.c 870 */;
	struct device *cocci_id/* drivers/char/ppdev.c 87 */[PARPORT_MAX];
	int __init cocci_id/* drivers/char/ppdev.c 840 */;
	struct parport_driver cocci_id/* drivers/char/ppdev.c 832 */;
	struct device_driver *cocci_id/* drivers/char/ppdev.c 823 */;
	struct pardevice *cocci_id/* drivers/char/ppdev.c 821 */;
	struct device *cocci_id/* drivers/char/ppdev.c 796 */;
	struct parport *cocci_id/* drivers/char/ppdev.c 794 */;
	void cocci_id/* drivers/char/ppdev.c 794 */;
	const struct file_operations cocci_id/* drivers/char/ppdev.c 782 */;
	struct class *cocci_id/* drivers/char/ppdev.c 780 */;
	__poll_t cocci_id/* drivers/char/ppdev.c 768 */;
	poll_table *cocci_id/* drivers/char/ppdev.c 768 */;
	struct pp_struct {
		struct pardevice *pdev;
		wait_queue_head_t irq_wait;
		atomic_t irqc;
		unsigned int flags;
		int irqresponse;
		unsigned char irqctl;
		struct ieee1284_info state;
		struct ieee1284_info saved_state;
		long default_inactivity;
		int index;
	} cocci_id/* drivers/char/ppdev.c 73 */;
	struct pp_struct cocci_id/* drivers/char/ppdev.c 689 */;
	struct inode *cocci_id/* drivers/char/ppdev.c 681 */;
	long cocci_id/* drivers/char/ppdev.c 671 */;
	unsigned char __user *cocci_id/* drivers/char/ppdev.c 571 */;
	struct timespec64 cocci_id/* drivers/char/ppdev.c 522 */;
	s64 cocci_id/* drivers/char/ppdev.c 521 */[2];
	s32 cocci_id/* drivers/char/ppdev.c 520 */[2];
	unsigned char cocci_id/* drivers/char/ppdev.c 517 */;
	struct ieee1284_info *cocci_id/* drivers/char/ppdev.c 363 */;
	void __user *cocci_id/* drivers/char/ppdev.c 357 */;
	struct pp_struct *cocci_id/* drivers/char/ppdev.c 355 */;
	struct file *cocci_id/* drivers/char/ppdev.c 352 */;
	unsigned long cocci_id/* drivers/char/ppdev.c 352 */;
	unsigned int cocci_id/* drivers/char/ppdev.c 352 */;
	enum ieee1284_phase cocci_id/* drivers/char/ppdev.c 325 */;
	int cocci_id/* drivers/char/ppdev.c 325 */;
	struct pardev_cb cocci_id/* drivers/char/ppdev.c 288 */;
	void *cocci_id/* drivers/char/ppdev.c 270 */;
	const char __user *cocci_id/* drivers/char/ppdev.c 193 */;
	size_t (*cocci_id/* drivers/char/ppdev.c 152 */)(struct parport *,
							 void *, size_t, int);
	char *cocci_id/* drivers/char/ppdev.c 120 */;
	loff_t *cocci_id/* drivers/char/ppdev.c 116 */;
	char __user *cocci_id/* drivers/char/ppdev.c 115 */;
	ssize_t cocci_id/* drivers/char/ppdev.c 115 */;
	size_t cocci_id/* drivers/char/ppdev.c 115 */;
}
