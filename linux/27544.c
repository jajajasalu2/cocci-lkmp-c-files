cocci_test_suite() {
	struct workspace_manager *cocci_id/* fs/btrfs/compression.c 975 */;
	void cocci_id/* fs/btrfs/compression.c 973 */;
	const struct btrfs_compress_op *const cocci_id/* fs/btrfs/compression.c 907 */[];
	const struct btrfs_compress_op cocci_id/* fs/btrfs/compression.c 903 */;
	struct heuristic_ws *cocci_id/* fs/btrfs/compression.c 878 */;
	struct list_head *cocci_id/* fs/btrfs/compression.c 876 */;
	unsigned int cocci_id/* fs/btrfs/compression.c 876 */;
	struct workspace_manager cocci_id/* fs/btrfs/compression.c 862 */;
	struct heuristic_ws {
		u8 *sample;
		u32 sample_size;
		struct bucket_item *bucket;
		struct bucket_item *bucket_b;
		struct list_head list;
	} cocci_id/* fs/btrfs/compression.c 851 */;
	struct bucket_item {
		u32 count;
	} cocci_id/* fs/btrfs/compression.c 847 */;
	bool cocci_id/* fs/btrfs/compression.c 84 */;
	const char *cocci_id/* fs/btrfs/compression.c 84 */;
	enum btrfs_compression_type cocci_id/* fs/btrfs/compression.c 69 */;
	const char *const cocci_id/* fs/btrfs/compression.c 67 */[];
	u8 *cocci_id/* fs/btrfs/compression.c 666 */;
	const u16 cocci_id/* fs/btrfs/compression.c 665 */;
	struct btrfs_fs_info *cocci_id/* fs/btrfs/compression.c 651 */;
	blk_status_t cocci_id/* fs/btrfs/compression.c 648 */;
	void cocci_id/* fs/btrfs/compression.c 61 */(void);
	size_t cocci_id/* fs/btrfs/compression.c 607 */;
	char *cocci_id/* fs/btrfs/compression.c 606 */;
	struct extent_io_tree *cocci_id/* fs/btrfs/compression.c 544 */;
	struct extent_map_tree *cocci_id/* fs/btrfs/compression.c 543 */;
	struct address_space *cocci_id/* fs/btrfs/compression.c 542 */;
	struct extent_map *cocci_id/* fs/btrfs/compression.c 541 */;
	struct page *cocci_id/* fs/btrfs/compression.c 539 */;
	unsigned long cocci_id/* fs/btrfs/compression.c 534 */;
	struct compressed_bio *cocci_id/* fs/btrfs/compression.c 532 */;
	u64 cocci_id/* fs/btrfs/compression.c 531 */;
	struct inode *cocci_id/* fs/btrfs/compression.c 530 */;
	int cocci_id/* fs/btrfs/compression.c 530 */;
	struct bio_vec *cocci_id/* fs/btrfs/compression.c 525 */;
	struct bio *cocci_id/* fs/btrfs/compression.c 523 */;
	void cocci_id/* fs/btrfs/compression.c 51 */(struct list_head *ws);
	struct list_head *cocci_id/* fs/btrfs/compression.c 50 */(unsigned int level);
	int cocci_id/* fs/btrfs/compression.c 47 */(struct list_head *ws,
						    unsigned char *data_in,
						    struct page *dest_page,
						    unsigned long start_byte,
						    size_t srclen,
						    size_t destlen);
	int cocci_id/* fs/btrfs/compression.c 46 */(struct list_head *ws,
						    struct compressed_bio *cb);
	int cocci_id/* fs/btrfs/compression.c 43 */(struct list_head *ws,
						    struct address_space *mapping,
						    u64 start,
						    struct page **pages,
						    unsigned long *out_pages,
						    unsigned long *total_in,
						    unsigned long *total_out);
	struct cgroup_subsys_state *cocci_id/* fs/btrfs/compression.c 416 */;
	struct page *cocci_id/* fs/btrfs/compression.c 317 */[16];
	const struct compressed_bio *cocci_id/* fs/btrfs/compression.c 313 */;
	struct bvec_iter_all cocci_id/* fs/btrfs/compression.c 288 */;
	u8 cocci_id/* fs/btrfs/compression.c 186 */[BTRFS_CSUM_SIZE];
	const struct btrfs_compress_op *cocci_id/* fs/btrfs/compression.c 1753 */;
	unsigned cocci_id/* fs/btrfs/compression.c 1751 */;
	struct btrfs_inode *cocci_id/* fs/btrfs/compression.c 175 */;
	struct compressed_bio cocci_id/* fs/btrfs/compression.c 171 */;
	u16 cocci_id/* fs/btrfs/compression.c 169 */;
	struct heuristic_ws cocci_id/* fs/btrfs/compression.c 1657 */;
	u8 cocci_id/* fs/btrfs/compression.c 1654 */;
	u32 cocci_id/* fs/btrfs/compression.c 1653 */;
	int cocci_id/* fs/btrfs/compression.c 164 */(struct compressed_bio *cb);
	const u8 *cocci_id/* fs/btrfs/compression.c 1577 */;
	const struct heuristic_ws *cocci_id/* fs/btrfs/compression.c 1548 */;
	struct bucket_item *cocci_id/* fs/btrfs/compression.c 1515 */;
	const u32 cocci_id/* fs/btrfs/compression.c 1514 */;
	u32 cocci_id/* fs/btrfs/compression.c 1418 */[COUNTERS_SIZE];
	struct bio_vec cocci_id/* fs/btrfs/compression.c 1261 */;
	void __cold cocci_id/* fs/btrfs/compression.c 1235 */;
	void __init cocci_id/* fs/btrfs/compression.c 1227 */;
	unsigned char *cocci_id/* fs/btrfs/compression.c 1213 */;
	unsigned long *cocci_id/* fs/btrfs/compression.c 1164 */;
	struct page **cocci_id/* fs/btrfs/compression.c 1163 */;
	int *cocci_id/* fs/btrfs/compression.c 1003 */;
	wait_queue_head_t *cocci_id/* fs/btrfs/compression.c 1002 */;
	atomic_t *cocci_id/* fs/btrfs/compression.c 1001 */;
	spinlock_t *cocci_id/* fs/btrfs/compression.c 1000 */;
}
