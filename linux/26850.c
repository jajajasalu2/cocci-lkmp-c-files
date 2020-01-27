cocci_test_suite() {
	void cocci_id/* fs/reiserfs/journal.c 99 */(struct work_struct *work);
	void cocci_id/* fs/reiserfs/journal.c 97 */(struct super_block *s,
						    struct reiserfs_journal_list *jl);
	void cocci_id/* fs/reiserfs/journal.c 95 */(struct super_block *super,
						    struct reiserfs_journal *journal);
	int cocci_id/* fs/reiserfs/journal.c 93 */(struct reiserfs_transaction_handle *th,
						   struct super_block *sb);
	int cocci_id/* fs/reiserfs/journal.c 92 */(struct reiserfs_journal_cnode *cn);
	int cocci_id/* fs/reiserfs/journal.c 90 */(struct super_block *s,
						   struct reiserfs_journal_list *jl,
						   int flushall);
	int cocci_id/* fs/reiserfs/journal.c 87 */(struct reiserfs_transaction_handle *,
						   int flags);
	struct list_head cocci_id/* fs/reiserfs/journal.c 803 */;
	struct reiserfs_jh cocci_id/* fs/reiserfs/journal.c 793 */;
	struct reiserfs_jh *cocci_id/* fs/reiserfs/journal.c 751 */;
	struct reiserfs_journal *cocci_id/* fs/reiserfs/journal.c 748 */;
	struct buffer_head *cocci_id/* fs/reiserfs/journal.c 748 */;
	int cocci_id/* fs/reiserfs/journal.c 748 */;
	void cocci_id/* fs/reiserfs/journal.c 714 */;
	atomic_t cocci_id/* fs/reiserfs/journal.c 713 */;
	void cocci_id/* fs/reiserfs/journal.c 695 */(struct buffer_chunk *);
	spinlock_t *cocci_id/* fs/reiserfs/journal.c 695 */;
	struct buffer_chunk *cocci_id/* fs/reiserfs/journal.c 694 */;
	struct buffer_chunk {
		struct buffer_head *bh[CHUNK_SIZE];
		int nr;
	} cocci_id/* fs/reiserfs/journal.c 671 */;
	b_blocknr_t *cocci_id/* fs/reiserfs/journal.c 463 */;
	long cocci_id/* fs/reiserfs/journal.c 430 */;
	struct reiserfs_journal_cnode **cocci_id/* fs/reiserfs/journal.c 427 */;
	struct page *cocci_id/* fs/reiserfs/journal.c 4191 */;
	char *cocci_id/* fs/reiserfs/journal.c 4190 */;
	struct list_head *cocci_id/* fs/reiserfs/journal.c 3987 */;
	struct reiserfs_journal_commit *cocci_id/* fs/reiserfs/journal.c 3979 */;
	struct reiserfs_journal_desc *cocci_id/* fs/reiserfs/journal.c 3978 */;
	struct tree_balance *cocci_id/* fs/reiserfs/journal.c 3936 */;
	struct super_block *cocci_id/* fs/reiserfs/journal.c 3834 */;
	struct reiserfs_transaction_handle cocci_id/* fs/reiserfs/journal.c 3833 */;
	struct reiserfs_journal_list *cocci_id/* fs/reiserfs/journal.c 3831 */;
	struct inode *cocci_id/* fs/reiserfs/journal.c 3830 */;
	unsigned long cocci_id/* fs/reiserfs/journal.c 3830 */;
	unsigned cocci_id/* fs/reiserfs/journal.c 3645 */;
	time64_t cocci_id/* fs/reiserfs/journal.c 3606 */;
	struct reiserfs_transaction_handle *cocci_id/* fs/reiserfs/journal.c 3603 */;
	struct reiserfs_journal_cnode cocci_id/* fs/reiserfs/journal.c 354 */;
	struct reiserfs_journal cocci_id/* fs/reiserfs/journal.c 3531 */;
	struct work_struct *cocci_id/* fs/reiserfs/journal.c 3528 */;
	b_blocknr_t cocci_id/* fs/reiserfs/journal.c 3475 */;
	struct reiserfs_journal_cnode *cocci_id/* fs/reiserfs/journal.c 346 */;
	wait_queue_entry_t cocci_id/* fs/reiserfs/journal.c 2954 */;
	struct reiserfs_super_block *cocci_id/* fs/reiserfs/journal.c 2717 */;
	const char *cocci_id/* fs/reiserfs/journal.c 2712 */;
	char cocci_id/* fs/reiserfs/journal.c 2604 */[BDEVNAME_SIZE];
	fmode_t cocci_id/* fs/reiserfs/journal.c 2603 */;
	dev_t cocci_id/* fs/reiserfs/journal.c 2602 */;
	struct reiserfs_journal_list cocci_id/* fs/reiserfs/journal.c 2571 */;
	struct buffer_head *cocci_id/* fs/reiserfs/journal.c 2324 */[BUFNR];
	struct block_device *cocci_id/* fs/reiserfs/journal.c 2320 */;
	struct reiserfs_list_bitmap *cocci_id/* fs/reiserfs/journal.c 226 */;
	struct buffer_head **cocci_id/* fs/reiserfs/journal.c 2096 */;
	unsigned long *cocci_id/* fs/reiserfs/journal.c 2008 */;
	unsigned int *cocci_id/* fs/reiserfs/journal.c 2007 */;
	struct buffer_chunk cocci_id/* fs/reiserfs/journal.c 1726 */;
	struct reiserfs_journal_list **cocci_id/* fs/reiserfs/journal.c 1718 */;
	unsigned long long cocci_id/* fs/reiserfs/journal.c 1484 */;
	struct reiserfs_bitmap_node cocci_id/* fs/reiserfs/journal.c 143 */;
	struct reiserfs_bitmap_node *cocci_id/* fs/reiserfs/journal.c 137 */;
	struct reiserfs_journal_header *cocci_id/* fs/reiserfs/journal.c 1240 */;
	unsigned int cocci_id/* fs/reiserfs/journal.c 1238 */;
	void cocci_id/* fs/reiserfs/journal.c 1186 */(struct super_block *,
						      struct reiserfs_journal_cnode **,
						      struct reiserfs_journal_list *,
						      unsigned long, int);
	int cocci_id/* fs/reiserfs/journal.c 111 */(struct reiserfs_transaction_handle *th,
						    struct super_block *sb,
						    unsigned long nblocks,
						    int join);
	enum{JBEGIN_REG=0, JBEGIN_JOIN=1, JBEGIN_ABORT=2,} cocci_id/* fs/reiserfs/journal.c 103 */;
	void cocci_id/* fs/reiserfs/journal.c 100 */(struct super_block *s);
}
