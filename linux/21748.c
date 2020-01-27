cocci_test_suite() {
	struct pkey_protkey *cocci_id/* arch/s390/crypto/paes_s390.c 95 */;
	struct key_blob *cocci_id/* arch/s390/crypto/paes_s390.c 94 */;
	struct s390_pxts_ctx {
		struct key_blob kb[2];
		struct pkey_protkey pk[2];
		unsigned long fc;
	} cocci_id/* arch/s390/crypto/paes_s390.c 88 */;
	struct s390_paes_ctx {
		struct key_blob kb;
		struct pkey_protkey pk;
		unsigned long fc;
	} cocci_id/* arch/s390/crypto/paes_s390.c 82 */;
	int __init cocci_id/* arch/s390/crypto/paes_s390.c 642 */;
	struct skcipher_alg *cocci_id/* arch/s390/crypto/paes_s390.c 626 */;
	void cocci_id/* arch/s390/crypto/paes_s390.c 626 */;
	const u8 *cocci_id/* arch/s390/crypto/paes_s390.c 57 */;
	u8 cocci_id/* arch/s390/crypto/paes_s390.c 555 */[AES_BLOCK_SIZE];
	u8 *cocci_id/* arch/s390/crypto/paes_s390.c 536 */;
	unsigned int cocci_id/* arch/s390/crypto/paes_s390.c 536 */;
	struct s390_pxts_ctx cocci_id/* arch/s390/crypto/paes_s390.c 470 */;
	struct key_blob {
		u8 *key;
		u8 keybuf[128];
		unsigned int keylen;
	} cocci_id/* arch/s390/crypto/paes_s390.c 43 */;
	struct {
		u8 key[MAXPROTKEYSIZE];
		u8 init[16];
	} cocci_id/* arch/s390/crypto/paes_s390.c 420 */;
	struct {
		u8 key[MAXPROTKEYSIZE];
		u8 tweak[16];
		u8 block[16];
		u8 bit[16];
		u8 xts[16];
	} cocci_id/* arch/s390/crypto/paes_s390.c 413 */;
	cpacf_mask_t cocci_id/* arch/s390/crypto/paes_s390.c 41 */;
	u8 cocci_id/* arch/s390/crypto/paes_s390.c 372 */[2 * AES_MAX_KEY_SIZE];
	struct s390_pxts_ctx *cocci_id/* arch/s390/crypto/paes_s390.c 345 */;
	struct s390_paes_ctx cocci_id/* arch/s390/crypto/paes_s390.c 314 */;
	struct skcipher_alg cocci_id/* arch/s390/crypto/paes_s390.c 309 */;
	struct {
		u8 iv[AES_BLOCK_SIZE];
		u8 key[MAXPROTKEYSIZE];
	} cocci_id/* arch/s390/crypto/paes_s390.c 271 */;
	struct skcipher_walk cocci_id/* arch/s390/crypto/paes_s390.c 268 */;
	struct crypto_skcipher *cocci_id/* arch/s390/crypto/paes_s390.c 266 */;
	struct skcipher_request *cocci_id/* arch/s390/crypto/paes_s390.c 264 */;
	unsigned long cocci_id/* arch/s390/crypto/paes_s390.c 230 */;
	struct s390_paes_ctx *cocci_id/* arch/s390/crypto/paes_s390.c 228 */;
	int cocci_id/* arch/s390/crypto/paes_s390.c 228 */;
}
