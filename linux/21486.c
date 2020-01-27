cocci_test_suite() {
	sha256_block_fn *cocci_id/* arch/arm64/crypto/sha2-ce-glue.c 93 */;
	struct sha256_ce_state *cocci_id/* arch/arm64/crypto/sha2-ce-glue.c 89 */;
	u8 *cocci_id/* arch/arm64/crypto/sha2-ce-glue.c 87 */;
	struct shash_desc *cocci_id/* arch/arm64/crypto/sha2-ce-glue.c 87 */;
	int cocci_id/* arch/arm64/crypto/sha2-ce-glue.c 87 */;
	bool cocci_id/* arch/arm64/crypto/sha2-ce-glue.c 60 */;
	unsigned int cocci_id/* arch/arm64/crypto/sha2-ce-glue.c 57 */;
	const u8 *cocci_id/* arch/arm64/crypto/sha2-ce-glue.c 56 */;
	void cocci_id/* arch/arm64/crypto/sha2-ce-glue.c 36 */(u32 *digest,
							       const u8 *src,
							       int blocks);
	const u32 cocci_id/* arch/arm64/crypto/sha2-ce-glue.c 31 */;
	void cocci_id/* arch/arm64/crypto/sha2-ce-glue.c 28 */(struct sha256_ce_state *sst,
							       const u8 *src,
							       int blocks);
	struct sha256_ce_state {
		struct sha256_state sst;
		u32 finalize;
	} cocci_id/* arch/arm64/crypto/sha2-ce-glue.c 23 */;
	void __exit cocci_id/* arch/arm64/crypto/sha2-ce-glue.c 139 */;
	void cocci_id/* arch/arm64/crypto/sha2-ce-glue.c 139 */;
	int __init cocci_id/* arch/arm64/crypto/sha2-ce-glue.c 134 */;
	struct sha256_ce_state cocci_id/* arch/arm64/crypto/sha2-ce-glue.c 109 */;
	struct shash_alg cocci_id/* arch/arm64/crypto/sha2-ce-glue.c 104 */[];
}
