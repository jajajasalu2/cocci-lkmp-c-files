cocci_test_suite() {
	unsigned cocci_id/* drivers/md/dm-uevent.c 63 */;
	const char *cocci_id/* drivers/md/dm-uevent.c 61 */;
	enum kobject_action cocci_id/* drivers/md/dm-uevent.c 60 */;
	struct dm_target *cocci_id/* drivers/md/dm-uevent.c 59 */;
	struct mapped_device *cocci_id/* drivers/md/dm-uevent.c 58 */;
	struct dm_uevent *cocci_id/* drivers/md/dm-uevent.c 58 */;
	struct dm_uevent {
		struct mapped_device *md;
		enum kobject_action action;
		struct kobj_uevent_env ku_env;
		struct list_head elist;
		char name[DM_NAME_LEN];
		char uuid[DM_UUID_LEN];
	} cocci_id/* drivers/md/dm-uevent.c 30 */;
	struct kmem_cache *cocci_id/* drivers/md/dm-uevent.c 28 */;
	const struct {
		enum dm_uevent_type type;
		enum kobject_action action;
		char *name;
	} cocci_id/* drivers/md/dm-uevent.c 19 */[];
	enum dm_uevent_type cocci_id/* drivers/md/dm-uevent.c 170 */;
	void cocci_id/* drivers/md/dm-uevent.c 170 */;
	int cocci_id/* drivers/md/dm-uevent.c 123 */;
	struct list_head *cocci_id/* drivers/md/dm-uevent.c 121 */;
	struct kobject *cocci_id/* drivers/md/dm-uevent.c 121 */;
}
