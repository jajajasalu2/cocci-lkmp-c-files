cocci_test_suite() {
	struct mdev_link cocci_id/* drivers/staging/most/configfs.c 90 */;
	int (*cocci_id/* drivers/staging/most/configfs.c 78 */[])(struct mdev_link *link);
	int __init cocci_id/* drivers/staging/most/configfs.c 690 */;
	void cocci_id/* drivers/staging/most/configfs.c 690 */;
	struct core_component *cocci_id/* drivers/staging/most/configfs.c 677 */;
	struct most_sound cocci_id/* drivers/staging/most/configfs.c 608 */;
	struct most_sound *cocci_id/* drivers/staging/most/configfs.c 607 */;
	struct most_sound {
		struct configfs_subsystem subsys;
		struct list_head soundcard_list;
		struct module *mod;
	} cocci_id/* drivers/staging/most/configfs.c 573 */;
	struct most_snd_grp *cocci_id/* drivers/staging/most/configfs.c 527 */;
	struct most_snd_grp cocci_id/* drivers/staging/most/configfs.c 505 */;
	struct most_snd_grp {
		struct config_group group;
		bool create_card;
		struct list_head list;
	} cocci_id/* drivers/staging/most/configfs.c 497 */;
	struct most_common cocci_id/* drivers/staging/most/configfs.c 464 */;
	struct configfs_group_operations cocci_id/* drivers/staging/most/configfs.c 453 */;
	struct most_common *cocci_id/* drivers/staging/most/configfs.c 448 */;
	struct config_group *cocci_id/* drivers/staging/most/configfs.c 445 */;
	struct configfs_subsystem *cocci_id/* drivers/staging/most/configfs.c 402 */;
	struct most_common {
		struct config_group group;
		struct module *mod;
		struct configfs_subsystem subsys;
	} cocci_id/* drivers/staging/most/configfs.c 396 */;
	const struct config_item_type cocci_id/* drivers/staging/most/configfs.c 390 */;
	struct configfs_item_operations cocci_id/* drivers/staging/most/configfs.c 386 */;
	struct configfs_attribute *cocci_id/* drivers/staging/most/configfs.c 354 */[];
	struct list_head cocci_id/* drivers/staging/most/configfs.c 34 */;
	int cocci_id/* drivers/staging/most/configfs.c 277 */;
	struct mdev_link *cocci_id/* drivers/staging/most/configfs.c 276 */;
	const char *cocci_id/* drivers/staging/most/configfs.c 274 */;
	size_t cocci_id/* drivers/staging/most/configfs.c 274 */;
	struct config_item *cocci_id/* drivers/staging/most/configfs.c 267 */;
	char *cocci_id/* drivers/staging/most/configfs.c 267 */;
	ssize_t cocci_id/* drivers/staging/most/configfs.c 267 */;
	struct mdev_link {
		struct config_item item;
		struct list_head list;
		bool create_link;
		bool destroy_link;
		u16 num_buffers;
		u16 buffer_size;
		u16 subbuffer_size;
		u16 packets_per_xact;
		u16 dbr_size;
		char datatype[PAGE_SIZE];
		char direction[PAGE_SIZE];
		char name[PAGE_SIZE];
		char device[PAGE_SIZE];
		char channel[PAGE_SIZE];
		char comp[PAGE_SIZE];
		char comp_params[PAGE_SIZE];
	} cocci_id/* drivers/staging/most/configfs.c 15 */;
	bool cocci_id/* drivers/staging/most/configfs.c 115 */;
}
