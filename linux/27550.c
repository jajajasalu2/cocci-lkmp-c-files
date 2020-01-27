cocci_test_suite() {
	const struct btrfs_disk_key *cocci_id/* fs/btrfs/ctree.c 999 */;
	__const size_t cocci_id/* fs/btrfs/ctree.c 70 */;
	u16 cocci_id/* fs/btrfs/ctree.c 63 */;
	const char *cocci_id/* fs/btrfs/ctree.c 63 */;
	struct tree_mod_elem **cocci_id/* fs/btrfs/ctree.c 592 */;
	void *cocci_id/* fs/btrfs/ctree.c 4838 */;
	u32 *cocci_id/* fs/btrfs/ctree.c 4806 */;
	gfp_t cocci_id/* fs/btrfs/ctree.c 470 */;
	enum mod_log_op cocci_id/* fs/btrfs/ctree.c 470 */;
	unsigned int cocci_id/* fs/btrfs/ctree.c 4650 */;
	struct btrfs_file_extent_item cocci_id/* fs/btrfs/ctree.c 4607 */;
	struct btrfs_file_extent_item *cocci_id/* fs/btrfs/ctree.c 4604 */;
	const struct btrfs_fs_info *cocci_id/* fs/btrfs/ctree.c 456 */;
	const struct btrfs_super_block *cocci_id/* fs/btrfs/ctree.c 44 */;
	struct tree_mod_elem cocci_id/* fs/btrfs/ctree.c 413 */;
	struct rb_node *cocci_id/* fs/btrfs/ctree.c 403 */;
	struct rb_node **cocci_id/* fs/btrfs/ctree.c 402 */;
	struct rb_root *cocci_id/* fs/btrfs/ctree.c 401 */;
	struct tree_mod_elem *cocci_id/* fs/btrfs/ctree.c 399 */;
	struct btrfs_item cocci_id/* fs/btrfs/ctree.c 3884 */;
	struct btrfs_map_token cocci_id/* fs/btrfs/ctree.c 3842 */;
	struct btrfs_item *cocci_id/* fs/btrfs/ctree.c 3836 */;
	u32 cocci_id/* fs/btrfs/ctree.c 3827 */;
	struct btrfs_path *cocci_id/* fs/btrfs/ctree.c 3825 */;
	struct seq_list *cocci_id/* fs/btrfs/ctree.c 326 */;
	const struct btrfs_csums {
		u16 size;
		const char *name;
		const char *driver;
	} cocci_id/* fs/btrfs/ctree.c 32 */[];
	struct btrfs_disk_key *cocci_id/* fs/btrfs/ctree.c 3132 */;
	void cocci_id/* fs/btrfs/ctree.c 29 */(struct btrfs_root *root,
					       struct btrfs_path *path,
					       int level, int slot);
	struct tree_mod_elem {
		struct rb_node node;
		u64 logical;
		u64 seq;
		enum mod_log_op op;
		int slot;
		u64 generation;
		struct btrfs_disk_key key;
		u64 blockptr;
		struct {
			int dst_slot;
			int nr_items;
		} move;
		struct tree_mod_root old_root;
	} cocci_id/* fs/btrfs/ctree.c 283 */;
	struct tree_mod_root {
		u64 logical;
		u8 level;
	} cocci_id/* fs/btrfs/ctree.c 278 */;
	bool cocci_id/* fs/btrfs/ctree.c 2763 */;
	enum mod_log_op{MOD_LOG_KEY_REPLACE, MOD_LOG_KEY_ADD, MOD_LOG_KEY_REMOVE, MOD_LOG_KEY_REMOVE_WHILE_FREEING, MOD_LOG_KEY_REMOVE_WHILE_MOVING, MOD_LOG_MOVE_KEYS, MOD_LOG_ROOT_REPLACE,} cocci_id/* fs/btrfs/ctree.c 268 */;
	int cocci_id/* fs/btrfs/ctree.c 26 */(struct btrfs_trans_handle *trans,
					      struct extent_buffer *dst_buf,
					      struct extent_buffer *src_buf);
	struct btrfs_key cocci_id/* fs/btrfs/ctree.c 2564 */;
	struct btrfs_key *cocci_id/* fs/btrfs/ctree.c 2561 */;
	u8 cocci_id/* fs/btrfs/ctree.c 2560 */;
	int cocci_id/* fs/btrfs/ctree.c 23 */(struct btrfs_trans_handle *trans,
					      struct extent_buffer *dst,
					      struct extent_buffer *src,
					      int empty);
	int cocci_id/* fs/btrfs/ctree.c 20 */(struct btrfs_trans_handle *trans,
					      struct btrfs_root *root,
					      const struct btrfs_key *ins_key,
					      struct btrfs_path *path,
					      int data_size, int extend);
	int cocci_id/* fs/btrfs/ctree.c 18 */(struct btrfs_trans_handle *trans,
					      struct btrfs_root *root,
					      struct btrfs_path *path,
					      int level);
	struct btrfs_node cocci_id/* fs/btrfs/ctree.c 1788 */;
	struct btrfs_leaf cocci_id/* fs/btrfs/ctree.c 1782 */;
	int *cocci_id/* fs/btrfs/ctree.c 1778 */;
	const struct btrfs_key *cocci_id/* fs/btrfs/ctree.c 1777 */;
	char *cocci_id/* fs/btrfs/ctree.c 1718 */;
	u64 *cocci_id/* fs/btrfs/ctree.c 1586 */;
	int __pure cocci_id/* fs/btrfs/ctree.c 1562 */;
	struct tree_mod_root *cocci_id/* fs/btrfs/ctree.c 1366 */;
	struct btrfs_key_ptr cocci_id/* fs/btrfs/ctree.c 1228 */;
	unsigned long cocci_id/* fs/btrfs/ctree.c 1226 */;
	void cocci_id/* fs/btrfs/ctree.c 1219 */;
	struct btrfs_disk_key cocci_id/* fs/btrfs/ctree.c 1057 */;
	struct btrfs_fs_info *cocci_id/* fs/btrfs/ctree.c 1056 */;
	u64 cocci_id/* fs/btrfs/ctree.c 1054 */;
	struct extent_buffer **cocci_id/* fs/btrfs/ctree.c 1053 */;
	struct extent_buffer *cocci_id/* fs/btrfs/ctree.c 1051 */;
	struct btrfs_root *cocci_id/* fs/btrfs/ctree.c 1050 */;
	struct btrfs_trans_handle *cocci_id/* fs/btrfs/ctree.c 1049 */;
	int cocci_id/* fs/btrfs/ctree.c 1049 */;
}
