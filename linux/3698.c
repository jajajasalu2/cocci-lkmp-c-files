cocci_test_suite() {
	struct scatterlist *cocci_id/* drivers/crypto/virtio/virtio_crypto_algs.c 89 */;
	void cocci_id/* drivers/crypto/virtio/virtio_crypto_algs.c 643 */;
	struct virtio_crypto_sym_request cocci_id/* drivers/crypto/virtio/virtio_crypto_algs.c 62 */;
	struct virtio_crypto_skcipher_ctx cocci_id/* drivers/crypto/virtio/virtio_crypto_algs.c 599 */;
	struct virtio_crypto_algo cocci_id/* drivers/crypto/virtio/virtio_crypto_algs.c 590 */[];
	struct skcipher_request cocci_id/* drivers/crypto/virtio/virtio_crypto_algs.c 559 */;
	struct crypto_engine *cocci_id/* drivers/crypto/virtio/virtio_crypto_algs.c 557 */;
	void *cocci_id/* drivers/crypto/virtio/virtio_crypto_algs.c 557 */;
	void cocci_id/* drivers/crypto/virtio/virtio_crypto_algs.c 53 */(struct virtio_crypto_sym_request *vc_sym_req,
									 struct skcipher_request *req,
									 int err);
	uint32_t cocci_id/* drivers/crypto/virtio/virtio_crypto_algs.c 420 */;
	struct virtio_crypto_algo {
		uint32_t algonum;
		uint32_t service;
		unsigned int active_devs;
		struct skcipher_alg algo;
	} cocci_id/* drivers/crypto/virtio/virtio_crypto_algs.c 41 */;
	uint8_t *cocci_id/* drivers/crypto/virtio/virtio_crypto_algs.c 361 */;
	u64 cocci_id/* drivers/crypto/virtio/virtio_crypto_algs.c 358 */;
	struct scatterlist cocci_id/* drivers/crypto/virtio/virtio_crypto_algs.c 356 */;
	unsigned long cocci_id/* drivers/crypto/virtio/virtio_crypto_algs.c 355 */;
	struct virtio_crypto_op_data_req *cocci_id/* drivers/crypto/virtio/virtio_crypto_algs.c 352 */;
	struct virtio_crypto *cocci_id/* drivers/crypto/virtio/virtio_crypto_algs.c 351 */;
	unsigned int cocci_id/* drivers/crypto/virtio/virtio_crypto_algs.c 350 */;
	struct virtio_crypto_request *cocci_id/* drivers/crypto/virtio/virtio_crypto_algs.c 349 */;
	struct virtio_crypto_skcipher_ctx *cocci_id/* drivers/crypto/virtio/virtio_crypto_algs.c 348 */;
	struct crypto_skcipher *cocci_id/* drivers/crypto/virtio/virtio_crypto_algs.c 347 */;
	struct data_queue *cocci_id/* drivers/crypto/virtio/virtio_crypto_algs.c 345 */;
	struct skcipher_request *cocci_id/* drivers/crypto/virtio/virtio_crypto_algs.c 344 */;
	struct virtio_crypto_sym_request *cocci_id/* drivers/crypto/virtio/virtio_crypto_algs.c 343 */;
	int cocci_id/* drivers/crypto/virtio/virtio_crypto_algs.c 342 */;
	struct virtio_crypto_sym_request {
		struct virtio_crypto_request base;
		uint32_t type;
		struct virtio_crypto_skcipher_ctx *skcipher_ctx;
		struct skcipher_request *skcipher_req;
		uint8_t *iv;
		bool encrypt;
	} cocci_id/* drivers/crypto/virtio/virtio_crypto_algs.c 29 */;
	struct virtio_crypto_destroy_session_req *cocci_id/* drivers/crypto/virtio/virtio_crypto_algs.c 210 */;
	struct virtio_crypto_skcipher_ctx {
		struct crypto_engine_ctx enginectx;
		struct virtio_crypto *vcrypto;
		struct crypto_skcipher *tfm;
		struct virtio_crypto_sym_session_info enc_sess_info;
		struct virtio_crypto_sym_session_info dec_sess_info;
	} cocci_id/* drivers/crypto/virtio/virtio_crypto_algs.c 20 */;
	const uint8_t *cocci_id/* drivers/crypto/virtio/virtio_crypto_algs.c 116 */;
	uint32_t *cocci_id/* drivers/crypto/virtio/virtio_crypto_algs.c 100 */;
}
