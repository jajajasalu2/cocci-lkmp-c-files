cocci_test_suite() {
	struct ecc_point cocci_id/* crypto/ecrdsa.c 84 */;
	u64 *cocci_id/* crypto/ecrdsa.c 81 */;
	u64 cocci_id/* crypto/ecrdsa.c 77 */[ECRDSA_MAX_DIGITS];
	unsigned char cocci_id/* crypto/ecrdsa.c 75 */[STREEBOG512_DIGEST_SIZE];
	unsigned char cocci_id/* crypto/ecrdsa.c 74 */[ECRDSA_MAX_SIG_SIZE];
	struct akcipher_request *cocci_id/* crypto/ecrdsa.c 70 */;
	enum OID cocci_id/* crypto/ecrdsa.c 46 */;
	const struct ecc_curve *cocci_id/* crypto/ecrdsa.c 46 */;
	struct ecrdsa_ctx {
		enum OID algo_oid;
		enum OID curve_oid;
		enum OID digest_oid;
		const struct ecc_curve *curve;
		unsigned int digest_len;
		const char *digest;
		unsigned int key_len;
		const char *key;
		struct ecc_point pub_key;
		u64 _pubp[2][ECRDSA_MAX_DIGITS];
	} cocci_id/* crypto/ecrdsa.c 33 */;
	void __exit cocci_id/* crypto/ecrdsa.c 285 */;
	int __init cocci_id/* crypto/ecrdsa.c 280 */;
	struct ecrdsa_ctx cocci_id/* crypto/ecrdsa.c 276 */;
	struct akcipher_alg cocci_id/* crypto/ecrdsa.c 266 */;
	struct crypto_akcipher *cocci_id/* crypto/ecrdsa.c 262 */;
	void cocci_id/* crypto/ecrdsa.c 262 */;
	u64 cocci_id/* crypto/ecrdsa.c 259 */;
	struct ecrdsa_ctx *cocci_id/* crypto/ecrdsa.c 253 */;
	unsigned int cocci_id/* crypto/ecrdsa.c 251 */;
	u8 *cocci_id/* crypto/ecrdsa.c 196 */;
	u32 cocci_id/* crypto/ecrdsa.c 195 */;
	u32 *cocci_id/* crypto/ecrdsa.c 183 */;
	const void *cocci_id/* crypto/ecrdsa.c 150 */;
	void *cocci_id/* crypto/ecrdsa.c 149 */;
	unsigned char cocci_id/* crypto/ecrdsa.c 149 */;
	int cocci_id/* crypto/ecrdsa.c 149 */;
	size_t cocci_id/* crypto/ecrdsa.c 149 */;
}
