cocci_test_suite() {
	const struct prop_handler *cocci_id/* fs/btrfs/props.c 79 */;
	const char *cocci_id/* fs/btrfs/props.c 76 */;
	size_t cocci_id/* fs/btrfs/props.c 76 */;
	struct prop_handler *cocci_id/* fs/btrfs/props.c 441 */;
	void __init cocci_id/* fs/btrfs/props.c 436 */;
	void cocci_id/* fs/btrfs/props.c 436 */;
	struct btrfs_key cocci_id/* fs/btrfs/props.c 411 */;
	struct super_block *cocci_id/* fs/btrfs/props.c 410 */;
	struct inode *cocci_id/* fs/btrfs/props.c 397 */;
	struct btrfs_trans_handle *cocci_id/* fs/btrfs/props.c 396 */;
	int cocci_id/* fs/btrfs/props.c 396 */;
	const struct hlist_head *cocci_id/* fs/btrfs/props.c 39 */;
	bool cocci_id/* fs/btrfs/props.c 331 */;
	struct btrfs_fs_info *cocci_id/* fs/btrfs/props.c 328 */;
	struct prop_handler cocci_id/* fs/btrfs/props.c 313 */[];
	struct hlist_head *cocci_id/* fs/btrfs/props.c 28 */;
	const u64 cocci_id/* fs/btrfs/props.c 26 */;
	u64 cocci_id/* fs/btrfs/props.c 247 */;
	struct btrfs_root *cocci_id/* fs/btrfs/props.c 246 */;
	struct btrfs_path *cocci_id/* fs/btrfs/props.c 244 */;
	void *cocci_id/* fs/btrfs/props.c 225 */;
	struct prop_handler {
		struct hlist_node node;
		const char *xattr_name;
		int (*validate)(const char *value, size_t len);
		int (*apply)(struct inode *inode, const char *value,
			     size_t len);
		const char *(*extract)(struct inode *inode);
		int inheritable;
	} cocci_id/* fs/btrfs/props.c 17 */;
	unsigned long cocci_id/* fs/btrfs/props.c 166 */;
	struct btrfs_dir_item cocci_id/* fs/btrfs/props.c 159 */;
	u32 cocci_id/* fs/btrfs/props.c 133 */;
	struct extent_buffer *cocci_id/* fs/btrfs/props.c 132 */;
	struct btrfs_dir_item *cocci_id/* fs/btrfs/props.c 131 */;
	char *cocci_id/* fs/btrfs/props.c 124 */;
	void (*cocci_id/* fs/btrfs/props.c 117 */)(void *,
						   const struct prop_handler *,
						   const char *, size_t);
}
