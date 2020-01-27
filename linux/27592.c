cocci_test_suite() {
	u8 cocci_id/* fs/btrfs/check-integrity.c 996 */;
	struct btrfs_item cocci_id/* fs/btrfs/check-integrity.c 991 */;
	struct btrfs_leaf *cocci_id/* fs/btrfs/check-integrity.c 970 */;
	struct btrfs_leaf *const cocci_id/* fs/btrfs/check-integrity.c 969 */;
	struct btrfs_header *cocci_id/* fs/btrfs/check-integrity.c 953 */;
	struct btrfs_header *const cocci_id/* fs/btrfs/check-integrity.c 952 */;
	struct btrfsic_stack_frame *cocci_id/* fs/btrfs/check-integrity.c 950 */;
	struct btrfsic_stack_frame cocci_id/* fs/btrfs/check-integrity.c 949 */;
	struct btrfsic_block_data_ctx *const cocci_id/* fs/btrfs/check-integrity.c 946 */;
	struct btrfs_disk_key cocci_id/* fs/btrfs/check-integrity.c 847 */;
	struct block_device *const cocci_id/* fs/btrfs/check-integrity.c 775 */;
	struct btrfsic_dev_state **cocci_id/* fs/btrfs/check-integrity.c 766 */;
	struct btrfs_super_block *cocci_id/* fs/btrfs/check-integrity.c 633 */;
	dev_t cocci_id/* fs/btrfs/check-integrity.c 614 */;
	struct btrfsic_dev_state_hashtable *cocci_id/* fs/btrfs/check-integrity.c 600 */;
	struct btrfsic_block_link_hashtable *cocci_id/* fs/btrfs/check-integrity.c 542 */;
	struct block_device *cocci_id/* fs/btrfs/check-integrity.c 513 */;
	uintptr_t cocci_id/* fs/btrfs/check-integrity.c 501 */;
	const unsigned int cocci_id/* fs/btrfs/check-integrity.c 499 */;
	struct btrfsic_block_hashtable *cocci_id/* fs/btrfs/check-integrity.c 497 */;
	struct btrfsic_block_link *cocci_id/* fs/btrfs/check-integrity.c 440 */;
	struct btrfsic_dev_state_hashtable cocci_id/* fs/btrfs/check-integrity.c 382 */;
	struct mutex cocci_id/* fs/btrfs/check-integrity.c 380 */;
	void cocci_id/* fs/btrfs/check-integrity.c 375 */(struct btrfsic_state *state,
							  u64 bytenr,
							  struct btrfsic_dev_state *dev_state,
							  u64 dev_bytenr);
	struct btrfsic_dev_state *cocci_id/* fs/btrfs/check-integrity.c 374 */(dev_t dev);
	int cocci_id/* fs/btrfs/check-integrity.c 367 */(struct btrfsic_state *state,
							 struct btrfsic_dev_state *dev_state,
							 struct btrfs_device *device,
							 int superblock_mirror_num,
							 struct btrfsic_dev_state **selected_dev_state,
							 struct btrfs_super_block *selected_super);
	struct btrfsic_block *cocci_id/* fs/btrfs/check-integrity.c 358 */(struct btrfsic_state *state,
									   struct btrfsic_block_data_ctx *block_ctx,
									   const char *additional_string,
									   int is_metadata,
									   int is_iodone,
									   int never_written,
									   int mirror_num,
									   int *was_created);
	struct btrfsic_block_link *cocci_id/* fs/btrfs/check-integrity.c 352 */(struct btrfsic_state *state,
										struct btrfsic_block_data_ctx *next_block_ctx,
										struct btrfsic_block *next_block,
										struct btrfsic_block *from_block,
										u64 parent_generation);
	void cocci_id/* fs/btrfs/check-integrity.c 349 */(const struct btrfsic_state *state,
							  const struct btrfsic_block *block,
							  int indent_level);
	void cocci_id/* fs/btrfs/check-integrity.c 348 */(const struct btrfsic_state *state);
	char cocci_id/* fs/btrfs/check-integrity.c 346 */(const struct btrfsic_state *state,
							  const struct btrfsic_block *block);
	void cocci_id/* fs/btrfs/check-integrity.c 342 */(const struct btrfsic_state *state,
							  const struct btrfsic_block_link *l);
	int cocci_id/* fs/btrfs/check-integrity.c 339 */(struct btrfsic_state *state,
							 struct btrfsic_block *const block,
							 int recursion_level);
	int cocci_id/* fs/btrfs/check-integrity.c 336 */(const struct btrfsic_state *state,
							 const struct btrfsic_block *block,
							 int recursion_level);
	void cocci_id/* fs/btrfs/check-integrity.c 335 */(struct buffer_head *bh,
							  int uptodate);
	void cocci_id/* fs/btrfs/check-integrity.c 334 */(struct bio *bp);
	int cocci_id/* fs/btrfs/check-integrity.c 330 */(struct btrfsic_state *state,
							 struct btrfsic_block *const block,
							 struct btrfs_super_block *const super_hdr);
	void cocci_id/* fs/btrfs/check-integrity.c 324 */(struct btrfsic_dev_state *dev_state,
							  u64 dev_bytenr,
							  char **mapped_datav,
							  unsigned int num_pages,
							  struct bio *bio,
							  int *bio_is_patched,
							  struct buffer_head *bh,
							  int submit_bio_bh_rw);
	int cocci_id/* fs/btrfs/check-integrity.c 322 */(struct btrfsic_state *state,
							 char **datav,
							 unsigned int num_pages);
	void cocci_id/* fs/btrfs/check-integrity.c 321 */(struct btrfsic_state *state);
	int cocci_id/* fs/btrfs/check-integrity.c 319 */(struct btrfsic_state *state,
							 struct btrfsic_block_data_ctx *block_ctx);
	void cocci_id/* fs/btrfs/check-integrity.c 318 */(struct btrfsic_block_data_ctx *block_ctx);
	int cocci_id/* fs/btrfs/check-integrity.c 315 */(struct btrfsic_state *state,
							 u64 bytenr, u32 len,
							 struct btrfsic_block_data_ctx *block_ctx_out,
							 int mirror_num);
	int cocci_id/* fs/btrfs/check-integrity.c 311 */(struct btrfsic_state *state,
							 struct btrfsic_block *block,
							 struct btrfsic_block_data_ctx *block_ctx,
							 u32 item_offset,
							 int force_iodone_flag);
	int cocci_id/* fs/btrfs/check-integrity.c 299 */(struct btrfsic_state *state,
							 struct btrfsic_block *block,
							 struct btrfsic_block_data_ctx *block_ctx,
							 u64 next_bytenr,
							 int limit_nesting,
							 struct btrfsic_block_data_ctx *next_block_ctx,
							 struct btrfsic_block **next_blockp,
							 int force_iodone_flag,
							 int *num_copiesp,
							 int *mirror_nump,
							 struct btrfs_disk_key *disk_key,
							 u64 parent_generation);
	void cocci_id/* fs/btrfs/check-integrity.c 296 */(struct btrfsic_block_data_ctx *block_ctx,
							  void *dst,
							  u32 offset,
							  size_t len);
	int cocci_id/* fs/btrfs/check-integrity.c 292 */(struct btrfsic_state *state,
							 struct btrfsic_block *block,
							 struct btrfsic_block_data_ctx *block_ctx,
							 int limit_nesting,
							 int force_iodone_flag);
	int cocci_id/* fs/btrfs/check-integrity.c 290 */(struct btrfsic_state *state,
							 struct btrfs_fs_devices *fs_devices);
	struct list_head *cocci_id/* fs/btrfs/check-integrity.c 2896 */;
	struct btrfs_fs_devices *cocci_id/* fs/btrfs/check-integrity.c 2891 */;
	void cocci_id/* fs/btrfs/check-integrity.c 289 */(struct btrfsic_stack_frame *sf);
	struct btrfsic_stack_frame *cocci_id/* fs/btrfs/check-integrity.c 288 */(void);
	struct btrfsic_dev_state *cocci_id/* fs/btrfs/check-integrity.c 286 */(dev_t dev,
									       struct btrfsic_dev_state_hashtable *h);
	struct btrfsic_block *const cocci_id/* fs/btrfs/check-integrity.c 2859 */;
	unsigned long long cocci_id/* fs/btrfs/check-integrity.c 2820 */;
	void cocci_id/* fs/btrfs/check-integrity.c 282 */(struct btrfsic_dev_state *ds,
							  struct btrfsic_dev_state_hashtable *h);
	char **cocci_id/* fs/btrfs/check-integrity.c 2811 */;
	int cocci_id/* fs/btrfs/check-integrity.c 2810 */;
	struct bvec_iter cocci_id/* fs/btrfs/check-integrity.c 2809 */;
	struct bio_vec cocci_id/* fs/btrfs/check-integrity.c 2808 */;
	u64 cocci_id/* fs/btrfs/check-integrity.c 2806 */;
	unsigned int cocci_id/* fs/btrfs/check-integrity.c 2805 */;
	void cocci_id/* fs/btrfs/check-integrity.c 280 */(struct btrfsic_dev_state_hashtable *h);
	struct btrfsic_dev_state *cocci_id/* fs/btrfs/check-integrity.c 2794 */;
	struct bio *cocci_id/* fs/btrfs/check-integrity.c 2792 */;
	void cocci_id/* fs/btrfs/check-integrity.c 2792 */;
	struct btrfsic_block_link *cocci_id/* fs/btrfs/check-integrity.c 274 */(struct block_device *bdev_ref_to,
										u64 dev_bytenr_ref_to,
										struct block_device *bdev_ref_from,
										u64 dev_bytenr_ref_from,
										struct btrfsic_block_link_hashtable *h);
	void cocci_id/* fs/btrfs/check-integrity.c 273 */(struct btrfsic_block_link *l);
	void cocci_id/* fs/btrfs/check-integrity.c 270 */(struct btrfsic_block_link *l,
							  struct btrfsic_block_link_hashtable *h);
	struct btrfsic_block_data_ctx cocci_id/* fs/btrfs/check-integrity.c 2686 */;
	struct btrfs_fs_info *cocci_id/* fs/btrfs/check-integrity.c 2685 */;
	void cocci_id/* fs/btrfs/check-integrity.c 268 */(struct btrfsic_block_link_hashtable *h);
	struct btrfsic_block *cocci_id/* fs/btrfs/check-integrity.c 264 */(struct block_device *bdev,
									   u64 dev_bytenr,
									   struct btrfsic_block_hashtable *h);
	int *cocci_id/* fs/btrfs/check-integrity.c 2634 */;
	const char *cocci_id/* fs/btrfs/check-integrity.c 2629 */;
	void cocci_id/* fs/btrfs/check-integrity.c 261 */(struct btrfsic_block *b,
							  struct btrfsic_block_hashtable *h);
	void cocci_id/* fs/btrfs/check-integrity.c 260 */(struct btrfsic_block_hashtable *h);
	void cocci_id/* fs/btrfs/check-integrity.c 259 */(struct btrfsic_dev_state *ds);
	struct btrfsic_block_data_ctx *cocci_id/* fs/btrfs/check-integrity.c 2584 */;
	struct btrfsic_state *cocci_id/* fs/btrfs/check-integrity.c 2583 */;
	struct btrfsic_dev_state *cocci_id/* fs/btrfs/check-integrity.c 258 */(void);
	void cocci_id/* fs/btrfs/check-integrity.c 256 */(struct btrfsic_block_link *n);
	struct btrfsic_block_link *cocci_id/* fs/btrfs/check-integrity.c 255 */(void);
	void cocci_id/* fs/btrfs/check-integrity.c 253 */(struct btrfsic_block *b);
	char cocci_id/* fs/btrfs/check-integrity.c 2525 */[80];
	struct btrfsic_block *cocci_id/* fs/btrfs/check-integrity.c 252 */(void);
	const struct btrfsic_state *cocci_id/* fs/btrfs/check-integrity.c 2514 */;
	char cocci_id/* fs/btrfs/check-integrity.c 2499 */;
	struct btrfsic_state {
		u32 print_mask;
		int include_extent_data;
		int csum_size;
		struct list_head all_blocks_list;
		struct btrfsic_block_hashtable block_hashtable;
		struct btrfsic_block_link_hashtable block_link_hashtable;
		struct btrfs_fs_info *fs_info;
		u64 max_superblock_generation;
		struct btrfsic_block *latest_superblock;
		u32 metablock_size;
		u32 datablock_size;
	} cocci_id/* fs/btrfs/check-integrity.c 237 */;
	const struct btrfsic_block_link *cocci_id/* fs/btrfs/check-integrity.c 2321 */;
	struct btrfsic_stack_frame {
		u32 magic;
		u32 nr;
		int error;
		int i;
		int limit_nesting;
		int num_copies;
		int mirror_num;
		struct btrfsic_block *block;
		struct btrfsic_block_data_ctx *block_ctx;
		struct btrfsic_block *next_block;
		struct btrfsic_block_data_ctx next_block_ctx;
		struct btrfs_header *hdr;
		struct btrfsic_stack_frame *prev;
	} cocci_id/* fs/btrfs/check-integrity.c 220 */;
	struct btrfs_super_block *const cocci_id/* fs/btrfs/check-integrity.c 2186 */;
	struct btrfsic_block *cocci_id/* fs/btrfs/check-integrity.c 2153 */;
	struct buffer_head *cocci_id/* fs/btrfs/check-integrity.c 2151 */;
	struct btrfsic_dev_state *const cocci_id/* fs/btrfs/check-integrity.c 2122 */;
	struct btrfsic_block_data_ctx {
		u64 start;
		u64 dev_bytenr;
		u32 len;
		struct btrfsic_dev_state *dev;
		char **datav;
		struct page **pagev;
		void *mem_to_free;
	} cocci_id/* fs/btrfs/check-integrity.c 208 */;
	struct btrfsic_dev_state_hashtable {
		struct list_head table[BTRFSIC_DEV2STATE_HASHTABLE_SIZE];
	} cocci_id/* fs/btrfs/check-integrity.c 204 */;
	struct btrfsic_block_link_hashtable {
		struct list_head table[BTRFSIC_BLOCK_LINK_HASHTABLE_SIZE];
	} cocci_id/* fs/btrfs/check-integrity.c 200 */;
	struct btrfsic_block_hashtable {
		struct list_head table[BTRFSIC_BLOCK_HASHTABLE_SIZE];
	} cocci_id/* fs/btrfs/check-integrity.c 196 */;
	struct btrfsic_dev_state {
		u32 magic_num;
		struct block_device *bdev;
		struct btrfsic_state *state;
		struct list_head collision_resolving_node;
		struct btrfsic_block dummy_block_for_bio_bh_flush;
		u64 last_flush_gen;
		char name[BDEVNAME_SIZE];
	} cocci_id/* fs/btrfs/check-integrity.c 186 */;
	struct btrfsic_block_link {
		u32 magic_num;
		u32 ref_cnt;
		struct list_head node_ref_to;
		struct list_head node_ref_from;
		struct list_head collision_resolving_node;
		struct btrfsic_block *block_ref_to;
		struct btrfsic_block *block_ref_from;
		u64 parent_generation;
	} cocci_id/* fs/btrfs/check-integrity.c 175 */;
	u8 *cocci_id/* fs/btrfs/check-integrity.c 1731 */;
	u8 cocci_id/* fs/btrfs/check-integrity.c 1716 */[BTRFS_CSUM_SIZE];
	const struct btrfsic_block *cocci_id/* fs/btrfs/check-integrity.c 1662 */;
	struct page **cocci_id/* fs/btrfs/check-integrity.c 1617 */;
	size_t cocci_id/* fs/btrfs/check-integrity.c 1597 */;
	struct btrfs_device *cocci_id/* fs/btrfs/check-integrity.c 1523 */;
	struct btrfs_bio *cocci_id/* fs/btrfs/check-integrity.c 1522 */;
	struct btrfs_leaf cocci_id/* fs/btrfs/check-integrity.c 1385 */;
	struct btrfs_file_extent_item cocci_id/* fs/btrfs/check-integrity.c 1377 */;
	u32 cocci_id/* fs/btrfs/check-integrity.c 1374 */;
	struct btrfsic_block {
		u32 magic_num;
		unsigned int is_metadata:1;
		unsigned int is_superblock:1;
		unsigned int is_iodone:1;
		unsigned int iodone_w_error:1;
		unsigned int never_written:1;
		unsigned int mirror_num;
		struct btrfsic_dev_state *dev_state;
		u64 dev_bytenr;
		u64 logical_bytenr;
		u64 generation;
		struct btrfs_disk_key disk_key;
		struct list_head collision_resolving_node;
		struct list_head all_blocks_node;
		struct list_head ref_to_list;
		struct list_head ref_from_list;
		struct btrfsic_block *next_in_same_bio;
		void *orig_bio_bh_private;
		union {
			bio_end_io_t *bio;
			bh_end_io_t *bh;
		} orig_bio_bh_end_io;
		int submit_bio_bh_rw;
		u64 flush_gen;
	} cocci_id/* fs/btrfs/check-integrity.c 131 */;
	struct btrfsic_state cocci_id/* fs/btrfs/check-integrity.c 129 */;
	struct btrfsic_dev_state cocci_id/* fs/btrfs/check-integrity.c 128 */;
	struct btrfs_disk_key *cocci_id/* fs/btrfs/check-integrity.c 1237 */;
	struct btrfsic_block **cocci_id/* fs/btrfs/check-integrity.c 1234 */;
	unsigned long cocci_id/* fs/btrfs/check-integrity.c 1209 */;
	char *cocci_id/* fs/btrfs/check-integrity.c 1206 */;
	void *cocci_id/* fs/btrfs/check-integrity.c 1202 */;
	struct btrfsic_stack_frame *const cocci_id/* fs/btrfs/check-integrity.c 1178 */;
	struct btrfs_key_ptr cocci_id/* fs/btrfs/check-integrity.c 1115 */;
	struct btrfs_node *const cocci_id/* fs/btrfs/check-integrity.c 1093 */;
	struct btrfs_node *cocci_id/* fs/btrfs/check-integrity.c 1093 */;
	struct btrfs_root_item cocci_id/* fs/btrfs/check-integrity.c 1018 */;
}
