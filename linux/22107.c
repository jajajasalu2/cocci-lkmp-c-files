cocci_test_suite() {
	void *cocci_id/* lib/decompress_unlzma.c 85 */;
	unsigned long cocci_id/* lib/decompress_unlzma.c 85 */;
	long
INIT
 cocci_id/* lib/decompress_unlzma.c 85 */;
	void (*cocci_id/* lib/decompress_unlzma.c 675 */)(char *x);
	long *cocci_id/* lib/decompress_unlzma.c 674 */;
	long (*cocci_id/* lib/decompress_unlzma.c 671 */)(void *,
							  unsigned long);
	unsigned char *cocci_id/* lib/decompress_unlzma.c 670 */;
	long cocci_id/* lib/decompress_unlzma.c 670 */;
	int
INIT
 cocci_id/* lib/decompress_unlzma.c 670 */;
	struct rc {
		long (*fill)(void *, unsigned long);
		uint8_t *ptr;
		uint8_t *buffer;
		uint8_t *buffer_end;
		long buffer_size;
		uint32_t code;
		uint32_t range;
		uint32_t bound;
		void (*error)(char *);
	} cocci_id/* lib/decompress_unlzma.c 67 */;
	struct cstate cocci_id/* lib/decompress_unlzma.c 554 */;
	struct writer cocci_id/* lib/decompress_unlzma.c 553 */;
	struct rc cocci_id/* lib/decompress_unlzma.c 551 */;
	struct lzma_header cocci_id/* lib/decompress_unlzma.c 545 */;
	typeof(x) cocci_id/* lib/decompress_unlzma.c 53 */;
	long long cocci_id/* lib/decompress_unlzma.c 45 */;
	long long
INIT
 cocci_id/* lib/decompress_unlzma.c 42 */;
	uint16_t *cocci_id/* lib/decompress_unlzma.c 348 */;
	struct cstate *cocci_id/* lib/decompress_unlzma.c 348 */;
	struct rc *cocci_id/* lib/decompress_unlzma.c 347 */;
	int cocci_id/* lib/decompress_unlzma.c 336 */;
	uint32_t cocci_id/* lib/decompress_unlzma.c 330 */;
	struct writer *cocci_id/* lib/decompress_unlzma.c 330 */;
	uint8_t cocci_id/* lib/decompress_unlzma.c 316 */;
	int32_t cocci_id/* lib/decompress_unlzma.c 302 */;
	uint8_t
INIT
 cocci_id/* lib/decompress_unlzma.c 298 */;
	size_t
INIT
 cocci_id/* lib/decompress_unlzma.c 292 */;
	struct cstate {
		int state;
		uint32_t rep0,rep1,rep2,rep3;
	} cocci_id/* lib/decompress_unlzma.c 287 */;
	struct writer {
		uint8_t *buffer;
		uint8_t previous_byte;
		size_t buffer_pos;
		int bufsize;
		size_t global_pos;
		long (*flush)(void *, unsigned long);
		struct lzma_header *header;
	} cocci_id/* lib/decompress_unlzma.c 277 */;
	struct lzma_header {
		uint8_t pos;
		uint32_t dict_size;
		uint64_t dst_size;
	}__attribute__((packed)) cocci_id/* lib/decompress_unlzma.c 221 */;
	int *cocci_id/* lib/decompress_unlzma.c 201 */;
	void
INIT
 cocci_id/* lib/decompress_unlzma.c 200 */;
	uint32_t
INIT
 cocci_id/* lib/decompress_unlzma.c 148 */;
	void
INIT
 cocci_id/* lib/decompress_unlzma.c 131 */;
	uint8_t *cocci_id/* lib/decompress_unlzma.c 109 */;
	char *cocci_id/* lib/decompress_unlzma.c 103 */;
}
