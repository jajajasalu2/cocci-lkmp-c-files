cocci_test_suite() {
	struct n2_request_context *cocci_id/* drivers/crypto/n2_core.c 964 */;
	struct skcipher_request *cocci_id/* drivers/crypto/n2_core.c 962 */;
	struct n2_request_common {
		struct list_head entry;
		unsigned int offset;
	} cocci_id/* drivers/crypto/n2_core.c 92 */;
	struct skcipher_walk *cocci_id/* drivers/crypto/n2_core.c 885 */;
	struct cwq_initial_entry *cocci_id/* drivers/crypto/n2_core.c 839 */;
	struct n2_skcipher_context *cocci_id/* drivers/crypto/n2_core.c 838 */;
	bool cocci_id/* drivers/crypto/n2_core.c 836 */;
	struct spu_queue *cocci_id/* drivers/crypto/n2_core.c 836 */;
	struct n2_crypto_chunk *cocci_id/* drivers/crypto/n2_core.c 835 */;
	struct crypto_skcipher *cocci_id/* drivers/crypto/n2_core.c 834 */;
	int cocci_id/* drivers/crypto/n2_core.c 834 */;
	u8 cocci_id/* drivers/crypto/n2_core.c 815 */;
	u8 *cocci_id/* drivers/crypto/n2_core.c 802 */;
	struct crypto_tfm *cocci_id/* drivers/crypto/n2_core.c 780 */;
	const u8 *cocci_id/* drivers/crypto/n2_core.c 777 */;
	struct spu_queue **cocci_id/* drivers/crypto/n2_core.c 75 */;
	struct n2_skcipher_request_context {
		struct skcipher_walk walk;
	} cocci_id/* drivers/crypto/n2_core.c 725 */;
	struct n2_skcipher_alg cocci_id/* drivers/crypto/n2_core.c 722 */;
	struct n2_skcipher_alg {
		struct list_head entry;
		u8 enc_type;
		struct skcipher_alg skcipher;
	} cocci_id/* drivers/crypto/n2_core.c 712 */;
	struct spu_qreg {
		struct spu_queue *queue;
		unsigned long type;
	} cocci_id/* drivers/crypto/n2_core.c 70 */;
	struct n2_request_context {
		struct skcipher_walk walk;
		struct list_head chunk_list;
		struct n2_crypto_chunk chunk;
		u8 temp_iv[16];
	} cocci_id/* drivers/crypto/n2_core.c 686 */;
	struct n2_crypto_chunk {
		struct list_head entry;
		unsigned long iv_paddr:44;
		unsigned long arr_len:20;
		unsigned long dest_paddr;
		unsigned long dest_final;
		struct {
			unsigned long src_paddr:44;
			unsigned long src_len:20;
		} arr[N2_CHUNK_ARR_LEN];
	} cocci_id/* drivers/crypto/n2_core.c 674 */;
	struct n2_skcipher_context {
		int key_len;
		int enc_type;
		union {
			u8 aes[AES_MAX_KEY_SIZE];
			u8 des[DES_KEY_SIZE];
			u8 des3[3 * DES_KEY_SIZE];
			u8 arc4[258];
		} key;
	} cocci_id/* drivers/crypto/n2_core.c 661 */;
	struct n2_hmac_ctx *cocci_id/* drivers/crypto/n2_core.c 633 */;
	struct n2_hash_ctx *cocci_id/* drivers/crypto/n2_core.c 539 */;
	struct n2_hash_req_ctx *cocci_id/* drivers/crypto/n2_core.c 538 */;
	struct crypto_hash_walk cocci_id/* drivers/crypto/n2_core.c 528 */;
	struct crypto_ahash *cocci_id/* drivers/crypto/n2_core.c 526 */;
	struct ahash_request *cocci_id/* drivers/crypto/n2_core.c 521 */;
	struct spu_queue {
		cpumask_t sharing;
		unsigned long qhandle;
		spinlock_t lock;
		u8 q_type;
		void *q;
		unsigned long head;
		unsigned long tail;
		struct list_head jobs;
		unsigned long devino;
		char irq_name[32];
		unsigned int irq;
		struct list_head list;
	} cocci_id/* drivers/crypto/n2_core.c 51 */;
	struct crypto_shash *cocci_id/* drivers/crypto/n2_core.c 463 */;
	struct n2_hash_req_ctx cocci_id/* drivers/crypto/n2_core.c 391 */;
	const char cocci_id/* drivers/crypto/n2_core.c 39 */[];
	const void *cocci_id/* drivers/crypto/n2_core.c 364 */;
	struct n2_hash_req_ctx {
		union {
			struct md5_state md5;
			struct sha1_state sha1;
			struct sha256_state sha256;
		} u;
		struct ahash_request fallback_req;
	} cocci_id/* drivers/crypto/n2_core.c 300 */;
	struct n2_hmac_ctx {
		struct n2_hash_ctx base;
		struct crypto_shash *child_shash;
		int hash_key_len;
		unsigned char hash_key[N2_HASH_KEY_MAX];
	} cocci_id/* drivers/crypto/n2_core.c 291 */;
	struct n2_hash_ctx {
		struct crypto_ahash *fallback_tfm;
	} cocci_id/* drivers/crypto/n2_core.c 285 */;
	struct n2_hmac_alg cocci_id/* drivers/crypto/n2_core.c 282 */;
	struct n2_hmac_alg {
		const char *child_alg;
		struct n2_ahash_alg derived;
	} cocci_id/* drivers/crypto/n2_core.c 270 */;
	struct ahash_alg cocci_id/* drivers/crypto/n2_core.c 265 */;
	struct n2_ahash_alg {
		struct list_head entry;
		const u8 *hash_zero;
		const u32 *hash_init;
		u8 hw_op_hashsz;
		u8 digest_size;
		u8 auth_type;
		u8 hmac_type;
		struct ahash_alg alg;
	} cocci_id/* drivers/crypto/n2_core.c 249 */;
	void __exit cocci_id/* drivers/crypto/n2_core.c 2232 */;
	int __init cocci_id/* drivers/crypto/n2_core.c 2227 */;
	struct platform_driver *const cocci_id/* drivers/crypto/n2_core.c 2222 */[];
	struct platform_driver cocci_id/* drivers/crypto/n2_core.c 2186 */;
	const struct of_device_id cocci_id/* drivers/crypto/n2_core.c 2168 */[];
	u64 cocci_id/* drivers/crypto/n2_core.c 212 */;
	unsigned int cocci_id/* drivers/crypto/n2_core.c 212 */;
	struct n2_mau cocci_id/* drivers/crypto/n2_core.c 2074 */;
	struct n2_mau *cocci_id/* drivers/crypto/n2_core.c 2072 */;
	struct n2_crypto cocci_id/* drivers/crypto/n2_core.c 1959 */;
	struct n2_crypto *cocci_id/* drivers/crypto/n2_core.c 1957 */;
	const char *cocci_id/* drivers/crypto/n2_core.c 1838 */;
	struct ino_blob *cocci_id/* drivers/crypto/n2_core.c 1827 */;
	struct ino_blob cocci_id/* drivers/crypto/n2_core.c 1820 */;
	const u64 *cocci_id/* drivers/crypto/n2_core.c 1809 */;
	struct mdesc_handle *cocci_id/* drivers/crypto/n2_core.c 1806 */;
	struct spu_queue cocci_id/* drivers/crypto/n2_core.c 1756 */;
	irq_handler_t cocci_id/* drivers/crypto/n2_core.c 1751 */;
	struct list_head *cocci_id/* drivers/crypto/n2_core.c 1748 */;
	struct spu_qreg cocci_id/* drivers/crypto/n2_core.c 1661 */;
	struct spu_qreg *cocci_id/* drivers/crypto/n2_core.c 1645 */;
	long cocci_id/* drivers/crypto/n2_core.c 1643 */;
	struct kmem_cache *cocci_id/* drivers/crypto/n2_core.c 1598 */[2];
	const unsigned int *cocci_id/* drivers/crypto/n2_core.c 1551 */;
	struct spu_mdesc_info *cocci_id/* drivers/crypto/n2_core.c 1548 */;
	struct platform_device *cocci_id/* drivers/crypto/n2_core.c 1548 */;
	struct n2_hash_ctx cocci_id/* drivers/crypto/n2_core.c 1483 */;
	struct ahash_alg *cocci_id/* drivers/crypto/n2_core.c 1451 */;
	struct crypto_alg *cocci_id/* drivers/crypto/n2_core.c 1450 */;
	struct hash_alg_common *cocci_id/* drivers/crypto/n2_core.c 1449 */;
	struct n2_ahash_alg *cocci_id/* drivers/crypto/n2_core.c 1448 */;
	const struct n2_hash_tmpl *cocci_id/* drivers/crypto/n2_core.c 1446 */;
	struct n2_hmac_ctx cocci_id/* drivers/crypto/n2_core.c 1430 */;
	struct n2_ahash_alg cocci_id/* drivers/crypto/n2_core.c 1419 */;
	struct n2_hmac_alg *cocci_id/* drivers/crypto/n2_core.c 1410 */;
	struct n2_skcipher_context cocci_id/* drivers/crypto/n2_core.c 1392 */;
	struct skcipher_alg *cocci_id/* drivers/crypto/n2_core.c 1377 */;
	struct n2_skcipher_alg *cocci_id/* drivers/crypto/n2_core.c 1376 */;
	const struct n2_skcipher_tmpl *cocci_id/* drivers/crypto/n2_core.c 1374 */;
	struct n2_request_context cocci_id/* drivers/crypto/n2_core.c 1370 */;
	void cocci_id/* drivers/crypto/n2_core.c 1345 */;
	const struct n2_hash_tmpl cocci_id/* drivers/crypto/n2_core.c 1304 */[];
	const u32 cocci_id/* drivers/crypto/n2_core.c 1299 */[SHA256_DIGEST_SIZE / 4];
	const u32 cocci_id/* drivers/crypto/n2_core.c 1292 */[SHA1_DIGEST_SIZE / 4];
	const u32 cocci_id/* drivers/crypto/n2_core.c 1286 */[MD5_HASH_WORDS];
	struct n2_hash_tmpl {
		const char *name;
		const u8 *hash_zero;
		const u32 *hash_init;
		u8 hw_op_hashsz;
		u8 digest_size;
		u8 block_size;
		u8 auth_type;
		u8 hmac_type;
	} cocci_id/* drivers/crypto/n2_core.c 1275 */;
	unsigned long cocci_id/* drivers/crypto/n2_core.c 122 */;
	irqreturn_t cocci_id/* drivers/crypto/n2_core.c 120 */;
	void *cocci_id/* drivers/crypto/n2_core.c 120 */;
	const struct n2_skcipher_tmpl cocci_id/* drivers/crypto/n2_core.c 1128 */[];
	struct n2_skcipher_tmpl {
		const char *name;
		const char *drv_name;
		u8 block_size;
		u8 enc_type;
		struct skcipher_alg skcipher;
	} cocci_id/* drivers/crypto/n2_core.c 1120 */;
}
