cocci_test_suite() {
	llu cocci_id/* fs/fat/fatent.c 96 */;
	u64 cocci_id/* fs/fat/fatent.c 710 */;
	struct buffer_head **cocci_id/* fs/fat/fatent.c 71 */;
	struct fstrim_range *cocci_id/* fs/fat/fatent.c 704 */;
	u32 cocci_id/* fs/fat/fatent.c 697 */;
	sector_t cocci_id/* fs/fat/fatent.c 69 */;
	struct fat_entry *cocci_id/* fs/fat/fatent.c 68 */;
	struct buffer_head *cocci_id/* fs/fat/fatent.c 470 */[MAX_BUF_PER_PAGE];
	struct fat_entry cocci_id/* fs/fat/fatent.c 469 */;
	const struct fatent_operations *cocci_id/* fs/fat/fatent.c 468 */;
	struct inode *cocci_id/* fs/fat/fatent.c 464 */;
	struct buffer_head *cocci_id/* fs/fat/fatent.c 378 */;
	const struct fatent_operations cocci_id/* fs/fat/fatent.c 250 */;
	struct msdos_sb_info *cocci_id/* fs/fat/fatent.c 25 */;
	__le32 *cocci_id/* fs/fat/fatent.c 242 */;
	__le16 *cocci_id/* fs/fat/fatent.c 230 */;
	sector_t *cocci_id/* fs/fat/fatent.c 23 */;
	int *cocci_id/* fs/fat/fatent.c 23 */;
	const struct buffer_head *cocci_id/* fs/fat/fatent.c 228 */;
	struct super_block *cocci_id/* fs/fat/fatent.c 22 */;
	int cocci_id/* fs/fat/fatent.c 22 */;
	void cocci_id/* fs/fat/fatent.c 22 */;
	u8 *cocci_id/* fs/fat/fatent.c 197 */;
	unsigned long cocci_id/* fs/fat/fatent.c 139 */;
	u8 **cocci_id/* fs/fat/fatent.c 120 */;
	struct fatent_operations {
		void (*ent_blocknr)(struct super_block *, int, int *,
				    sector_t *);
		void (*ent_set_ptr)(struct fat_entry *, int);
		int (*ent_bread)(struct super_block *, struct fat_entry *,
				 int, sector_t);
		int (*ent_get)(struct fat_entry *);
		void (*ent_put)(struct fat_entry *, int);
		int (*ent_next)(struct fat_entry *);
	} cocci_id/* fs/fat/fatent.c 10 */;
}
