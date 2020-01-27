cocci_test_suite() {
	const u8 cocci_id/* crypto/blake2b_generic.c 99 */[BLAKE2B_BLOCKBYTES];
	struct blake2b_state *cocci_id/* crypto/blake2b_generic.c 98 */;
	void cocci_id/* crypto/blake2b_generic.c 98 */;
	const u64 cocci_id/* crypto/blake2b_generic.c 68 */;
	const u8 cocci_id/* crypto/blake2b_generic.c 53 */[12][16];
	const u64 cocci_id/* crypto/blake2b_generic.c 46 */[8];
	struct blake2b_state {
		u64 h[8];
		u64 t[2];
		u64 f[2];
		u8 buf[BLAKE2B_BLOCKBYTES];
		size_t buflen;
	} cocci_id/* crypto/blake2b_generic.c 38 */;
	enum blake2b_constant{BLAKE2B_BLOCKBYTES=128, BLAKE2B_KEYBYTES=64,} cocci_id/* crypto/blake2b_generic.c 33 */;
	void __exit cocci_id/* crypto/blake2b_generic.c 302 */;
	int __init cocci_id/* crypto/blake2b_generic.c 297 */;
	struct blake2b_state cocci_id/* crypto/blake2b_generic.c 251 */;
	struct blake2b_tfm_ctx cocci_id/* crypto/blake2b_generic.c 244 */;
	struct shash_alg cocci_id/* crypto/blake2b_generic.c 237 */[];
	u64 cocci_id/* crypto/blake2b_generic.c 224 */;
	const int cocci_id/* crypto/blake2b_generic.c 219 */;
	u8 *cocci_id/* crypto/blake2b_generic.c 216 */;
	struct shash_desc *cocci_id/* crypto/blake2b_generic.c 216 */;
	int cocci_id/* crypto/blake2b_generic.c 216 */;
	const size_t cocci_id/* crypto/blake2b_generic.c 188 */;
	struct blake2b_tfm_ctx *cocci_id/* crypto/blake2b_generic.c 163 */;
	unsigned int cocci_id/* crypto/blake2b_generic.c 146 */;
	const u8 *cocci_id/* crypto/blake2b_generic.c 145 */;
	struct crypto_shash *cocci_id/* crypto/blake2b_generic.c 145 */;
	struct blake2b_tfm_ctx {
		u8 key[BLAKE2B_KEYBYTES];
		unsigned int keylen;
	} cocci_id/* crypto/blake2b_generic.c 140 */;
	size_t cocci_id/* crypto/blake2b_generic.c 103 */;
	u64 cocci_id/* crypto/blake2b_generic.c 101 */[16];
}
