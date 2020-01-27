cocci_test_suite() {
	struct nilfs_super_root *cocci_id/* fs/nilfs2/segment.c 955 */;
	struct nilfs_inode *cocci_id/* fs/nilfs2/segment.c 929 */;
	struct nilfs_checkpoint *cocci_id/* fs/nilfs2/segment.c 864 */;
	struct nilfs_sc_info cocci_id/* fs/nilfs2/segment.c 803 */;
	struct work_struct *cocci_id/* fs/nilfs2/segment.c 801 */;
	unsigned int cocci_id/* fs/nilfs2/segment.c 773 */;
	struct nilfs_inode_info *cocci_id/* fs/nilfs2/segment.c 772 */[SC_N_INODEVEC];
	pgoff_t cocci_id/* fs/nilfs2/segment.c 689 */;
	struct pagevec cocci_id/* fs/nilfs2/segment.c 688 */;
	struct address_space *cocci_id/* fs/nilfs2/segment.c 687 */;
	size_t cocci_id/* fs/nilfs2/segment.c 682 */;
	const struct nilfs_sc_operations cocci_id/* fs/nilfs2/segment.c 666 */;
	struct nilfs_binfo_dat *cocci_id/* fs/nilfs2/segment.c 661 */;
	__le64 *cocci_id/* fs/nilfs2/segment.c 652 */;
	union nilfs_binfo *cocci_id/* fs/nilfs2/segment.c 650 */;
	struct nilfs_binfo_dat cocci_id/* fs/nilfs2/segment.c 645 */;
	enum{NILFS_ST_INIT=0, NILFS_ST_GC, NILFS_ST_FILE, NILFS_ST_IFILE, NILFS_ST_CPFILE, NILFS_ST_SUFILE, NILFS_ST_DAT, NILFS_ST_SR, NILFS_ST_DSYNC, NILFS_ST_DONE,} cocci_id/* fs/nilfs2/segment.c 64 */;
	__le64 cocci_id/* fs/nilfs2/segment.c 634 */;
	struct nilfs_binfo_v *cocci_id/* fs/nilfs2/segment.c 603 */;
	struct nilfs_binfo_v cocci_id/* fs/nilfs2/segment.c 578 */;
	struct nilfs_finfo *cocci_id/* fs/nilfs2/segment.c 499 */;
	struct nilfs_finfo cocci_id/* fs/nilfs2/segment.c 488 */;
	const struct nilfs_segsum_pointer *cocci_id/* fs/nilfs2/segment.c 471 */;
	enum{SC_LSEG_SR=1, SC_LSEG_DSYNC, SC_FLUSH_FILE, SC_FLUSH_DAT,} cocci_id/* fs/nilfs2/segment.c 47 */;
	struct nilfs_segsum_pointer *cocci_id/* fs/nilfs2/segment.c 394 */;
	struct the_nilfs *cocci_id/* fs/nilfs2/segment.c 2767 */;
	struct super_block *cocci_id/* fs/nilfs2/segment.c 2765 */;
	struct nilfs_root *cocci_id/* fs/nilfs2/segment.c 2765 */;
	struct task_struct *cocci_id/* fs/nilfs2/segment.c 2613 */;
	struct nilfs_transaction_info cocci_id/* fs/nilfs2/segment.c 2423 */;
	struct nilfs_sc_info *cocci_id/* fs/nilfs2/segment.c 2422 */;
	void **cocci_id/* fs/nilfs2/segment.c 2419 */;
	struct nilfs_argv *cocci_id/* fs/nilfs2/segment.c 2418 */;
	struct timer_list *cocci_id/* fs/nilfs2/segment.c 2396 */;
	struct nilfs_super_block **cocci_id/* fs/nilfs2/segment.c 2364 */;
	struct nilfs_inode_info *cocci_id/* fs/nilfs2/segment.c 2272 */;
	loff_t cocci_id/* fs/nilfs2/segment.c 2268 */;
	struct nilfs_transaction_info *cocci_id/* fs/nilfs2/segment.c 2234 */;
	struct nilfs_segctor_wait_request *cocci_id/* fs/nilfs2/segment.c 2194 */;
	struct nilfs_segctor_wait_request cocci_id/* fs/nilfs2/segment.c 2161 */;
	struct nilfs_segctor_wait_request {
		wait_queue_entry_t wq;
		__u32 seq;
		int err;
		atomic_t done;
	} cocci_id/* fs/nilfs2/segment.c 2152 */;
	ino_t cocci_id/* fs/nilfs2/segment.c 2141 */;
	unsigned long cocci_id/* fs/nilfs2/segment.c 2127 */;
	const unsigned long cocci_id/* fs/nilfs2/segment.c 1850 */;
	struct buffer_head *cocci_id/* fs/nilfs2/segment.c 1744 */;
	struct page *cocci_id/* fs/nilfs2/segment.c 1743 */;
	struct nilfs_segment_buffer *cocci_id/* fs/nilfs2/segment.c 1742 */;
	struct list_head *cocci_id/* fs/nilfs2/segment.c 1740 */;
	int cocci_id/* fs/nilfs2/segment.c 1740 */;
	void cocci_id/* fs/nilfs2/segment.c 1740 */;
	struct nilfs_segment_summary cocci_id/* fs/nilfs2/segment.c 1563 */;
	union nilfs_binfo cocci_id/* fs/nilfs2/segment.c 1553 */;
	struct nilfs_segsum_pointer cocci_id/* fs/nilfs2/segment.c 1551 */;
	sector_t cocci_id/* fs/nilfs2/segment.c 1547 */;
	void *cocci_id/* fs/nilfs2/segment.c 150 */;
	struct nilfs_cstage cocci_id/* fs/nilfs2/segment.c 1482 */;
	struct inode *cocci_id/* fs/nilfs2/segment.c 1445 */;
	void cocci_id/* fs/nilfs2/segment.c 135 */(struct the_nilfs *,
						   struct list_head *, int);
	void cocci_id/* fs/nilfs2/segment.c 134 */(struct nilfs_sc_info *);
	void cocci_id/* fs/nilfs2/segment.c 133 */(struct nilfs_sc_info *,
						   int);
	__u64 cocci_id/* fs/nilfs2/segment.c 1277 */;
	struct nilfs_inode_info cocci_id/* fs/nilfs2/segment.c 1154 */;
	struct nilfs_sc_operations {
		int (*collect_data)(struct nilfs_sc_info *,
				    struct buffer_head *, struct inode *);
		int (*collect_node)(struct nilfs_sc_info *,
				    struct buffer_head *, struct inode *);
		int (*collect_bmap)(struct nilfs_sc_info *,
				    struct buffer_head *, struct inode *);
		void (*write_data_binfo)(struct nilfs_sc_info *,
					 struct nilfs_segsum_pointer *,
					 union nilfs_binfo *);
		void (*write_node_binfo)(struct nilfs_sc_info *,
					 struct nilfs_segsum_pointer *,
					 union nilfs_binfo *);
	} cocci_id/* fs/nilfs2/segment.c 114 */;
	const struct nilfs_sc_operations *cocci_id/* fs/nilfs2/segment.c 1041 */;
	struct buffer_head cocci_id/* fs/nilfs2/segment.c 1024 */;
	int (*cocci_id/* fs/nilfs2/segment.c 1004 */)(struct nilfs_sc_info *,
						      struct buffer_head *,
						      struct inode *);
}
