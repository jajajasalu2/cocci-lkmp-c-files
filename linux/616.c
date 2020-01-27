cocci_test_suite() {
	u8 cocci_id/* crypto/xcbc.c 57 */[XCBC_BLOCKSIZE];
	const u8 *cocci_id/* crypto/xcbc.c 51 */;
	struct xcbc_desc_ctx {
		unsigned int len;
		u8 ctx[];
	} cocci_id/* crypto/xcbc.c 43 */;
	struct xcbc_tfm_ctx {
		struct crypto_cipher *child;
		u8 ctx[];
	} cocci_id/* crypto/xcbc.c 27 */;
	void __exit cocci_id/* crypto/xcbc.c 268 */;
	void cocci_id/* crypto/xcbc.c 268 */;
	int __init cocci_id/* crypto/xcbc.c 263 */;
	struct crypto_template cocci_id/* crypto/xcbc.c 256 */;
	struct xcbc_tfm_ctx cocci_id/* crypto/xcbc.c 234 */;
	struct xcbc_desc_ctx cocci_id/* crypto/xcbc.c 228 */;
	struct crypto_alg *cocci_id/* crypto/xcbc.c 191 */;
	struct shash_instance *cocci_id/* crypto/xcbc.c 190 */;
	struct crypto_template *cocci_id/* crypto/xcbc.c 188 */;
	struct rtattr **cocci_id/* crypto/xcbc.c 188 */;
	struct crypto_tfm *cocci_id/* crypto/xcbc.c 182 */;
	struct crypto_spawn *cocci_id/* crypto/xcbc.c 170 */;
	struct crypto_instance *cocci_id/* crypto/xcbc.c 169 */;
	void *cocci_id/* crypto/xcbc.c 169 */;
	unsigned int cocci_id/* crypto/xcbc.c 142 */;
	u_int32_t cocci_id/* crypto/xcbc.c 14 */[12];
	struct crypto_cipher *cocci_id/* crypto/xcbc.c 137 */;
	struct xcbc_desc_ctx *cocci_id/* crypto/xcbc.c 136 */;
	struct xcbc_tfm_ctx *cocci_id/* crypto/xcbc.c 135 */;
	unsigned long cocci_id/* crypto/xcbc.c 134 */;
	struct crypto_shash *cocci_id/* crypto/xcbc.c 133 */;
	u8 *cocci_id/* crypto/xcbc.c 131 */;
	struct shash_desc *cocci_id/* crypto/xcbc.c 131 */;
	int cocci_id/* crypto/xcbc.c 131 */;
}
