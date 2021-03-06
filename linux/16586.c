cocci_test_suite() {
	int cocci_id/* drivers/s390/char/monreader.c 93 */;
	char *cocci_id/* drivers/s390/char/monreader.c 91 */;
	void cocci_id/* drivers/s390/char/monreader.c 91 */;
	struct device *cocci_id/* drivers/s390/char/monreader.c 82 */;
	u8 cocci_id/* drivers/s390/char/monreader.c 67 */[16];
	void __exit cocci_id/* drivers/s390/char/monreader.c 631 */;
	unsigned long cocci_id/* drivers/s390/char/monreader.c 62 */;
	void (*cocci_id/* drivers/s390/char/monreader.c 583 */)(struct device *);
	struct device cocci_id/* drivers/s390/char/monreader.c 573 */;
	int __init cocci_id/* drivers/s390/char/monreader.c 550 */;
	struct device_driver cocci_id/* drivers/s390/char/monreader.c 540 */;
	const struct dev_pm_ops cocci_id/* drivers/s390/char/monreader.c 534 */;
	struct mon_private {
		struct iucv_path *path;
		struct mon_msg *msg_array[MON_MSGLIM];
		unsigned int write_index;
		unsigned int read_index;
		atomic_t msglim_count;
		atomic_t read_ready;
		atomic_t iucv_connected;
		atomic_t iucv_severed;
	} cocci_id/* drivers/s390/char/monreader.c 48 */;
	struct miscdevice cocci_id/* drivers/s390/char/monreader.c 453 */;
	const struct file_operations cocci_id/* drivers/s390/char/monreader.c 444 */;
	__poll_t cocci_id/* drivers/s390/char/monreader.c 432 */;
	struct poll_table_struct *cocci_id/* drivers/s390/char/monreader.c 432 */;
	void *cocci_id/* drivers/s390/char/monreader.c 400 */;
	struct mon_msg {
		u32 pos;
		u32 mca_offset;
		struct iucv_message msg;
		char msglim_reached;
		char replied_msglim;
	} cocci_id/* drivers/s390/char/monreader.c 40 */;
	char cocci_id/* drivers/s390/char/monreader.c 38 */[9];
	loff_t *cocci_id/* drivers/s390/char/monreader.c 367 */;
	size_t cocci_id/* drivers/s390/char/monreader.c 367 */;
	char __user *cocci_id/* drivers/s390/char/monreader.c 366 */;
	ssize_t cocci_id/* drivers/s390/char/monreader.c 366 */;
	struct inode *cocci_id/* drivers/s390/char/monreader.c 335 */;
	struct file *cocci_id/* drivers/s390/char/monreader.c 335 */;
	struct iucv_handler cocci_id/* drivers/s390/char/monreader.c 269 */;
	struct iucv_message *cocci_id/* drivers/s390/char/monreader.c 254 */;
	struct iucv_path *cocci_id/* drivers/s390/char/monreader.c 253 */;
	u8 *cocci_id/* drivers/s390/char/monreader.c 233 */;
	struct mon_msg cocci_id/* drivers/s390/char/monreader.c 191 */;
	struct mon_private cocci_id/* drivers/s390/char/monreader.c 187 */;
	struct mon_private *cocci_id/* drivers/s390/char/monreader.c 182 */;
	struct mon_msg *cocci_id/* drivers/s390/char/monreader.c 135 */;
	u32 cocci_id/* drivers/s390/char/monreader.c 120 */;
	u8 cocci_id/* drivers/s390/char/monreader.c 115 */;
	u32 *cocci_id/* drivers/s390/char/monreader.c 112 */;
}
