cocci_test_suite() {
	struct qat_rsa_output_params {
		union {
			struct {
				dma_addr_t c;
			} enc;
			struct {
				dma_addr_t m;
			} dec;
			u64 out_tab[8];
		};
	}__packed __aligned(64) cocci_id/* drivers/crypto/qat/qat_common/qat_asym_algs.c 91 */;
	struct crypto_akcipher *cocci_id/* drivers/crypto/qat/qat_common/qat_asym_algs.c 822 */;
	struct qat_rsa_input_params {
		union {
			struct {
				dma_addr_t m;
				dma_addr_t e;
				dma_addr_t n;
			} enc;
			struct {
				dma_addr_t c;
				dma_addr_t d;
				dma_addr_t n;
			} dec;
			struct {
				dma_addr_t c;
				dma_addr_t p;
				dma_addr_t q;
				dma_addr_t dp;
				dma_addr_t dq;
				dma_addr_t qinv;
			} dec_crt;
			u64 in_tab[8];
		};
	}__packed __aligned(64) cocci_id/* drivers/crypto/qat/qat_common/qat_asym_algs.c 67 */;
	unsigned int cocci_id/* drivers/crypto/qat/qat_common/qat_asym_algs.c 65 */;
	struct qat_asym_request *cocci_id/* drivers/crypto/qat/qat_common/qat_asym_algs.c 594 */;
	long cocci_id/* drivers/crypto/qat/qat_common/qat_asym_algs.c 594 */;
	struct icp_qat_fw_pke_resp *cocci_id/* drivers/crypto/qat/qat_common/qat_asym_algs.c 593 */;
	void *cocci_id/* drivers/crypto/qat/qat_common/qat_asym_algs.c 591 */;
	void cocci_id/* drivers/crypto/qat/qat_common/qat_asym_algs.c 591 */;
	struct qat_rsa_output_params cocci_id/* drivers/crypto/qat/qat_common/qat_asym_algs.c 585 */;
	struct qat_rsa_input_params cocci_id/* drivers/crypto/qat/qat_common/qat_asym_algs.c 582 */;
	struct akcipher_request *cocci_id/* drivers/crypto/qat/qat_common/qat_asym_algs.c 556 */;
	struct dh cocci_id/* drivers/crypto/qat/qat_common/qat_asym_algs.c 493 */;
	const void *cocci_id/* drivers/crypto/qat/qat_common/qat_asym_algs.c 488 */;
	struct qat_dh_ctx *cocci_id/* drivers/crypto/qat/qat_common/qat_asym_algs.c 470 */;
	char *cocci_id/* drivers/crypto/qat/qat_common/qat_asym_algs.c 456 */;
	struct dh *cocci_id/* drivers/crypto/qat/qat_common/qat_asym_algs.c 441 */;
	uint32_t *cocci_id/* drivers/crypto/qat/qat_common/qat_asym_algs.c 392 */;
	uint64_t cocci_id/* drivers/crypto/qat/qat_common/qat_asym_algs.c 387 */;
	struct icp_qat_fw_pke_request *cocci_id/* drivers/crypto/qat/qat_common/qat_asym_algs.c 265 */;
	struct qat_crypto_instance *cocci_id/* drivers/crypto/qat/qat_common/qat_asym_algs.c 261 */;
	struct crypto_kpp *cocci_id/* drivers/crypto/qat/qat_common/qat_asym_algs.c 259 */;
	bool cocci_id/* drivers/crypto/qat/qat_common/qat_asym_algs.c 234 */;
	unsigned long cocci_id/* drivers/crypto/qat/qat_common/qat_asym_algs.c 234 */;
	struct qat_dh_output_params cocci_id/* drivers/crypto/qat/qat_common/qat_asym_algs.c 219 */;
	struct qat_dh_input_params cocci_id/* drivers/crypto/qat/qat_common/qat_asym_algs.c 216 */;
	struct device *cocci_id/* drivers/crypto/qat/qat_common/qat_asym_algs.c 189 */;
	struct kpp_request *cocci_id/* drivers/crypto/qat/qat_common/qat_asym_algs.c 188 */;
	struct qat_asym_request {
		union {
			struct qat_rsa_input_params rsa;
			struct qat_dh_input_params dh;
		} in;
		union {
			struct qat_rsa_output_params rsa;
			struct qat_dh_output_params dh;
		} out;
		dma_addr_t phy_in;
		dma_addr_t phy_out;
		char *src_align;
		char *dst_align;
		struct icp_qat_fw_pke_request req;
		union {
			struct qat_rsa_ctx *rsa;
			struct qat_dh_ctx *dh;
		} ctx;
		union {
			struct akcipher_request *rsa;
			struct kpp_request *dh;
		} areq;
		int err;
		void (*cb)(struct icp_qat_fw_pke_resp *resp);
	}__aligned(64) cocci_id/* drivers/crypto/qat/qat_common/qat_asym_algs.c 159 */;
	struct qat_dh_ctx {
		char *g;
		char *xa;
		char *p;
		dma_addr_t dma_g;
		dma_addr_t dma_xa;
		dma_addr_t dma_p;
		unsigned int p_size;
		bool g2;
		struct qat_crypto_instance *inst;
	}__packed __aligned(64) cocci_id/* drivers/crypto/qat/qat_common/qat_asym_algs.c 147 */;
	struct qat_dh_output_params {
		union {
			dma_addr_t r;
			u64 out_tab[8];
		};
	}__packed __aligned(64) cocci_id/* drivers/crypto/qat/qat_common/qat_asym_algs.c 140 */;
	int cocci_id/* drivers/crypto/qat/qat_common/qat_asym_algs.c 1335 */;
	struct qat_dh_ctx cocci_id/* drivers/crypto/qat/qat_common/qat_asym_algs.c 1331 */;
	struct qat_asym_request cocci_id/* drivers/crypto/qat/qat_common/qat_asym_algs.c 1325 */;
	struct kpp_alg cocci_id/* drivers/crypto/qat/qat_common/qat_asym_algs.c 1318 */;
	struct qat_rsa_ctx cocci_id/* drivers/crypto/qat/qat_common/qat_asym_algs.c 1314 */;
	struct akcipher_alg cocci_id/* drivers/crypto/qat/qat_common/qat_asym_algs.c 1300 */;
	struct qat_dh_input_params {
		union {
			struct {
				dma_addr_t b;
				dma_addr_t xa;
				dma_addr_t p;
			} in;
			struct {
				dma_addr_t xa;
				dma_addr_t p;
			} in_g2;
			u64 in_tab[8];
		};
	}__packed __aligned(64) cocci_id/* drivers/crypto/qat/qat_common/qat_asym_algs.c 125 */;
	struct rsa_key cocci_id/* drivers/crypto/qat/qat_common/qat_asym_algs.c 1206 */;
	struct qat_rsa_ctx *cocci_id/* drivers/crypto/qat/qat_common/qat_asym_algs.c 1155 */;
	struct rsa_key *cocci_id/* drivers/crypto/qat/qat_common/qat_asym_algs.c 1066 */;
	const char **cocci_id/* drivers/crypto/qat/qat_common/qat_asym_algs.c 1058 */;
	unsigned int *cocci_id/* drivers/crypto/qat/qat_common/qat_asym_algs.c 1058 */;
	size_t cocci_id/* drivers/crypto/qat/qat_common/qat_asym_algs.c 1030 */;
	struct qat_rsa_ctx {
		char *n;
		char *e;
		char *d;
		char *p;
		char *q;
		char *dp;
		char *dq;
		char *qinv;
		dma_addr_t dma_n;
		dma_addr_t dma_e;
		dma_addr_t dma_d;
		dma_addr_t dma_p;
		dma_addr_t dma_q;
		dma_addr_t dma_dp;
		dma_addr_t dma_dq;
		dma_addr_t dma_qinv;
		unsigned int key_sz;
		bool crt_mode;
		struct qat_crypto_instance *inst;
	}__packed __aligned(64) cocci_id/* drivers/crypto/qat/qat_common/qat_asym_algs.c 103 */;
	const char *cocci_id/* drivers/crypto/qat/qat_common/qat_asym_algs.c 1029 */;
}
