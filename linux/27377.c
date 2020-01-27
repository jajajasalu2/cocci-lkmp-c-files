cocci_test_suite() {
	void *cocci_id/* fs/squashfs/decompressor_multi.c 62 */;
	void cocci_id/* fs/squashfs/decompressor_multi.c 53 */;
	struct decomp_stream {
		void *stream;
		struct list_head list;
	} cocci_id/* fs/squashfs/decompressor_multi.c 47 */;
	struct squashfs_stream {
		void *comp_opts;
		struct list_head strm_list;
		struct mutex mutex;
		int avail_decomp;
		wait_queue_head_t wait;
	} cocci_id/* fs/squashfs/decompressor_multi.c 38 */;
	struct squashfs_page_actor *cocci_id/* fs/squashfs/decompressor_multi.c 184 */;
	struct buffer_head **cocci_id/* fs/squashfs/decompressor_multi.c 183 */;
	int cocci_id/* fs/squashfs/decompressor_multi.c 183 */;
	struct decomp_stream cocci_id/* fs/squashfs/decompressor_multi.c 138 */;
	struct squashfs_stream *cocci_id/* fs/squashfs/decompressor_multi.c 128 */;
	struct squashfs_sb_info *cocci_id/* fs/squashfs/decompressor_multi.c 127 */;
	struct decomp_stream *cocci_id/* fs/squashfs/decompressor_multi.c 127 */;
}
