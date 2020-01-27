cocci_test_suite() {
	struct pxdlist cocci_id/* fs/jfs/jfs_dtree.c 934 */;
	pxd_t cocci_id/* fs/jfs/jfs_dtree.c 927 */;
	ddata_t cocci_id/* fs/jfs/jfs_dtree.c 818 */;
	struct dtsplit cocci_id/* fs/jfs/jfs_dtree.c 817 */;
	char *cocci_id/* fs/jfs/jfs_dtree.c 461 */;
	ino_t cocci_id/* fs/jfs/jfs_dtree.c 4508 */;
	struct dir_table_slot cocci_id/* fs/jfs/jfs_dtree.c 432 */;
	struct dt_lock **cocci_id/* fs/jfs/jfs_dtree.c 4252 */;
	ddata_t *cocci_id/* fs/jfs/jfs_dtree.c 3894 */;
	wchar_t cocci_id/* fs/jfs/jfs_dtree.c 3770 */;
	struct component_name cocci_id/* fs/jfs/jfs_dtree.c 3767 */;
	struct dtslot *cocci_id/* fs/jfs/jfs_dtree.c 3664 */;
	struct idtentry *cocci_id/* fs/jfs/jfs_dtree.c 3663 */;
	__le16 *cocci_id/* fs/jfs/jfs_dtree.c 3660 */;
	struct dir_table_slot cocci_id/* fs/jfs/jfs_dtree.c 366 */[12];
	wchar_t *cocci_id/* fs/jfs/jfs_dtree.c 3659 */;
	struct component_name *cocci_id/* fs/jfs/jfs_dtree.c 3654 */;
	loff_t cocci_id/* fs/jfs/jfs_dtree.c 351 */;
	struct dtoffset *cocci_id/* fs/jfs/jfs_dtree.c 3410 */;
	struct dtoffset {
		s16 pn;
		s16 index;
		s32 unused;
	} *cocci_id/* fs/jfs/jfs_dtree.c 3406 */;
	loff_t *cocci_id/* fs/jfs/jfs_dtree.c 3402 */;
	struct tlock *cocci_id/* fs/jfs/jfs_dtree.c 334 */;
	uint cocci_id/* fs/jfs/jfs_dtree.c 333 */;
	struct metapage *cocci_id/* fs/jfs/jfs_dtree.c 331 */;
	struct lv *cocci_id/* fs/jfs/jfs_dtree.c 330 */;
	struct linelock *cocci_id/* fs/jfs/jfs_dtree.c 329 */;
	struct dir_table_slot *cocci_id/* fs/jfs/jfs_dtree.c 327 */;
	u64 cocci_id/* fs/jfs/jfs_dtree.c 326 */;
	struct jfs_inode_info *cocci_id/* fs/jfs/jfs_dtree.c 325 */;
	struct jfs_sb_info *cocci_id/* fs/jfs/jfs_dtree.c 324 */;
	struct super_block *cocci_id/* fs/jfs/jfs_dtree.c 323 */;
	u32 cocci_id/* fs/jfs/jfs_dtree.c 321 */;
	tid_t cocci_id/* fs/jfs/jfs_dtree.c 321 */;
	s64 cocci_id/* fs/jfs/jfs_dtree.c 321 */;
	struct inode *cocci_id/* fs/jfs/jfs_dtree.c 321 */;
	int cocci_id/* fs/jfs/jfs_dtree.c 321 */;
	long cocci_id/* fs/jfs/jfs_dtree.c 3187 */;
	struct jfs_dirent *cocci_id/* fs/jfs/jfs_dtree.c 3019 */;
	unsigned long cocci_id/* fs/jfs/jfs_dtree.c 3014 */;
	struct nls_table *cocci_id/* fs/jfs/jfs_dtree.c 2996 */;
	struct file *cocci_id/* fs/jfs/jfs_dtree.c 2993 */;
	struct dir_context *cocci_id/* fs/jfs/jfs_dtree.c 2993 */;
	struct jfs_dirent cocci_id/* fs/jfs/jfs_dtree.c 2977 */;
	struct jfs_dirent {
		loff_t position;
		int ino;
		u16 name_len;
		char name[0];
	} cocci_id/* fs/jfs/jfs_dtree.c 2963 */;
	s8 *cocci_id/* fs/jfs/jfs_dtree.c 2916 */;
	dtpage_t *cocci_id/* fs/jfs/jfs_dtree.c 2914 */;
	struct dt_lock *cocci_id/* fs/jfs/jfs_dtree.c 2909 */;
	struct ldtentry *cocci_id/* fs/jfs/jfs_dtree.c 2908 */;
	void cocci_id/* fs/jfs/jfs_dtree.c 2906 */;
	struct tblock *cocci_id/* fs/jfs/jfs_dtree.c 2831 */;
	u16 cocci_id/* fs/jfs/jfs_dtree.c 2823 */;
	dtroot_t *cocci_id/* fs/jfs/jfs_dtree.c 2817 */;
	long long cocci_id/* fs/jfs/jfs_dtree.c 2455 */;
	s64 *cocci_id/* fs/jfs/jfs_dtree.c 237 */;
	struct pxd_lock *cocci_id/* fs/jfs/jfs_dtree.c 2237 */;
	struct btframe *cocci_id/* fs/jfs/jfs_dtree.c 2233 */;
	struct btstack *cocci_id/* fs/jfs/jfs_dtree.c 2226 */;
	s32 cocci_id/* fs/jfs/jfs_dtree.c 219 */;
	u8 *cocci_id/* fs/jfs/jfs_dtree.c 2084 */;
	struct btstack cocci_id/* fs/jfs/jfs_dtree.c 2078 */;
	ino_t *cocci_id/* fs/jfs/jfs_dtree.c 2071 */;
	void cocci_id/* fs/jfs/jfs_dtree.c 183 */(dtpage_t *p, int m,
						  struct dt_lock **dtlock);
	void cocci_id/* fs/jfs/jfs_dtree.c 181 */(dtpage_t *p, int ti,
						  struct dt_lock **dtlock);
	void cocci_id/* fs/jfs/jfs_dtree.c 179 */(dtpage_t *p, int fi,
						  struct dt_lock **dtlock);
	void cocci_id/* fs/jfs/jfs_dtree.c 175 */(dtpage_t *sp, int si,
						  dtpage_t *dp,
						  struct dt_lock **sdtlock,
						  struct dt_lock **ddtlock,
						  int do_index);
	void cocci_id/* fs/jfs/jfs_dtree.c 172 */(dtpage_t *p, int index,
						  struct component_name *key,
						  ddata_t *data,
						  struct dt_lock **);
	int cocci_id/* fs/jfs/jfs_dtree.c 169 */(dtpage_t *lp, int li,
						 dtpage_t *rp, int ri,
						 struct component_name *key,
						 int flag);
	void cocci_id/* fs/jfs/jfs_dtree.c 166 */(dtpage_t *p, int i,
						  struct component_name *key,
						  int flag);
	pxd_t *cocci_id/* fs/jfs/jfs_dtree.c 1638 */;
	struct pxdlist *cocci_id/* fs/jfs/jfs_dtree.c 1637 */;
	struct dtsplit *cocci_id/* fs/jfs/jfs_dtree.c 1631 */;
	int cocci_id/* fs/jfs/jfs_dtree.c 163 */(struct component_name *key,
						 dtpage_t *p, int si,
						 int flag);
	int cocci_id/* fs/jfs/jfs_dtree.c 161 */(struct component_name *key,
						 dtpage_t *p, int si);
	int cocci_id/* fs/jfs/jfs_dtree.c 158 */(struct inode *ip,
						 loff_t *offset,
						 struct btstack *btstack);
	int cocci_id/* fs/jfs/jfs_dtree.c 156 */(struct inode *ip,
						 struct btstack *btstack);
	int cocci_id/* fs/jfs/jfs_dtree.c 154 */(tid_t tid, struct inode *ip,
						 dtpage_t *p);
	int cocci_id/* fs/jfs/jfs_dtree.c 151 */(tid_t tid, struct inode *ip,
						 struct metapage *fmp,
						 dtpage_t *fp,
						 struct btstack *btstack);
	int cocci_id/* fs/jfs/jfs_dtree.c 148 */(tid_t tid, struct inode *ip,
						 struct dtsplit *split,
						 struct metapage **rmpp);
	int cocci_id/* fs/jfs/jfs_dtree.c 145 */(tid_t tid, struct inode *ip,
						 struct dtsplit *split,
						 struct btstack *btstack);
	int cocci_id/* fs/jfs/jfs_dtree.c 142 */(tid_t tid, struct inode *ip,
						 struct dtsplit *split,
						 struct metapage **rmpp,
						 dtpage_t **rpp, pxd_t *rxdp);
	dtpage_t **cocci_id/* fs/jfs/jfs_dtree.c 1319 */;
	struct metapage **cocci_id/* fs/jfs/jfs_dtree.c 1319 */;
	struct dtsplit {
		struct metapage *mp;
		s16 index;
		s16 nslot;
		struct component_name *key;
		ddata_t *data;
		struct pxdlist *pxdlist;
	} cocci_id/* fs/jfs/jfs_dtree.c 102 */;
}
