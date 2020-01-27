cocci_test_suite() {
	struct qat_alg_cd {
		union {
			struct qat_enc {
				struct icp_qat_hw_cipher_algo_blk cipher;
				struct icp_qat_hw_auth_algo_blk hash;
			} qat_enc_cd;
			struct qat_dec {
				struct icp_qat_hw_auth_algo_blk hash;
				struct icp_qat_hw_cipher_algo_blk cipher;
			} qat_dec_cd;
		};
	}__aligned(64) cocci_id/* drivers/crypto/qat/qat_common/qat_algs.c 94 */;
	uint32_t *cocci_id/* drivers/crypto/qat/qat_common/qat_algs.c 898 */;
	uint8_t *cocci_id/* drivers/crypto/qat/qat_common/qat_algs.c 894 */;
	void *cocci_id/* drivers/crypto/qat/qat_common/qat_algs.c 890 */;
	uint64_t cocci_id/* drivers/crypto/qat/qat_common/qat_algs.c 887 */;
	long cocci_id/* drivers/crypto/qat/qat_common/qat_algs.c 887 */;
	struct icp_qat_fw_la_bulk_req *cocci_id/* drivers/crypto/qat/qat_common/qat_algs.c 874 */;
	struct icp_qat_fw_la_auth_req_params *cocci_id/* drivers/crypto/qat/qat_common/qat_algs.c 873 */;
	struct icp_qat_fw_la_cipher_req_params *cocci_id/* drivers/crypto/qat/qat_common/qat_algs.c 872 */;
	struct crypto_tfm *cocci_id/* drivers/crypto/qat/qat_common/qat_algs.c 869 */;
	struct crypto_aead *cocci_id/* drivers/crypto/qat/qat_common/qat_algs.c 868 */;
	struct qat_alg_buf_list {
		uint64_t resrvd;
		uint32_t num_bufs;
		uint32_t num_mapped_bufs;
		struct qat_alg_buf bufers[];
	}__packed __aligned(64) cocci_id/* drivers/crypto/qat/qat_common/qat_algs.c 86 */;
	int cocci_id/* drivers/crypto/qat/qat_common/qat_algs.c 828 */;
	uint8_t cocci_id/* drivers/crypto/qat/qat_common/qat_algs.c 827 */;
	struct aead_request *cocci_id/* drivers/crypto/qat/qat_common/qat_algs.c 826 */;
	struct qat_crypto_instance *cocci_id/* drivers/crypto/qat/qat_common/qat_algs.c 825 */;
	struct qat_alg_aead_ctx *cocci_id/* drivers/crypto/qat/qat_common/qat_algs.c 824 */;
	struct qat_crypto_request *cocci_id/* drivers/crypto/qat/qat_common/qat_algs.c 822 */;
	struct icp_qat_fw_la_resp *cocci_id/* drivers/crypto/qat/qat_common/qat_algs.c 821 */;
	void cocci_id/* drivers/crypto/qat/qat_common/qat_algs.c 821 */;
	struct qat_alg_buf {
		uint32_t len;
		uint32_t resrvd;
		uint64_t addr;
	}__packed cocci_id/* drivers/crypto/qat/qat_common/qat_algs.c 80 */;
	unsigned int cocci_id/* drivers/crypto/qat/qat_common/qat_algs.c 78 */;
	struct qat_alg_buf *cocci_id/* drivers/crypto/qat/qat_common/qat_algs.c 755 */;
	struct scatterlist *cocci_id/* drivers/crypto/qat/qat_common/qat_algs.c 709 */;
	size_t cocci_id/* drivers/crypto/qat/qat_common/qat_algs.c 684 */;
	dma_addr_t cocci_id/* drivers/crypto/qat/qat_common/qat_algs.c 682 */;
	struct qat_alg_buf_list *cocci_id/* drivers/crypto/qat/qat_common/qat_algs.c 680 */;
	const uint8_t *cocci_id/* drivers/crypto/qat/qat_common/qat_algs.c 613 */;
	struct crypto_authenc_keys cocci_id/* drivers/crypto/qat/qat_common/qat_algs.c 555 */;
	const u8 *cocci_id/* drivers/crypto/qat/qat_common/qat_algs.c 552 */;
	int *cocci_id/* drivers/crypto/qat/qat_common/qat_algs.c 521 */;
	struct icp_qat_fw_la_cipher_req_params cocci_id/* drivers/crypto/qat/qat_common/qat_algs.c 397 */;
	struct icp_qat_fw_auth_cd_ctrl_hdr *cocci_id/* drivers/crypto/qat/qat_common/qat_algs.c 393 */;
	struct icp_qat_fw_cipher_cd_ctrl_hdr *cocci_id/* drivers/crypto/qat/qat_common/qat_algs.c 392 */;
	struct icp_qat_fw_comn_req_hdr *cocci_id/* drivers/crypto/qat/qat_common/qat_algs.c 390 */;
	struct icp_qat_fw_comn_req_hdr_cd_pars *cocci_id/* drivers/crypto/qat/qat_common/qat_algs.c 389 */;
	struct icp_qat_hw_auth_setup cocci_id/* drivers/crypto/qat/qat_common/qat_algs.c 386 */;
	char *cocci_id/* drivers/crypto/qat/qat_common/qat_algs.c 385 */;
	struct icp_qat_hw_cipher_algo_blk *cocci_id/* drivers/crypto/qat/qat_common/qat_algs.c 384 */;
	struct icp_qat_hw_auth_algo_blk *cocci_id/* drivers/crypto/qat/qat_common/qat_algs.c 383 */;
	struct qat_dec *cocci_id/* drivers/crypto/qat/qat_common/qat_algs.c 382 */;
	struct crypto_authenc_keys *cocci_id/* drivers/crypto/qat/qat_common/qat_algs.c 377 */;
	struct qat_enc *cocci_id/* drivers/crypto/qat/qat_common/qat_algs.c 301 */;
	__be64 *cocci_id/* drivers/crypto/qat/qat_common/qat_algs.c 161 */;
	__be32 *cocci_id/* drivers/crypto/qat/qat_common/qat_algs.c 160 */;
	struct qat_alg_skcipher_ctx cocci_id/* drivers/crypto/qat/qat_common/qat_algs.c 1318 */;
	struct skcipher_alg cocci_id/* drivers/crypto/qat/qat_common/qat_algs.c 1312 */[];
	struct qat_alg_aead_ctx cocci_id/* drivers/crypto/qat/qat_common/qat_algs.c 1266 */;
	struct qat_alg_skcipher_ctx {
		struct icp_qat_hw_cipher_algo_blk *enc_cd;
		struct icp_qat_hw_cipher_algo_blk *dec_cd;
		dma_addr_t enc_cd_paddr;
		dma_addr_t dec_cd_paddr;
		struct icp_qat_fw_la_bulk_req enc_fw_req;
		struct icp_qat_fw_la_bulk_req dec_fw_req;
		struct qat_crypto_instance *inst;
		struct crypto_skcipher *tfm;
	} cocci_id/* drivers/crypto/qat/qat_common/qat_algs.c 126 */;
	struct aead_alg cocci_id/* drivers/crypto/qat/qat_common/qat_algs.c 1259 */[];
	struct icp_qat_hw_cipher_algo_blk cocci_id/* drivers/crypto/qat/qat_common/qat_algs.c 1243 */;
	struct qat_alg_cd cocci_id/* drivers/crypto/qat/qat_common/qat_algs.c 1210 */;
	struct device *cocci_id/* drivers/crypto/qat/qat_common/qat_algs.c 1201 */;
	struct qat_crypto_request cocci_id/* drivers/crypto/qat/qat_common/qat_algs.c 1178 */;
	const char *cocci_id/* drivers/crypto/qat/qat_common/qat_algs.c 1170 */;
	enum icp_qat_hw_auth_algo cocci_id/* drivers/crypto/qat/qat_common/qat_algs.c 1169 */;
	struct skcipher_request *cocci_id/* drivers/crypto/qat/qat_common/qat_algs.c 1161 */;
	struct qat_alg_skcipher_ctx *cocci_id/* drivers/crypto/qat/qat_common/qat_algs.c 1113 */;
	struct qat_alg_aead_ctx {
		struct qat_alg_cd *enc_cd;
		struct qat_alg_cd *dec_cd;
		dma_addr_t enc_cd_paddr;
		dma_addr_t dec_cd_paddr;
		struct icp_qat_fw_la_bulk_req enc_fw_req;
		struct icp_qat_fw_la_bulk_req dec_fw_req;
		struct crypto_shash *hash_tfm;
		enum icp_qat_hw_auth_algo qat_hash_alg;
		struct qat_crypto_instance *inst;
		union {
			struct sha1_state sha1;
			struct sha256_state sha256;
			struct sha512_state sha512;
		};
		char ipad[SHA512_BLOCK_SIZE];
		char opad[SHA512_BLOCK_SIZE];
	} cocci_id/* drivers/crypto/qat/qat_common/qat_algs.c 107 */;
	struct crypto_skcipher *cocci_id/* drivers/crypto/qat/qat_common/qat_algs.c 1028 */;
}
