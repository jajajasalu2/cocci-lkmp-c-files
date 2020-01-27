cocci_test_suite() {
	struct ovl_readdir_data cocci_id/* fs/overlayfs/readdir.c 985 */;
	loff_t cocci_id/* fs/overlayfs/readdir.c 981 */;
	struct dir_context *cocci_id/* fs/overlayfs/readdir.c 980 */;
	struct rb_root *cocci_id/* fs/overlayfs/readdir.c 92 */;
	const struct cred *cocci_id/* fs/overlayfs/readdir.c 917 */;
	struct rb_root cocci_id/* fs/overlayfs/readdir.c 916 */;
	const struct file_operations cocci_id/* fs/overlayfs/readdir.c 903 */;
	struct ovl_dir_file cocci_id/* fs/overlayfs/readdir.c 885 */;
	struct file *cocci_id/* fs/overlayfs/readdir.c 817 */;
	struct ovl_layer *cocci_id/* fs/overlayfs/readdir.c 688 */;
	struct rb_node ***cocci_id/* fs/overlayfs/readdir.c 67 */;
	bool cocci_id/* fs/overlayfs/readdir.c 66 */;
	struct ovl_readdir_translate cocci_id/* fs/overlayfs/readdir.c 649 */;
	struct ovl_readdir_translate *cocci_id/* fs/overlayfs/readdir.c 648 */;
	struct ovl_readdir_translate {
		struct dir_context *orig_ctx;
		struct ovl_dir_cache *cache;
		struct dir_context ctx;
		u64 parent_ino;
		int fsid;
		int xinobits;
	} cocci_id/* fs/overlayfs/readdir.c 635 */;
	struct ovl_cache_entry cocci_id/* fs/overlayfs/readdir.c 63 */;
	struct path *cocci_id/* fs/overlayfs/readdir.c 590 */;
	struct ovl_dir_file {
		bool is_real;
		bool is_upper;
		struct ovl_dir_cache *cache;
		struct list_head *cursor;
		struct file *realfile;
		struct file *upperfile;
	} cocci_id/* fs/overlayfs/readdir.c 52 */;
	struct path cocci_id/* fs/overlayfs/readdir.c 500 */;
	struct kstat cocci_id/* fs/overlayfs/readdir.c 499 */;
	enum ovl_path_type cocci_id/* fs/overlayfs/readdir.c 467 */;
	struct ovl_dir_cache cocci_id/* fs/overlayfs/readdir.c 418 */;
	struct ovl_dir_cache *cocci_id/* fs/overlayfs/readdir.c 405 */;
	struct dentry *cocci_id/* fs/overlayfs/readdir.c 405 */;
	struct ovl_readdir_data {
		struct dir_context ctx;
		struct dentry *dentry;
		bool is_lowest;
		struct rb_root *root;
		struct list_head *list;
		struct list_head middle;
		struct ovl_cache_entry *first_maybe_whiteout;
		int count;
		int err;
		bool is_upper;
		bool d_type_supported;
	} cocci_id/* fs/overlayfs/readdir.c 38 */;
	struct ovl_dir_cache {
		long refcount;
		u64 version;
		struct list_head entries;
		struct rb_root root;
	} cocci_id/* fs/overlayfs/readdir.c 31 */;
	struct ovl_dir_file *cocci_id/* fs/overlayfs/readdir.c 238 */;
	struct inode *cocci_id/* fs/overlayfs/readdir.c 228 */;
	struct list_head *cocci_id/* fs/overlayfs/readdir.c 217 */;
	void cocci_id/* fs/overlayfs/readdir.c 217 */;
	struct ovl_cache_entry {
		unsigned int len;
		unsigned int type;
		u64 real_ino;
		u64 ino;
		struct list_head l_node;
		struct rb_node node;
		struct ovl_cache_entry *next_maybe_whiteout;
		bool is_upper;
		bool is_whiteout;
		char name[];
	} cocci_id/* fs/overlayfs/readdir.c 18 */;
	struct ovl_cache_entry *cocci_id/* fs/overlayfs/readdir.c 179 */;
	struct rb_node *cocci_id/* fs/overlayfs/readdir.c 178 */;
	struct rb_node **cocci_id/* fs/overlayfs/readdir.c 177 */;
	unsigned int cocci_id/* fs/overlayfs/readdir.c 175 */;
	u64 cocci_id/* fs/overlayfs/readdir.c 174 */;
	const char *cocci_id/* fs/overlayfs/readdir.c 174 */;
	struct ovl_readdir_data *cocci_id/* fs/overlayfs/readdir.c 173 */;
	int cocci_id/* fs/overlayfs/readdir.c 173 */;
	size_t cocci_id/* fs/overlayfs/readdir.c 148 */;
	struct ovl_fs *cocci_id/* fs/overlayfs/readdir.c 1078 */;
	struct vfsmount *cocci_id/* fs/overlayfs/readdir.c 1057 */;
}