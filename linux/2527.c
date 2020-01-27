cocci_test_suite() {
	char cocci_id/* drivers/md/dm-ioctl.c 965 */;
	unsigned long cocci_id/* drivers/md/dm-ioctl.c 963 */[4];
	struct hd_geometry cocci_id/* drivers/md/dm-ioctl.c 962 */;
	struct list_head *cocci_id/* drivers/md/dm-ioctl.c 73 */;
	int cocci_id/* drivers/md/dm-ioctl.c 721 */;
	struct dm_table *cocci_id/* drivers/md/dm-ioctl.c 720 */;
	struct gendisk *cocci_id/* drivers/md/dm-ioctl.c 719 */;
	struct mapped_device *cocci_id/* drivers/md/dm-ioctl.c 717 */;
	struct dm_ioctl *cocci_id/* drivers/md/dm-ioctl.c 717 */;
	void cocci_id/* drivers/md/dm-ioctl.c 717 */;
	void cocci_id/* drivers/md/dm-ioctl.c 61 */(bool keep_open_devices,
						    bool mark_deferred,
						    bool only_deferred);
	struct target_type *cocci_id/* drivers/md/dm-ioctl.c 609 */;
	struct vers_iter cocci_id/* drivers/md/dm-ioctl.c 608 */;
	struct dm_target_versions *cocci_id/* drivers/md/dm-ioctl.c 607 */;
	size_t cocci_id/* drivers/md/dm-ioctl.c 604 */;
	struct vers_iter *cocci_id/* drivers/md/dm-ioctl.c 581 */;
	struct list_head cocci_id/* drivers/md/dm-ioctl.c 58 */[NUM_BUCKETS];
	struct dm_target_versions cocci_id/* drivers/md/dm-ioctl.c 574 */;
	uint32_t cocci_id/* drivers/md/dm-ioctl.c 524 */;
	struct dm_name_list cocci_id/* drivers/md/dm-ioctl.c 523 */;
	uint32_t *cocci_id/* drivers/md/dm-ioctl.c 513 */;
	struct dm_name_list *cocci_id/* drivers/md/dm-ioctl.c 512 */;
	size_t *cocci_id/* drivers/md/dm-ioctl.c 494 */;
	void *cocci_id/* drivers/md/dm-ioctl.c 484 */;
	struct vers_iter {
		size_t param_size;
		struct dm_target_versions *vers,*old_vers;
		char *end;
		uint32_t flags;
	} cocci_id/* drivers/md/dm-ioctl.c 48 */;
	int (*cocci_id/* drivers/md/dm-ioctl.c 467 */)(struct file *filp,
						       struct dm_ioctl *param,
						       size_t param_size);
	struct hash_cell {
		struct list_head name_list;
		struct list_head uuid_list;
		char *name;
		char *uuid;
		struct mapped_device *md;
		struct dm_table *new_map;
	} cocci_id/* drivers/md/dm-ioctl.c 38 */;
	struct hash_cell *cocci_id/* drivers/md/dm-ioctl.c 350 */;
	char *cocci_id/* drivers/md/dm-ioctl.c 350 */;
	bool cocci_id/* drivers/md/dm-ioctl.c 280 */;
	struct dm_file {
		volatile unsigned global_event_nr;
	} cocci_id/* drivers/md/dm-ioctl.c 26 */;
	sector_t cocci_id/* drivers/md/dm-ioctl.c 2103 */;
	char **cocci_id/* drivers/md/dm-ioctl.c 2068 */;
	struct dm_target_spec **cocci_id/* drivers/md/dm-ioctl.c 2067 */;
	int __init cocci_id/* drivers/md/dm-ioctl.c 2066 */;
	struct miscdevice cocci_id/* drivers/md/dm-ioctl.c 1976 */;
	const struct file_operations cocci_id/* drivers/md/dm-ioctl.c 1966 */;
	__poll_t cocci_id/* drivers/md/dm-ioctl.c 1953 */;
	poll_table *cocci_id/* drivers/md/dm-ioctl.c 1953 */;
	struct dm_file cocci_id/* drivers/md/dm-ioctl.c 1938 */;
	struct inode *cocci_id/* drivers/md/dm-ioctl.c 1929 */;
	ulong cocci_id/* drivers/md/dm-ioctl.c 1921 */;
	long cocci_id/* drivers/md/dm-ioctl.c 1921 */;
	ioctl_fn cocci_id/* drivers/md/dm-ioctl.c 1848 */;
	uint cocci_id/* drivers/md/dm-ioctl.c 1841 */;
	struct file *cocci_id/* drivers/md/dm-ioctl.c 1841 */;
	char __user *cocci_id/* drivers/md/dm-ioctl.c 1793 */;
	unsigned cocci_id/* drivers/md/dm-ioctl.c 1754 */;
	const size_t cocci_id/* drivers/md/dm-ioctl.c 1753 */;
	struct dm_ioctl cocci_id/* drivers/md/dm-ioctl.c 1753 */;
	struct dm_ioctl **cocci_id/* drivers/md/dm-ioctl.c 1749 */;
	int *cocci_id/* drivers/md/dm-ioctl.c 1749 */;
	uint32_t cocci_id/* drivers/md/dm-ioctl.c 1708 */[3];
	struct dm_ioctl __user *cocci_id/* drivers/md/dm-ioctl.c 1706 */;
	const struct {
		int cmd;
		int flags;
		ioctl_fn fn;
	} cocci_id/* drivers/md/dm-ioctl.c 1666 */[];
	struct dm_target_msg *cocci_id/* drivers/md/dm-ioctl.c 1579 */;
	struct dm_target_deps *cocci_id/* drivers/md/dm-ioctl.c 1461 */;
	struct dm_dev_internal *cocci_id/* drivers/md/dm-ioctl.c 1460 */;
	uint64_t cocci_id/* drivers/md/dm-ioctl.c 140 */;
	enum dm_queue_mode cocci_id/* drivers/md/dm-ioctl.c 1320 */;
	unsigned char *cocci_id/* drivers/md/dm-ioctl.c 1273 */;
	struct dm_target_spec *cocci_id/* drivers/md/dm-ioctl.c 1270 */;
	fmode_t cocci_id/* drivers/md/dm-ioctl.c 1260 */;
	struct dm_file *cocci_id/* drivers/md/dm-ioctl.c 1253 */;
	struct dm_target_spec cocci_id/* drivers/md/dm-ioctl.c 1160 */;
	struct dm_target *cocci_id/* drivers/md/dm-ioctl.c 1156 */;
	unsigned int cocci_id/* drivers/md/dm-ioctl.c 115 */;
	status_type_t cocci_id/* drivers/md/dm-ioctl.c 1142 */;
	const char *cocci_id/* drivers/md/dm-ioctl.c 112 */;
	const unsigned int cocci_id/* drivers/md/dm-ioctl.c 100 */;
}
