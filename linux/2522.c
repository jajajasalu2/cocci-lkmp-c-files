cocci_test_suite() {
	region_table_slot_t cocci_id/* drivers/md/dm-switch.c 88 */;
	sector_t cocci_id/* drivers/md/dm-switch.c 79 */;
	struct switch_ctx *cocci_id/* drivers/md/dm-switch.c 78 */;
	struct dm_target *cocci_id/* drivers/md/dm-switch.c 76 */;
	unsigned cocci_id/* drivers/md/dm-switch.c 76 */;
	int cocci_id/* drivers/md/dm-switch.c 76 */;
	void __exit cocci_id/* drivers/md/dm-switch.c 574 */;
	void cocci_id/* drivers/md/dm-switch.c 574 */;
	int __init cocci_id/* drivers/md/dm-switch.c 563 */;
	struct target_type cocci_id/* drivers/md/dm-switch.c 550 */;
	iterate_devices_callout_fn cocci_id/* drivers/md/dm-switch.c 534 */;
	void *cocci_id/* drivers/md/dm-switch.c 534 */;
	struct block_device **cocci_id/* drivers/md/dm-switch.c 515 */;
	status_type_t cocci_id/* drivers/md/dm-switch.c 489 */;
	char *cocci_id/* drivers/md/dm-switch.c 470 */;
	const char *cocci_id/* drivers/md/dm-switch.c 381 */;
	struct switch_ctx {
		struct dm_target *ti;
		unsigned nr_paths;
		unsigned region_size;
		unsigned long nr_regions;
		signed char region_size_bits;
		unsigned char region_table_entry_bits;
		unsigned char region_entries_per_slot;
		signed char region_entries_per_slot_bits;
		region_table_slot_t *region_table;
		struct switch_path path_list[0];
	} cocci_id/* drivers/md/dm-switch.c 38 */;
	char **cocci_id/* drivers/md/dm-switch.c 374 */;
	unsigned char cocci_id/* drivers/md/dm-switch.c 362 */;
	const char **cocci_id/* drivers/md/dm-switch.c 360 */;
	const unsigned char cocci_id/* drivers/md/dm-switch.c 341 */[256];
	struct bio *cocci_id/* drivers/md/dm-switch.c 319 */;
	struct switch_path {
		struct dm_dev *dmdev;
		sector_t start;
	} cocci_id/* drivers/md/dm-switch.c 30 */;
	struct dm_arg_set cocci_id/* drivers/md/dm-switch.c 261 */;
	struct switch_path cocci_id/* drivers/md/dm-switch.c 255 */;
	struct switch_ctx cocci_id/* drivers/md/dm-switch.c 255 */;
	const struct dm_arg cocci_id/* drivers/md/dm-switch.c 254 */[];
	unsigned long long cocci_id/* drivers/md/dm-switch.c 207 */;
	struct dm_arg_set *cocci_id/* drivers/md/dm-switch.c 204 */;
	unsigned long cocci_id/* drivers/md/dm-switch.c 195 */;
	unsigned long *cocci_id/* drivers/md/dm-switch.c 127 */;
	unsigned *cocci_id/* drivers/md/dm-switch.c 127 */;
}
