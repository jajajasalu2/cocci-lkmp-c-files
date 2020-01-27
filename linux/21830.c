cocci_test_suite() {
	const uint8_t cocci_id/* lib/xz/xz_dec_bcj.c 93 */[8];
	const bool cocci_id/* lib/xz/xz_dec_bcj.c 90 */[8];
	int cocci_id/* lib/xz/xz_dec_bcj.c 83 */;
	bool cocci_id/* lib/xz/xz_dec_bcj.c 527 */;
	struct xz_buf *cocci_id/* lib/xz/xz_dec_bcj.c 399 */;
	uint8_t *cocci_id/* lib/xz/xz_dec_bcj.c 346 */;
	size_t *cocci_id/* lib/xz/xz_dec_bcj.c 346 */;
	size_t cocci_id/* lib/xz/xz_dec_bcj.c 346 */;
	struct xz_dec_bcj *cocci_id/* lib/xz/xz_dec_bcj.c 345 */;
	void cocci_id/* lib/xz/xz_dec_bcj.c 345 */;
	uint8_t cocci_id/* lib/xz/xz_dec_bcj.c 277 */;
	uint32_t cocci_id/* lib/xz/xz_dec_bcj.c 268 */;
	uint64_t cocci_id/* lib/xz/xz_dec_bcj.c 217 */;
	struct xz_dec_bcj {
		enum{BCJ_X86=4, BCJ_POWERPC=5, BCJ_IA64=6, BCJ_ARM=7, BCJ_ARMTHUMB=8, BCJ_SPARC=9,} type;
		enum xz_ret ret;
		bool single_call;
		uint32_t pos;
		uint32_t x86_prev_mask;
		uint8_t *out;
		size_t out_pos;
		size_t out_size;
		struct {
			size_t filtered;
			size_t size;
			uint8_t buf[16];
		} temp;
	} cocci_id/* lib/xz/xz_dec_bcj.c 19 */;
	const uint8_t cocci_id/* lib/xz/xz_dec_bcj.c 183 */[32];
}
