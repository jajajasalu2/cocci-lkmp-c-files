cocci_test_suite() {
	enum{EITHER, INDEX, DIRENT, DIRENT_HTREE,} cocci_id/* fs/ext4/namei.c 95 */;
	struct dx_root_info *cocci_id/* fs/ext4/namei.c 887 */;
	struct dx_node *cocci_id/* fs/ext4/namei.c 864 */;
	int cocci_id/* fs/ext4/namei.c 82 */(struct inode *inode,
					     struct ext4_dir_entry *dirent);
	struct dx_root *cocci_id/* fs/ext4/namei.c 755 */;
	struct stats cocci_id/* fs/ext4/namei.c 705 */;
	struct fscrypt_str cocci_id/* fs/ext4/namei.c 633 */;
	struct stats {
		unsigned names;
		unsigned space;
		unsigned bcount;
	} cocci_id/* fs/ext4/namei.c 607 */;
	struct dx_entry cocci_id/* fs/ext4/namei.c 588 */;
	struct dx_tail cocci_id/* fs/ext4/namei.c 587 */;
	struct dx_countlimit *cocci_id/* fs/ext4/namei.c 554 */;
	ext4_lblk_t *cocci_id/* fs/ext4/namei.c 55 */;
	struct dx_entry *cocci_id/* fs/ext4/namei.c 532 */;
	struct dx_tail *cocci_id/* fs/ext4/namei.c 436 */;
	struct dx_root_info cocci_id/* fs/ext4/namei.c 424 */;
	const struct inode_operations cocci_id/* fs/ext4/namei.c 4023 */;
	struct timespec64 cocci_id/* fs/ext4/namei.c 3871 */;
	u8 cocci_id/* fs/ext4/namei.c 3869 */;
	struct ext4_renament cocci_id/* fs/ext4/namei.c 3859 */;
	struct ext4_dir_entry_tail *cocci_id/* fs/ext4/namei.c 384 */;
	handle_t **cocci_id/* fs/ext4/namei.c 3608 */;
	struct ext4_renament *cocci_id/* fs/ext4/namei.c 3564 */;
	void cocci_id/* fs/ext4/namei.c 354 */;
	__u8 *cocci_id/* fs/ext4/namei.c 347 */;
	struct ext4_renament {
		struct inode *dir;
		struct dentry *dentry;
		struct inode *inode;
		bool is_dir;
		int dir_nlink_delta;
		struct buffer_head *bh;
		struct ext4_dir_entry_2 *de;
		int inlined;
		struct buffer_head *dir_bh;
		struct ext4_dir_entry_2 *parent_de;
		int dir_inlined;
	} cocci_id/* fs/ext4/namei.c 3458 */;
	__u32 cocci_id/* fs/ext4/namei.c 345 */;
	struct ext4_inode_info *cocci_id/* fs/ext4/namei.c 344 */;
	__le32 cocci_id/* fs/ext4/namei.c 341 */;
	void *cocci_id/* fs/ext4/namei.c 341 */;
	unsigned char *cocci_id/* fs/ext4/namei.c 3364 */;
	struct ext4_inode_info cocci_id/* fs/ext4/namei.c 3047 */;
	struct list_head *cocci_id/* fs/ext4/namei.c 2996 */;
	int cocci_id/* fs/ext4/namei.c 292 */(handle_t *handle,
					      struct ext4_filename *fname,
					      struct inode *dir,
					      struct inode *inode);
	struct ext4_iloc cocci_id/* fs/ext4/namei.c 2915 */;
	struct buffer_head *cocci_id/* fs/ext4/namei.c 289 */(struct inode *dir,
							      struct ext4_filename *fname,
							      struct ext4_dir_entry_2 **res_dir);
	int cocci_id/* fs/ext4/namei.c 285 */(struct inode *dir, __u32 hash,
					      struct dx_frame *frame,
					      struct dx_frame *frames,
					      __u32 *start_hash);
	void cocci_id/* fs/ext4/namei.c 283 */(struct dx_frame *frame,
					       u32 hash, ext4_lblk_t block);
	struct ext4_dir_entry_2 *cocci_id/* fs/ext4/namei.c 282 */(char *base,
								   unsigned blocksize);
	struct ext4_dir_entry_2 *cocci_id/* fs/ext4/namei.c 280 */(char *from,
								   char *to,
								   struct dx_map_entry *offsets,
								   int count,
								   unsigned blocksize);
	void cocci_id/* fs/ext4/namei.c 279 */(struct dx_map_entry *map,
					       unsigned count);
	int cocci_id/* fs/ext4/namei.c 276 */(struct inode *dir,
					      struct ext4_dir_entry_2 *de,
					      unsigned blocksize,
					      struct dx_hash_info *hinfo,
					      struct dx_map_entry map[]);
	void cocci_id/* fs/ext4/namei.c 275 */(struct dx_frame *frames);
	struct dx_frame *cocci_id/* fs/ext4/namei.c 271 */(struct ext4_filename *fname,
							   struct inode *dir,
							   struct dx_hash_info *hinfo,
							   struct dx_frame *frame);
	unsigned cocci_id/* fs/ext4/namei.c 270 */(struct inode *dir);
	unsigned cocci_id/* fs/ext4/namei.c 269 */(struct inode *dir,
						   unsigned infosize);
	void cocci_id/* fs/ext4/namei.c 267 */(struct dx_entry *entries,
					       unsigned value);
	unsigned cocci_id/* fs/ext4/namei.c 265 */(struct dx_entry *entries);
	void cocci_id/* fs/ext4/namei.c 264 */(struct dx_entry *entry,
					       unsigned value);
	unsigned cocci_id/* fs/ext4/namei.c 263 */(struct dx_entry *entry);
	dev_t cocci_id/* fs/ext4/namei.c 2620 */;
	void cocci_id/* fs/ext4/namei.c 262 */(struct dx_entry *entry,
					       ext4_lblk_t value);
	ext4_lblk_t cocci_id/* fs/ext4/namei.c 261 */(struct dx_entry *entry);
	umode_t cocci_id/* fs/ext4/namei.c 2586 */;
	struct dx_tail {
		u32 dt_reserved;
		__le32 dt_checksum;
	} cocci_id/* fs/ext4/namei.c 256 */;
	struct inode **cocci_id/* fs/ext4/namei.c 2559 */;
	struct dx_map_entry {
		u32 hash;
		u16 offs;
		u16 size;
	} cocci_id/* fs/ext4/namei.c 246 */;
	struct dx_frame {
		struct buffer_head *bh;
		struct dx_entry *entries;
		struct dx_entry *at;
	} cocci_id/* fs/ext4/namei.c 239 */;
	struct fake_dirent cocci_id/* fs/ext4/namei.c 2346 */;
	struct dx_node {
		struct fake_dirent fake;
		struct dx_entry entries[0];
	} cocci_id/* fs/ext4/namei.c 232 */;
	struct dx_frame cocci_id/* fs/ext4/namei.c 2270 */[EXT4_HTREE_LEVEL];
	struct ext4_filename cocci_id/* fs/ext4/namei.c 2170 */;
	struct ext4_sb_info *cocci_id/* fs/ext4/namei.c 2168 */;
	struct dentry *cocci_id/* fs/ext4/namei.c 2160 */;
	struct dx_root {
		struct fake_dirent dot;
		char dot_name[4];
		struct fake_dirent dotdot;
		char dotdot_name[4];
		struct dx_root_info {
			__le32 reserved_zero;
			u8 hash_version;
			u8 info_length;
			u8 indirect_levels;
			u8 unused_flags;
		} info;
		struct dx_entry entries[0];
	} cocci_id/* fs/ext4/namei.c 214 */;
	struct fake_dirent *cocci_id/* fs/ext4/namei.c 2050 */;
	struct dx_entry {
		__le32 hash;
		__le32 block;
	} cocci_id/* fs/ext4/namei.c 202 */;
	struct ext4_dir_entry_tail cocci_id/* fs/ext4/namei.c 1992 */;
	struct ext4_dir_entry_2 *cocci_id/* fs/ext4/namei.c 1984 */;
	handle_t *cocci_id/* fs/ext4/namei.c 1982 */;
	struct dx_countlimit {
		__le16 limit;
		__le16 count;
	} cocci_id/* fs/ext4/namei.c 196 */;
	unsigned short cocci_id/* fs/ext4/namei.c 1923 */;
	struct fake_dirent {
		__le32 inode;
		__le16 rec_len;
		u8 name_len;
		u8 file_type;
	} cocci_id/* fs/ext4/namei.c 188 */;
	char *cocci_id/* fs/ext4/namei.c 1820 */;
	struct dx_map_entry *cocci_id/* fs/ext4/namei.c 1819 */;
	u32 cocci_id/* fs/ext4/namei.c 1818 */;
	unsigned cocci_id/* fs/ext4/namei.c 1814 */;
	struct dx_hash_info *cocci_id/* fs/ext4/namei.c 1812 */;
	struct dx_frame *cocci_id/* fs/ext4/namei.c 1811 */;
	struct buffer_head **cocci_id/* fs/ext4/namei.c 1811 */;
	const struct qstr cocci_id/* fs/ext4/namei.c 1735 */;
	struct ext4_dir_entry *cocci_id/* fs/ext4/namei.c 1538 */;
	unsigned long cocci_id/* fs/ext4/namei.c 1531 */;
	int cocci_id/* fs/ext4/namei.c 1454 */;
	size_t cocci_id/* fs/ext4/namei.c 1449 */;
	const u8 *cocci_id/* fs/ext4/namei.c 1448 */;
	ext4_lblk_t cocci_id/* fs/ext4/namei.c 1447 */;
	struct buffer_head *cocci_id/* fs/ext4/namei.c 1445 */[NAMEI_RA_SIZE];
	struct super_block *cocci_id/* fs/ext4/namei.c 1444 */;
	int *cocci_id/* fs/ext4/namei.c 1442 */;
	struct ext4_dir_entry_2 **cocci_id/* fs/ext4/namei.c 1441 */;
	struct ext4_filename *cocci_id/* fs/ext4/namei.c 1440 */;
	struct inode *cocci_id/* fs/ext4/namei.c 1439 */;
	struct buffer_head *cocci_id/* fs/ext4/namei.c 1439 */;
	struct qstr cocci_id/* fs/ext4/namei.c 1363 */;
	struct fscrypt_name cocci_id/* fs/ext4/namei.c 1346 */;
	const struct ext4_dir_entry_2 *cocci_id/* fs/ext4/namei.c 1344 */;
	const struct ext4_filename *cocci_id/* fs/ext4/namei.c 1343 */;
	struct fscrypt_str *cocci_id/* fs/ext4/namei.c 1311 */;
	const struct unicode_map *cocci_id/* fs/ext4/namei.c 1286 */;
	const struct ext4_sb_info *cocci_id/* fs/ext4/namei.c 1285 */;
	bool cocci_id/* fs/ext4/namei.c 1283 */;
	const struct qstr *cocci_id/* fs/ext4/namei.c 1282 */;
	const struct inode *cocci_id/* fs/ext4/namei.c 1282 */;
	struct dx_hash_info cocci_id/* fs/ext4/namei.c 1214 */;
	__u32 *cocci_id/* fs/ext4/namei.c 1084 */;
	struct file *cocci_id/* fs/ext4/namei.c 1083 */;
	unsigned int cocci_id/* fs/ext4/namei.c 106 */;
	const char *cocci_id/* fs/ext4/namei.c 105 */;
	dirblock_type_t cocci_id/* fs/ext4/namei.c 104 */;
}
