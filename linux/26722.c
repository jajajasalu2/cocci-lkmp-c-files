cocci_test_suite() {
	struct tlock *cocci_id/* fs/jfs/jfs_txnmgr.c 98 */;
	int cocci_id/* fs/jfs/jfs_txnmgr.c 96 */;
	struct tblock *cocci_id/* fs/jfs/jfs_txnmgr.c 94 */;
	struct {
		uint txBegin;
		uint txBegin_barrier;
		uint txBegin_lockslow;
		uint txBegin_freetid;
		uint txBeginAnon;
		uint txBeginAnon_barrier;
		uint txBeginAnon_lockslow;
		uint txLockAlloc;
		uint txLockAlloc_freelock;
	} cocci_id/* fs/jfs/jfs_txnmgr.c 71 */;
	xtpage_t *cocci_id/* fs/jfs/jfs_txnmgr.c 587 */;
	struct xtlock *cocci_id/* fs/jfs/jfs_txnmgr.c 585 */;
	struct {
		int freetid;
		int freelock;
		wait_queue_head_t freewait;
		wait_queue_head_t freelockwait;
		wait_queue_head_t lowlockwait;
		int tlocksInUse;
		spinlock_t LazyLock;
		struct list_head unlock_queue;
		struct list_head anon_list;
		struct list_head anon_list2;
	} cocci_id/* fs/jfs/jfs_txnmgr.c 53 */;
	struct super_block *cocci_id/* fs/jfs/jfs_txnmgr.c 348 */;
	char *cocci_id/* fs/jfs/jfs_txnmgr.c 2989 */;
	struct seq_file *cocci_id/* fs/jfs/jfs_txnmgr.c 2987 */;
	struct tlock cocci_id/* fs/jfs/jfs_txnmgr.c 295 */;
	struct jfs_inode_info cocci_id/* fs/jfs/jfs_txnmgr.c 2926 */;
	tid_t cocci_id/* fs/jfs/jfs_txnmgr.c 2917 */;
	struct jfs_inode_info *cocci_id/* fs/jfs/jfs_txnmgr.c 2916 */;
	struct inode *cocci_id/* fs/jfs/jfs_txnmgr.c 2915 */;
	struct jfs_log *cocci_id/* fs/jfs/jfs_txnmgr.c 2825 */;
	struct metapage *cocci_id/* fs/jfs/jfs_txnmgr.c 2823 */;
	void cocci_id/* fs/jfs/jfs_txnmgr.c 2823 */;
	struct jfs_sb_info *cocci_id/* fs/jfs/jfs_txnmgr.c 2735 */;
	unsigned long cocci_id/* fs/jfs/jfs_txnmgr.c 2734 */;
	void *cocci_id/* fs/jfs/jfs_txnmgr.c 2730 */;
	struct tblock cocci_id/* fs/jfs/jfs_txnmgr.c 270 */;
	lid_t cocci_id/* fs/jfs/jfs_txnmgr.c 2627 */;
	s64 cocci_id/* fs/jfs/jfs_txnmgr.c 2429 */;
	xad_t *cocci_id/* fs/jfs/jfs_txnmgr.c 2428 */;
	struct xdlistlock *cocci_id/* fs/jfs/jfs_txnmgr.c 2427 */;
	struct maplock *cocci_id/* fs/jfs/jfs_txnmgr.c 2423 */;
	struct pxd_lock cocci_id/* fs/jfs/jfs_txnmgr.c 2284 */;
	struct sysinfo cocci_id/* fs/jfs/jfs_txnmgr.c 228 */;
	dxd_t *cocci_id/* fs/jfs/jfs_txnmgr.c 2157 */;
	ulong cocci_id/* fs/jfs/jfs_txnmgr.c 2142 */;
	pxd_t cocci_id/* fs/jfs/jfs_txnmgr.c 1918 */;
	void cocci_id/* fs/jfs/jfs_txnmgr.c 168 */(struct metapage *mp);
	int cocci_id/* fs/jfs/jfs_txnmgr.c 162 */(struct jfs_log *log,
						  struct tblock *tblk,
						  struct commit *cd);
	void cocci_id/* fs/jfs/jfs_txnmgr.c 161 */(struct tblock *tblk);
	void cocci_id/* fs/jfs/jfs_txnmgr.c 159 */(struct inode *ip,
						   struct maplock *maplock,
						   struct tblock *tblk);
	struct pxd_lock *cocci_id/* fs/jfs/jfs_txnmgr.c 1588 */;
	void cocci_id/* fs/jfs/jfs_txnmgr.c 155 */(struct jfs_log *log,
						   struct tblock *tblk,
						   struct lrd *lrd,
						   struct tlock *tlck);
	pxd_t *cocci_id/* fs/jfs/jfs_txnmgr.c 1542 */;
	struct lrd *cocci_id/* fs/jfs/jfs_txnmgr.c 1538 */;
	int cocci_id/* fs/jfs/jfs_txnmgr.c 153 */(struct jfs_log *log,
						  struct tblock *tblk,
						  struct lrd *lrd,
						  struct tlock *tlck);
	int cocci_id/* fs/jfs/jfs_txnmgr.c 151 */(struct jfs_log *log,
						  struct tblock *tblk,
						  struct lrd *lrd,
						  struct tlock *tlck,
						  struct commit *cd);
	struct {
		tid_t maxtid;
		lid_t maxlid;
		int ntid;
		int nlid;
		int waitlock;
	} cocci_id/* fs/jfs/jfs_txnmgr.c 140 */;
	struct commit *cocci_id/* fs/jfs/jfs_txnmgr.c 1368 */;
	wait_queue_head_t *cocci_id/* fs/jfs/jfs_txnmgr.c 118 */;
	ino_t cocci_id/* fs/jfs/jfs_txnmgr.c 1135 */;
	struct commit cocci_id/* fs/jfs/jfs_txnmgr.c 1128 */;
	struct inode **cocci_id/* fs/jfs/jfs_txnmgr.c 1124 */;
	struct linelock *cocci_id/* fs/jfs/jfs_txnmgr.c 1055 */;
}
