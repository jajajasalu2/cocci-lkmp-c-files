cocci_test_suite() {
	struct logsyncblk cocci_id/* fs/jfs/jfs_logmgr.c 960 */;
	struct logpage *cocci_id/* fs/jfs/jfs_logmgr.c 748 */;
	u8 *cocci_id/* fs/jfs/jfs_logmgr.c 426 */;
	struct inlinelock *cocci_id/* fs/jfs/jfs_logmgr.c 394 */;
	struct lvd *cocci_id/* fs/jfs/jfs_logmgr.c 361 */;
	struct lv *cocci_id/* fs/jfs/jfs_logmgr.c 360 */;
	struct linelock *cocci_id/* fs/jfs/jfs_logmgr.c 359 */;
	caddr_t cocci_id/* fs/jfs/jfs_logmgr.c 350 */;
	struct seq_file *cocci_id/* fs/jfs/jfs_logmgr.c 2483 */;
	struct jfs_sb_info cocci_id/* fs/jfs/jfs_logmgr.c 2378 */;
	long long cocci_id/* fs/jfs/jfs_logmgr.c 2376 */;
	s64 cocci_id/* fs/jfs/jfs_logmgr.c 2364 */;
	struct lbuf *cocci_id/* fs/jfs/jfs_logmgr.c 2322 */;
	void *cocci_id/* fs/jfs/jfs_logmgr.c 2320 */;
	int cocci_id/* fs/jfs/jfs_logmgr.c 2320 */;
	struct tlock *cocci_id/* fs/jfs/jfs_logmgr.c 226 */;
	struct lrd *cocci_id/* fs/jfs/jfs_logmgr.c 225 */;
	struct bio *cocci_id/* fs/jfs/jfs_logmgr.c 2179 */;
	int (*cocci_id/* fs/jfs/jfs_logmgr.c 202 */)(struct address_space *);
	struct lbuf **cocci_id/* fs/jfs/jfs_logmgr.c 1969 */;
	struct lmStat {
		uint commit;
		uint pagedone;
		uint submitted;
		uint full_page;
		uint partial_page;
	} cocci_id/* fs/jfs/jfs_logmgr.c 192 */;
	unsigned long cocci_id/* fs/jfs/jfs_logmgr.c 1886 */;
	int cocci_id/* fs/jfs/jfs_logmgr.c 184 */(struct jfs_log *log,
						  int hard_sync);
	void cocci_id/* fs/jfs/jfs_logmgr.c 183 */(struct jfs_log *log,
						   int cant_block);
	struct lbuf cocci_id/* fs/jfs/jfs_logmgr.c 1829 */;
	struct page *cocci_id/* fs/jfs/jfs_logmgr.c 1823 */;
	uint cocci_id/* fs/jfs/jfs_logmgr.c 1822 */;
	char *cocci_id/* fs/jfs/jfs_logmgr.c 1821 */;
	bio_end_io_t cocci_id/* fs/jfs/jfs_logmgr.c 181 */;
	int cocci_id/* fs/jfs/jfs_logmgr.c 180 */(struct lbuf *bp, int flag);
	void cocci_id/* fs/jfs/jfs_logmgr.c 179 */(struct jfs_log *log,
						   struct lbuf *bp, int flag);
	void cocci_id/* fs/jfs/jfs_logmgr.c 178 */(struct jfs_log *log,
						   struct lbuf *bp, int flag,
						   int cant_block);
	int cocci_id/* fs/jfs/jfs_logmgr.c 177 */(struct jfs_log *log, int pn,
						  struct lbuf **bpp);
	void cocci_id/* fs/jfs/jfs_logmgr.c 175 */(struct lbuf *bp);
	struct lbuf *cocci_id/* fs/jfs/jfs_logmgr.c 174 */(struct jfs_log *log,
							   int);
	void cocci_id/* fs/jfs/jfs_logmgr.c 173 */(struct jfs_log *log);
	uuid_t *cocci_id/* fs/jfs/jfs_logmgr.c 1721 */;
	int cocci_id/* fs/jfs/jfs_logmgr.c 172 */(struct jfs_log *log);
	struct logsuper *cocci_id/* fs/jfs/jfs_logmgr.c 1719 */;
	int cocci_id/* fs/jfs/jfs_logmgr.c 171 */(struct super_block *sb);
	int cocci_id/* fs/jfs/jfs_logmgr.c 167 */(struct jfs_log *log,
						  struct jfs_sb_info *sbi,
						  int activate);
	int cocci_id/* fs/jfs/jfs_logmgr.c 163 */(struct jfs_log *log,
						  struct tblock *tblk,
						  struct lrd *lrd,
						  struct tlock *tlck);
	struct page cocci_id/* fs/jfs/jfs_logmgr.c 1611 */;
	long cocci_id/* fs/jfs/jfs_logmgr.c 1610 */;
	struct metapage cocci_id/* fs/jfs/jfs_logmgr.c 1607 */;
	struct metapage *cocci_id/* fs/jfs/jfs_logmgr.c 1604 */;
	struct logsyncblk *cocci_id/* fs/jfs/jfs_logmgr.c 1599 */;
	struct jfs_log *cocci_id/* fs/jfs/jfs_logmgr.c 157 */;
	struct tblock cocci_id/* fs/jfs/jfs_logmgr.c 1534 */;
	struct tblock *cocci_id/* fs/jfs/jfs_logmgr.c 1519 */;
	void cocci_id/* fs/jfs/jfs_logmgr.c 1516 */;
	struct block_device *cocci_id/* fs/jfs/jfs_logmgr.c 1446 */;
	struct jfs_sb_info *cocci_id/* fs/jfs/jfs_logmgr.c 1444 */;
	struct super_block *cocci_id/* fs/jfs/jfs_logmgr.c 1442 */;
	unsigned long long cocci_id/* fs/jfs/jfs_logmgr.c 1323 */;
	struct lrd cocci_id/* fs/jfs/jfs_logmgr.c 1251 */;
	struct jfs_log cocci_id/* fs/jfs/jfs_logmgr.c 1098 */;
}
