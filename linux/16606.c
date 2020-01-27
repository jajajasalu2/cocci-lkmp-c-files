cocci_test_suite() {
	void *cocci_id/* drivers/s390/char/monwriter.c 77 */;
	struct appldata_product_id *cocci_id/* drivers/s390/char/monwriter.c 62 */;
	struct appldata_parameter_list *cocci_id/* drivers/s390/char/monwriter.c 61 */;
	struct monwrite_hdr *cocci_id/* drivers/s390/char/monwriter.c 59 */;
	char *cocci_id/* drivers/s390/char/monwriter.c 59 */;
	struct mon_private {
		struct list_head priv_list;
		struct list_head list;
		struct monwrite_hdr hdr;
		size_t hdr_to_read;
		size_t data_to_read;
		struct mon_buf *current_buf;
		struct mutex thread_mutex;
	} cocci_id/* drivers/s390/char/monwriter.c 45 */;
	void __exit cocci_id/* drivers/s390/char/monwriter.c 391 */;
	void cocci_id/* drivers/s390/char/monwriter.c 391 */;
	struct mon_buf {
		struct list_head list;
		struct monwrite_hdr hdr;
		int diag_done;
		char *data;
	} cocci_id/* drivers/s390/char/monwriter.c 36 */;
	int __init cocci_id/* drivers/s390/char/monwriter.c 357 */;
	struct platform_device *cocci_id/* drivers/s390/char/monwriter.c 351 */;
	struct platform_driver cocci_id/* drivers/s390/char/monwriter.c 344 */;
	int cocci_id/* drivers/s390/char/monwriter.c 34 */;
	const struct dev_pm_ops cocci_id/* drivers/s390/char/monwriter.c 338 */;
	struct device *cocci_id/* drivers/s390/char/monwriter.c 300 */;
	struct miscdevice cocci_id/* drivers/s390/char/monwriter.c 290 */;
	const struct file_operations cocci_id/* drivers/s390/char/monwriter.c 282 */;
	loff_t *cocci_id/* drivers/s390/char/monwriter.c 226 */;
	size_t cocci_id/* drivers/s390/char/monwriter.c 226 */;
	const char __user *cocci_id/* drivers/s390/char/monwriter.c 225 */;
	ssize_t cocci_id/* drivers/s390/char/monwriter.c 225 */;
	struct mon_buf *cocci_id/* drivers/s390/char/monwriter.c 209 */;
	struct mon_private *cocci_id/* drivers/s390/char/monwriter.c 208 */;
	struct inode *cocci_id/* drivers/s390/char/monwriter.c 206 */;
	struct file *cocci_id/* drivers/s390/char/monwriter.c 206 */;
	struct mon_private cocci_id/* drivers/s390/char/monwriter.c 195 */;
	struct mon_buf cocci_id/* drivers/s390/char/monwriter.c 133 */;
	struct monwrite_hdr cocci_id/* drivers/s390/char/monwriter.c 114 */;
}
