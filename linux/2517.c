cocci_test_suite() {
	struct bio_list cocci_id/* drivers/md/dm-delay.c 85 */;
	struct timer_list *cocci_id/* drivers/md/dm-delay.c 51 */;
	struct dm_delay_info {
		struct delay_c *context;
		struct delay_class *class;
		struct list_head list;
		unsigned long expires;
	} cocci_id/* drivers/md/dm-delay.c 42 */;
	void __exit cocci_id/* drivers/md/dm-delay.c 382 */;
	int __init cocci_id/* drivers/md/dm-delay.c 366 */;
	struct target_type cocci_id/* drivers/md/dm-delay.c 352 */;
	iterate_devices_callout_fn cocci_id/* drivers/md/dm-delay.c 333 */;
	void *cocci_id/* drivers/md/dm-delay.c 333 */;
	char *cocci_id/* drivers/md/dm-delay.c 308 */;
	unsigned cocci_id/* drivers/md/dm-delay.c 308 */;
	status_type_t cocci_id/* drivers/md/dm-delay.c 307 */;
	struct delay_c {
		struct timer_list delay_timer;
		struct mutex timer_lock;
		struct workqueue_struct *kdelayd_wq;
		struct work_struct flush_expired_bios;
		struct list_head delayed_bios;
		atomic_t may_delay;
		struct delay_class read;
		struct delay_class write;
		struct delay_class flush;
		int argc;
	} cocci_id/* drivers/md/dm-delay.c 27 */;
	struct dm_delay_info cocci_id/* drivers/md/dm-delay.c 251 */;
	unsigned long cocci_id/* drivers/md/dm-delay.c 246 */;
	struct dm_delay_info *cocci_id/* drivers/md/dm-delay.c 245 */;
	struct delay_class *cocci_id/* drivers/md/dm-delay.c 243 */;
	struct delay_c *cocci_id/* drivers/md/dm-delay.c 243 */;
	struct bio *cocci_id/* drivers/md/dm-delay.c 243 */;
	int cocci_id/* drivers/md/dm-delay.c 243 */;
	struct delay_class {
		struct dm_dev *dev;
		sector_t start;
		unsigned delay;
		unsigned ops;
	} cocci_id/* drivers/md/dm-delay.c 20 */;
	unsigned int cocci_id/* drivers/md/dm-delay.c 173 */;
	sector_t cocci_id/* drivers/md/dm-delay.c 145 */;
	char cocci_id/* drivers/md/dm-delay.c 143 */;
	unsigned long long cocci_id/* drivers/md/dm-delay.c 142 */;
	struct dm_target *cocci_id/* drivers/md/dm-delay.c 139 */;
	char **cocci_id/* drivers/md/dm-delay.c 139 */;
	void cocci_id/* drivers/md/dm-delay.c 120 */;
	struct delay_c cocci_id/* drivers/md/dm-delay.c 116 */;
	struct work_struct *cocci_id/* drivers/md/dm-delay.c 112 */;
}
