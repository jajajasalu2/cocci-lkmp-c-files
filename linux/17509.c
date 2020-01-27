cocci_test_suite() {
	unsigned int cocci_id/* arch/powerpc/crypto/aes-spe-glue.c 93 */;
	void cocci_id/* arch/powerpc/crypto/aes-spe-glue.c 75 */(u32 *key_dec,
								 u32 *key_enc,
								 unsigned int key_len);
	void cocci_id/* arch/powerpc/crypto/aes-spe-glue.c 71 */(u32 *key_enc,
								 const u8 *key);
	void cocci_id/* arch/powerpc/crypto/aes-spe-glue.c 68 */(u8 *out,
								 const u8 *in,
								 u32 *key_dec,
								 u32 rounds,
								 u32 bytes,
								 u8 *iv,
								 u32 *key_twk);
	void cocci_id/* arch/powerpc/crypto/aes-spe-glue.c 66 */(u8 *out,
								 const u8 *in,
								 u32 *key_enc,
								 u32 rounds,
								 u32 bytes,
								 u8 *iv,
								 u32 *key_twk);
	void cocci_id/* arch/powerpc/crypto/aes-spe-glue.c 64 */(u8 *out,
								 const u8 *in,
								 u32 *key_enc,
								 u32 rounds,
								 u32 bytes,
								 u8 *iv);
	void cocci_id/* arch/powerpc/crypto/aes-spe-glue.c 62 */(u8 *out,
								 const u8 *in,
								 u32 *key_dec,
								 u32 rounds,
								 u32 bytes,
								 u8 *iv);
	void cocci_id/* arch/powerpc/crypto/aes-spe-glue.c 58 */(u8 *out,
								 const u8 *in,
								 u32 *key_dec,
								 u32 rounds,
								 u32 bytes);
	void cocci_id/* arch/powerpc/crypto/aes-spe-glue.c 56 */(u8 *out,
								 const u8 *in,
								 u32 *key_enc,
								 u32 rounds,
								 u32 bytes);
	void cocci_id/* arch/powerpc/crypto/aes-spe-glue.c 55 */(u8 *out,
								 const u8 *in,
								 u32 *key_dec,
								 u32 rounds);
	void cocci_id/* arch/powerpc/crypto/aes-spe-glue.c 54 */(u8 *out,
								 const u8 *in,
								 u32 *key_enc,
								 u32 rounds);
	void __exit cocci_id/* arch/powerpc/crypto/aes-spe-glue.c 514 */;
	int cocci_id/* arch/powerpc/crypto/aes-spe-glue.c 501 */;
	int __init cocci_id/* arch/powerpc/crypto/aes-spe-glue.c 499 */;
	struct ppc_xts_ctx cocci_id/* arch/powerpc/crypto/aes-spe-glue.c 488 */;
	struct ppc_xts_ctx {
		u32 key_enc[AES_MAX_KEYLENGTH_U32];
		u32 key_dec[AES_MAX_KEYLENGTH_U32];
		u32 key_twk[AES_MAX_KEYLENGTH_U32];
		u32 rounds;
	} cocci_id/* arch/powerpc/crypto/aes-spe-glue.c 47 */;
	struct skcipher_alg cocci_id/* arch/powerpc/crypto/aes-spe-glue.c 443 */[];
	struct ppc_aes_ctx cocci_id/* arch/powerpc/crypto/aes-spe-glue.c 429 */;
	struct crypto_alg cocci_id/* arch/powerpc/crypto/aes-spe-glue.c 423 */;
	struct ppc_aes_ctx {
		u32 key_enc[AES_MAX_KEYLENGTH_U32];
		u32 key_dec[AES_MAX_KEYLENGTH_U32];
		u32 rounds;
	} cocci_id/* arch/powerpc/crypto/aes-spe-glue.c 41 */;
	le128 *cocci_id/* arch/powerpc/crypto/aes-spe-glue.c 400 */;
	le128 cocci_id/* arch/powerpc/crypto/aes-spe-glue.c 376 */;
	u8 cocci_id/* arch/powerpc/crypto/aes-spe-glue.c 375 */[3][AES_BLOCK_SIZE];
	struct skcipher_request cocci_id/* arch/powerpc/crypto/aes-spe-glue.c 374 */;
	u8 cocci_id/* arch/powerpc/crypto/aes-spe-glue.c 337 */[2][AES_BLOCK_SIZE];
	u32 *cocci_id/* arch/powerpc/crypto/aes-spe-glue.c 303 */;
	struct ppc_xts_ctx *cocci_id/* arch/powerpc/crypto/aes-spe-glue.c 299 */;
	struct skcipher_walk cocci_id/* arch/powerpc/crypto/aes-spe-glue.c 233 */;
	bool cocci_id/* arch/powerpc/crypto/aes-spe-glue.c 229 */;
	struct skcipher_request *cocci_id/* arch/powerpc/crypto/aes-spe-glue.c 229 */;
	struct ppc_aes_ctx *cocci_id/* arch/powerpc/crypto/aes-spe-glue.c 183 */;
	const u8 *cocci_id/* arch/powerpc/crypto/aes-spe-glue.c 181 */;
	u8 *cocci_id/* arch/powerpc/crypto/aes-spe-glue.c 181 */;
	struct crypto_tfm *cocci_id/* arch/powerpc/crypto/aes-spe-glue.c 181 */;
	void cocci_id/* arch/powerpc/crypto/aes-spe-glue.c 181 */;
	struct crypto_skcipher *cocci_id/* arch/powerpc/crypto/aes-spe-glue.c 124 */;
}
