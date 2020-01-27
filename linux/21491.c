cocci_test_suite() {
	struct mac_desc_ctx cocci_id/* arch/arm64/crypto/aes-glue.c 980 */;
	struct mac_tfm_ctx cocci_id/* arch/arm64/crypto/aes-glue.c 971 */;
	struct shash_alg cocci_id/* arch/arm64/crypto/aes-glue.c 966 */[];
	void cocci_id/* arch/arm64/crypto/aes-glue.c 95 */(u8 out[],
							   const u8 in[],
							   const u32 rk1[],
							   int rounds,
							   int bytes,
							   const u32 rk2[],
							   u8 iv[], int first);
	struct mac_desc_ctx *cocci_id/* arch/arm64/crypto/aes-glue.c 939 */;
	struct mac_tfm_ctx *cocci_id/* arch/arm64/crypto/aes-glue.c 938 */;
	u8 *cocci_id/* arch/arm64/crypto/aes-glue.c 936 */;
	struct shash_desc *cocci_id/* arch/arm64/crypto/aes-glue.c 936 */;
	void cocci_id/* arch/arm64/crypto/aes-glue.c 89 */(u8 out[],
							   const u8 in[],
							   const u32 rk[],
							   int rounds,
							   int blocks,
							   u8 ctr[]);
	u8 cocci_id/* arch/arm64/crypto/aes-glue.c 873 */[];
	const u8 cocci_id/* arch/arm64/crypto/aes-glue.c 872 */[];
	void cocci_id/* arch/arm64/crypto/aes-glue.c 86 */(u8 out[],
							   const u8 in[],
							   const u32 rk[],
							   int rounds,
							   int bytes,
							   const u8 iv[]);
	const u8 cocci_id/* arch/arm64/crypto/aes-glue.c 839 */[3][AES_BLOCK_SIZE];
	u8 cocci_id/* arch/arm64/crypto/aes-glue.c 826 */[AES_BLOCK_SIZE];
	void cocci_id/* arch/arm64/crypto/aes-glue.c 81 */(u8 out[],
							   const u8 in[],
							   const u32 rk[],
							   int rounds,
							   int blocks,
							   u8 iv[]);
	u64 cocci_id/* arch/arm64/crypto/aes-glue.c 805 */;
	const be128 *cocci_id/* arch/arm64/crypto/aes-glue.c 803 */;
	be128 *cocci_id/* arch/arm64/crypto/aes-glue.c 803 */;
	const u8 *cocci_id/* arch/arm64/crypto/aes-glue.c 790 */;
	struct crypto_shash *cocci_id/* arch/arm64/crypto/aes-glue.c 790 */;
	struct crypto_aes_essiv_cbc_ctx cocci_id/* arch/arm64/crypto/aes-glue.c 777 */;
	void cocci_id/* arch/arm64/crypto/aes-glue.c 76 */(u8 out[],
							   const u8 in[],
							   const u32 rk[],
							   int rounds,
							   int blocks);
	struct crypto_aes_xts_ctx cocci_id/* arch/arm64/crypto/aes-glue.c 742 */;
	struct crypto_aes_ctx cocci_id/* arch/arm64/crypto/aes-glue.c 678 */;
	struct skcipher_alg cocci_id/* arch/arm64/crypto/aes-glue.c 670 */[];
	struct crypto_aes_xts_ctx *cocci_id/* arch/arm64/crypto/aes-glue.c 600 */;
	unsigned long cocci_id/* arch/arm64/crypto/aes-glue.c 505 */;
	const struct crypto_aes_ctx *cocci_id/* arch/arm64/crypto/aes-glue.c 504 */;
	u8 __aligned(8) cocci_id/* arch/arm64/crypto/aes-glue.c 481 */[AES_BLOCK_SIZE];
	struct crypto_aes_essiv_cbc_ctx *cocci_id/* arch/arm64/crypto/aes-glue.c 444 */;
	void __maybe_unused cocci_id/* arch/arm64/crypto/aes-glue.c 412 */;
	struct skcipher_request cocci_id/* arch/arm64/crypto/aes-glue.c 354 */;
	struct scatterlist cocci_id/* arch/arm64/crypto/aes-glue.c 353 */[2];
	struct scatterlist *cocci_id/* arch/arm64/crypto/aes-glue.c 352 */;
	struct skcipher_walk cocci_id/* arch/arm64/crypto/aes-glue.c 280 */;
	struct skcipher_request *cocci_id/* arch/arm64/crypto/aes-glue.c 278 */;
	int __maybe_unused cocci_id/* arch/arm64/crypto/aes-glue.c 278 */;
	unsigned int cocci_id/* arch/arm64/crypto/aes-glue.c 266 */;
	struct crypto_aes_ctx *cocci_id/* arch/arm64/crypto/aes-glue.c 264 */;
	struct crypto_skcipher *cocci_id/* arch/arm64/crypto/aes-glue.c 263 */;
	struct skcipher_walk *cocci_id/* arch/arm64/crypto/aes-glue.c 261 */;
	u8 cocci_id/* arch/arm64/crypto/aes-glue.c 171 */[SHA256_DIGEST_SIZE];
	struct mac_desc_ctx {
		unsigned int len;
		u8 dg[AES_BLOCK_SIZE];
	} cocci_id/* arch/arm64/crypto/aes-glue.c 126 */;
	struct mac_tfm_ctx {
		struct crypto_aes_ctx key;
		u8 __aligned(8) consts[];
	} cocci_id/* arch/arm64/crypto/aes-glue.c 121 */;
	struct crypto_aes_essiv_cbc_ctx {
		struct crypto_aes_ctx key1;
		struct crypto_aes_ctx __aligned(8) key2;
		struct crypto_shash *hash;
	} cocci_id/* arch/arm64/crypto/aes-glue.c 115 */;
	struct crypto_aes_xts_ctx {
		struct crypto_aes_ctx key1;
		struct crypto_aes_ctx __aligned(8) key2;
	} cocci_id/* arch/arm64/crypto/aes-glue.c 110 */;
	void cocci_id/* arch/arm64/crypto/aes-glue.c 106 */(const u8 in[],
							    const u32 rk[],
							    int rounds,
							    int blocks,
							    u8 dg[],
							    int enc_before,
							    int enc_after);
	const char *cocci_id/* arch/arm64/crypto/aes-glue.c 1029 */;
	struct simd_skcipher_alg *cocci_id/* arch/arm64/crypto/aes-glue.c 1028 */;
	int __init cocci_id/* arch/arm64/crypto/aes-glue.c 1026 */;
	void cocci_id/* arch/arm64/crypto/aes-glue.c 102 */(u8 out[],
							    const u8 in[],
							    const u32 rk1[],
							    int rounds,
							    int blocks,
							    u8 iv[],
							    const u32 rk2[]);
	int cocci_id/* arch/arm64/crypto/aes-glue.c 1016 */;
	void cocci_id/* arch/arm64/crypto/aes-glue.c 1014 */;
	struct simd_skcipher_alg *cocci_id/* arch/arm64/crypto/aes-glue.c 1012 */[ARRAY_SIZE(aes_algs)];
}
