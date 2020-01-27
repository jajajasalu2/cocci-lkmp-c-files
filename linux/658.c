cocci_test_suite() {
	struct hash_test_suite {
		const struct hash_testvec *vecs;
		unsigned int count;
	} cocci_id/* crypto/testmgr.c 99 */;
	struct comp_test_suite {
		struct {
			const struct comp_testvec *vecs;
			unsigned int count;
		} comp,decomp;
	} cocci_id/* crypto/testmgr.c 92 */;
	char *constcocci_id/* crypto/testmgr.c 908 */;
	struct testvec_config *cocci_id/* crypto/testmgr.c 904 */;
	struct cipher_test_suite {
		const struct cipher_testvec *vecs;
		unsigned int count;
	} cocci_id/* crypto/testmgr.c 87 */;
	struct test_sg_division *cocci_id/* crypto/testmgr.c 829 */;
	struct aead_test_suite {
		const struct aead_testvec *vecs;
		unsigned int count;
	} cocci_id/* crypto/testmgr.c 82 */;
	u8 cocci_id/* crypto/testmgr.c 789 */;
	struct iov_iter cocci_id/* crypto/testmgr.c 720 */;
	const struct kvec *cocci_id/* crypto/testmgr.c 717 */;
	const struct testvec_config *cocci_id/* crypto/testmgr.c 713 */;
	struct cipher_test_sglists {
		struct test_sglist src;
		struct test_sglist dst;
	} cocci_id/* crypto/testmgr.c 675 */;
	const struct test_sglist *cocci_id/* crypto/testmgr.c 660 */;
	struct {
		const struct test_sg_division *div;
		size_t length;
	} cocci_id/* crypto/testmgr.c 534 */[XBUFSIZE];
	struct iov_iter *cocci_id/* crypto/testmgr.c 531 */;
	char cocci_id/* crypto/testmgr.c 5290 */[CRYPTO_MAX_ALG_NAME];
	const unsigned int cocci_id/* crypto/testmgr.c 529 */;
	const struct test_sg_division *cocci_id/* crypto/testmgr.c 528 */;
	struct test_sglist {
		char *bufs[XBUFSIZE];
		struct scatterlist sgl[XBUFSIZE];
		struct scatterlist sgl_saved[XBUFSIZE];
		struct scatterlist *sgl_ptr;
		unsigned int nents;
	} cocci_id/* crypto/testmgr.c 491 */;
	int *cocci_id/* crypto/testmgr.c 430 */;
	const struct alg_test_desc cocci_id/* crypto/testmgr.c 3868 */[];
	struct crypto_akcipher *cocci_id/* crypto/testmgr.c 3842 */;
	const struct akcipher_testvec *cocci_id/* crypto/testmgr.c 3820 */;
	struct akcipher_request *cocci_id/* crypto/testmgr.c 3649 */;
	struct crypto_kpp *cocci_id/* crypto/testmgr.c 3622 */;
	struct scatterlist cocci_id/* crypto/testmgr.c 3473 */;
	struct crypto_wait cocci_id/* crypto/testmgr.c 3470 */;
	struct kpp_request *cocci_id/* crypto/testmgr.c 3464 */;
	const struct kpp_testvec *cocci_id/* crypto/testmgr.c 3461 */;
	const struct drbg_testvec *cocci_id/* crypto/testmgr.c 3442 */;
	unsigned char *cocci_id/* crypto/testmgr.c 3375 */;
	struct drbg_string cocci_id/* crypto/testmgr.c 3374 */;
	struct drbg_test_data cocci_id/* crypto/testmgr.c 3373 */;
	struct crypto_rng *cocci_id/* crypto/testmgr.c 3350 */;
	u32 *cocci_id/* crypto/testmgr.c 3323 */;
	__le32 cocci_id/* crypto/testmgr.c 3299 */;
	struct crypto_acomp *cocci_id/* crypto/testmgr.c 3261 */;
	struct crypto_comp *cocci_id/* crypto/testmgr.c 3260 */;
	struct crypto_cipher *cocci_id/* crypto/testmgr.c 3239 */;
	const struct cipher_test_suite *cocci_id/* crypto/testmgr.c 3238 */;
	char cocci_id/* crypto/testmgr.c 3180 */[32];
	const struct cprng_testvec *cocci_id/* crypto/testmgr.c 3174 */;
	struct acomp_req *cocci_id/* crypto/testmgr.c 3014 */;
	const struct comp_testvec *cocci_id/* crypto/testmgr.c 3005 */;
	const struct testvec_config cocci_id/* crypto/testmgr.c 288 */[];
	struct skcipher_request *cocci_id/* crypto/testmgr.c 2849 */;
	struct crypto_skcipher *cocci_id/* crypto/testmgr.c 2848 */;
	struct cipher_testvec cocci_id/* crypto/testmgr.c 2704 */;
	struct testvec_config {
		const char *name;
		bool inplace;
		u32 req_flags;
		struct test_sg_division src_divs[XBUFSIZE];
		struct test_sg_division dst_divs[XBUFSIZE];
		unsigned int iv_offset;
		bool iv_offset_relative_to_alignmask;
		enum finalization_type finalization_type;
		bool nosimd;
	} cocci_id/* crypto/testmgr.c 265 */;
	struct cipher_testvec *cocci_id/* crypto/testmgr.c 2645 */;
	struct test_sg_division {
		unsigned int proportion_of_total;
		unsigned int offset;
		bool offset_relative_to_alignmask;
		enum flush_type flush_type;
		bool nosimd;
	} cocci_id/* crypto/testmgr.c 238 */;
	const struct cipher_testvec *cocci_id/* crypto/testmgr.c 2348 */;
	struct cipher_test_sglists *cocci_id/* crypto/testmgr.c 2300 */;
	struct aead_request *cocci_id/* crypto/testmgr.c 2299 */;
	struct crypto_aead *cocci_id/* crypto/testmgr.c 2298 */;
	const struct aead_test_suite *cocci_id/* crypto/testmgr.c 2297 */;
	const struct alg_test_desc *cocci_id/* crypto/testmgr.c 2294 */;
	char cocci_id/* crypto/testmgr.c 2151 */[64];
	struct aead_testvec cocci_id/* crypto/testmgr.c 2150 */;
	enum finalization_type{FINALIZATION_TYPE_FINAL, FINALIZATION_TYPE_FINUP, FINALIZATION_TYPE_DIGEST,} cocci_id/* crypto/testmgr.c 214 */;
	u8 cocci_id/* crypto/testmgr.c 2067 */[MAX_IVLEN];
	struct scatterlist cocci_id/* crypto/testmgr.c 2066 */[2];
	struct aead_testvec *cocci_id/* crypto/testmgr.c 2055 */;
	char cocci_id/* crypto/testmgr.c 2033 */[TESTVEC_CONFIG_NAMELEN];
	struct testvec_config cocci_id/* crypto/testmgr.c 2032 */;
	enum flush_type{FLUSH_TYPE_NONE=0, FLUSH_TYPE_FLUSH, FLUSH_TYPE_REIMPORT,} cocci_id/* crypto/testmgr.c 202 */;
	char cocci_id/* crypto/testmgr.c 2013 */[16];
	const struct aead_testvec *cocci_id/* crypto/testmgr.c 2009 */;
	struct kvec cocci_id/* crypto/testmgr.c 1855 */[2];
	u8 cocci_id/* crypto/testmgr.c 1851 */[3 * (MAX_ALGAPI_ALIGNMASK + 1) + MAX_IVLEN];
	const u32 cocci_id/* crypto/testmgr.c 1848 */;
	void cocci_id/* crypto/testmgr.c 174 */;
	u8 *cocci_id/* crypto/testmgr.c 1718 */;
	struct test_sglist *cocci_id/* crypto/testmgr.c 1717 */;
	struct shash_desc *cocci_id/* crypto/testmgr.c 1716 */;
	struct crypto_shash *cocci_id/* crypto/testmgr.c 1715 */;
	struct ahash_request *cocci_id/* crypto/testmgr.c 1714 */;
	struct crypto_ahash *cocci_id/* crypto/testmgr.c 1713 */;
	u32 cocci_id/* crypto/testmgr.c 1710 */;
	const char *cocci_id/* crypto/testmgr.c 1709 */;
	unsigned int cocci_id/* crypto/testmgr.c 1709 */;
	const struct hash_testvec *cocci_id/* crypto/testmgr.c 1708 */;
	int cocci_id/* crypto/testmgr.c 1708 */;
	struct shash_desc **cocci_id/* crypto/testmgr.c 1677 */;
	struct crypto_shash **cocci_id/* crypto/testmgr.c 1676 */;
	unsigned long cocci_id/* crypto/testmgr.c 164 */;
	struct hash_testvec cocci_id/* crypto/testmgr.c 1564 */;
	char *cocci_id/* crypto/testmgr.c 155 */;
	struct hash_testvec *cocci_id/* crypto/testmgr.c 1507 */;
	char *cocci_id/* crypto/testmgr.c 150 */[XBUFSIZE];
	u8 cocci_id/* crypto/testmgr.c 1288 */[HASH_MAX_DIGESTSIZE + TESTMGR_POISON_LEN];
	struct alg_test_desc {
		const char *alg;
		const char *generic_driver;
		int (*test)(const struct alg_test_desc *desc,
			    const char *driver, u32 type, u32 mask);
		int fips_allowed;
		union {
			struct aead_test_suite aead;
			struct cipher_test_suite cipher;
			struct comp_test_suite comp;
			struct hash_test_suite hash;
			struct cprng_test_suite cprng;
			struct drbg_test_suite drbg;
			struct akcipher_test_suite akcipher;
			struct kpp_test_suite kpp;
		} suite;
	} cocci_id/* crypto/testmgr.c 124 */;
	bool cocci_id/* crypto/testmgr.c 1236 */;
	struct crypto_wait *cocci_id/* crypto/testmgr.c 1236 */;
	int (*cocci_id/* crypto/testmgr.c 1234 */)(struct ahash_request *req);
	struct kpp_test_suite {
		const struct kpp_testvec *vecs;
		unsigned int count;
	} cocci_id/* crypto/testmgr.c 119 */;
	struct akcipher_test_suite {
		const struct akcipher_testvec *vecs;
		unsigned int count;
	} cocci_id/* crypto/testmgr.c 114 */;
	struct drbg_test_suite {
		const struct drbg_testvec *vecs;
		unsigned int count;
	} cocci_id/* crypto/testmgr.c 109 */;
	const void *cocci_id/* crypto/testmgr.c 1081 */;
	struct scatterlist *cocci_id/* crypto/testmgr.c 1081 */;
	const u8 *cocci_id/* crypto/testmgr.c 1052 */;
	void *cocci_id/* crypto/testmgr.c 1044 */;
	struct kvec cocci_id/* crypto/testmgr.c 1041 */;
	struct cprng_test_suite {
		const struct cprng_testvec *vecs;
		unsigned int count;
	} cocci_id/* crypto/testmgr.c 104 */;
	const struct test_sg_division *cocci_id/* crypto/testmgr.c 1039 */[XBUFSIZE];
	size_t cocci_id/* crypto/testmgr.c 1001 */;
	__typeof__(bool) cocci_id/* /home/jaskaran/lkmp/coccinelle/standard.h 437 */;
}
