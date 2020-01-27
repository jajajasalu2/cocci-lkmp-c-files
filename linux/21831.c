cocci_test_suite() {
	enum xz_mode cocci_id/* lib/xz/xz_dec_stream.c 786 */;
	uint32_t cocci_id/* lib/xz/xz_dec_stream.c 605 */;
	bool cocci_id/* lib/xz/xz_dec_stream.c 370 */;
	struct xz_dec *cocci_id/* lib/xz/xz_dec_stream.c 370 */;
	struct xz_buf *cocci_id/* lib/xz/xz_dec_stream.c 370 */;
	enum xz_ret cocci_id/* lib/xz/xz_dec_stream.c 346 */;
	const struct xz_buf *cocci_id/* lib/xz/xz_dec_stream.c 281 */;
	void cocci_id/* lib/xz/xz_dec_stream.c 281 */;
	const uint8_t *cocci_id/* lib/xz/xz_dec_stream.c 271 */;
	struct xz_dec {
		enum{SEQ_STREAM_HEADER, SEQ_BLOCK_START, SEQ_BLOCK_HEADER, SEQ_BLOCK_UNCOMPRESS, SEQ_BLOCK_PADDING, SEQ_BLOCK_CHECK, SEQ_INDEX, SEQ_INDEX_PADDING, SEQ_INDEX_CRC32, SEQ_STREAM_FOOTER,} sequence;
		uint32_t pos;
		vli_type vli;
		size_t in_start;
		size_t out_start;
		uint32_t crc32;
		enum xz_check check_type;
		enum xz_mode mode;
		bool allow_buf_error;
		struct {
			vli_type compressed;
			vli_type uncompressed;
			uint32_t size;
		} block_header;
		struct {
			vli_type compressed;
			vli_type uncompressed;
			vli_type count;
			struct xz_dec_hash hash;
		} block;
		struct {
			enum{SEQ_INDEX_COUNT, SEQ_INDEX_UNPADDED, SEQ_INDEX_UNCOMPRESSED,} sequence;
			vli_type size;
			vli_type count;
			struct xz_dec_hash hash;
		} index;
		struct {
			size_t pos;
			size_t size;
			uint8_t buf[1024];
		} temp;
		struct xz_dec_lzma2 *lzma2;
#ifdef XZ_DEC_BCJ
		struct xz_dec_bcj *bcj;
		bool bcj_active;
#endif
	} cocci_id/* lib/xz/xz_dec_stream.c 20 */;
	vli_type cocci_id/* lib/xz/xz_dec_stream.c 187 */;
	uint8_t cocci_id/* lib/xz/xz_dec_stream.c 178 */;
	size_t *cocci_id/* lib/xz/xz_dec_stream.c 176 */;
	size_t cocci_id/* lib/xz/xz_dec_stream.c 176 */;
	const uint8_t cocci_id/* lib/xz/xz_dec_stream.c 141 */[16];
	struct xz_dec_hash {
		vli_type unpadded;
		vli_type uncompressed;
		uint32_t crc32;
	} cocci_id/* lib/xz/xz_dec_stream.c 14 */;
}
