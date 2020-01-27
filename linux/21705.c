cocci_test_suite() {
	int cocci_id/* arch/s390/kernel/debug.c 99 */(debug_info_t *id,
						      struct debug_view *view,
						      char *out_buf,
						      debug_sprintf_entry_t *curr_event);
	int cocci_id/* arch/s390/kernel/debug.c 96 */(debug_info_t *id,
						      struct debug_view *view,
						      int area,
						      debug_entry_t *entry,
						      char *out_buf);
	const void *cocci_id/* arch/s390/kernel/debug.c 943 */;
	int cocci_id/* arch/s390/kernel/debug.c 91 */(debug_info_t *id,
						      struct debug_view *view,
						      char *out_buf,
						      const char *in_buf);
	struct ctl_table_header *cocci_id/* arch/s390/kernel/debug.c 906 */;
	struct ctl_table cocci_id/* arch/s390/kernel/debug.c 896 */[];
	int cocci_id/* arch/s390/kernel/debug.c 88 */(debug_info_t *id,
						      struct debug_view *view,
						      struct file *file,
						      const char __user *user_buf,
						      size_t user_buf_size,
						      loff_t *offset);
	size_t *cocci_id/* arch/s390/kernel/debug.c 870 */;
	void __user *cocci_id/* arch/s390/kernel/debug.c 870 */;
	struct ctl_table *cocci_id/* arch/s390/kernel/debug.c 869 */;
	unsigned long long *cocci_id/* arch/s390/kernel/debug.c 848 */;
	int cocci_id/* arch/s390/kernel/debug.c 78 */(debug_info_t *id,
						      struct debug_view *view,
						      char *out_buf);
	void cocci_id/* arch/s390/kernel/debug.c 76 */(debug_info_t *);
	debug_info_t *cocci_id/* arch/s390/kernel/debug.c 74 */(const char *name,
								int pages_per_area,
								int nr_areas,
								int buf_size,
								umode_t mode);
	int cocci_id/* arch/s390/kernel/debug.c 73 */(struct inode *inode,
						      struct file *file);
	ssize_t cocci_id/* arch/s390/kernel/debug.c 70 */(struct file *file,
							  const char __user *user_buf,
							  size_t user_len,
							  loff_t *offset);
	ssize_t cocci_id/* arch/s390/kernel/debug.c 68 */(struct file *file,
							  char __user *user_buf,
							  size_t user_len,
							  loff_t *offset);
	uid_t cocci_id/* arch/s390/kernel/debug.c 670 */;
	gid_t cocci_id/* arch/s390/kernel/debug.c 670 */;
	int cocci_id/* arch/s390/kernel/debug.c 67 */(void);
	file_private_info_t *cocci_id/* arch/s390/kernel/debug.c 640 */;
	struct inode *cocci_id/* arch/s390/kernel/debug.c 638 */;
	struct file *cocci_id/* arch/s390/kernel/debug.c 638 */;
	file_private_info_t cocci_id/* arch/s390/kernel/debug.c 611 */;
	loff_t *cocci_id/* arch/s390/kernel/debug.c 553 */;
	ssize_t cocci_id/* arch/s390/kernel/debug.c 552 */;
	struct {
		char *string;
		long args[0];
	} cocci_id/* arch/s390/kernel/debug.c 54 */;
	char __user *cocci_id/* arch/s390/kernel/debug.c 503 */;
	size_t cocci_id/* arch/s390/kernel/debug.c 438 */;
	struct file_private_info {
		loff_t offset;
		int act_area;
		int act_page;
		int act_entry;
		size_t act_entry_offset;
		char temp_buf[2048];
		debug_info_t *debug_info_org;
		debug_info_t *debug_info_snap;
		struct debug_view *view;
	} cocci_id/* arch/s390/kernel/debug.c 38 */;
	umode_t cocci_id/* arch/s390/kernel/debug.c 319 */;
	void cocci_id/* arch/s390/kernel/debug.c 286 */;
	debug_entry_t cocci_id/* arch/s390/kernel/debug.c 264 */;
	debug_info_t cocci_id/* arch/s390/kernel/debug.c 240 */;
	debug_entry_t **cocci_id/* arch/s390/kernel/debug.c 197 */;
	debug_entry_t ***cocci_id/* arch/s390/kernel/debug.c 192 */;
	struct dentry *cocci_id/* arch/s390/kernel/debug.c 182 */;
	const struct file_operations cocci_id/* arch/s390/kernel/debug.c 173 */;
	unsigned int __used cocci_id/* arch/s390/kernel/debug.c 162 */;
	debug_format_proc_t *cocci_id/* arch/s390/kernel/debug.c 155 */;
	int __init cocci_id/* arch/s390/kernel/debug.c 1512 */;
	int cocci_id/* arch/s390/kernel/debug.c 1476 */[DEBUG_SPRINTF_MAX_ARGS];
	void *cocci_id/* arch/s390/kernel/debug.c 1460 */;
	unsigned long *cocci_id/* arch/s390/kernel/debug.c 1449 */;
	unsigned int cocci_id/* arch/s390/kernel/debug.c 1444 */;
	struct debug_view *cocci_id/* arch/s390/kernel/debug.c 1439 */;
	unsigned char cocci_id/* arch/s390/kernel/debug.c 1425 */;
	unsigned char *cocci_id/* arch/s390/kernel/debug.c 1422 */;
	struct debug_view cocci_id/* arch/s390/kernel/debug.c 142 */;
	const char *cocci_id/* arch/s390/kernel/debug.c 1417 */;
	char cocci_id/* arch/s390/kernel/debug.c 1355 */[1];
	const char __user *cocci_id/* arch/s390/kernel/debug.c 1177 */;
	long cocci_id/* arch/s390/kernel/debug.c 1044 */;
	va_list cocci_id/* arch/s390/kernel/debug.c 1028 */;
	unsigned long cocci_id/* arch/s390/kernel/debug.c 1026 */;
	debug_sprintf_entry_t *cocci_id/* arch/s390/kernel/debug.c 1024 */;
	debug_info_t *cocci_id/* arch/s390/kernel/debug.c 1022 */;
	debug_entry_t *cocci_id/* arch/s390/kernel/debug.c 1022 */;
	char *cocci_id/* arch/s390/kernel/debug.c 1022 */;
	int cocci_id/* arch/s390/kernel/debug.c 1022 */;
}
