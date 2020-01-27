cocci_test_suite() {
	struct rc_dec {
		uint32_t range;
		uint32_t code;
		uint32_t init_bytes_left;
		const uint8_t *in;
		size_t in_pos;
		size_t in_limit;
	} cocci_id/* lib/xz/xz_dec_lzma2.c 95 */;
	struct xz_dec_lzma2 *cocci_id/* lib/xz/xz_dec_lzma2.c 846 */;
	uint16_t *cocci_id/* lib/xz/xz_dec_lzma2.c 622 */;
	struct lzma_len_dec *cocci_id/* lib/xz/xz_dec_lzma2.c 619 */;
	struct rc_dec *cocci_id/* lib/xz/xz_dec_lzma2.c 497 */;
	int cocci_id/* lib/xz/xz_dec_lzma2.c 497 */;
	const struct rc_dec *cocci_id/* lib/xz/xz_dec_lzma2.c 472 */;
	struct dictionary {
		uint8_t *buf;
		size_t start;
		size_t pos;
		size_t full;
		size_t limit;
		size_t end;
		uint32_t size;
		uint32_t size_max;
		uint32_t allocated;
		enum xz_mode mode;
	} cocci_id/* lib/xz/xz_dec_lzma2.c 44 */;
	size_t cocci_id/* lib/xz/xz_dec_lzma2.c 418 */;
	uint32_t cocci_id/* lib/xz/xz_dec_lzma2.c 416 */;
	struct xz_buf *cocci_id/* lib/xz/xz_dec_lzma2.c 416 */;
	struct dictionary *cocci_id/* lib/xz/xz_dec_lzma2.c 416 */;
	uint32_t *cocci_id/* lib/xz/xz_dec_lzma2.c 346 */;
	uint8_t cocci_id/* lib/xz/xz_dec_lzma2.c 333 */;
	const struct dictionary *cocci_id/* lib/xz/xz_dec_lzma2.c 320 */;
	bool cocci_id/* lib/xz/xz_dec_lzma2.c 309 */;
	void cocci_id/* lib/xz/xz_dec_lzma2.c 300 */;
	struct xz_dec_lzma2 {
		struct rc_dec rc;
		struct dictionary dict;
		struct lzma2_dec lzma2;
		struct lzma_dec lzma;
		struct {
			uint32_t size;
			uint8_t buf[3 * LZMA_IN_REQUIRED];
		} temp;
	} cocci_id/* lib/xz/xz_dec_lzma2.c 253 */;
	struct lzma2_dec {
		enum lzma2_seq{SEQ_CONTROL, SEQ_UNCOMPRESSED_1, SEQ_UNCOMPRESSED_2, SEQ_COMPRESSED_0, SEQ_COMPRESSED_1, SEQ_PROPERTIES, SEQ_LZMA_PREPARE, SEQ_LZMA_RUN, SEQ_COPY,} sequence;
		enum lzma2_seq next_sequence;
		uint32_t uncompressed;
		uint32_t compressed;
		bool need_dict_reset;
		bool need_props;
	} cocci_id/* lib/xz/xz_dec_lzma2.c 214 */;
	struct lzma_dec {
		uint32_t rep0;
		uint32_t rep1;
		uint32_t rep2;
		uint32_t rep3;
		enum lzma_state state;
		uint32_t len;
		uint32_t lc;
		uint32_t literal_pos_mask;
		uint32_t pos_mask;
		uint16_t is_match[STATES][POS_STATES_MAX];
		uint16_t is_rep[STATES];
		uint16_t is_rep0[STATES];
		uint16_t is_rep1[STATES];
		uint16_t is_rep2[STATES];
		uint16_t is_rep0_long[STATES][POS_STATES_MAX];
		uint16_t dist_slot[DIST_STATES][DIST_SLOTS];
		uint16_t dist_special[FULL_DISTANCES - DIST_MODEL_END];
		uint16_t dist_align[ALIGN_SIZE];
		struct lzma_len_dec match_len_dec;
		struct lzma_len_dec rep_len_dec;
		uint16_t literal[LITERAL_CODERS_MAX][LITERAL_CODER_SIZE];
	} cocci_id/* lib/xz/xz_dec_lzma2.c 132 */;
	struct lzma_len_dec {
		uint16_t choice;
		uint16_t choice2;
		uint16_t low[POS_STATES_MAX][LEN_LOW_SYMBOLS];
		uint16_t mid[POS_STATES_MAX][LEN_MID_SYMBOLS];
		uint16_t high[LEN_HIGH_SYMBOLS];
	} cocci_id/* lib/xz/xz_dec_lzma2.c 115 */;
	enum xz_mode cocci_id/* lib/xz/xz_dec_lzma2.c 1108 */;
}
