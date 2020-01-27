cocci_test_suite() {
	struct btrfs_path *cocci_id/* fs/btrfs/ref-verify.c 974 */;
	struct rb_node *cocci_id/* fs/btrfs/ref-verify.c 892 */;
	unsigned long long cocci_id/* fs/btrfs/ref-verify.c 797 */;
	struct rb_node **cocci_id/* fs/btrfs/ref-verify.c 78 */;
	struct rb_root *cocci_id/* fs/btrfs/ref-verify.c 75 */;
	struct ref_action cocci_id/* fs/btrfs/ref-verify.c 701 */;
	bool cocci_id/* fs/btrfs/ref-verify.c 678 */;
	struct btrfs_ref *cocci_id/* fs/btrfs/ref-verify.c 670 */;
	struct block_entry {
		u64 bytenr;
		u64 len;
		u64 num_refs;
		int metadata;
		int from_disk;
		struct rb_root roots;
		struct rb_root refs;
		struct rb_node node;
		struct list_head actions;
	} cocci_id/* fs/btrfs/ref-verify.c 63 */;
	struct btrfs_shared_data_ref cocci_id/* fs/btrfs/ref-verify.c 534 */;
	struct btrfs_extent_data_ref cocci_id/* fs/btrfs/ref-verify.c 528 */;
	struct btrfs_key cocci_id/* fs/btrfs/ref-verify.c 504 */;
	u64 *cocci_id/* fs/btrfs/ref-verify.c 496 */;
	struct btrfs_root *cocci_id/* fs/btrfs/ref-verify.c 495 */;
	struct ref_action {
		int action;
		u64 root;
		struct ref_entry ref;
		struct list_head list;
		unsigned long trace[MAX_TRACE];
		unsigned int trace_len;
	} cocci_id/* fs/btrfs/ref-verify.c 48 */;
	struct btrfs_tree_block_info *cocci_id/* fs/btrfs/ref-verify.c 446 */;
	struct btrfs_extent_item cocci_id/* fs/btrfs/ref-verify.c 441 */;
	unsigned long cocci_id/* fs/btrfs/ref-verify.c 437 */;
	struct btrfs_shared_data_ref *cocci_id/* fs/btrfs/ref-verify.c 434 */;
	struct btrfs_extent_inline_ref *cocci_id/* fs/btrfs/ref-verify.c 432 */;
	struct btrfs_extent_item *cocci_id/* fs/btrfs/ref-verify.c 431 */;
	int *cocci_id/* fs/btrfs/ref-verify.c 429 */;
	struct btrfs_key *cocci_id/* fs/btrfs/ref-verify.c 428 */;
	struct ref_entry cocci_id/* fs/btrfs/ref-verify.c 394 */;
	u32 cocci_id/* fs/btrfs/ref-verify.c 392 */;
	struct ref_entry *cocci_id/* fs/btrfs/ref-verify.c 387 */;
	struct btrfs_extent_data_ref *cocci_id/* fs/btrfs/ref-verify.c 383 */;
	struct extent_buffer *cocci_id/* fs/btrfs/ref-verify.c 382 */;
	int cocci_id/* fs/btrfs/ref-verify.c 381 */;
	struct ref_entry {
		u64 root_objectid;
		u64 parent;
		u64 owner;
		u64 offset;
		u64 num_refs;
		struct rb_node node;
	} cocci_id/* fs/btrfs/ref-verify.c 30 */;
	struct block_entry cocci_id/* fs/btrfs/ref-verify.c 268 */;
	struct root_entry cocci_id/* fs/btrfs/ref-verify.c 267 */;
	struct root_entry *cocci_id/* fs/btrfs/ref-verify.c 265 */;
	u64 cocci_id/* fs/btrfs/ref-verify.c 261 */;
	struct block_entry *cocci_id/* fs/btrfs/ref-verify.c 260 */;
	struct ref_action *cocci_id/* fs/btrfs/ref-verify.c 212 */;
	struct btrfs_fs_info *cocci_id/* fs/btrfs/ref-verify.c 211 */;
	void cocci_id/* fs/btrfs/ref-verify.c 211 */;
	struct root_entry {
		u64 root_objectid;
		u64 num_refs;
		struct rb_node node;
	} cocci_id/* fs/btrfs/ref-verify.c 19 */;
}
