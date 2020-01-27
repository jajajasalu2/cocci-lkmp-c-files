cocci_test_suite() {
	int cocci_id/* fs/jfs/jfs_dmap.c 99 */(u32 word);
	int cocci_id/* fs/jfs/jfs_dmap.c 98 */(u32 value);
	int cocci_id/* fs/jfs/jfs_dmap.c 96 */(s64 nb);
	int cocci_id/* fs/jfs/jfs_dmap.c 95 */(u8 *cp);
	int cocci_id/* fs/jfs/jfs_dmap.c 90 */(dmtree_t *tp, int l2nb,
					       int *leafidx);
	int cocci_id/* fs/jfs/jfs_dmap.c 89 */(struct bmap *bmp, int l2nb,
					       int level, s64 *blkno);
	int cocci_id/* fs/jfs/jfs_dmap.c 88 */(u32 word, int l2nb);
	int cocci_id/* fs/jfs/jfs_dmap.c 87 */(struct inode *ip, s64 blkno,
					       s64 nblocks, s64 addnblocks);
	int cocci_id/* fs/jfs/jfs_dmap.c 85 */(struct bmap *bmp, s64 nblocks,
					       int l2nb, s64 blkno,
					       s64 *results);
	int cocci_id/* fs/jfs/jfs_dmap.c 83 */(struct bmap *bmp, int agno,
					       s64 nblocks, int l2nb,
					       s64 *results);
	int cocci_id/* fs/jfs/jfs_dmap.c 80 */(struct bmap *bmp,
					       struct dmap *dp, int nblocks,
					       int l2nb, s64 *results);
	int cocci_id/* fs/jfs/jfs_dmap.c 78 */(struct bmap *bmp,
					       struct dmap *dp, s64 blkno,
					       int nblocks);
	int cocci_id/* fs/jfs/jfs_dmap.c 75 */(struct bmap *bmp,
					       struct dmap *dp, s64 blkno,
					       int nblocks, int l2nb,
					       s64 *results);
	int cocci_id/* fs/jfs/jfs_dmap.c 72 */(struct bmap *bmp, s64 nblocks,
					       int l2nb, s64 *results);
	int cocci_id/* fs/jfs/jfs_dmap.c 70 */(struct bmap *bmp, s64 blkno,
					       int newval, int alloc,
					       int level);
	struct dmap *cocci_id/* fs/jfs/jfs_dmap.c 694 */;
	void cocci_id/* fs/jfs/jfs_dmap.c 69 */(dmtree_t *tp, int leafno,
						int newval);
	s64 *cocci_id/* fs/jfs/jfs_dmap.c 687 */;
	struct inode *cocci_id/* fs/jfs/jfs_dmap.c 687 */;
	int cocci_id/* fs/jfs/jfs_dmap.c 68 */(dmtree_t *tp, int leafno,
					       int newval);
	int cocci_id/* fs/jfs/jfs_dmap.c 67 */(dmtree_t *tp, int leafno);
	void cocci_id/* fs/jfs/jfs_dmap.c 66 */(dmtree_t *tp, int leafno,
						int splitsz, int newval);
	void cocci_id/* fs/jfs/jfs_dmap.c 64 */(struct bmap *bmp,
						struct dmap *dp, s64 blkno,
						int nblocks);
	unsigned long cocci_id/* fs/jfs/jfs_dmap.c 423 */;
	struct jfs_log *cocci_id/* fs/jfs/jfs_dmap.c 421 */;
	struct tblock *cocci_id/* fs/jfs/jfs_dmap.c 412 */;
	long long cocci_id/* fs/jfs/jfs_dmap.c 3389 */;
	struct dmaptree *cocci_id/* fs/jfs/jfs_dmap.c 3256 */;
	s64 cocci_id/* fs/jfs/jfs_dmap.c 3147 */;
	int cocci_id/* fs/jfs/jfs_dmap.c 3147 */;
	u32 cocci_id/* fs/jfs/jfs_dmap.c 3122 */;
	u16 *cocci_id/* fs/jfs/jfs_dmap.c 3073 */;
	uint *cocci_id/* fs/jfs/jfs_dmap.c 3067 */;
	signed char cocci_id/* fs/jfs/jfs_dmap.c 3062 */;
	int *cocci_id/* fs/jfs/jfs_dmap.c 2959 */;
	void cocci_id/* fs/jfs/jfs_dmap.c 2885 */;
	dmtree_t *cocci_id/* fs/jfs/jfs_dmap.c 2551 */;
	struct dmapctl *cocci_id/* fs/jfs/jfs_dmap.c 2501 */;
	s8 cocci_id/* fs/jfs/jfs_dmap.c 2498 */;
	struct metapage *cocci_id/* fs/jfs/jfs_dmap.c 2497 */;
	struct bmap *cocci_id/* fs/jfs/jfs_dmap.c 2495 */;
	u8 *cocci_id/* fs/jfs/jfs_dmap.c 2219 */;
	s8 *cocci_id/* fs/jfs/jfs_dmap.c 2170 */;
	struct range2trim cocci_id/* fs/jfs/jfs_dmap.c 1631 */;
	struct bmap cocci_id/* fs/jfs/jfs_dmap.c 163 */;
	struct range2trim {
		u64 blkno;
		u64 nblocks;
	} *cocci_id/* fs/jfs/jfs_dmap.c 1615 */;
	struct super_block *cocci_id/* fs/jfs/jfs_dmap.c 1613 */;
	u64 cocci_id/* fs/jfs/jfs_dmap.c 1611 */;
	struct dbmap_disk *cocci_id/* fs/jfs/jfs_dmap.c 155 */;
	unsigned long long cocci_id/* fs/jfs/jfs_dmap.c 1398 */;
	const s8 cocci_id/* fs/jfs/jfs_dmap.c 117 */[256];
	int cocci_id/* fs/jfs/jfs_dmap.c 107 */(s64 nblocks);
	int cocci_id/* fs/jfs/jfs_dmap.c 106 */(struct dmapctl *dcp,
						int level, int i);
	int cocci_id/* fs/jfs/jfs_dmap.c 105 */(struct dmaptree *dtp);
	int cocci_id/* fs/jfs/jfs_dmap.c 104 */(struct dmap *dp);
	int cocci_id/* fs/jfs/jfs_dmap.c 103 */(struct dmap *dp, s64 blkno,
						int nblocks);
	uint cocci_id/* fs/jfs/jfs_dmap.c 1017 */;
	struct jfs_sb_info *cocci_id/* fs/jfs/jfs_dmap.c 1015 */;
}
