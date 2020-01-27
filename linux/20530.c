cocci_test_suite() {
	struct simd_skcipher_alg *cocci_id/* arch/x86/crypto/aesni-intel_glue.c 995 */[ARRAY_SIZE(aesni_skciphers)];
	void cocci_id/* arch/x86/crypto/aesni-intel_glue.c 96 */(struct crypto_aes_ctx *ctx,
								 u8 *out,
								 const u8 *in,
								 unsigned int len,
								 u8 *iv);
	struct skcipher_alg cocci_id/* arch/x86/crypto/aesni-intel_glue.c 924 */[];
	void cocci_id/* arch/x86/crypto/aesni-intel_glue.c 92 */(struct crypto_aes_ctx *ctx,
								 u8 *out,
								 const u8 *in,
								 unsigned int len);
	struct crypto_alg cocci_id/* arch/x86/crypto/aesni-intel_glue.c 905 */;
	void cocci_id/* arch/x86/crypto/aesni-intel_glue.c 88 */(struct crypto_aes_ctx *ctx,
								 u8 *out,
								 const u8 *in);
	int cocci_id/* arch/x86/crypto/aesni-intel_glue.c 84 */(struct crypto_aes_ctx *ctx,
								const u8 *in_key,
								unsigned int key_len);
	u8 cocci_id/* arch/x86/crypto/aesni-intel_glue.c 722 */[16];
	struct scatterlist *cocci_id/* arch/x86/crypto/aesni-intel_glue.c 718 */;
	struct scatterlist cocci_id/* arch/x86/crypto/aesni-intel_glue.c 716 */[2];
	struct scatter_walk cocci_id/* arch/x86/crypto/aesni-intel_glue.c 711 */;
	struct gcm_context_data cocci_id/* arch/x86/crypto/aesni-intel_glue.c 710 */;
	struct gcm_context_data {
		u8 aad_hash[GCM_BLOCK_LEN];
		u64 aad_length;
		u64 in_length;
		u8 partial_block_enc_key[GCM_BLOCK_LEN];
		u8 orig_IV[GCM_BLOCK_LEN];
		u8 current_counter[GCM_BLOCK_LEN];
		u64 partial_block_len;
		u64 unused;
		u8 hash_keys[GCM_BLOCK_LEN * 16];
	} cocci_id/* arch/x86/crypto/aesni-intel_glue.c 71 */;
	const struct aesni_gcm_tfm_s *cocci_id/* arch/x86/crypto/aesni-intel_glue.c 709 */;
	bool cocci_id/* arch/x86/crypto/aesni-intel_glue.c 703 */;
	struct aead_request *cocci_id/* arch/x86/crypto/aesni-intel_glue.c 703 */;
	struct aesni_xts_ctx {
		u8 raw_tweak_ctx[sizeof(struct crypto_aes_ctx)];
		u8 raw_crypt_ctx[sizeof(struct crypto_aes_ctx)];
	} cocci_id/* arch/x86/crypto/aesni-intel_glue.c 64 */;
	struct crypto_aes_ctx cocci_id/* arch/x86/crypto/aesni-intel_glue.c 631 */;
	const struct common_glue_ctx cocci_id/* arch/x86/crypto/aesni-intel_glue.c 591 */;
	struct generic_gcmaes_ctx {
		u8 hash_subkey[16];
		struct crypto_aes_ctx aes_key_expanded;
	} cocci_id/* arch/x86/crypto/aesni-intel_glue.c 59 */;
	const u128 *cocci_id/* arch/x86/crypto/aesni-intel_glue.c 563 */;
	u128 *cocci_id/* arch/x86/crypto/aesni-intel_glue.c 563 */;
	le128 *cocci_id/* arch/x86/crypto/aesni-intel_glue.c 563 */;
	struct aesni_xts_ctx *cocci_id/* arch/x86/crypto/aesni-intel_glue.c 532 */;
	struct aesni_rfc4106_gcm_ctx {
		u8 hash_subkey[16];
		struct crypto_aes_ctx aes_key_expanded;
		u8 nonce[4];
	} cocci_id/* arch/x86/crypto/aesni-intel_glue.c 53 */;
	u8 *cocci_id/* arch/x86/crypto/aesni-intel_glue.c 485 */;
	void cocci_id/* arch/x86/crypto/aesni-intel_glue.c 485 */;
	u8 cocci_id/* arch/x86/crypto/aesni-intel_glue.c 473 */[AES_BLOCK_SIZE];
	struct skcipher_walk *cocci_id/* arch/x86/crypto/aesni-intel_glue.c 470 */;
	struct aesni_xts_ctx cocci_id/* arch/x86/crypto/aesni-intel_glue.c 47 */;
	struct skcipher_walk cocci_id/* arch/x86/crypto/aesni-intel_glue.c 450 */;
	struct skcipher_request *cocci_id/* arch/x86/crypto/aesni-intel_glue.c 446 */;
	struct crypto_skcipher *cocci_id/* arch/x86/crypto/aesni-intel_glue.c 373 */;
	unsigned int cocci_id/* arch/x86/crypto/aesni-intel_glue.c 342 */;
	const u8 *cocci_id/* arch/x86/crypto/aesni-intel_glue.c 341 */;
	struct crypto_tfm *cocci_id/* arch/x86/crypto/aesni-intel_glue.c 341 */;
	int cocci_id/* arch/x86/crypto/aesni-intel_glue.c 341 */;
	u32 *cocci_id/* arch/x86/crypto/aesni-intel_glue.c 321 */;
	unsigned long cocci_id/* arch/x86/crypto/aesni-intel_glue.c 309 */;
	struct crypto_aes_ctx *cocci_id/* arch/x86/crypto/aesni-intel_glue.c 307 */;
	void *cocci_id/* arch/x86/crypto/aesni-intel_glue.c 307 */;
	struct generic_gcmaes_ctx *cocci_id/* arch/x86/crypto/aesni-intel_glue.c 296 */;
	struct crypto_aead *cocci_id/* arch/x86/crypto/aesni-intel_glue.c 287 */;
	struct aesni_rfc4106_gcm_ctx *cocci_id/* arch/x86/crypto/aesni-intel_glue.c 286 */;
	const struct aesni_gcm_tfm_s cocci_id/* arch/x86/crypto/aesni-intel_glue.c 232 */;
	void cocci_id/* arch/x86/crypto/aesni-intel_glue.c 226 */(void *ctx,
								  struct gcm_context_data *gdata,
								  u8 *out,
								  const u8 *in,
								  unsigned long ciphertext_len,
								  u8 *iv,
								  const u8 *aad,
								  unsigned long aad_len,
								  u8 *auth_tag,
								  unsigned long auth_tag_len);
	void cocci_id/* arch/x86/crypto/aesni-intel_glue.c 220 */(void *ctx,
								  struct gcm_context_data *gdata,
								  u8 *out,
								  const u8 *in,
								  unsigned long plaintext_len,
								  u8 *iv,
								  const u8 *aad,
								  unsigned long aad_len,
								  u8 *auth_tag,
								  unsigned long auth_tag_len);
	void cocci_id/* arch/x86/crypto/aesni-intel_glue.c 202 */(void *my_ctx_data,
								  struct gcm_context_data *gdata,
								  u8 *iv,
								  u8 *hash_subkey,
								  const u8 *aad,
								  unsigned long aad_len);
	void cocci_id/* arch/x86/crypto/aesni-intel_glue.c 191 */(const u8 *in,
								  u8 *iv,
								  void *keys,
								  u8 *out,
								  unsigned int num_bytes);
	const struct aesni_gcm_tfm_s {
		void (*init)(void *ctx, struct gcm_context_data *gdata,
			     u8 *iv, u8 *hash_subkey, const u8 *aad,
			     unsigned long aad_len);
		void (*enc_update)(void *ctx, struct gcm_context_data *gdata,
				   u8 *out, const u8 *in,
				   unsigned long plaintext_len);
		void (*dec_update)(void *ctx, struct gcm_context_data *gdata,
				   u8 *out, const u8 *in,
				   unsigned long ciphertext_len);
		void (*finalize)(void *ctx, struct gcm_context_data *gdata,
				 u8 *auth_tag, unsigned long auth_tag_len);
	} *cocci_id/* arch/x86/crypto/aesni-intel_glue.c 172 */;
	void cocci_id/* arch/x86/crypto/aesni-intel_glue.c 168 */(void *ctx,
								  struct gcm_context_data *gdata,
								  u8 *auth_tag,
								  unsigned long auth_tag_len);
	void cocci_id/* arch/x86/crypto/aesni-intel_glue.c 164 */(void *ctx,
								  struct gcm_context_data *gdata,
								  u8 *out,
								  const u8 *in,
								  unsigned long ciphertext_len);
	void cocci_id/* arch/x86/crypto/aesni-intel_glue.c 161 */(void *ctx,
								  struct gcm_context_data *gdata,
								  u8 *out,
								  const u8 *in,
								  unsigned long plaintext_len);
	void cocci_id/* arch/x86/crypto/aesni-intel_glue.c 156 */(void *ctx,
								  struct gcm_context_data *gdata,
								  u8 *iv,
								  u8 *hash_subkey,
								  const u8 *aad,
								  unsigned long aad_len);
	void cocci_id/* arch/x86/crypto/aesni-intel_glue.c 149 */(void *ctx,
								  struct gcm_context_data *gdata,
								  u8 *out,
								  const u8 *in,
								  unsigned long ciphertext_len,
								  u8 *iv,
								  u8 *hash_subkey,
								  const u8 *aad,
								  unsigned long aad_len,
								  u8 *auth_tag,
								  unsigned long auth_tag_len);
	void cocci_id/* arch/x86/crypto/aesni-intel_glue.c 127 */(void *ctx,
								  struct gcm_context_data *gdata,
								  u8 *out,
								  const u8 *in,
								  unsigned long plaintext_len,
								  u8 *iv,
								  u8 *hash_subkey,
								  const u8 *aad,
								  unsigned long aad_len,
								  u8 *auth_tag,
								  unsigned long auth_tag_len);
	void __exit cocci_id/* arch/x86/crypto/aesni-intel_glue.c 1143 */;
	void cocci_id/* arch/x86/crypto/aesni-intel_glue.c 109 */(struct crypto_aes_ctx *ctx,
								  u8 *out,
								  const u8 *in,
								  bool enc,
								  u8 *iv);
	int __init cocci_id/* arch/x86/crypto/aesni-intel_glue.c 1085 */;
	const struct x86_cpu_id cocci_id/* arch/x86/crypto/aesni-intel_glue.c 1079 */[];
	struct simd_aead_alg *cocci_id/* arch/x86/crypto/aesni-intel_glue.c 1077 */[ARRAY_SIZE(aesni_aeads)];
	struct aead_alg cocci_id/* arch/x86/crypto/aesni-intel_glue.c 1074 */[0];
	struct generic_gcmaes_ctx cocci_id/* arch/x86/crypto/aesni-intel_glue.c 1068 */;
	struct aesni_rfc4106_gcm_ctx cocci_id/* arch/x86/crypto/aesni-intel_glue.c 1051 */;
	void (*cocci_id/* arch/x86/crypto/aesni-intel_glue.c 104 */)(struct crypto_aes_ctx *ctx,
								     u8 *out,
								     const u8 *in,
								     unsigned int len,
								     u8 *iv);
	struct aead_alg cocci_id/* arch/x86/crypto/aesni-intel_glue.c 1038 */[];
	__be32 *cocci_id/* arch/x86/crypto/aesni-intel_glue.c 1032 */;
	u8 cocci_id/* arch/x86/crypto/aesni-intel_glue.c 1029 */[16]__attribute__((__aligned__(AESNI_ALIGN)));
	__be32 cocci_id/* arch/x86/crypto/aesni-intel_glue.c 1025 */;
}
