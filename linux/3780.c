cocci_test_suite() {
	struct aead_ctx *cocci_id/* drivers/crypto/ixp4xx_crypto.c 993 */;
	struct buffer_desc *cocci_id/* drivers/crypto/ixp4xx_crypto.c 992 */;
	struct crypto_aead *cocci_id/* drivers/crypto/ixp4xx_crypto.c 985 */;
	__be32 *cocci_id/* drivers/crypto/ixp4xx_crypto.c 973 */;
	u8 *cocci_id/* drivers/crypto/ixp4xx_crypto.c 965 */;
	u8 cocci_id/* drivers/crypto/ixp4xx_crypto.c 964 */[CTR_RFC3686_BLOCK_SIZE];
	struct skcipher_request *cocci_id/* drivers/crypto/ixp4xx_crypto.c 955 */;
	int cocci_id/* drivers/crypto/ixp4xx_crypto.c 955 */;
	struct buffer_desc {
		u32 phys_next;
#ifdef __ARMEB__
		u16 buf_len;
		u16 pkt_len;
#else
		u16 pkt_len;
		u16 buf_len;
#endif
		dma_addr_t phys_addr;
		u32 __reserved[4];
		struct buffer_desc *next;
		enum dma_data_direction dir;
	} cocci_id/* drivers/crypto/ixp4xx_crypto.c 95 */;
	gfp_t cocci_id/* drivers/crypto/ixp4xx_crypto.c 889 */;
	struct device *cocci_id/* drivers/crypto/ixp4xx_crypto.c 888 */;
	struct buffer_desc cocci_id/* drivers/crypto/ixp4xx_crypto.c 887 */;
	struct ablk_ctx *cocci_id/* drivers/crypto/ixp4xx_crypto.c 886 */;
	enum dma_data_direction cocci_id/* drivers/crypto/ixp4xx_crypto.c 885 */;
	struct crypt_ctl *cocci_id/* drivers/crypto/ixp4xx_crypto.c 883 */;
	struct ix_sa_dir *cocci_id/* drivers/crypto/ixp4xx_crypto.c 882 */;
	unsigned cocci_id/* drivers/crypto/ixp4xx_crypto.c 881 */;
	struct ixp_ctx *cocci_id/* drivers/crypto/ixp4xx_crypto.c 880 */;
	unsigned int cocci_id/* drivers/crypto/ixp4xx_crypto.c 855 */;
	const u8 *cocci_id/* drivers/crypto/ixp4xx_crypto.c 854 */;
	struct crypto_skcipher *cocci_id/* drivers/crypto/ixp4xx_crypto.c 854 */;
	u32 *cocci_id/* drivers/crypto/ixp4xx_crypto.c 822 */;
	void *cocci_id/* drivers/crypto/ixp4xx_crypto.c 795 */;
	dma_addr_t cocci_id/* drivers/crypto/ixp4xx_crypto.c 794 */;
	struct scatterlist *cocci_id/* drivers/crypto/ixp4xx_crypto.c 787 */;
	unsigned char *cocci_id/* drivers/crypto/ixp4xx_crypto.c 664 */;
	u8 cocci_id/* drivers/crypto/ixp4xx_crypto.c 604 */;
	struct aead_ctx cocci_id/* drivers/crypto/ixp4xx_crypto.c 583 */;
	struct ablk_ctx cocci_id/* drivers/crypto/ixp4xx_crypto.c 577 */;
	u32 cocci_id/* drivers/crypto/ixp4xx_crypto.c 433 */[2];
	unsigned long cocci_id/* drivers/crypto/ixp4xx_crypto.c 417 */;
	void cocci_id/* drivers/crypto/ixp4xx_crypto.c 417 */;
	struct tasklet_struct cocci_id/* drivers/crypto/ixp4xx_crypto.c 340 */;
	spinlock_t cocci_id/* drivers/crypto/ixp4xx_crypto.c 268 */;
	const struct ix_hash_algo *cocci_id/* drivers/crypto/ixp4xx_crypto.c 251 */;
	struct ixp_alg cocci_id/* drivers/crypto/ixp4xx_crypto.c 248 */;
	u32 cocci_id/* drivers/crypto/ixp4xx_crypto.c 246 */;
	struct crypto_tfm *cocci_id/* drivers/crypto/ixp4xx_crypto.c 246 */;
	struct crypt_ctl cocci_id/* drivers/crypto/ixp4xx_crypto.c 238 */;
	struct platform_device *cocci_id/* drivers/crypto/ixp4xx_crypto.c 229 */;
	struct dma_pool *cocci_id/* drivers/crypto/ixp4xx_crypto.c 219 */;
	struct npe *cocci_id/* drivers/crypto/ixp4xx_crypto.c 218 */;
	const struct ix_hash_algo cocci_id/* drivers/crypto/ixp4xx_crypto.c 207 */;
	struct ixp_aead_alg {
		struct aead_alg crypto;
		const struct ix_hash_algo *hash;
		u32 cfg_enc;
		u32 cfg_dec;
		int registered;
	} cocci_id/* drivers/crypto/ixp4xx_crypto.c 198 */;
	struct ixp_alg {
		struct skcipher_alg crypto;
		const struct ix_hash_algo *hash;
		u32 cfg_enc;
		u32 cfg_dec;
		int registered;
	} cocci_id/* drivers/crypto/ixp4xx_crypto.c 189 */;
	struct ixp_ctx {
		struct ix_sa_dir encrypt;
		struct ix_sa_dir decrypt;
		int authkey_len;
		u8 authkey[MAX_KEYLEN];
		int enckey_len;
		u8 enckey[MAX_KEYLEN];
		u8 salt[MAX_IVLEN];
		u8 nonce[CTR_RFC3686_NONCE_SIZE];
		unsigned salted;
		atomic_t configuring;
		struct completion completion;
	} cocci_id/* drivers/crypto/ixp4xx_crypto.c 175 */;
	struct ix_sa_dir {
		unsigned char *npe_ctx;
		dma_addr_t npe_ctx_phys;
		int npe_ctx_idx;
		u8 npe_mode;
	} cocci_id/* drivers/crypto/ixp4xx_crypto.c 168 */;
	struct ix_hash_algo {
		u32 cfgword;
		unsigned char *icv;
	} cocci_id/* drivers/crypto/ixp4xx_crypto.c 163 */;
	struct aead_ctx {
		struct buffer_desc *src;
		struct buffer_desc *dst;
		struct scatterlist ivlist;
		u8 *hmac_virt;
		int encrypt;
	} cocci_id/* drivers/crypto/ixp4xx_crypto.c 154 */;
	struct ablk_ctx {
		struct buffer_desc *src;
		struct buffer_desc *dst;
	} cocci_id/* drivers/crypto/ixp4xx_crypto.c 149 */;
	void __exit cocci_id/* drivers/crypto/ixp4xx_crypto.c 1483 */;
	struct aead_alg *cocci_id/* drivers/crypto/ixp4xx_crypto.c 1450 */;
	struct ixp_ctx cocci_id/* drivers/crypto/ixp4xx_crypto.c 1438 */;
	struct skcipher_alg *cocci_id/* drivers/crypto/ixp4xx_crypto.c 1414 */;
	int __init cocci_id/* drivers/crypto/ixp4xx_crypto.c 1396 */;
	const struct platform_device_info cocci_id/* drivers/crypto/ixp4xx_crypto.c 1390 */;
	struct ixp_aead_alg cocci_id/* drivers/crypto/ixp4xx_crypto.c 1311 */[];
	struct ixp_alg cocci_id/* drivers/crypto/ixp4xx_crypto.c 1218 */[];
	struct aead_request *cocci_id/* drivers/crypto/ixp4xx_crypto.c 1213 */;
	struct crypto_authenc_keys cocci_id/* drivers/crypto/ixp4xx_crypto.c 1153 */;
	struct crypt_ctl {
#ifdef __ARMEB__
		u8 mode;
		u8 init_len;
		u16 reserved;
#else
		u16 reserved;
		u8 init_len;
		u8 mode;
#endif
		u8 iv[MAX_IVLEN];
		dma_addr_t icv_rev_aes;
		dma_addr_t src_buf;
		dma_addr_t dst_buf;
#ifdef __ARMEB__
		u16 auth_offs;
		u16 auth_len;
		u16 crypt_offs;
		u16 crypt_len;
#else
		u16 auth_len;
		u16 auth_offs;
		u16 crypt_len;
		u16 crypt_offs;
#endif
		u32 aadAddr;
		u32 crypto_ctx;
		unsigned ctl_flags;
		union {
			struct skcipher_request *ablk_req;
			struct aead_request *aead_req;
			struct crypto_tfm *tfm;
		} data;
		struct buffer_desc *regist_buf;
		u8 *regist_ptr;
	} cocci_id/* drivers/crypto/ixp4xx_crypto.c 110 */;
}
