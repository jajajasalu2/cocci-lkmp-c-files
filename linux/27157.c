cocci_test_suite() {
	struct iso_inode_info cocci_id/* fs/isofs/inode.c 94 */;
	int __init cocci_id/* fs/isofs/inode.c 91 */;
	struct iso_inode_info *cocci_id/* fs/isofs/inode.c 86 */;
	void *cocci_id/* fs/isofs/inode.c 84 */;
	struct kmem_cache *cocci_id/* fs/isofs/inode.c 68 */;
	struct iso_volume_descriptor *cocci_id/* fs/isofs/inode.c 673 */;
	struct hs_volume_descriptor *cocci_id/* fs/isofs/inode.c 672 */;
	int cocci_id/* fs/isofs/inode.c 66 */(struct seq_file *,
					      struct dentry *);
	int cocci_id/* fs/isofs/inode.c 65 */(struct dentry *,
					      struct kstatfs *);
	char *cocci_id/* fs/isofs/inode.c 643 */;
	int cocci_id/* fs/isofs/inode.c 64 */(struct inode *, int relocated);
	struct isofs_sb_info *cocci_id/* fs/isofs/inode.c 630 */;
	struct iso9660_options cocci_id/* fs/isofs/inode.c 629 */;
	struct iso_directory_record *cocci_id/* fs/isofs/inode.c 627 */;
	struct iso_supplementary_descriptor *cocci_id/* fs/isofs/inode.c 626 */;
	struct iso_primary_descriptor *cocci_id/* fs/isofs/inode.c 625 */;
	struct hs_primary_descriptor *cocci_id/* fs/isofs/inode.c 624 */;
	bool cocci_id/* fs/isofs/inode.c 594 */;
	struct cdrom_tocentry cocci_id/* fs/isofs/inode.c 555 */;
	struct block_device *cocci_id/* fs/isofs/inode.c 549 */;
	struct cdrom_multisession cocci_id/* fs/isofs/inode.c 547 */;
	s32 cocci_id/* fs/isofs/inode.c 545 */;
	struct seq_file *cocci_id/* fs/isofs/inode.c 486 */;
	int cocci_id/* fs/isofs/inode.c 47 */(const struct dentry *dentry,
					      unsigned int len,
					      const char *str,
					      const struct qstr *name);
	int cocci_id/* fs/isofs/inode.c 44 */(const struct dentry *parent,
					      struct qstr *qstr);
	substring_t cocci_id/* fs/isofs/inode.c 367 */[MAX_OPT_ARGS];
	struct iso9660_options *cocci_id/* fs/isofs/inode.c 338 */;
	const match_table_t cocci_id/* fs/isofs/inode.c 299 */;
	enum{Opt_block, Opt_check_r, Opt_check_s, Opt_cruft, Opt_gid, Opt_ignore, Opt_iocharset, Opt_map_a, Opt_map_n, Opt_map_o, Opt_mode, Opt_nojoliet, Opt_norock, Opt_sb, Opt_session, Opt_uid, Opt_unhide, Opt_utf8, Opt_err, Opt_nocompress, Opt_hide, Opt_showassoc, Opt_dmode, Opt_overriderockperm,} cocci_id/* fs/isofs/inode.c 292 */;
	const struct dentry *cocci_id/* fs/isofs/inode.c 278 */;
	struct qstr *cocci_id/* fs/isofs/inode.c 248 */;
	const struct qstr *cocci_id/* fs/isofs/inode.c 205 */;
	const char *cocci_id/* fs/isofs/inode.c 204 */;
	unsigned int cocci_id/* fs/isofs/inode.c 204 */;
	char cocci_id/* fs/isofs/inode.c 180 */;
	void __exit cocci_id/* fs/isofs/inode.c 1609 */;
	struct file_system_type cocci_id/* fs/isofs/inode.c 1575 */;
	struct file_system_type *cocci_id/* fs/isofs/inode.c 1569 */;
	struct dentry *cocci_id/* fs/isofs/inode.c 1569 */;
	long cocci_id/* fs/isofs/inode.c 1540 */;
	struct isofs_iget5_callback_data cocci_id/* fs/isofs/inode.c 1539 */;
	int cocci_id/* fs/isofs/inode.c 1535 */;
	unsigned long cocci_id/* fs/isofs/inode.c 1533 */;
	struct super_block *cocci_id/* fs/isofs/inode.c 1532 */;
	struct inode *cocci_id/* fs/isofs/inode.c 1532 */;
	struct isofs_iget5_callback_data *cocci_id/* fs/isofs/inode.c 1521 */;
	struct isofs_iget5_callback_data {
		unsigned long block;
		unsigned long offset;
	} cocci_id/* fs/isofs/inode.c 1504 */;
	struct iso9660_options {
		unsigned int rock:1;
		unsigned int joliet:1;
		unsigned int cruft:1;
		unsigned int hide:1;
		unsigned int showassoc:1;
		unsigned int nocompress:1;
		unsigned int overriderockperm:1;
		unsigned int uid_set:1;
		unsigned int gid_set:1;
		unsigned int utf8:1;
		unsigned char map;
		unsigned char check;
		unsigned int blocksize;
		umode_t fmode;
		umode_t dmode;
		kgid_t gid;
		kuid_t uid;
		char *iocharset;
		s32 session;
		s32 sbsector;
	} cocci_id/* fs/isofs/inode.c 148 */;
	unsigned char *cocci_id/* fs/isofs/inode.c 1331 */;
	const struct dentry_operations cocci_id/* fs/isofs/inode.c 131 */[];
	const struct super_operations cocci_id/* fs/isofs/inode.c 121 */;
	const struct address_space_operations cocci_id/* fs/isofs/inode.c 1199 */;
	sector_t cocci_id/* fs/isofs/inode.c 1194 */;
	struct address_space *cocci_id/* fs/isofs/inode.c 1194 */;
	struct list_head *cocci_id/* fs/isofs/inode.c 1189 */;
	struct page *cocci_id/* fs/isofs/inode.c 1183 */;
	struct file *cocci_id/* fs/isofs/inode.c 1183 */;
	struct buffer_head *cocci_id/* fs/isofs/inode.c 1175 */;
	struct buffer_head cocci_id/* fs/isofs/inode.c 1164 */;
	int *cocci_id/* fs/isofs/inode.c 113 */;
	unsigned long long cocci_id/* fs/isofs/inode.c 1093 */;
	unsigned cocci_id/* fs/isofs/inode.c 1061 */;
	struct buffer_head **cocci_id/* fs/isofs/inode.c 1058 */;
	u32 cocci_id/* fs/isofs/inode.c 1046 */;
	u64 cocci_id/* fs/isofs/inode.c 1036 */;
	struct kstatfs *cocci_id/* fs/isofs/inode.c 1033 */;
	void cocci_id/* fs/isofs/inode.c 103 */;
}
