cocci_test_suite() {
	u8 *const cocci_id/* fs/erofs/decompressor.c 94 */;
	u8 *cocci_id/* fs/erofs/decompressor.c 87 */;
	struct z_erofs_decompress_req *cocci_id/* fs/erofs/decompressor.c 86 */;
	void *cocci_id/* fs/erofs/decompressor.c 86 */;
	struct page *cocci_id/* fs/erofs/decompressor.c 45 */;
	unsigned long cocci_id/* fs/erofs/decompressor.c 37 */[DIV_ROUND_UP(LZ4_MAX_DISTANCE_PAGES,
									    BITS_PER_LONG)];
	struct page *cocci_id/* fs/erofs/decompressor.c 36 */[LZ4_MAX_DISTANCE_PAGES];
	struct list_head *cocci_id/* fs/erofs/decompressor.c 332 */;
	int cocci_id/* fs/erofs/decompressor.c 331 */;
	unsigned char *cocci_id/* fs/erofs/decompressor.c 296 */;
	const struct z_erofs_decompress_req *cocci_id/* fs/erofs/decompressor.c 290 */;
	const struct z_erofs_decompressor *cocci_id/* fs/erofs/decompressor.c 224 */;
	uint cocci_id/* fs/erofs/decompressor.c 207 */;
	char *cocci_id/* fs/erofs/decompressor.c 204 */;
	struct page *const cocci_id/* fs/erofs/decompressor.c 201 */;
	struct z_erofs_decompressor {
		int (*prepare_destpages)(struct z_erofs_decompress_req *rq,
					 struct list_head *pagepool);
		int (*decompress)(struct z_erofs_decompress_req *rq, u8 *out);
		char *name;
	} cocci_id/* fs/erofs/decompressor.c 20 */;
	const unsigned int cocci_id/* fs/erofs/decompressor.c 197 */;
	unsigned int cocci_id/* fs/erofs/decompressor.c 194 */;
	unsigned short cocci_id/* fs/erofs/decompressor.c 193 */;
	const char *cocci_id/* fs/erofs/decompressor.c 192 */;
	struct page **cocci_id/* fs/erofs/decompressor.c 192 */;
	void cocci_id/* fs/erofs/decompressor.c 192 */;
	struct z_erofs_decompressor cocci_id/* fs/erofs/decompressor.c 181 */[];
	const uint cocci_id/* fs/erofs/decompressor.c 145 */;
	bool cocci_id/* fs/erofs/decompressor.c 117 */;
}
