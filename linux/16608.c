cocci_test_suite() {
	const struct file_operations cocci_id/* drivers/s390/char/vmlogrdr.c 94 */;
	ssize_t cocci_id/* drivers/s390/char/vmlogrdr.c 91 */(struct file *filp,
							      char __user *data,
							      size_t count,
							      loff_t *ppos);
	void __exit cocci_id/* drivers/s390/char/vmlogrdr.c 894 */;
	int cocci_id/* drivers/s390/char/vmlogrdr.c 89 */(struct inode *,
							  struct file *);
	dev_t cocci_id/* drivers/s390/char/vmlogrdr.c 851 */;
	int __init cocci_id/* drivers/s390/char/vmlogrdr.c 847 */;
	unsigned long cocci_id/* drivers/s390/char/vmlogrdr.c 837 */;
	void cocci_id/* drivers/s390/char/vmlogrdr.c 827 */;
	void (*cocci_id/* drivers/s390/char/vmlogrdr.c 772 */)(struct device *);
	struct device cocci_id/* drivers/s390/char/vmlogrdr.c 757 */;
	struct device_driver cocci_id/* drivers/s390/char/vmlogrdr.c 706 */;
	struct class *cocci_id/* drivers/s390/char/vmlogrdr.c 705 */;
	const struct dev_pm_ops cocci_id/* drivers/s390/char/vmlogrdr.c 701 */;
	const struct attribute_group *cocci_id/* drivers/s390/char/vmlogrdr.c 677 */[];
	struct attribute_group cocci_id/* drivers/s390/char/vmlogrdr.c 674 */;
	struct attribute *cocci_id/* drivers/s390/char/vmlogrdr.c 667 */[];
	const char cocci_id/* drivers/s390/char/vmlogrdr.c 647 */[];
	struct device_driver *cocci_id/* drivers/s390/char/vmlogrdr.c 645 */;
	char *cocci_id/* drivers/s390/char/vmlogrdr.c 645 */;
	ssize_t cocci_id/* drivers/s390/char/vmlogrdr.c 645 */;
	struct vmlogrdr_priv_t {
		char system_service[8];
		char internal_name[8];
		char recording_name[8];
		struct iucv_path *path;
		int connection_established;
		int iucv_path_severed;
		struct iucv_message local_interrupt_buffer;
		atomic_t receive_ready;
		int minor_num;
		char *buffer;
		char *current_position;
		int remaining;
		ulong residual_length;
		int buffer_free;
		int dev_in_use;
		spinlock_t priv_lock;
		struct device *device;
		struct device *class_device;
		int autorecording;
		int autopurge;
	} cocci_id/* drivers/s390/char/vmlogrdr.c 62 */;
	struct vmlogrdr_priv_t *cocci_id/* drivers/s390/char/vmlogrdr.c 534 */;
	struct device_attribute *cocci_id/* drivers/s390/char/vmlogrdr.c 531 */;
	struct device *cocci_id/* drivers/s390/char/vmlogrdr.c 530 */;
	const char *cocci_id/* drivers/s390/char/vmlogrdr.c 511 */;
	size_t cocci_id/* drivers/s390/char/vmlogrdr.c 511 */;
	loff_t *cocci_id/* drivers/s390/char/vmlogrdr.c 477 */;
	char __user *cocci_id/* drivers/s390/char/vmlogrdr.c 476 */;
	int *cocci_id/* drivers/s390/char/vmlogrdr.c 431 */;
	struct inode *cocci_id/* drivers/s390/char/vmlogrdr.c 309 */;
	struct file *cocci_id/* drivers/s390/char/vmlogrdr.c 309 */;
	char cocci_id/* drivers/s390/char/vmlogrdr.c 249 */[160];
	char cocci_id/* drivers/s390/char/vmlogrdr.c 218 */[80];
	struct iucv_message *cocci_id/* drivers/s390/char/vmlogrdr.c 198 */;
	struct iucv_path *cocci_id/* drivers/s390/char/vmlogrdr.c 197 */;
	u8 cocci_id/* drivers/s390/char/vmlogrdr.c 178 */;
	u8 *cocci_id/* drivers/s390/char/vmlogrdr.c 164 */;
	int cocci_id/* drivers/s390/char/vmlogrdr.c 161 */;
	struct cdev *cocci_id/* drivers/s390/char/vmlogrdr.c 160 */;
	char cocci_id/* drivers/s390/char/vmlogrdr.c 158 */[];
	struct vmlogrdr_priv_t cocci_id/* drivers/s390/char/vmlogrdr.c 126 */[];
	struct iucv_handler cocci_id/* drivers/s390/char/vmlogrdr.c 109 */;
	void cocci_id/* drivers/s390/char/vmlogrdr.c 105 */(struct iucv_path *,
							    struct iucv_message *);
	void cocci_id/* drivers/s390/char/vmlogrdr.c 103 */(struct iucv_path *,
							    u8 *ipuser);
}
