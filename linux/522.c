cocci_test_suite() {
	u64 cocci_id/* crypto/aegis128-neon.c 65 */;
	const u8 *cocci_id/* crypto/aegis128-neon.c 56 */;
	unsigned int cocci_id/* crypto/aegis128-neon.c 56 */;
	u8 *cocci_id/* crypto/aegis128-neon.c 55 */;
	union aegis_block *cocci_id/* crypto/aegis128-neon.c 55 */;
	void cocci_id/* crypto/aegis128-neon.c 55 */;
	const void *cocci_id/* crypto/aegis128-neon.c 40 */;
	const union aegis_block *cocci_id/* crypto/aegis128-neon.c 32 */;
	bool cocci_id/* crypto/aegis128-neon.c 22 */;
	int cocci_id/* crypto/aegis128-neon.c 20 */;
	void cocci_id/* crypto/aegis128-neon.c 17 */(void *state,
						     void *tag_xor,
						     uint64_t assoclen,
						     uint64_t cryptlen);
	void cocci_id/* crypto/aegis128-neon.c 15 */(void *state, void *dst,
						     const void *src,
						     unsigned int size);
	void cocci_id/* crypto/aegis128-neon.c 12 */(void *state,
						     const void *msg);
	void cocci_id/* crypto/aegis128-neon.c 11 */(void *state,
						     const void *key,
						     const void *iv);
}
