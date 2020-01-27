cocci_test_suite() {
	const struct inode *cocci_id/* fs/namei.c 902 */;
	struct super_block *cocci_id/* fs/namei.c 563 */;
	struct saved cocci_id/* fs/namei.c 538 */;
	struct saved *cocci_id/* fs/namei.c 535 */;
	struct nameidata {
		struct path path;
		struct qstr last;
		struct path root;
		struct inode *inode;
		unsigned int flags;
		unsigned seq,m_seq;
		int last_type;
		unsigned depth;
		int total_link_count;
		struct saved {
			struct path link;
			struct delayed_call done;
			const char *name;
			unsigned seq;
		} *stack,internal[EMBEDDED_LEVELS];
		struct filename *name;
		struct nameidata *saved;
		struct inode *link_inode;
		unsigned root_seq;
		int dfd;
	} cocci_id/* fs/namei.c 488 */;
	const struct inode_operations cocci_id/* fs/namei.c 4864 */;
	void *cocci_id/* fs/namei.c 4829 */;
	struct page *cocci_id/* fs/namei.c 4828 */;
	struct address_space *cocci_id/* fs/namei.c 4827 */;
	const char *cocci_id/* fs/namei.c 4825 */;
	char __user *cocci_id/* fs/namei.c 4811 */;
	struct delayed_call *cocci_id/* fs/namei.c 4777 */;
	struct qstr cocci_id/* fs/namei.c 4526 */;
	struct name_snapshot cocci_id/* fs/namei.c 4405 */;
	const char __user *cocci_id/* fs/namei.c 4269 */;
	long cocci_id/* fs/namei.c 3826 */;
	dev_t cocci_id/* fs/namei.c 3700 */;
	void cocci_id/* fs/namei.c 3684 */;
	struct filename *cocci_id/* fs/namei.c 3581 */;
	struct nameidata cocci_id/* fs/namei.c 3579 */;
	struct vfsmount *cocci_id/* fs/namei.c 3576 */;
	struct path cocci_id/* fs/namei.c 3274 */;
	unsigned cocci_id/* fs/namei.c 3272 */;
	struct dentry *const cocci_id/* fs/namei.c 3067 */;
	umode_t cocci_id/* fs/namei.c 3065 */;
	const struct open_flags *cocci_id/* fs/namei.c 3064 */;
	struct file *cocci_id/* fs/namei.c 3063 */;
	const struct path *cocci_id/* fs/namei.c 3003 */;
	int (*cocci_id/* fs/namei.c 2927 */)(struct dentry *, umode_t, void *);
	struct user_namespace *cocci_id/* fs/namei.c 2848 */;
	kuid_t cocci_id/* fs/namei.c 2767 */;
	struct inode *cocci_id/* fs/namei.c 2765 */;
	int cocci_id/* fs/namei.c 2765 */;
	struct posix_acl *cocci_id/* fs/namei.c 265 */;
	const unsigned char *cocci_id/* fs/namei.c 2460 */;
	struct qstr *cocci_id/* fs/namei.c 2367 */;
	int *cocci_id/* fs/namei.c 2367 */;
	struct fd cocci_id/* fs/namei.c 2216 */;
	struct fs_struct *cocci_id/* fs/namei.c 2200 */;
	unsigned char cocci_id/* fs/namei.c 2006 */;
	const struct word_at_a_time cocci_id/* fs/namei.c 1978 */;
	u64 cocci_id/* fs/namei.c 1974 */;
	const void *cocci_id/* fs/namei.c 1925 */;
	unsigned long cocci_id/* fs/namei.c 1885 */;
	enum{WALK_FOLLOW=1, WALK_MORE=2,} cocci_id/* fs/namei.c 1752 */;
	const size_t cocci_id/* fs/namei.c 162 */;
	struct filename cocci_id/* fs/namei.c 162 */;
	unsigned int cocci_id/* fs/namei.c 1527 */;
	const struct qstr *cocci_id/* fs/namei.c 1526 */;
	struct dentry *cocci_id/* fs/namei.c 1526 */;
	struct mount *cocci_id/* fs/namei.c 1313 */;
	struct inode **cocci_id/* fs/namei.c 1310 */;
	unsigned *cocci_id/* fs/namei.c 1310 */;
	char *cocci_id/* fs/namei.c 131 */;
	bool cocci_id/* fs/namei.c 1309 */;
	struct path *cocci_id/* fs/namei.c 1309 */;
	struct nameidata *cocci_id/* fs/namei.c 1309 */;
	bool *cocci_id/* fs/namei.c 1137 */;
	const char *(*cocci_id/* fs/namei.c 1069 */)(struct dentry *,
						     struct inode *,
						     struct delayed_call *);
	struct inode *const cocci_id/* fs/namei.c 1021 */;
}