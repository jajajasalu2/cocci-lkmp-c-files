cocci_test_suite() {
	struct crypto_tfm *cocci_id/* drivers/crypto/padlock-aes.c 96 */;
	struct aes_ctx *cocci_id/* drivers/crypto/padlock-aes.c 96 */;
	unsigned long cocci_id/* drivers/crypto/padlock-aes.c 88 */;
	void *cocci_id/* drivers/crypto/padlock-aes.c 86 */;
	uint8_t cocci_id/* drivers/crypto/padlock-aes.c 76 */;
	int cocci_id/* drivers/crypto/padlock-aes.c 75 */;
	struct aes_ctx {
		u32 E[AES_MAX_KEYLENGTH_U32]
		__attribute__((__aligned__(PADLOCK_ALIGNMENT)));
		u32 d_data[AES_MAX_KEYLENGTH_U32]
		__attribute__((__aligned__(PADLOCK_ALIGNMENT)));
		struct {
			struct cword encrypt;
			struct cword decrypt;
		} cword;
		u32 *D;
	} cocci_id/* drivers/crypto/padlock-aes.c 59 */;
	void __exit cocci_id/* drivers/crypto/padlock-aes.c 529 */;
	struct cpuinfo_x86 *cocci_id/* drivers/crypto/padlock-aes.c 490 */;
	int __init cocci_id/* drivers/crypto/padlock-aes.c 487 */;
	const struct x86_cpu_id cocci_id/* drivers/crypto/padlock-aes.c 481 */[];
	struct skcipher_alg cocci_id/* drivers/crypto/padlock-aes.c 465 */;
	struct skcipher_walk cocci_id/* drivers/crypto/padlock-aes.c 444 */;
	struct skcipher_request *cocci_id/* drivers/crypto/padlock-aes.c 440 */;
	u8 *cocci_id/* drivers/crypto/padlock-aes.c 426 */;
	struct cword {
		unsigned int __attribute__((__packed__)) rounds:4,algo:3,keygen:1,interm:1,encdec:1,ksize:2;
	}__attribute__((__aligned__(PADLOCK_ALIGNMENT))) cocci_id/* drivers/crypto/padlock-aes.c 42 */;
	struct aes_ctx cocci_id/* drivers/crypto/padlock-aes.c 334 */;
	struct crypto_alg cocci_id/* drivers/crypto/padlock-aes.c 328 */;
	u32 cocci_id/* drivers/crypto/padlock-aes.c 290 */;
	struct cword *cocci_id/* drivers/crypto/padlock-aes.c 258 */;
	void cocci_id/* drivers/crypto/padlock-aes.c 243 */;
	u8 cocci_id/* drivers/crypto/padlock-aes.c 236 */[AES_BLOCK_SIZE * (MAX_CBC_FETCH_BLOCKS - 1) + PADLOCK_ALIGNMENT - 1];
	u8 cocci_id/* drivers/crypto/padlock-aes.c 222 */[AES_BLOCK_SIZE * (MAX_ECB_FETCH_BLOCKS - 1) + PADLOCK_ALIGNMENT - 1];
	struct crypto_skcipher *cocci_id/* drivers/crypto/padlock-aes.c 166 */;
	struct crypto_aes_ctx cocci_id/* drivers/crypto/padlock-aes.c 112 */;
	u32 *cocci_id/* drivers/crypto/padlock-aes.c 111 */;
	const __le32 *cocci_id/* drivers/crypto/padlock-aes.c 110 */;
	unsigned int cocci_id/* drivers/crypto/padlock-aes.c 107 */;
	const u8 *cocci_id/* drivers/crypto/padlock-aes.c 106 */;
	__typeof__(struct cword *) cocci_id/* /home/jaskaran/lkmp/coccinelle/standard.h 437 */;
}
