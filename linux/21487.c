cocci_test_suite() {
	struct sha1_ce_state cocci_id/* arch/arm64/crypto/sha1-ce-glue.c 94 */;
	struct shash_alg cocci_id/* arch/arm64/crypto/sha1-ce-glue.c 89 */;
	sha1_block_fn *cocci_id/* arch/arm64/crypto/sha1-ce-glue.c 84 */;
	struct sha1_ce_state *cocci_id/* arch/arm64/crypto/sha1-ce-glue.c 77 */;
	u8 *cocci_id/* arch/arm64/crypto/sha1-ce-glue.c 75 */;
	struct shash_desc *cocci_id/* arch/arm64/crypto/sha1-ce-glue.c 75 */;
	int cocci_id/* arch/arm64/crypto/sha1-ce-glue.c 75 */;
	bool cocci_id/* arch/arm64/crypto/sha1-ce-glue.c 55 */;
	unsigned int cocci_id/* arch/arm64/crypto/sha1-ce-glue.c 52 */;
	const u8 *cocci_id/* arch/arm64/crypto/sha1-ce-glue.c 51 */;
	const u32 cocci_id/* arch/arm64/crypto/sha1-ce-glue.c 31 */;
	void cocci_id/* arch/arm64/crypto/sha1-ce-glue.c 28 */(struct sha1_ce_state *sst,
							       const u8 *src,
							       int blocks);
	struct sha1_ce_state {
		struct sha1_state sst;
		u32 finalize;
	} cocci_id/* arch/arm64/crypto/sha1-ce-glue.c 23 */;
	void __exit cocci_id/* arch/arm64/crypto/sha1-ce-glue.c 110 */;
	void cocci_id/* arch/arm64/crypto/sha1-ce-glue.c 110 */;
	int __init cocci_id/* arch/arm64/crypto/sha1-ce-glue.c 105 */;
}
