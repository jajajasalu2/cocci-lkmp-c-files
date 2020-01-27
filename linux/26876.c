cocci_test_suite() {
	compressed_page_t cocci_id/* fs/erofs/zdata.c 988 */;
	bool cocci_id/* fs/erofs/zdata.c 983 */;
	const pgoff_t cocci_id/* fs/erofs/zdata.c 982 */;
	gfp_t cocci_id/* fs/erofs/zdata.c 980 */;
	struct list_head *cocci_id/* fs/erofs/zdata.c 978 */;
	struct z_erofs_decompressqueue cocci_id/* fs/erofs/zdata.c 966 */;
	struct work_struct *cocci_id/* fs/erofs/zdata.c 963 */;
	enum z_erofs_collectmode{COLLECT_SECONDARY, COLLECT_PRIMARY, COLLECT_PRIMARY_HOOKED, COLLECT_PRIMARY_FOLLOWED_NOINPLACE, COLLECT_PRIMARY_FOLLOWED,} cocci_id/* fs/erofs/zdata.c 95 */;
	const struct z_erofs_decompressqueue *cocci_id/* fs/erofs/zdata.c 942 */;
	struct z_erofs_decompress_req cocci_id/* fs/erofs/zdata.c 881 */;
	int __init cocci_id/* fs/erofs/zdata.c 80 */;
	struct page *cocci_id/* fs/erofs/zdata.c 749 */[Z_EROFS_VMAP_ONSTACK_PAGES];
	struct z_erofs_pagevec_ctor cocci_id/* fs/erofs/zdata.c 747 */;
	struct erofs_sb_info *const cocci_id/* fs/erofs/zdata.c 745 */;
	struct bvec_iter_all cocci_id/* fs/erofs/zdata.c 720 */;
	struct bio_vec *cocci_id/* fs/erofs/zdata.c 719 */;
	blk_status_t cocci_id/* fs/erofs/zdata.c 718 */;
	struct bio *cocci_id/* fs/erofs/zdata.c 714 */;
	struct page *const cocci_id/* fs/erofs/zdata.c 654 */;
	const loff_t cocci_id/* fs/erofs/zdata.c 571 */;
	struct z_erofs_collector *const cocci_id/* fs/erofs/zdata.c 570 */;
	struct erofs_map_blocks *const cocci_id/* fs/erofs/zdata.c 569 */;
	struct inode *const cocci_id/* fs/erofs/zdata.c 567 */;
	erofs_off_t cocci_id/* fs/erofs/zdata.c 551 */;
	struct z_erofs_decompress_frontend *cocci_id/* fs/erofs/zdata.c 549 */;
	struct z_erofs_collection *cocci_id/* fs/erofs/zdata.c 520 */;
	struct z_erofs_collection *const cocci_id/* fs/erofs/zdata.c 515 */;
	void cocci_id/* fs/erofs/zdata.c 511 */;
	struct z_erofs_collection cocci_id/* fs/erofs/zdata.c 504 */;
	struct rcu_head *cocci_id/* fs/erofs/zdata.c 501 */;
	struct erofs_map_blocks *cocci_id/* fs/erofs/zdata.c 458 */;
	struct inode *cocci_id/* fs/erofs/zdata.c 457 */;
	struct kmem_cache *cocci_id/* fs/erofs/zdata.c 35 */;
	struct workqueue_struct *cocci_id/* fs/erofs/zdata.c 34 */;
	z_erofs_next_pcluster_t *cocci_id/* fs/erofs/zdata.c 312 */;
	enum z_erofs_collectmode cocci_id/* fs/erofs/zdata.c 310 */;
	enum z_erofs_page_type cocci_id/* fs/erofs/zdata.c 292 */;
	tagptr1_t cocci_id/* fs/erofs/zdata.c 29 */;
	unsigned int cocci_id/* fs/erofs/zdata.c 256 */;
	void *cocci_id/* fs/erofs/zdata.c 251 */;
	struct address_space *cocci_id/* fs/erofs/zdata.c 248 */;
	struct page *cocci_id/* fs/erofs/zdata.c 225 */;
	const unsigned int cocci_id/* fs/erofs/zdata.c 217 */;
	struct address_space *const cocci_id/* fs/erofs/zdata.c 216 */;
	struct z_erofs_pcluster cocci_id/* fs/erofs/zdata.c 215 */;
	struct z_erofs_pcluster *const cocci_id/* fs/erofs/zdata.c 214 */;
	struct erofs_workgroup *cocci_id/* fs/erofs/zdata.c 212 */;
	struct erofs_sb_info *cocci_id/* fs/erofs/zdata.c 211 */;
	int cocci_id/* fs/erofs/zdata.c 211 */;
	enum z_erofs_cache_alloctype{DONTALLOC, DELAYEDALLOC,} cocci_id/* fs/erofs/zdata.c 20 */;
	pgoff_t cocci_id/* fs/erofs/zdata.c 172 */;
	struct page **cocci_id/* fs/erofs/zdata.c 171 */;
	const struct z_erofs_pcluster *cocci_id/* fs/erofs/zdata.c 169 */;
	enum z_erofs_cache_alloctype cocci_id/* fs/erofs/zdata.c 166 */;
	struct z_erofs_collector *cocci_id/* fs/erofs/zdata.c 164 */;
	struct page *cocci_id/* fs/erofs/zdata.c 161 */[Z_EROFS_VMAP_GLOBAL_PAGES];
	struct z_erofs_decompress_frontend {
		struct inode *const inode;
		struct z_erofs_collector clt;
		struct erofs_map_blocks map;
		bool backmost;
		erofs_off_t headoffset;
	} cocci_id/* fs/erofs/zdata.c 142 */;
	const struct address_space_operations cocci_id/* fs/erofs/zdata.c 1397 */;
	struct z_erofs_collector {
		struct z_erofs_pagevec_ctor vector;
		struct z_erofs_pcluster *pcl,*tailpcl;
		struct z_erofs_collection *cl;
		struct page **compressedpages;
		z_erofs_next_pcluster_t owned_head;
		enum z_erofs_collectmode mode;
	} cocci_id/* fs/erofs/zdata.c 131 */;
	struct z_erofs_decompress_frontend cocci_id/* fs/erofs/zdata.c 1300 */;
	struct file *cocci_id/* fs/erofs/zdata.c 1297 */;
	struct z_erofs_decompressqueue cocci_id/* fs/erofs/zdata.c 1277 */[NR_JOBQUEUES];
	sector_t cocci_id/* fs/erofs/zdata.c 1239 */;
	struct z_erofs_decompressqueue *cocci_id/* fs/erofs/zdata.c 1174 */[NR_JOBQUEUES];
	z_erofs_next_pcluster_t cocci_id/* fs/erofs/zdata.c 1173 */[NR_JOBQUEUES];
	z_erofs_next_pcluster_t *const cocci_id/* fs/erofs/zdata.c 1137 */;
	z_erofs_next_pcluster_t cocci_id/* fs/erofs/zdata.c 1135 */;
	z_erofs_next_pcluster_t cocci_id/* fs/erofs/zdata.c 1134 */[];
	struct z_erofs_pcluster *cocci_id/* fs/erofs/zdata.c 1133 */;
	struct z_erofs_decompressqueue *cocci_id/* fs/erofs/zdata.c 1120 */[];
	enum{JQ_BYPASS, JQ_SUBMIT, NR_JOBQUEUES,} cocci_id/* fs/erofs/zdata.c 1113 */;
	bool *cocci_id/* fs/erofs/zdata.c 1090 */;
	struct super_block *cocci_id/* fs/erofs/zdata.c 1089 */;
	struct z_erofs_decompressqueue *cocci_id/* fs/erofs/zdata.c 1088 */;
	unsigned long cocci_id/* fs/erofs/zdata.c 1041 */;
}