cocci_test_suite() {
	unsigned long cocci_id/* arch/s390/crypto/aes_s390.c 996 */;
	struct skcipher_alg *cocci_id/* arch/s390/crypto/aes_s390.c 979 */;
	struct aead_alg *cocci_id/* arch/s390/crypto/aes_s390.c 977 */;
	struct skcipher_alg *cocci_id/* arch/s390/crypto/aes_s390.c 975 */[4];
	struct crypto_alg *cocci_id/* arch/s390/crypto/aes_s390.c 974 */;
	u32 cocci_id/* arch/s390/crypto/aes_s390.c 960 */;
	struct aead_alg cocci_id/* arch/s390/crypto/aes_s390.c 954 */;
	struct s390_aes_ctx *cocci_id/* arch/s390/crypto/aes_s390.c 93 */;
	const u8 *cocci_id/* arch/s390/crypto/aes_s390.c 90 */;
	struct crypto_tfm *cocci_id/* arch/s390/crypto/aes_s390.c 90 */;
	u32 *cocci_id/* arch/s390/crypto/aes_s390.c 887 */;
	struct {
		u32 _[3];
		u32 cv;
		u8 t[GHASH_DIGEST_SIZE];
		u8 h[AES_BLOCK_SIZE];
		u64 taadl;
		u64 tpcl;
		u8 j0[GHASH_BLOCK_SIZE];
		u8 k[AES_MAX_KEY_SIZE];
	} cocci_id/* arch/s390/crypto/aes_s390.c 858 */;
	u8 cocci_id/* arch/s390/crypto/aes_s390.c 856 */[GHASH_DIGEST_SIZE];
	struct gcm_sg_walk cocci_id/* arch/s390/crypto/aes_s390.c 855 */;
	struct crypto_aead *cocci_id/* arch/s390/crypto/aes_s390.c 845 */;
	struct aead_request *cocci_id/* arch/s390/crypto/aes_s390.c 843 */;
	void cocci_id/* arch/s390/crypto/aes_s390.c 715 */;
	struct scatterlist *cocci_id/* arch/s390/crypto/aes_s390.c 700 */;
	struct gcm_sg_walk *cocci_id/* arch/s390/crypto/aes_s390.c 698 */;
	struct gcm_sg_walk {
		struct scatter_walk walk;
		unsigned int walk_bytes;
		u8 *walk_ptr;
		unsigned int walk_bytes_remain;
		u8 buf[AES_BLOCK_SIZE];
		unsigned int buf_bytes;
		u8 *ptr;
		unsigned int nbytes;
	} cocci_id/* arch/s390/crypto/aes_s390.c 60 */;
	u8 cocci_id/* arch/s390/crypto/aes_s390.c 588 */[AES_BLOCK_SIZE];
	u8 *cocci_id/* arch/s390/crypto/aes_s390.c 569 */;
	unsigned int cocci_id/* arch/s390/crypto/aes_s390.c 569 */;
	struct s390_xts_ctx cocci_id/* arch/s390/crypto/aes_s390.c 536 */;
	struct s390_xts_ctx {
		u8 key[32];
		u8 pcc_key[32];
		int key_len;
		unsigned long fc;
		struct crypto_skcipher *fallback;
	} cocci_id/* arch/s390/crypto/aes_s390.c 52 */;
	struct {
		u8 key[32];
		u8 init[16];
	} cocci_id/* arch/s390/crypto/aes_s390.c 453 */;
	struct {
		u8 key[32];
		u8 tweak[16];
		u8 block[16];
		u8 bit[16];
		u8 xts[16];
	} cocci_id/* arch/s390/crypto/aes_s390.c 446 */;
	struct s390_xts_ctx *cocci_id/* arch/s390/crypto/aes_s390.c 442 */;
	struct s390_aes_ctx {
		u8 key[AES_MAX_KEY_SIZE];
		int key_len;
		unsigned long fc;
		union {
			struct crypto_skcipher *skcipher;
			struct crypto_cipher *cip;
		} fallback;
	} cocci_id/* arch/s390/crypto/aes_s390.c 42 */;
	cpacf_mask_t cocci_id/* arch/s390/crypto/aes_s390.c 39 */;
	struct skcipher_alg cocci_id/* arch/s390/crypto/aes_s390.c 370 */;
	struct {
		u8 iv[AES_BLOCK_SIZE];
		u8 key[AES_MAX_KEY_SIZE];
	} cocci_id/* arch/s390/crypto/aes_s390.c 336 */;
	struct skcipher_walk cocci_id/* arch/s390/crypto/aes_s390.c 333 */;
	struct crypto_skcipher *cocci_id/* arch/s390/crypto/aes_s390.c 331 */;
	struct skcipher_request *cocci_id/* arch/s390/crypto/aes_s390.c 329 */;
	struct skcipher_request cocci_id/* arch/s390/crypto/aes_s390.c 279 */;
	struct s390_aes_ctx cocci_id/* arch/s390/crypto/aes_s390.c 166 */;
	struct crypto_alg cocci_id/* arch/s390/crypto/aes_s390.c 159 */;
	const char *cocci_id/* arch/s390/crypto/aes_s390.c 136 */;
	int cocci_id/* arch/s390/crypto/aes_s390.c 1004 */;
	int __init cocci_id/* arch/s390/crypto/aes_s390.c 1002 */;
}
