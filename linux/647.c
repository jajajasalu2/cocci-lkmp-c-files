cocci_test_suite() {
	const void *cocci_id/* crypto/aegis128-core.c 98 */;
	void cocci_id/* crypto/aegis128-core.c 70 */(struct aegis_state *state,
						     union aegis_block *tag_xor,
						     u64 assoclen,
						     u64 cryptlen);
	void cocci_id/* crypto/aegis128-core.c 68 */(struct aegis_state *state,
						     u8 *dst, const u8 *src,
						     unsigned int size);
	void cocci_id/* crypto/aegis128-core.c 63 */(struct aegis_state *state,
						     const union aegis_block *key,
						     const u8 *iv);
	void cocci_id/* crypto/aegis128-core.c 62 */(struct aegis_state *state,
						     const void *msg);
	bool cocci_id/* crypto/aegis128-core.c 61 */(void);
	bool cocci_id/* crypto/aegis128-core.c 52 */;
	void cocci_id/* crypto/aegis128-core.c 52 */;
	void __exit cocci_id/* crypto/aegis128-core.c 491 */;
	int __init cocci_id/* crypto/aegis128-core.c 482 */;
	struct aegis_ctx cocci_id/* crypto/aegis128-core.c 470 */;
	struct aead_alg cocci_id/* crypto/aegis128-core.c 458 */;
	struct aegis_state cocci_id/* crypto/aegis128-core.c 434 */;
	struct skcipher_walk cocci_id/* crypto/aegis128-core.c 433 */;
	struct aegis_ctx *cocci_id/* crypto/aegis128-core.c 432 */;
	union aegis_block cocci_id/* crypto/aegis128-core.c 429 */;
	struct crypto_aead *cocci_id/* crypto/aegis128-core.c 428 */;
	const u8 cocci_id/* crypto/aegis128-core.c 427 */[AEGIS128_MAX_AUTH_SIZE];
	struct aead_request *cocci_id/* crypto/aegis128-core.c 425 */;
	int cocci_id/* crypto/aegis128-core.c 425 */;
	const union aegis_block cocci_id/* crypto/aegis128-core.c 41 */[2];
	__ro_after_init cocci_id/* crypto/aegis128-core.c 39 */( );
	u64 cocci_id/* crypto/aegis128-core.c 350 */;
	struct aegis_ctx {
		union aegis_block key;
	} cocci_id/* crypto/aegis128-core.c 35 */;
	void (*cocci_id/* crypto/aegis128-core.c 329 */)(struct aegis_state *state,
							 u8 *dst,
							 const u8 *src,
							 unsigned int size);
	struct skcipher_walk *cocci_id/* crypto/aegis128-core.c 328 */;
	struct aegis_state {
		union aegis_block blocks[AEGIS128_STATE_BLOCKS];
	} cocci_id/* crypto/aegis128-core.c 31 */;
	void *cocci_id/* crypto/aegis128-core.c 292 */;
	struct scatter_walk cocci_id/* crypto/aegis128-core.c 284 */;
	struct scatterlist *cocci_id/* crypto/aegis128-core.c 281 */;
	union aegis_block *cocci_id/* crypto/aegis128-core.c 225 */;
	u8 *cocci_id/* crypto/aegis128-core.c 218 */;
	const union aegis_block *cocci_id/* crypto/aegis128-core.c 138 */;
	const u8 *cocci_id/* crypto/aegis128-core.c 135 */;
	unsigned int cocci_id/* crypto/aegis128-core.c 135 */;
	struct aegis_state *cocci_id/* crypto/aegis128-core.c 134 */;
}
