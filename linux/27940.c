cocci_test_suite() {
	__u64 cocci_id/* fs/nilfs2/segbuf.c 60 */;
	unsigned long long cocci_id/* fs/nilfs2/segbuf.c 510 */;
	struct nilfs_write_info cocci_id/* fs/nilfs2/segbuf.c 455 */;
	struct nilfs_write_info *cocci_id/* fs/nilfs2/segbuf.c 402 */;
	int cocci_id/* fs/nilfs2/segbuf.c 384 */;
	sector_t cocci_id/* fs/nilfs2/segbuf.c 383 */;
	struct the_nilfs *cocci_id/* fs/nilfs2/segbuf.c 383 */;
	struct bio *cocci_id/* fs/nilfs2/segbuf.c 383 */;
	struct super_block *cocci_id/* fs/nilfs2/segbuf.c 34 */;
	int cocci_id/* fs/nilfs2/segbuf.c 32 */(struct nilfs_segment_buffer *segbuf);
	struct nilfs_segment_buffer *cocci_id/* fs/nilfs2/segbuf.c 315 */;
	u32 cocci_id/* fs/nilfs2/segbuf.c 313 */;
	struct list_head *cocci_id/* fs/nilfs2/segbuf.c 313 */;
	void cocci_id/* fs/nilfs2/segbuf.c 313 */;
	int cocci_id/* fs/nilfs2/segbuf.c 30 */(struct nilfs_segment_buffer *segbuf,
						struct the_nilfs *nilfs);
	struct buffer_head *cocci_id/* fs/nilfs2/segbuf.c 243 */;
	unsigned int cocci_id/* fs/nilfs2/segbuf.c 230 */;
	struct nilfs_super_root *cocci_id/* fs/nilfs2/segbuf.c 228 */;
	unsigned char *cocci_id/* fs/nilfs2/segbuf.c 209 */;
	struct buffer_head cocci_id/* fs/nilfs2/segbuf.c 205 */;
	void *cocci_id/* fs/nilfs2/segbuf.c 202 */;
	struct nilfs_segment_summary *cocci_id/* fs/nilfs2/segbuf.c 201 */;
	struct nilfs_write_info {
		struct the_nilfs *nilfs;
		struct bio *bio;
		int start,end;
		int rest_blocks;
		int max_pages;
		int nr_vecs;
		sector_t blocknr;
	} cocci_id/* fs/nilfs2/segbuf.c 20 */;
	unsigned long cocci_id/* fs/nilfs2/segbuf.c 174 */;
	struct nilfs_segment_summary cocci_id/* fs/nilfs2/segbuf.c 134 */;
	time64_t cocci_id/* fs/nilfs2/segbuf.c 124 */;
	struct buffer_head **cocci_id/* fs/nilfs2/segbuf.c 109 */;
}
