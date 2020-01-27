cocci_test_suite() {
	struct pxdlist *cocci_id/* fs/jfs/jfs_xtree.c 959 */;
	struct xtsplit *cocci_id/* fs/jfs/jfs_xtree.c 946 */;
	struct metapage **cocci_id/* fs/jfs/jfs_xtree.c 946 */;
	struct {
		uint search;
		uint fastSearch;
		uint split;
	} cocci_id/* fs/jfs/jfs_xtree.c 93 */;
	struct xtsplit {
		struct metapage *mp;
		s16 index;
		u8 flag;
		s64 off;
		s64 addr;
		int len;
		struct pxdlist *pxdlist;
	} cocci_id/* fs/jfs/jfs_xtree.c 78 */;
	struct seq_file *cocci_id/* fs/jfs/jfs_xtree.c 3864 */;
	void *cocci_id/* fs/jfs/jfs_xtree.c 3864 */;
	int cocci_id/* fs/jfs/jfs_xtree.c 3864 */;
	lid_t cocci_id/* fs/jfs/jfs_xtree.c 3534 */;
	struct xdlistlock cocci_id/* fs/jfs/jfs_xtree.c 3165 */;
	void cocci_id/* fs/jfs/jfs_xtree.c 3060 */;
	struct pxd_lock *cocci_id/* fs/jfs/jfs_xtree.c 2567 */;
	cbuf_t *cocci_id/* fs/jfs/jfs_xtree.c 2561 */;
	struct tblock *cocci_id/* fs/jfs/jfs_xtree.c 2551 */;
	struct btframe *cocci_id/* fs/jfs/jfs_xtree.c 2406 */;
	struct btstack *cocci_id/* fs/jfs/jfs_xtree.c 2398 */;
	xad_t cocci_id/* fs/jfs/jfs_xtree.c 2377 */;
	struct jfs_inode_info *cocci_id/* fs/jfs/jfs_xtree.c 229 */;
	ulong cocci_id/* fs/jfs/jfs_xtree.c 2181 */;
	pxd_t *cocci_id/* fs/jfs/jfs_xtree.c 2175 */;
	struct pxdlist cocci_id/* fs/jfs/jfs_xtree.c 2174 */;
	struct xtlock *cocci_id/* fs/jfs/jfs_xtree.c 2172 */;
	struct tlock *cocci_id/* fs/jfs/jfs_xtree.c 2171 */;
	xad_t *cocci_id/* fs/jfs/jfs_xtree.c 2169 */;
	struct xtsplit cocci_id/* fs/jfs/jfs_xtree.c 2168 */;
	struct btstack cocci_id/* fs/jfs/jfs_xtree.c 2167 */;
	xtpage_t *cocci_id/* fs/jfs/jfs_xtree.c 2164 */;
	struct metapage *cocci_id/* fs/jfs/jfs_xtree.c 2163 */;
	s64 *cocci_id/* fs/jfs/jfs_xtree.c 2159 */;
	s32 *cocci_id/* fs/jfs/jfs_xtree.c 2158 */;
	s64 cocci_id/* fs/jfs/jfs_xtree.c 2157 */;
	s32 cocci_id/* fs/jfs/jfs_xtree.c 2157 */;
	struct inode *cocci_id/* fs/jfs/jfs_xtree.c 2157 */;
	tid_t cocci_id/* fs/jfs/jfs_xtree.c 2156 */;
	u64 cocci_id/* fs/jfs/jfs_xtree.c 153 */;
	struct maplock *cocci_id/* fs/jfs/jfs_xtree.c 1527 */;
	int *cocci_id/* fs/jfs/jfs_xtree.c 134 */;
	int cocci_id/* fs/jfs/jfs_xtree.c 125 */(tid_t tid, struct inode *ip,
						 xtpage_t *fp);
	int cocci_id/* fs/jfs/jfs_xtree.c 121 */(struct inode *ip, xad_t *xad,
						 int *cmpp,
						 struct btstack *btstack,
						 int flag);
	int cocci_id/* fs/jfs/jfs_xtree.c 118 */(tid_t tid, struct inode *ip,
						 struct metapage *fmp,
						 xtpage_t *fp,
						 struct btstack *btstack);
	int cocci_id/* fs/jfs/jfs_xtree.c 114 */(tid_t tid, struct inode *ip,
						 struct xtsplit *split,
						 struct metapage **rmpp);
	int cocci_id/* fs/jfs/jfs_xtree.c 111 */(tid_t tid, struct inode *ip,
						 struct xtsplit *split,
						 struct metapage **rmpp,
						 s64 *rbnp);
	int cocci_id/* fs/jfs/jfs_xtree.c 107 */(tid_t tid, struct inode *ip,
						 struct xtsplit *split,
						 struct btstack *btstack);
	int cocci_id/* fs/jfs/jfs_xtree.c 104 */(struct inode *ip, s64 xoff,
						 s64 *next, int *cmpp,
						 struct btstack *btstack,
						 int flag);
}
