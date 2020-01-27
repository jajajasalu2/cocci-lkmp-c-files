cocci_test_suite() {
	const struct ext4_getfsmap_dev *cocci_id/* fs/ext4/fsmap.c 67 */;
	struct ext4_fsmap cocci_id/* fs/ext4/fsmap.c 669 */;
	struct ext4_getfsmap_dev cocci_id/* fs/ext4/fsmap.c 651 */;
	const void *cocci_id/* fs/ext4/fsmap.c 65 */;
	struct ext4_getfsmap_info cocci_id/* fs/ext4/fsmap.c 629 */;
	struct ext4_getfsmap_dev cocci_id/* fs/ext4/fsmap.c 628 */[EXT4_GETFSMAP_DEVS];
	struct ext4_fsmap cocci_id/* fs/ext4/fsmap.c 627 */[2];
	ext4_fsmap_format_t cocci_id/* fs/ext4/fsmap.c 625 */;
	void *cocci_id/* fs/ext4/fsmap.c 625 */;
	struct ext4_fsmap_head *cocci_id/* fs/ext4/fsmap.c 624 */;
	int cocci_id/* fs/ext4/fsmap.c 624 */;
	bool cocci_id/* fs/ext4/fsmap.c 581 */;
	struct ext4_getfsmap_dev {
		int (*gfd_fn)(struct super_block *sb, struct ext4_fsmap *keys,
			      struct ext4_getfsmap_info *info);
		u32 gfd_dev;
	} cocci_id/* fs/ext4/fsmap.c 57 */;
	ext4_grpblk_t cocci_id/* fs/ext4/fsmap.c 474 */;
	ext4_group_t cocci_id/* fs/ext4/fsmap.c 472 */;
	struct ext4_sb_info *cocci_id/* fs/ext4/fsmap.c 467 */;
	struct ext4_getfsmap_info *cocci_id/* fs/ext4/fsmap.c 465 */;
	struct ext4_getfsmap_info {
		struct ext4_fsmap_head *gfi_head;
		ext4_fsmap_format_t gfi_formatter;
		void *gfi_format_arg;
		ext4_fsblk_t gfi_next_fsblk;
		u32 gfi_dev;
		ext4_group_t gfi_agno;
		struct ext4_fsmap gfi_low;
		struct ext4_fsmap gfi_high;
		struct ext4_fsmap gfi_lastfree;
		struct list_head gfi_meta_list;
		bool gfi_last;
	} cocci_id/* fs/ext4/fsmap.c 42 */;
	struct ext4_group_desc *cocci_id/* fs/ext4/fsmap.c 408 */;
	struct list_head *cocci_id/* fs/ext4/fsmap.c 354 */;
	unsigned long cocci_id/* fs/ext4/fsmap.c 318 */;
	unsigned int cocci_id/* fs/ext4/fsmap.c 311 */;
	uint64_t cocci_id/* fs/ext4/fsmap.c 290 */;
	journal_t *cocci_id/* fs/ext4/fsmap.c 256 */;
	ext4_fsblk_t cocci_id/* fs/ext4/fsmap.c 180 */;
	struct ext4_fsmap *cocci_id/* fs/ext4/fsmap.c 17 */;
	struct super_block *cocci_id/* fs/ext4/fsmap.c 16 */;
	struct fsmap *cocci_id/* fs/ext4/fsmap.c 16 */;
	void cocci_id/* fs/ext4/fsmap.c 16 */;
}
