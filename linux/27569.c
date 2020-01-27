cocci_test_suite() {
	int (*cocci_id/* fs/btrfs/send.c 997 */)(int num,
						 struct btrfs_key *di_key,
						 const char *name,
						 int name_len,
						 const char *data,
						 int data_len, u8 type,
						 void *ctx);
	iterate_inode_ref_t cocci_id/* fs/btrfs/send.c 891 */;
	int (*cocci_id/* fs/btrfs/send.c 877 */)(int num, u64 dir, int index,
						 struct fs_path *p, void *ctx);
	struct btrfs_inode_item cocci_id/* fs/btrfs/send.c 843 */;
	struct btrfs_key cocci_id/* fs/btrfs/send.c 830 */;
	struct btrfs_inode_item *cocci_id/* fs/btrfs/send.c 829 */;
	struct btrfs_root *cocci_id/* fs/btrfs/send.c 824 */;
	struct btrfs_path *cocci_id/* fs/btrfs/send.c 824 */;
	struct send_ctx {
		struct file *send_filp;
		loff_t send_off;
		char *send_buf;
		u32 send_size;
		u32 send_max_size;
		u64 total_send_size;
		u64 cmd_send_size[BTRFS_SEND_C_MAX + 1];
		u64 flags;
		struct btrfs_root *send_root;
		struct btrfs_root *parent_root;
		struct clone_root *clone_roots;
		int clone_roots_cnt;
		struct btrfs_path *left_path;
		struct btrfs_path *right_path;
		struct btrfs_key *cmp_key;
		u64 cur_ino;
		u64 cur_inode_gen;
		int cur_inode_new;
		int cur_inode_new_gen;
		int cur_inode_deleted;
		u64 cur_inode_size;
		u64 cur_inode_mode;
		u64 cur_inode_rdev;
		u64 cur_inode_last_extent;
		u64 cur_inode_next_write_offset;
		bool ignore_cur_inode;
		u64 send_progress;
		struct list_head new_refs;
		struct list_head deleted_refs;
		struct radix_tree_root name_cache;
		struct list_head name_cache_list;
		int name_cache_size;
		struct file_ra_state ra;
		char *read_buf;
		struct rb_root pending_dir_moves;
		struct rb_root waiting_dir_moves;
		struct rb_root orphan_dirs;
	} cocci_id/* fs/btrfs/send.c 77 */;
	unsigned char *cocci_id/* fs/btrfs/send.c 712 */;
	struct send_ctx cocci_id/* fs/btrfs/send.c 7118 */;
	unsigned cocci_id/* fs/btrfs/send.c 7066 */;
	u32 cocci_id/* fs/btrfs/send.c 7063 */;
	struct file *cocci_id/* fs/btrfs/send.c 7055 */;
	struct btrfs_ioctl_send_args *cocci_id/* fs/btrfs/send.c 7055 */;
	long cocci_id/* fs/btrfs/send.c 7055 */;
	const struct btrfs_root *cocci_id/* fs/btrfs/send.c 7048 */;
	struct btrfs_trans_handle *cocci_id/* fs/btrfs/send.c 6972 */;
	struct btrfs_cmd_header *cocci_id/* fs/btrfs/send.c 688 */;
	enum btrfs_compare_tree_result cocci_id/* fs/btrfs/send.c 6861 */;
	struct btrfs_stream_header cocci_id/* fs/btrfs/send.c 674 */;
	struct btrfs_fs_info *cocci_id/* fs/btrfs/send.c 6673 */;
	btrfs_changed_cb_t cocci_id/* fs/btrfs/send.c 6671 */;
	struct clone_root {
		struct btrfs_root *root;
		u64 ino;
		u64 offset;
		u64 found_refs;
	} cocci_id/* fs/btrfs/send.c 66 */;
	unsigned long cocci_id/* fs/btrfs/send.c 6420 */;
	struct btrfs_inode_extref *cocci_id/* fs/btrfs/send.c 6417 */;
	struct btrfs_timespec cocci_id/* fs/btrfs/send.c 622 */;
	struct btrfs_timespec *cocci_id/* fs/btrfs/send.c 620 */;
	struct fs_path cocci_id/* fs/btrfs/send.c 62 */;
	const u8 *cocci_id/* fs/btrfs/send.c 613 */;
	struct extent_buffer *cocci_id/* fs/btrfs/send.c 6078 */;
	struct parent_paths_ctx cocci_id/* fs/btrfs/send.c 6060 */;
	struct parent_paths_ctx *cocci_id/* fs/btrfs/send.c 6045 */;
	struct parent_paths_ctx {
		struct list_head *refs;
		struct send_ctx *sctx;
	} cocci_id/* fs/btrfs/send.c 6037 */;
	struct btrfs_tlv_header *cocci_id/* fs/btrfs/send.c 578 */;
	u16 cocci_id/* fs/btrfs/send.c 576 */;
	loff_t *cocci_id/* fs/btrfs/send.c 554 */;
	struct btrfs_file_extent_item cocci_id/* fs/btrfs/send.c 5217 */;
	struct btrfs_file_extent_item *cocci_id/* fs/btrfs/send.c 5192 */;
	struct file_ra_state cocci_id/* fs/btrfs/send.c 4829 */;
	pgoff_t cocci_id/* fs/btrfs/send.c 4804 */;
	struct page *cocci_id/* fs/btrfs/send.c 4801 */;
	struct inode *cocci_id/* fs/btrfs/send.c 4800 */;
	ssize_t cocci_id/* fs/btrfs/send.c 4796 */;
	char *cocci_id/* fs/btrfs/send.c 4683 */;
	struct find_xattr_ctx cocci_id/* fs/btrfs/send.c 4652 */;
	char **cocci_id/* fs/btrfs/send.c 4649 */;
	int *cocci_id/* fs/btrfs/send.c 4649 */;
	struct find_xattr_ctx *cocci_id/* fs/btrfs/send.c 4631 */;
	u8 cocci_id/* fs/btrfs/send.c 4629 */;
	const char *cocci_id/* fs/btrfs/send.c 4627 */;
	struct btrfs_key *cocci_id/* fs/btrfs/send.c 4626 */;
	struct find_xattr_ctx {
		const char *name;
		int name_len;
		int found_idx;
		char *found_data;
		int found_data_len;
	} cocci_id/* fs/btrfs/send.c 4618 */;
	struct posix_acl_xattr_header cocci_id/* fs/btrfs/send.c 4545 */;
	struct find_ref_ctx cocci_id/* fs/btrfs/send.c 4334 */;
	struct find_ref_ctx *cocci_id/* fs/btrfs/send.c 4306 */;
	struct find_ref_ctx {
		u64 dir;
		u64 dir_gen;
		struct btrfs_root *root;
		struct fs_path *name;
		int found_idx;
	} cocci_id/* fs/btrfs/send.c 4294 */;
	struct fs_path {
		union {
			struct {
				char *start;
				char *end;
				char *buf;
				unsigned short buf_len:15;
				unsigned short reversed:1;
				char inline_buf[];
			};
			char pad[256];
		};
	} cocci_id/* fs/btrfs/send.c 42 */;
	const u64 cocci_id/* fs/btrfs/send.c 3553 */;
	struct list_head cocci_id/* fs/btrfs/send.c 3392 */;
	int cocci_id/* fs/btrfs/send.c 325 */(struct send_ctx *sctx,
					      u64 dir_ino);
	struct waiting_dir_move *cocci_id/* fs/btrfs/send.c 322 */(struct send_ctx *sctx,
								   u64 ino);
	int cocci_id/* fs/btrfs/send.c 320 */(struct send_ctx *sctx, u64 ino);
	struct pending_dir_move cocci_id/* fs/btrfs/send.c 3120 */;
	struct pending_dir_move *cocci_id/* fs/btrfs/send.c 3103 */;
	const bool cocci_id/* fs/btrfs/send.c 3099 */;
	struct waiting_dir_move cocci_id/* fs/btrfs/send.c 3050 */;
	struct waiting_dir_move *cocci_id/* fs/btrfs/send.c 3039 */;
	bool cocci_id/* fs/btrfs/send.c 3035 */;
	struct btrfs_dir_item cocci_id/* fs/btrfs/send.c 2988 */;
	struct btrfs_dir_item *cocci_id/* fs/btrfs/send.c 2945 */;
	struct orphan_dir_info cocci_id/* fs/btrfs/send.c 2875 */;
	struct rb_node *cocci_id/* fs/btrfs/send.c 2870 */;
	struct rb_node **cocci_id/* fs/btrfs/send.c 2869 */;
	struct orphan_dir_info *cocci_id/* fs/btrfs/send.c 2866 */;
	struct recorded_ref cocci_id/* fs/btrfs/send.c 2827 */;
	struct recorded_ref *cocci_id/* fs/btrfs/send.c 2824 */;
	struct list_head *cocci_id/* fs/btrfs/send.c 2822 */;
	void cocci_id/* fs/btrfs/send.c 2822 */;
	int (*cocci_id/* fs/btrfs/send.c 280 */)(struct btrfs_path *left_path,
						 struct btrfs_path *right_path,
						 struct btrfs_key *key,
						 enum btrfs_compare_tree_result result,
						 void *ctx);
	struct recorded_ref {
		struct list_head list;
		char *name;
		struct fs_path *full_path;
		u64 dir;
		u64 dir_gen;
		int name_len;
	} cocci_id/* fs/btrfs/send.c 2769 */;
	enum btrfs_compare_tree_result{BTRFS_COMPARE_TREE_NEW, BTRFS_COMPARE_TREE_DELETED, BTRFS_COMPARE_TREE_CHANGED, BTRFS_COMPARE_TREE_SAME,} cocci_id/* fs/btrfs/send.c 274 */;
	struct name_cache_entry {
		struct list_head list;
		struct list_head radix_list;
		u64 ino;
		u64 gen;
		u64 parent_ino;
		u64 parent_gen;
		int ret;
		int need_later_update;
		int name_len;
		char name[];
	} cocci_id/* fs/btrfs/send.c 250 */;
	struct orphan_dir_info {
		struct rb_node node;
		u64 ino;
		u64 gen;
		u64 last_dir_index_offset;
	} cocci_id/* fs/btrfs/send.c 243 */;
	struct btrfs_root_ref cocci_id/* fs/btrfs/send.c 2393 */;
	struct btrfs_root_ref *cocci_id/* fs/btrfs/send.c 2358 */;
	struct waiting_dir_move {
		struct rb_node node;
		u64 ino;
		u64 rmdir_ino;
		bool orphanized;
	} cocci_id/* fs/btrfs/send.c 231 */;
	struct pending_dir_move {
		struct rb_node node;
		struct list_head list;
		u64 parent_ino;
		u64 ino;
		u64 gen;
		struct list_head update_refs;
	} cocci_id/* fs/btrfs/send.c 222 */;
	struct name_cache_entry *cocci_id/* fs/btrfs/send.c 2156 */;
	u64 *cocci_id/* fs/btrfs/send.c 2150 */;
	struct send_ctx *cocci_id/* fs/btrfs/send.c 2148 */;
	struct name_cache_entry cocci_id/* fs/btrfs/send.c 2122 */;
	struct btrfs_inode_extref cocci_id/* fs/btrfs/send.c 1788 */;
	struct btrfs_inode_ref cocci_id/* fs/btrfs/send.c 1779 */;
	struct btrfs_inode_ref *cocci_id/* fs/btrfs/send.c 1777 */;
	u8 *cocci_id/* fs/btrfs/send.c 1711 */;
	enum inode_state{inode_state_no_change, inode_state_will_create, inode_state_did_create, inode_state_will_delete, inode_state_did_delete,} cocci_id/* fs/btrfs/send.c 1609 */;
	char cocci_id/* fs/btrfs/send.c 1552 */[64];
	struct btrfs_extent_item cocci_id/* fs/btrfs/send.c 1378 */;
	struct btrfs_extent_item *cocci_id/* fs/btrfs/send.c 1321 */;
	struct clone_root **cocci_id/* fs/btrfs/send.c 1305 */;
	struct clone_root cocci_id/* fs/btrfs/send.c 1242 */;
	struct backref_ctx *cocci_id/* fs/btrfs/send.c 1236 */;
	struct clone_root *cocci_id/* fs/btrfs/send.c 1209 */;
	uintptr_t cocci_id/* fs/btrfs/send.c 1208 */;
	u64 cocci_id/* fs/btrfs/send.c 1208 */;
	const void *cocci_id/* fs/btrfs/send.c 1206 */;
	int cocci_id/* fs/btrfs/send.c 1206 */;
	struct backref_ctx {
		struct send_ctx *sctx;
		u64 found;
		u64 cur_objectid;
		u64 cur_offset;
		u64 extent_len;
		u64 data_offset;
		int found_itself;
	} cocci_id/* fs/btrfs/send.c 1183 */;
	struct fs_path *cocci_id/* fs/btrfs/send.c 1123 */;
	void *cocci_id/* fs/btrfs/send.c 1123 */;
	struct btrfs_item *cocci_id/* fs/btrfs/send.c 1014 */;
	iterate_dir_item_t cocci_id/* fs/btrfs/send.c 1010 */;
}
