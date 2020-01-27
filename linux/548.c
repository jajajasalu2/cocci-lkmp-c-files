cocci_test_suite() {
	void __exit cocci_id/* crypto/ccm.c 998 */;
	int __init cocci_id/* crypto/ccm.c 992 */;
	struct crypto_template cocci_id/* crypto/ccm.c 971 */[];
	struct cbcmac_tfm_ctx cocci_id/* crypto/ccm.c 951 */;
	struct cbcmac_desc_ctx cocci_id/* crypto/ccm.c 947 */;
	struct crypto_alg *cocci_id/* crypto/ccm.c 920 */;
	struct shash_instance *cocci_id/* crypto/ccm.c 919 */;
	struct crypto_template *cocci_id/* crypto/ccm.c 917 */;
	struct rtattr **cocci_id/* crypto/ccm.c 917 */;
	int cocci_id/* crypto/ccm.c 917 */;
	struct cbcmac_tfm_ctx *cocci_id/* crypto/ccm.c 913 */;
	struct crypto_tfm *cocci_id/* crypto/ccm.c 911 */;
	void cocci_id/* crypto/ccm.c 911 */;
	struct crypto_spawn *cocci_id/* crypto/ccm.c 899 */;
	struct crypto_instance *cocci_id/* crypto/ccm.c 898 */;
	void *cocci_id/* crypto/ccm.c 898 */;
	struct crypto_cipher *cocci_id/* crypto/ccm.c 897 */;
	struct cbcmac_desc_ctx *cocci_id/* crypto/ccm.c 883 */;
	struct crypto_shash *cocci_id/* crypto/ccm.c 881 */;
	u8 *cocci_id/* crypto/ccm.c 879 */;
	struct shash_desc *cocci_id/* crypto/ccm.c 879 */;
	const u8 *cocci_id/* crypto/ccm.c 833 */;
	unsigned int cocci_id/* crypto/ccm.c 833 */;
	struct crypto_rfc4309_ctx cocci_id/* crypto/ccm.c 806 */;
	struct aead_alg *cocci_id/* crypto/ccm.c 750 */;
	struct crypto_aead_spawn *cocci_id/* crypto/ccm.c 749 */;
	struct crypto_rfc4309_req_ctx cocci_id/* crypto/ccm.c 724 */;
	__be32 cocci_id/* crypto/ccm.c 72 */;
	struct crypto_rfc4309_ctx *cocci_id/* crypto/ccm.c 647 */;
	struct crypto_rfc4309_req_ctx *cocci_id/* crypto/ccm.c 644 */;
	const char *cocci_id/* crypto/ccm.c 588 */;
	struct cbcmac_desc_ctx {
		unsigned int len;
	} cocci_id/* crypto/ccm.c 58 */;
	char cocci_id/* crypto/ccm.c 567 */[CRYPTO_MAX_ALG_NAME];
	struct cbcmac_tfm_ctx {
		struct crypto_cipher *child;
	} cocci_id/* crypto/ccm.c 54 */;
	struct crypto_ccm_ctx cocci_id/* crypto/ccm.c 537 */;
	struct ccm_instance_ctx *cocci_id/* crypto/ccm.c 464 */;
	struct hash_alg_common *cocci_id/* crypto/ccm.c 463 */;
	struct skcipher_alg *cocci_id/* crypto/ccm.c 461 */;
	struct aead_instance *cocci_id/* crypto/ccm.c 460 */;
	struct crypto_attr_type *cocci_id/* crypto/ccm.c 459 */;
	struct crypto_ccm_req_priv_ctx cocci_id/* crypto/ccm.c 427 */;
	struct crypto_ccm_req_priv_ctx {
		u8 odata[16];
		u8 idata[16];
		u8 auth_tag[16];
		u32 flags;
		struct scatterlist src[3];
		struct scatterlist dst[3];
		union {
			struct ahash_request ahreq;
			struct skcipher_request skreq;
		};
	} cocci_id/* crypto/ccm.c 41 */;
	unsigned long cocci_id/* crypto/ccm.c 408 */;
	struct crypto_skcipher *cocci_id/* crypto/ccm.c 407 */;
	struct crypto_ahash *cocci_id/* crypto/ccm.c 406 */;
	struct skcipher_request *cocci_id/* crypto/ccm.c 358 */;
	struct crypto_rfc4309_req_ctx {
		struct scatterlist src[3];
		struct scatterlist dst[3];
		struct aead_request subreq;
	} cocci_id/* crypto/ccm.c 35 */;
	struct crypto_async_request *cocci_id/* crypto/ccm.c 331 */;
	struct crypto_rfc4309_ctx {
		struct crypto_aead *child;
		u8 nonce[3];
	} cocci_id/* crypto/ccm.c 30 */;
	struct crypto_ccm_ctx {
		struct crypto_ahash *mac;
		struct crypto_skcipher *ctr;
	} cocci_id/* crypto/ccm.c 25 */;
	struct ccm_instance_ctx {
		struct crypto_skcipher_spawn ctr;
		struct crypto_ahash_spawn mac;
	} cocci_id/* crypto/ccm.c 20 */;
	struct scatterlist cocci_id/* crypto/ccm.c 184 */[3];
	struct ahash_request *cocci_id/* crypto/ccm.c 182 */;
	struct crypto_ccm_ctx *cocci_id/* crypto/ccm.c 181 */;
	struct crypto_aead *cocci_id/* crypto/ccm.c 180 */;
	struct crypto_ccm_req_priv_ctx *cocci_id/* crypto/ccm.c 179 */;
	struct scatterlist *cocci_id/* crypto/ccm.c 176 */;
	struct aead_request *cocci_id/* crypto/ccm.c 176 */;
	__be32 *cocci_id/* crypto/ccm.c 169 */;
	__be16 *cocci_id/* crypto/ccm.c 165 */;
}
