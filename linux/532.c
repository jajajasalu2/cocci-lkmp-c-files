cocci_test_suite() {
	struct cryptd_skcipher cocci_id/* crypto/cryptd.c 984 */;
	struct crypto_skcipher *cocci_id/* crypto/cryptd.c 966 */;
	struct cryptd_skcipher_ctx *cocci_id/* crypto/cryptd.c 965 */;
	struct cryptd_skcipher *cocci_id/* crypto/cryptd.c 961 */;
	struct crypto_template cocci_id/* crypto/cryptd.c 954 */;
	struct cryptd_instance_ctx *cocci_id/* crypto/cryptd.c 935 */;
	void cocci_id/* crypto/cryptd.c 93 */(struct work_struct *work);
	struct crypto_template *cocci_id/* crypto/cryptd.c 913 */;
	struct cryptd_queue cocci_id/* crypto/cryptd.c 911 */;
	struct cryptd_aead_request_ctx {
		crypto_completion_t complete;
	} cocci_id/* crypto/cryptd.c 89 */;
	struct cryptd_aead_ctx cocci_id/* crypto/cryptd.c 889 */;
	struct aead_alg *cocci_id/* crypto/cryptd.c 858 */;
	struct cryptd_aead_request_ctx cocci_id/* crypto/cryptd.c 841 */;
	unsigned cocci_id/* crypto/cryptd.c 841 */;
	struct cryptd_aead_ctx {
		refcount_t refcnt;
		struct crypto_aead *child;
	} cocci_id/* crypto/cryptd.c 84 */;
	struct crypto_aead_spawn *cocci_id/* crypto/cryptd.c 831 */;
	struct aead_instance_ctx *cocci_id/* crypto/cryptd.c 830 */;
	struct aead_instance *cocci_id/* crypto/cryptd.c 829 */;
	struct cryptd_queue *cocci_id/* crypto/cryptd.c 810 */;
	struct aead_request cocci_id/* crypto/cryptd.c 801 */;
	struct crypto_async_request *cocci_id/* crypto/cryptd.c 795 */;
	struct cryptd_hash_request_ctx {
		crypto_completion_t complete;
		struct shash_desc desc;
	} cocci_id/* crypto/cryptd.c 79 */;
	crypto_completion_t cocci_id/* crypto/cryptd.c 759 */;
	struct cryptd_aead_request_ctx *cocci_id/* crypto/cryptd.c 757 */;
	int (*cocci_id/* crypto/cryptd.c 755 */)(struct aead_request *req);
	int cocci_id/* crypto/cryptd.c 754 */;
	struct aead_request *cocci_id/* crypto/cryptd.c 752 */;
	void cocci_id/* crypto/cryptd.c 752 */;
	unsigned int cocci_id/* crypto/cryptd.c 744 */;
	struct cryptd_hash_ctx {
		refcount_t refcnt;
		struct crypto_shash *child;
	} cocci_id/* crypto/cryptd.c 74 */;
	const u8 *cocci_id/* crypto/cryptd.c 735 */;
	struct cryptd_hash_ctx cocci_id/* crypto/cryptd.c 707 */;
	struct cryptd_skcipher_request_ctx {
		crypto_completion_t complete;
	} cocci_id/* crypto/cryptd.c 70 */;
	struct shash_alg *cocci_id/* crypto/cryptd.c 674 */;
	struct ahash_instance *cocci_id/* crypto/cryptd.c 673 */;
	struct hashd_instance_ctx *cocci_id/* crypto/cryptd.c 672 */;
	const void *cocci_id/* crypto/cryptd.c 658 */;
	struct cryptd_skcipher_ctx {
		refcount_t refcnt;
		struct crypto_sync_skcipher *child;
	} cocci_id/* crypto/cryptd.c 65 */;
	struct shash_desc *cocci_id/* crypto/cryptd.c 631 */;
	struct aead_instance_ctx {
		struct crypto_aead_spawn aead_spawn;
		struct cryptd_queue *queue;
	} cocci_id/* crypto/cryptd.c 60 */;
	struct hashd_instance_ctx {
		struct crypto_shash_spawn spawn;
		struct cryptd_queue *queue;
	} cocci_id/* crypto/cryptd.c 55 */;
	struct cryptd_hash_request_ctx *cocci_id/* crypto/cryptd.c 523 */;
	struct ahash_request *cocci_id/* crypto/cryptd.c 519 */;
	struct skcipherd_instance_ctx {
		struct crypto_skcipher_spawn spawn;
		struct cryptd_queue *queue;
	} cocci_id/* crypto/cryptd.c 50 */;
	struct cryptd_hash_request_ctx cocci_id/* crypto/cryptd.c 477 */;
	struct crypto_shash_spawn *cocci_id/* crypto/cryptd.c 467 */;
	struct cryptd_instance_ctx {
		struct crypto_spawn spawn;
		struct cryptd_queue *queue;
	} cocci_id/* crypto/cryptd.c 45 */;
	struct cryptd_skcipher_ctx cocci_id/* crypto/cryptd.c 442 */;
	struct cryptd_queue {
		struct cryptd_cpu_queue __percpu *cpu_queue;
	} cocci_id/* crypto/cryptd.c 41 */;
	struct skcipher_alg *cocci_id/* crypto/cryptd.c 402 */;
	struct skcipher_instance *cocci_id/* crypto/cryptd.c 401 */;
	struct skcipherd_instance_ctx *cocci_id/* crypto/cryptd.c 400 */;
	struct cryptd_skcipher_request_ctx cocci_id/* crypto/cryptd.c 377 */;
	struct crypto_skcipher_spawn *cocci_id/* crypto/cryptd.c 367 */;
	struct cryptd_cpu_queue {
		struct crypto_queue queue;
		struct work_struct work;
	} cocci_id/* crypto/cryptd.c 36 */;
	struct workqueue_struct *cocci_id/* crypto/cryptd.c 34 */;
	struct crypto_sync_skcipher *cocci_id/* crypto/cryptd.c 318 */;
	struct cryptd_skcipher_request_ctx *cocci_id/* crypto/cryptd.c 272 */;
	struct skcipher_request *cocci_id/* crypto/cryptd.c 268 */;
	struct crypto_instance *cocci_id/* crypto/cryptd.c 228 */;
	char *cocci_id/* crypto/cryptd.c 227 */;
	struct crypto_alg *cocci_id/* crypto/cryptd.c 224 */;
	void *cocci_id/* crypto/cryptd.c 224 */;
	struct crypto_attr_type *cocci_id/* crypto/cryptd.c 197 */;
	u32 *cocci_id/* crypto/cryptd.c 194 */;
	struct rtattr **cocci_id/* crypto/cryptd.c 194 */;
	struct crypto_tfm *cocci_id/* crypto/cryptd.c 187 */;
	struct work_struct *cocci_id/* crypto/cryptd.c 157 */;
	refcount_t *cocci_id/* crypto/cryptd.c 130 */;
	struct cryptd_cpu_queue *cocci_id/* crypto/cryptd.c 129 */;
	void __exit cocci_id/* crypto/cryptd.c 1146 */;
	int __init cocci_id/* crypto/cryptd.c 1120 */;
	bool cocci_id/* crypto/cryptd.c 1103 */;
	struct cryptd_aead_ctx *cocci_id/* crypto/cryptd.c 1097 */;
	struct crypto_aead *cocci_id/* crypto/cryptd.c 1095 */;
	struct cryptd_aead *cocci_id/* crypto/cryptd.c 1095 */;
	char cocci_id/* crypto/cryptd.c 1073 */[CRYPTO_MAX_ALG_NAME];
	u32 cocci_id/* crypto/cryptd.c 1071 */;
	const char *cocci_id/* crypto/cryptd.c 1070 */;
	struct cryptd_hash_ctx *cocci_id/* crypto/cryptd.c 1040 */;
	struct crypto_shash *cocci_id/* crypto/cryptd.c 1038 */;
	struct cryptd_ahash *cocci_id/* crypto/cryptd.c 1038 */;
	struct crypto_ahash *cocci_id/* crypto/cryptd.c 1018 */;
	struct cryptd_cpu_queue cocci_id/* crypto/cryptd.c 101 */;
}
