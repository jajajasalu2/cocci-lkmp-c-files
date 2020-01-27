cocci_test_suite() {
	const char *cocci_id/* drivers/s390/char/hmcdrv_dev.c 96 */;
	umode_t *cocci_id/* drivers/s390/char/hmcdrv_dev.c 93 */;
	char *cocci_id/* drivers/s390/char/hmcdrv_dev.c 93 */;
	dev_t cocci_id/* drivers/s390/char/hmcdrv_dev.c 82 */;
	struct class *cocci_id/* drivers/s390/char/hmcdrv_dev.c 81 */;
	struct hmcdrv_dev_node cocci_id/* drivers/s390/char/hmcdrv_dev.c 77 */;
	const struct file_operations cocci_id/* drivers/s390/char/hmcdrv_dev.c 69 */;
	ssize_t cocci_id/* drivers/s390/char/hmcdrv_dev.c 63 */(char __kernel *cmd,
								loff_t offset,
								char __user *buf,
								size_t len);
	ssize_t cocci_id/* drivers/s390/char/hmcdrv_dev.c 61 */(struct file *fp,
								const char __user *ubuf,
								size_t len,
								loff_t *pos);
	ssize_t cocci_id/* drivers/s390/char/hmcdrv_dev.c 59 */(struct file *fp,
								char __user *ubuf,
								size_t len,
								loff_t *pos);
	loff_t cocci_id/* drivers/s390/char/hmcdrv_dev.c 58 */(struct file *fp,
							       loff_t pos,
							       int whence);
	int cocci_id/* drivers/s390/char/hmcdrv_dev.c 56 */(struct inode *inode,
							    struct file *fp);
	struct hmcdrv_dev_node {
#ifdef HMCDRV_DEV_CLASS
		struct cdev dev;
		umode_t mode;
#else
		struct miscdevice dev;
#endif
	} cocci_id/* drivers/s390/char/hmcdrv_dev.c 45 */;
	void cocci_id/* drivers/s390/char/hmcdrv_dev.c 356 */;
	struct device *cocci_id/* drivers/s390/char/hmcdrv_dev.c 293 */;
	int cocci_id/* drivers/s390/char/hmcdrv_dev.c 288 */;
	const char __user *cocci_id/* drivers/s390/char/hmcdrv_dev.c 246 */;
	long long cocci_id/* drivers/s390/char/hmcdrv_dev.c 235 */;
	loff_t *cocci_id/* drivers/s390/char/hmcdrv_dev.c 222 */;
	size_t cocci_id/* drivers/s390/char/hmcdrv_dev.c 222 */;
	char __user *cocci_id/* drivers/s390/char/hmcdrv_dev.c 221 */;
	ssize_t cocci_id/* drivers/s390/char/hmcdrv_dev.c 221 */;
	unsigned cocci_id/* drivers/s390/char/hmcdrv_dev.c 203 */;
	char __kernel *cocci_id/* drivers/s390/char/hmcdrv_dev.c 199 */;
	loff_t cocci_id/* drivers/s390/char/hmcdrv_dev.c 160 */;
	struct inode *cocci_id/* drivers/s390/char/hmcdrv_dev.c 114 */;
	struct file *cocci_id/* drivers/s390/char/hmcdrv_dev.c 114 */;
}
