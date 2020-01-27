cocci_test_suite() {
	struct btrfs_inode_extref *cocci_id/* fs/btrfs/tree-log.c 993 */;
	struct btrfs_key cocci_id/* fs/btrfs/tree-log.c 992 */;
	struct btrfs_dir_item *cocci_id/* fs/btrfs/tree-log.c 991 */;
	struct extent_buffer *cocci_id/* fs/btrfs/tree-log.c 990 */;
	int *cocci_id/* fs/btrfs/tree-log.c 985 */;
	char *cocci_id/* fs/btrfs/tree-log.c 984 */;
	u64 cocci_id/* fs/btrfs/tree-log.c 983 */;
	struct btrfs_inode *cocci_id/* fs/btrfs/tree-log.c 981 */;
	struct btrfs_path *cocci_id/* fs/btrfs/tree-log.c 979 */;
	struct btrfs_root *cocci_id/* fs/btrfs/tree-log.c 978 */;
	struct btrfs_trans_handle *cocci_id/* fs/btrfs/tree-log.c 977 */;
	int cocci_id/* fs/btrfs/tree-log.c 977 */;
	int cocci_id/* fs/btrfs/tree-log.c 94 */(struct btrfs_trans_handle *trans,
						 struct btrfs_root *root,
						 struct btrfs_inode *inode,
						 int inode_only,
						 const loff_t start,
						 const loff_t end,
						 struct btrfs_log_ctx *ctx);
	enum{LOG_WALK_PIN_ONLY, LOG_WALK_REPLAY_INODES, LOG_WALK_REPLAY_DIR_INDEX, LOG_WALK_REPLAY_ALL,} cocci_id/* fs/btrfs/tree-log.c 87 */;
	struct btrfs_ref cocci_id/* fs/btrfs/tree-log.c 707 */;
	struct btrfs_log_ctx cocci_id/* fs/btrfs/tree-log.c 6543 */;
	struct walk_control cocci_id/* fs/btrfs/tree-log.c 6254 */;
	const loff_t cocci_id/* fs/btrfs/tree-log.c 6226 */;
	struct dentry *cocci_id/* fs/btrfs/tree-log.c 6225 */;
	struct super_block *cocci_id/* fs/btrfs/tree-log.c 6083 */;
	struct btrfs_log_ctx *cocci_id/* fs/btrfs/tree-log.c 5765 */;
	struct btrfs_dir_list cocci_id/* fs/btrfs/tree-log.c 5662 */;
	struct btrfs_dir_list *cocci_id/* fs/btrfs/tree-log.c 5641 */;
	struct btrfs_dir_list {
		u64 ino;
		struct list_head list;
	} cocci_id/* fs/btrfs/tree-log.c 5585 */;
	u8 cocci_id/* fs/btrfs/tree-log.c 5150 */;
	bool cocci_id/* fs/btrfs/tree-log.c 5119 */;
	struct btrfs_ino_list cocci_id/* fs/btrfs/tree-log.c 4977 */;
	struct btrfs_ino_list *cocci_id/* fs/btrfs/tree-log.c 4961 */;
	struct btrfs_ino_list {
		u64 ino;
		u64 parent;
		struct list_head list;
	} cocci_id/* fs/btrfs/tree-log.c 4949 */;
	u64 *cocci_id/* fs/btrfs/tree-log.c 4860 */;
	const struct btrfs_key *cocci_id/* fs/btrfs/tree-log.c 4858 */;
	const int cocci_id/* fs/btrfs/tree-log.c 4857 */;
	struct btrfs_file_extent_item cocci_id/* fs/btrfs/tree-log.c 4789 */;
	struct btrfs_file_extent_item *cocci_id/* fs/btrfs/tree-log.c 4778 */;
	struct extent_map cocci_id/* fs/btrfs/tree-log.c 4566 */;
	struct extent_map_tree *cocci_id/* fs/btrfs/tree-log.c 4507 */;
	struct list_head cocci_id/* fs/btrfs/tree-log.c 4506 */;
	struct extent_map *cocci_id/* fs/btrfs/tree-log.c 4505 */;
	const struct extent_map *cocci_id/* fs/btrfs/tree-log.c 4266 */;
	struct list_head *cocci_id/* fs/btrfs/tree-log.c 4249 */;
	void *cocci_id/* fs/btrfs/tree-log.c 4249 */;
	struct btrfs_ordered_sum cocci_id/* fs/btrfs/tree-log.c 4077 */;
	struct btrfs_ordered_sum *cocci_id/* fs/btrfs/tree-log.c 4076 */;
	u32 *cocci_id/* fs/btrfs/tree-log.c 3952 */;
	struct btrfs_map_token cocci_id/* fs/btrfs/tree-log.c 3844 */;
	struct btrfs_dir_item cocci_id/* fs/btrfs/tree-log.c 3680 */;
	struct btrfs_inode_item cocci_id/* fs/btrfs/tree-log.c 3451 */;
	struct btrfs_inode_item *cocci_id/* fs/btrfs/tree-log.c 3447 */;
	struct btrfs_fs_info *cocci_id/* fs/btrfs/tree-log.c 3317 */;
	struct blk_plug cocci_id/* fs/btrfs/tree-log.c 3031 */;
	struct btrfs_root_item cocci_id/* fs/btrfs/tree-log.c 3028 */;
	struct walk_control *cocci_id/* fs/btrfs/tree-log.c 298 */;
	struct btrfs_root_item *cocci_id/* fs/btrfs/tree-log.c 2919 */;
	enum{LOG_INODE_ALL, LOG_INODE_EXISTS, LOG_OTHER_INODE, LOG_OTHER_INODE_ALL,} cocci_id/* fs/btrfs/tree-log.c 28 */;
	struct walk_control {
		int free;
		int write;
		int wait;
		int pin;
		int stage;
		bool ignore_cur_inode;
		struct btrfs_root *replay_dest;
		struct btrfs_trans_handle *trans;
		int (*process_func)(struct btrfs_root *log,
				    struct extent_buffer *eb,
				    struct walk_control *wc, u64 gen,
				    int level);
	} cocci_id/* fs/btrfs/tree-log.c 247 */;
	u16 cocci_id/* fs/btrfs/tree-log.c 2342 */;
	void cocci_id/* fs/btrfs/tree-log.c 221 */;
	struct btrfs_dir_log_item cocci_id/* fs/btrfs/tree-log.c 2155 */;
	struct btrfs_dir_log_item *cocci_id/* fs/btrfs/tree-log.c 2128 */;
	unsigned int cocci_id/* fs/btrfs/tree-log.c 1586 */;
	struct btrfs_inode_ref cocci_id/* fs/btrfs/tree-log.c 1431 */;
	struct btrfs_inode_extref cocci_id/* fs/btrfs/tree-log.c 1426 */;
	struct btrfs_key *cocci_id/* fs/btrfs/tree-log.c 1404 */;
	const char *cocci_id/* fs/btrfs/tree-log.c 1333 */;
	const u64 cocci_id/* fs/btrfs/tree-log.c 1299 */;
	const u8 cocci_id/* fs/btrfs/tree-log.c 1294 */;
	char **cocci_id/* fs/btrfs/tree-log.c 1161 */;
	struct inode *cocci_id/* fs/btrfs/tree-log.c 1074 */;
	u32 cocci_id/* fs/btrfs/tree-log.c 1071 */;
	int cocci_id/* fs/btrfs/tree-log.c 103 */(struct btrfs_trans_handle *trans,
						  struct btrfs_root *root,
						  struct btrfs_root *log,
						  struct btrfs_path *path,
						  u64 dirid, int del_all);
	unsigned long cocci_id/* fs/btrfs/tree-log.c 1003 */;
	struct btrfs_inode_ref *cocci_id/* fs/btrfs/tree-log.c 1002 */;
	int cocci_id/* fs/btrfs/tree-log.c 100 */(struct btrfs_trans_handle *trans,
						  struct btrfs_root *root,
						  struct btrfs_path *path,
						  u64 objectid);
}
