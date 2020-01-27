cocci_test_suite() {
	char *cocci_id/* arch/s390/boot/kaslr.c 78 */;
	unsigned long *cocci_id/* arch/s390/boot/kaslr.c 75 */;
	u8 *cocci_id/* arch/s390/boot/kaslr.c 65 */;
	__u64 cocci_id/* arch/s390/boot/kaslr.c 58 */[4];
	struct prno_parm cocci_id/* arch/s390/boot/kaslr.c 57 */;
	struct prng_parm cocci_id/* arch/s390/boot/kaslr.c 47 */;
	unsigned long cocci_id/* arch/s390/boot/kaslr.c 45 */;
	int cocci_id/* arch/s390/boot/kaslr.c 31 */;
	void cocci_id/* arch/s390/boot/kaslr.c 31 */;
	struct prng_parm {
		u8 parm_block[32];
		u32 reseed_counter;
		u64 byte_counter;
	} cocci_id/* arch/s390/boot/kaslr.c 25 */;
	struct prno_parm {
		u32 res;
		u32 reseed_counter;
		u64 stream_bytes;
		u8 V[112];
		u8 C[112];
	} cocci_id/* arch/s390/boot/kaslr.c 17 */;
}
