cocci_test_suite() {
	struct btrfs_log_ctx cocci_id/* fs/btrfs/inode.c 9869 */;
	const struct path *cocci_id/* fs/btrfs/inode.c 9486 */;
	struct kstat *cocci_id/* fs/btrfs/inode.c 9486 */;
	struct btrfs_free_space cocci_id/* fs/btrfs/inode.c 9469 */;
	struct btrfs_path cocci_id/* fs/btrfs/inode.c 9463 */;
	struct btrfs_trans_handle cocci_id/* fs/btrfs/inode.c 9457 */;
	struct btrfs_inode cocci_id/* fs/btrfs/inode.c 9450 */;
	int __init cocci_id/* fs/btrfs/inode.c 9447 */;
	void __cold cocci_id/* fs/btrfs/inode.c 9433 */;
	void cocci_id/* fs/btrfs/inode.c 93 */(struct inode *inode,
					       const u64 offset,
					       const u64 bytes,
					       const bool uptodate);
	struct super_block *cocci_id/* fs/btrfs/inode.c 9299 */;
	vm_fault_t cocci_id/* fs/btrfs/inode.c 8966 */;
	struct vm_fault *cocci_id/* fs/btrfs/inode.c 8966 */;
	struct btrfs_ordered_inode_tree *cocci_id/* fs/btrfs/inode.c 8888 */;
	gfp_t cocci_id/* fs/btrfs/inode.c 8820 */;
	struct page *cocci_id/* fs/btrfs/inode.c 8820 */;
	unsigned cocci_id/* fs/btrfs/inode.c 8815 */;
	struct address_space *cocci_id/* fs/btrfs/inode.c 8814 */;
	__u64 cocci_id/* fs/btrfs/inode.c 8764 */;
	struct fiemap_extent_info *cocci_id/* fs/btrfs/inode.c 8763 */;
	struct extent_map *cocci_id/* fs/btrfs/inode.c 87 */(struct inode *inode,
							     u64 start,
							     u64 len,
							     u64 orig_start,
							     u64 block_start,
							     u64 block_len,
							     u64 orig_block_len,
							     u64 ram_bytes,
							     int compress_type,
							     int type);
	struct extent_changeset *cocci_id/* fs/btrfs/inode.c 8660 */;
	struct btrfs_dio_data cocci_id/* fs/btrfs/inode.c 8659 */;
	struct file *cocci_id/* fs/btrfs/inode.c 8656 */;
	struct kiocb *cocci_id/* fs/btrfs/inode.c 8654 */;
	struct iov_iter *cocci_id/* fs/btrfs/inode.c 8654 */;
	ssize_t cocci_id/* fs/btrfs/inode.c 8654 */;
	const struct iov_iter *cocci_id/* fs/btrfs/inode.c 8622 */;
	u32 *cocci_id/* fs/btrfs/inode.c 8370 */;
	unsigned long long cocci_id/* fs/btrfs/inode.c 8314 */;
	struct btrfs_dio_private *cocci_id/* fs/btrfs/inode.c 8306 */;
	int cocci_id/* fs/btrfs/inode.c 83 */(struct inode *inode,
					      struct page *locked_page,
					      u64 start, u64 end,
					      int *page_started,
					      unsigned long *nr_written,
					      int unlock);
	struct btrfs_workqueue *cocci_id/* fs/btrfs/inode.c 8242 */;
	struct btrfs_ordered_extent *cocci_id/* fs/btrfs/inode.c 8241 */;
	const bool cocci_id/* fs/btrfs/inode.c 8238 */;
	const u64 cocci_id/* fs/btrfs/inode.c 8237 */;
	int cocci_id/* fs/btrfs/inode.c 82 */(struct btrfs_ordered_extent *ordered_extent);
	int cocci_id/* fs/btrfs/inode.c 81 */(struct inode *inode,
					      bool skip_writeback);
	struct bvec_iter_all cocci_id/* fs/btrfs/inode.c 8089 */;
	struct bio_vec *cocci_id/* fs/btrfs/inode.c 8085 */;
	struct btrfs_retry_complete *cocci_id/* fs/btrfs/inode.c 8081 */;
	int cocci_id/* fs/btrfs/inode.c 8029 */;
	u32 cocci_id/* fs/btrfs/inode.c 8028 */;
	unsigned int cocci_id/* fs/btrfs/inode.c 8027 */;
	u64 cocci_id/* fs/btrfs/inode.c 8026 */;
	struct btrfs_retry_complete cocci_id/* fs/btrfs/inode.c 8025 */;
	struct bvec_iter cocci_id/* fs/btrfs/inode.c 8024 */;
	struct bio_vec cocci_id/* fs/btrfs/inode.c 8023 */;
	struct btrfs_fs_info *cocci_id/* fs/btrfs/inode.c 8022 */;
	struct btrfs_io_bio *cocci_id/* fs/btrfs/inode.c 8020 */;
	blk_status_t cocci_id/* fs/btrfs/inode.c 8019 */;
	struct inode *cocci_id/* fs/btrfs/inode.c 8019 */;
	int cocci_id/* fs/btrfs/inode.c 80 */(struct inode *inode,
					      struct iattr *attr);
	struct btrfs_retry_complete {
		struct completion done;
		struct inode *inode;
		u64 start;
		int uptodate;
	} cocci_id/* fs/btrfs/inode.c 7985 */;
	bio_end_io_t *cocci_id/* fs/btrfs/inode.c 7934 */;
	struct io_failure_record *cocci_id/* fs/btrfs/inode.c 7897 */;
	struct kmem_cache *cocci_id/* fs/btrfs/inode.c 78 */;
	struct btrfs_dio_data *cocci_id/* fs/btrfs/inode.c 7775 */;
	struct buffer_head *cocci_id/* fs/btrfs/inode.c 7770 */;
	sector_t cocci_id/* fs/btrfs/inode.c 7769 */;
	struct async_extent cocci_id/* fs/btrfs/inode.c 769 */;
	struct extent_map **cocci_id/* fs/btrfs/inode.c 7671 */;
	const int cocci_id/* fs/btrfs/inode.c 7306 */;
	const struct extent_io_ops cocci_id/* fs/btrfs/inode.c 72 */;
	const struct file_operations cocci_id/* fs/btrfs/inode.c 71 */;
	struct btrfs_file_extent_item cocci_id/* fs/btrfs/inode.c 7014 */;
	const struct address_space_operations cocci_id/* fs/btrfs/inode.c 70 */;
	struct btrfs_file_extent_item *cocci_id/* fs/btrfs/inode.c 6957 */;
	umode_t cocci_id/* fs/btrfs/inode.c 6675 */;
	dev_t cocci_id/* fs/btrfs/inode.c 6611 */;
	struct dentry *cocci_id/* fs/btrfs/inode.c 6599 */;
	struct timespec64 cocci_id/* fs/btrfs/inode.c 6565 */;
	const struct inode_operations cocci_id/* fs/btrfs/inode.c 65 */;
	struct btrfs_inode_ref cocci_id/* fs/btrfs/inode.c 6465 */;
	struct btrfs_inode_item cocci_id/* fs/btrfs/inode.c 6417 */;
	u32 cocci_id/* fs/btrfs/inode.c 6351 */[2];
	struct btrfs_key cocci_id/* fs/btrfs/inode.c 6350 */[2];
	struct btrfs_inode_ref *cocci_id/* fs/btrfs/inode.c 6349 */;
	struct btrfs_inode_item *cocci_id/* fs/btrfs/inode.c 6346 */;
	struct timespec64 *cocci_id/* fs/btrfs/inode.c 6195 */;
	struct btrfs_dir_item cocci_id/* fs/btrfs/inode.c 6084 */;
	struct list_head cocci_id/* fs/btrfs/inode.c 6025 */;
	struct dir_entry cocci_id/* fs/btrfs/inode.c 6008 */;
	struct dir_entry *cocci_id/* fs/btrfs/inode.c 6000 */;
	struct dir_context *cocci_id/* fs/btrfs/inode.c 5997 */;
	struct dir_entry {
		u64 ino;
		u64 offset;
		unsigned type;
		int name_len;
	} cocci_id/* fs/btrfs/inode.c 5990 */;
	struct btrfs_file_private cocci_id/* fs/btrfs/inode.c 5978 */;
	struct btrfs_file_private *cocci_id/* fs/btrfs/inode.c 5976 */;
	const struct dentry *cocci_id/* fs/btrfs/inode.c 5936 */;
	u8 cocci_id/* fs/btrfs/inode.c 5856 */;
	struct btrfs_key *cocci_id/* fs/btrfs/inode.c 5824 */;
	struct btrfs_dio_data {
		u64 reserve;
		u64 unsubmitted_oe_range_start;
		u64 unsubmitted_oe_range_end;
		int overwrite;
	} cocci_id/* fs/btrfs/inode.c 58 */;
	struct btrfs_iget_args cocci_id/* fs/btrfs/inode.c 5774 */;
	struct btrfs_iget_args *cocci_id/* fs/btrfs/inode.c 5764 */;
	struct btrfs_root_ref cocci_id/* fs/btrfs/inode.c 5664 */;
	struct btrfs_root_ref *cocci_id/* fs/btrfs/inode.c 5639 */;
	struct btrfs_root **cocci_id/* fs/btrfs/inode.c 5635 */;
	struct btrfs_block_rsv *cocci_id/* fs/btrfs/inode.c 5488 */;
	struct extent_state cocci_id/* fs/btrfs/inode.c 5402 */;
	struct extent_map cocci_id/* fs/btrfs/inode.c 5364 */;
	struct iattr *cocci_id/* fs/btrfs/inode.c 5307 */;
	struct btrfs_iget_args {
		struct btrfs_key *location;
		struct btrfs_root *root;
	} cocci_id/* fs/btrfs/inode.c 53 */;
	struct extent_io_tree *cocci_id/* fs/btrfs/inode.c 5132 */;
	pgoff_t cocci_id/* fs/btrfs/inode.c 4978 */;
	struct btrfs_ref cocci_id/* fs/btrfs/inode.c 4872 */;
	struct btrfs_block_rsv cocci_id/* fs/btrfs/inode.c 4441 */;
	struct btrfs_dir_item *cocci_id/* fs/btrfs/inode.c 4076 */;
	struct btrfs_path *cocci_id/* fs/btrfs/inode.c 4074 */;
	const char *cocci_id/* fs/btrfs/inode.c 4071 */;
	struct btrfs_map_token cocci_id/* fs/btrfs/inode.c 3940 */;
	struct async_extent *cocci_id/* fs/btrfs/inode.c 389 */;
	struct btrfs_inode_extref *cocci_id/* fs/btrfs/inode.c 3878 */;
	unsigned long cocci_id/* fs/btrfs/inode.c 386 */;
	struct page **cocci_id/* fs/btrfs/inode.c 385 */;
	struct async_chunk *cocci_id/* fs/btrfs/inode.c 382 */;
	struct async_cow {
		atomic_t num_chunks;
		struct async_chunk chunks[];
	} cocci_id/* fs/btrfs/inode.c 376 */;
	int *cocci_id/* fs/btrfs/inode.c 3680 */;
	struct extent_buffer *cocci_id/* fs/btrfs/inode.c 3678 */;
	struct async_chunk {
		struct inode *inode;
		struct page *locked_page;
		u64 start;
		u64 end;
		unsigned int write_flags;
		struct list_head extents;
		struct cgroup_subsys_state *blkcg_css;
		struct btrfs_work work;
		atomic_t *pending;
	} cocci_id/* fs/btrfs/inode.c 364 */;
	struct async_extent {
		u64 start;
		u64 ram_size;
		u64 compressed_size;
		struct page **pages;
		unsigned long nr_pages;
		int compress_type;
		struct list_head list;
	} cocci_id/* fs/btrfs/inode.c 354 */;
	u8 cocci_id/* fs/btrfs/inode.c 3325 */[BTRFS_CSUM_SIZE];
	u8 *cocci_id/* fs/btrfs/inode.c 3324 */;
	u16 cocci_id/* fs/btrfs/inode.c 3323 */;
	char *cocci_id/* fs/btrfs/inode.c 3322 */;
	size_t cocci_id/* fs/btrfs/inode.c 3318 */;
	struct btrfs_ordered_extent cocci_id/* fs/btrfs/inode.c 3287 */;
	struct new_sa_defrag_extent *cocci_id/* fs/btrfs/inode.c 3067 */;
	struct btrfs_block_group *cocci_id/* fs/btrfs/inode.c 3043 */;
	struct old_sa_defrag_extent *cocci_id/* fs/btrfs/inode.c 2867 */;
	struct sa_defrag_extent_backref cocci_id/* fs/btrfs/inode.c 2475 */;
	struct rb_node *cocci_id/* fs/btrfs/inode.c 2469 */;
	struct rb_node **cocci_id/* fs/btrfs/inode.c 2468 */;
	struct rb_root *cocci_id/* fs/btrfs/inode.c 2465 */;
	struct sa_defrag_extent_backref *cocci_id/* fs/btrfs/inode.c 2432 */;
	struct new_sa_defrag_extent {
		struct rb_root root;
		struct list_head head;
		struct btrfs_path *path;
		struct inode *inode;
		u64 file_pos;
		u64 len;
		u64 bytenr;
		u64 disk_len;
		u8 compress_type;
	} cocci_id/* fs/btrfs/inode.c 2420 */;
	struct old_sa_defrag_extent {
		struct list_head list;
		struct new_sa_defrag_extent *new;
		u64 extent_offset;
		u64 bytenr;
		u64 offset;
		u64 len;
		int count;
	} cocci_id/* fs/btrfs/inode.c 2409 */;
	struct sa_defrag_extent_backref {
		struct rb_node node;
		struct old_sa_defrag_extent *old;
		u64 root_id;
		u64 inum;
		u64 file_pos;
		u64 extent_offset;
		u64 num_bytes;
		u64 generation;
	} cocci_id/* fs/btrfs/inode.c 2398 */;
	struct btrfs_writepage_fixup *cocci_id/* fs/btrfs/inode.c 2290 */;
	struct btrfs_writepage_fixup cocci_id/* fs/btrfs/inode.c 2209 */;
	struct btrfs_writepage_fixup {
		struct page *page;
		struct btrfs_work work;
	} cocci_id/* fs/btrfs/inode.c 2192 */;
	struct extent_state **cocci_id/* fs/btrfs/inode.c 2184 */;
	struct btrfs_ordered_sum *cocci_id/* fs/btrfs/inode.c 2168 */;
	struct list_head *cocci_id/* fs/btrfs/inode.c 2166 */;
	enum btrfs_wq_endio_type cocci_id/* fs/btrfs/inode.c 2110 */;
	struct btrfs_io_geometry cocci_id/* fs/btrfs/inode.c 2049 */;
	struct bio *cocci_id/* fs/btrfs/inode.c 2040 */;
	struct extent_state *cocci_id/* fs/btrfs/inode.c 1960 */;
	unsigned *cocci_id/* fs/btrfs/inode.c 1960 */;
	struct btrfs_inode *cocci_id/* fs/btrfs/inode.c 1877 */;
	struct btrfs_root *cocci_id/* fs/btrfs/inode.c 1876 */;
	void cocci_id/* fs/btrfs/inode.c 1876 */;
	struct writeback_control *cocci_id/* fs/btrfs/inode.c 1736 */;
	unsigned long *cocci_id/* fs/btrfs/inode.c 1735 */;
	const struct qstr *cocci_id/* fs/btrfs/inode.c 151 */;
	int cocci_id/* fs/btrfs/inode.c 140 */(struct inode *inode);
	struct btrfs_ordered_sum cocci_id/* fs/btrfs/inode.c 1341 */;
	const unsigned int cocci_id/* fs/btrfs/inode.c 1229 */;
	struct async_cow *cocci_id/* fs/btrfs/inode.c 1221 */;
	struct cgroup_subsys_state *cocci_id/* fs/btrfs/inode.c 1220 */;
	struct async_chunk cocci_id/* fs/btrfs/inode.c 1200 */;
	struct btrfs_work *cocci_id/* fs/btrfs/inode.c 1196 */;
	const struct dentry_operations cocci_id/* fs/btrfs/inode.c 11081 */;
	struct btrfs_swap_info cocci_id/* fs/btrfs/inode.c 10771 */;
	struct btrfs_device *cocci_id/* fs/btrfs/inode.c 10770 */;
	sector_t *cocci_id/* fs/btrfs/inode.c 10763 */;
	struct btrfs_swap_info *cocci_id/* fs/btrfs/inode.c 10724 */;
	struct swap_info_struct *cocci_id/* fs/btrfs/inode.c 10723 */;
	struct btrfs_swap_info {
		u64 start;
		u64 block_start;
		u64 block_len;
		u64 lowest_ppage;
		u64 highest_ppage;
		unsigned long nr_pages;
		int nr_extents;
	} cocci_id/* fs/btrfs/inode.c 10713 */;
	struct btrfs_swapfile_pin cocci_id/* fs/btrfs/inode.c 10671 */;
	struct btrfs_swapfile_pin *cocci_id/* fs/btrfs/inode.c 10656 */;
	void *cocci_id/* fs/btrfs/inode.c 10652 */;
	bool cocci_id/* fs/btrfs/inode.c 10412 */;
	struct btrfs_key cocci_id/* fs/btrfs/inode.c 10406 */;
	struct extent_map *cocci_id/* fs/btrfs/inode.c 10404 */;
	struct extent_map_tree *cocci_id/* fs/btrfs/inode.c 10403 */;
	struct btrfs_trans_handle *cocci_id/* fs/btrfs/inode.c 10400 */;
	loff_t cocci_id/* fs/btrfs/inode.c 10399 */;
	u64 *cocci_id/* fs/btrfs/inode.c 10399 */;
	struct btrfs_root cocci_id/* fs/btrfs/inode.c 10245 */;
	struct btrfs_delalloc_work *cocci_id/* fs/btrfs/inode.c 10132 */;
	struct btrfs_delalloc_work cocci_id/* fs/btrfs/inode.c 10120 */;
	struct btrfs_delalloc_work {
		struct inode *inode;
		struct completion completion;
		struct list_head list;
		struct btrfs_work work;
	} cocci_id/* fs/btrfs/inode.c 10108 */;
}
