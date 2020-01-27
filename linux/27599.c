cocci_test_suite() {
	struct btrfs_ref *cocci_id/* fs/btrfs/extent-tree.c 99 */;
	struct btrfs_shared_data_ref cocci_id/* fs/btrfs/extent-tree.c 711 */;
	struct btrfs_extent_data_ref cocci_id/* fs/btrfs/extent-tree.c 707 */;
	struct fstrim_range *cocci_id/* fs/btrfs/extent-tree.c 5659 */;
	struct btrfs_device *cocci_id/* fs/btrfs/extent-tree.c 5573 */;
	int cocci_id/* fs/btrfs/extent-tree.c 54 */(struct btrfs_path *path,
						    int level,
						    struct btrfs_key *key);
	struct walk_control *cocci_id/* fs/btrfs/extent-tree.c 5219 */;
	struct btrfs_root_item *cocci_id/* fs/btrfs/extent-tree.c 5218 */;
	int cocci_id/* fs/btrfs/extent-tree.c 51 */(struct btrfs_trans_handle *trans,
						    struct btrfs_delayed_ref_node *node,
						    struct btrfs_delayed_extent_op *extent_op);
	int *cocci_id/* fs/btrfs/extent-tree.c 4812 */;
	int cocci_id/* fs/btrfs/extent-tree.c 47 */(struct btrfs_trans_handle *trans,
						    u64 parent,
						    u64 root_objectid,
						    u64 flags, u64 owner,
						    u64 offset,
						    struct btrfs_key *ins,
						    int ref_mod);
	struct walk_control {
		u64 refs[BTRFS_MAX_LEVEL];
		u64 flags[BTRFS_MAX_LEVEL];
		struct btrfs_key update_progress;
		struct btrfs_key drop_progress;
		int drop_level;
		int stage;
		int level;
		int shared_level;
		int update_ref;
		int keep_locks;
		int reada_slot;
		int reada_count;
		int restarted;
	} cocci_id/* fs/btrfs/extent-tree.c 4593 */;
	struct btrfs_block_rsv *cocci_id/* fs/btrfs/extent-tree.c 4512 */;
	const struct btrfs_disk_key *cocci_id/* fs/btrfs/extent-tree.c 4506 */;
	struct btrfs_header cocci_id/* fs/btrfs/extent-tree.c 4469 */;
	__le64 cocci_id/* fs/btrfs/extent-tree.c 445 */;
	void cocci_id/* fs/btrfs/extent-tree.c 44 */(struct btrfs_delayed_extent_op *extent_op,
						     struct extent_buffer *leaf,
						     struct btrfs_extent_item *ei);
	struct btrfs_delayed_tree_ref *cocci_id/* fs/btrfs/extent-tree.c 4294 */;
	struct btrfs_extent_data_ref *cocci_id/* fs/btrfs/extent-tree.c 4257 */;
	struct btrfs_shared_data_ref *cocci_id/* fs/btrfs/extent-tree.c 4252 */;
	struct btrfs_key *cocci_id/* fs/btrfs/extent-tree.c 4211 */;
	struct btrfs_block_group *cocci_id/* fs/btrfs/extent-tree.c 4172 */;
	enum btrfs_inline_ref_type cocci_id/* fs/btrfs/extent-tree.c 390 */;
	int cocci_id/* fs/btrfs/extent-tree.c 39 */(struct btrfs_trans_handle *trans,
						    struct btrfs_delayed_ref_node *node,
						    u64 parent,
						    u64 root_objectid,
						    u64 owner_objectid,
						    u64 owner_offset,
						    int refs_to_drop,
						    struct btrfs_delayed_extent_op *extra_op);
	const struct extent_buffer *cocci_id/* fs/btrfs/extent-tree.c 388 */;
	struct find_free_extent_ctl cocci_id/* fs/btrfs/extent-tree.c 3806 */;
	struct btrfs_free_space_ctl *cocci_id/* fs/btrfs/extent-tree.c 3619 */;
	struct btrfs_block_group **cocci_id/* fs/btrfs/extent-tree.c 3501 */;
	struct find_free_extent_ctl *cocci_id/* fs/btrfs/extent-tree.c 3500 */;
	struct find_free_extent_ctl {
		u64 ram_bytes;
		u64 num_bytes;
		u64 empty_size;
		u64 flags;
		int delalloc;
		u64 search_start;
		u64 empty_cluster;
		bool have_caching_bg;
		bool orig_have_caching_bg;
		int index;
		int loop;
		bool retry_clustered;
		bool retry_unclustered;
		int cached;
		u64 max_extent_size;
		u64 total_free_space;
		u64 found_offset;
	} cocci_id/* fs/btrfs/extent-tree.c 3439 */;
	struct btrfs_free_cluster *cocci_id/* fs/btrfs/extent-tree.c 3390 */;
	enum btrfs_loop_type{LOOP_CACHING_NOWAIT, LOOP_CACHING_WAIT, LOOP_ALLOC_CHUNK, LOOP_NO_EMPTY_SIZE,} cocci_id/* fs/btrfs/extent-tree.c 3365 */;
	struct btrfs_tree_block_info *cocci_id/* fs/btrfs/extent-tree.c 3116 */;
	struct btrfs_extent_item cocci_id/* fs/btrfs/extent-tree.c 3113 */;
	bool cocci_id/* fs/btrfs/extent-tree.c 2991 */;
	u32 cocci_id/* fs/btrfs/extent-tree.c 2986 */;
	struct btrfs_extent_inline_ref *cocci_id/* fs/btrfs/extent-tree.c 2980 */;
	struct btrfs_extent_item *cocci_id/* fs/btrfs/extent-tree.c 2979 */;
	struct extent_buffer *cocci_id/* fs/btrfs/extent-tree.c 2978 */;
	struct btrfs_root *cocci_id/* fs/btrfs/extent-tree.c 2977 */;
	struct btrfs_path *cocci_id/* fs/btrfs/extent-tree.c 2976 */;
	struct btrfs_key cocci_id/* fs/btrfs/extent-tree.c 2975 */;
	struct btrfs_fs_info *cocci_id/* fs/btrfs/extent-tree.c 2974 */;
	struct btrfs_delayed_extent_op *cocci_id/* fs/btrfs/extent-tree.c 2972 */;
	u64 cocci_id/* fs/btrfs/extent-tree.c 2969 */;
	struct btrfs_delayed_ref_node *cocci_id/* fs/btrfs/extent-tree.c 2969 */;
	struct btrfs_trans_handle *cocci_id/* fs/btrfs/extent-tree.c 2968 */;
	int cocci_id/* fs/btrfs/extent-tree.c 2968 */;
	const char *cocci_id/* fs/btrfs/extent-tree.c 2958 */;
	struct extent_state *cocci_id/* fs/btrfs/extent-tree.c 2916 */;
	struct extent_io_tree *cocci_id/* fs/btrfs/extent-tree.c 2905 */;
	struct list_head *cocci_id/* fs/btrfs/extent-tree.c 2904 */;
	const bool cocci_id/* fs/btrfs/extent-tree.c 2806 */;
	struct btrfs_caching_control *cocci_id/* fs/btrfs/extent-tree.c 2664 */;
	struct btrfs_file_extent_item cocci_id/* fs/btrfs/extent-tree.c 2483 */;
	struct btrfs_ref cocci_id/* fs/btrfs/extent-tree.c 2451 */;
	struct btrfs_file_extent_item *cocci_id/* fs/btrfs/extent-tree.c 2450 */;
	struct btrfs_delayed_ref_node cocci_id/* fs/btrfs/extent-tree.c 2316 */;
	struct btrfs_transaction *cocci_id/* fs/btrfs/extent-tree.c 2270 */;
	struct btrfs_delayed_data_ref *cocci_id/* fs/btrfs/extent-tree.c 2268 */;
	struct btrfs_delayed_ref_head cocci_id/* fs/btrfs/extent-tree.c 2222 */;
	struct rb_node *cocci_id/* fs/btrfs/extent-tree.c 2186 */;
	struct btrfs_tree_block_info cocci_id/* fs/btrfs/extent-tree.c 2144 */;
	struct btrfs_extent_inline_ref cocci_id/* fs/btrfs/extent-tree.c 2142 */;
	struct rb_root *cocci_id/* fs/btrfs/extent-tree.c 2100 */;
	ktime_t cocci_id/* fs/btrfs/extent-tree.c 2008 */;
	struct btrfs_delayed_ref_head *cocci_id/* fs/btrfs/extent-tree.c 2007 */;
	struct btrfs_delayed_ref_root *cocci_id/* fs/btrfs/extent-tree.c 2006 */;
	unsigned long cocci_id/* fs/btrfs/extent-tree.c 2003 */;
	unsigned long *cocci_id/* fs/btrfs/extent-tree.c 1920 */;
	void cocci_id/* fs/btrfs/extent-tree.c 1553 */;
	struct request_queue *cocci_id/* fs/btrfs/extent-tree.c 1340 */;
	struct btrfs_bio_stripe *cocci_id/* fs/btrfs/extent-tree.c 1322 */;
	struct btrfs_bio *cocci_id/* fs/btrfs/extent-tree.c 1313 */;
	u64 *cocci_id/* fs/btrfs/extent-tree.c 1307 */;
	struct block_device *cocci_id/* fs/btrfs/extent-tree.c 1234 */;
	struct btrfs_extent_inline_ref **cocci_id/* fs/btrfs/extent-tree.c 1073 */;
	struct btrfs_space_info *cocci_id/* fs/btrfs/extent-tree.c 101 */;
}
