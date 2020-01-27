cocci_test_suite() {
	char *cocci_id/* fs/configfs/file.c 64 */;
	void *cocci_id/* fs/configfs/file.c 551 */;
	umode_t cocci_id/* fs/configfs/file.c 547 */;
	struct configfs_dirent *cocci_id/* fs/configfs/file.c 546 */;
	const struct configfs_bin_attribute *cocci_id/* fs/configfs/file.c 543 */;
	struct config_item *cocci_id/* fs/configfs/file.c 542 */;
	const struct configfs_attribute *cocci_id/* fs/configfs/file.c 521 */;
	const struct file_operations cocci_id/* fs/configfs/file.c 507 */;
	unsigned long cocci_id/* fs/configfs/file.c 453 */;
	struct configfs_buffer cocci_id/* fs/configfs/file.c 365 */;
	struct configfs_buffer *cocci_id/* fs/configfs/file.c 361 */;
	struct configfs_attribute *cocci_id/* fs/configfs/file.c 360 */;
	struct configfs_fragment *cocci_id/* fs/configfs/file.c 359 */;
	struct dentry *cocci_id/* fs/configfs/file.c 358 */;
	struct inode *cocci_id/* fs/configfs/file.c 356 */;
	struct file *cocci_id/* fs/configfs/file.c 356 */;
	int cocci_id/* fs/configfs/file.c 356 */;
	struct configfs_buffer {
		size_t count;
		loff_t pos;
		char *page;
		struct configfs_item_operations *ops;
		struct mutex mutex;
		int needs_read_fill;
		bool read_in_progress;
		bool write_in_progress;
		char *bin_buffer;
		int bin_buffer_size;
		int cb_max_size;
		struct config_item *item;
		struct module *owner;
		union {
			struct configfs_attribute *attr;
			struct configfs_bin_attribute *bin_attr;
		};
	} cocci_id/* fs/configfs/file.c 31 */;
	const char __user *cocci_id/* fs/configfs/file.c 304 */;
	loff_t *cocci_id/* fs/configfs/file.c 144 */;
	size_t cocci_id/* fs/configfs/file.c 144 */;
	char __user *cocci_id/* fs/configfs/file.c 143 */;
	ssize_t cocci_id/* fs/configfs/file.c 142 */;
}
