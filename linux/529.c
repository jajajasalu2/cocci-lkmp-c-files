cocci_test_suite() {
	struct rand_data {
		__u64 data;
		__u64 old_data;
		__u64 prev_time;
#define DATA_SIZE_BITS ((sizeof(__u64)) * 8)
			__u64 last_delta;
		__s64 last_delta2;
		unsigned int osr;
#define JENT_MEMORY_BLOCKS 64
#define JENT_MEMORY_BLOCKSIZE 32
#define JENT_MEMORY_ACCESSLOOPS 128
#define JENT_MEMORY_SIZE (JENT_MEMORY_BLOCKS * JENT_MEMORY_BLOCKSIZE)
			unsigned char *mem;
		unsigned int memlocation;
		unsigned int memblocks;
		unsigned int memblocksize;
		unsigned int memaccessloops;
	} cocci_id/* crypto/jitterentropy.c 63 */;
	void *cocci_id/* crypto/jitterentropy.c 60 */;
	unsigned int cocci_id/* crypto/jitterentropy.c 59 */;
	long long cocci_id/* crypto/jitterentropy.c 58 */;
	unsigned long long cocci_id/* crypto/jitterentropy.c 57 */;
	__u64 cocci_id/* crypto/jitterentropy.c 514 */;
	int cocci_id/* crypto/jitterentropy.c 511 */;
	void cocci_id/* crypto/jitterentropy.c 504 */;
	struct rand_data cocci_id/* crypto/jitterentropy.c 475 */;
	struct rand_data *cocci_id/* crypto/jitterentropy.c 470 */;
	__s64 cocci_id/* crypto/jitterentropy.c 316 */;
	unsigned char *cocci_id/* crypto/jitterentropy.c 276 */;
}
